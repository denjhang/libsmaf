package org.apache.http.client.protocol;

import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.http.HttpRequest;
import org.apache.http.HttpRequestInterceptor;
import org.apache.http.annotation.Immutable;
import org.apache.http.auth.AuthScheme;
import org.apache.http.auth.AuthState;
import org.apache.http.auth.AuthenticationException;
import org.apache.http.auth.ContextAwareAuthScheme;
import org.apache.http.auth.Credentials;
import org.apache.http.protocol.HttpContext;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class RequestTargetAuthentication implements HttpRequestInterceptor {
    private final Log log = LogFactory.getLog(RequestTargetAuthentication.class);

    @Override // org.apache.http.HttpRequestInterceptor
    public void process(HttpRequest httpRequest, HttpContext httpContext) {
        Log log;
        String str;
        if (httpRequest == null) {
            throw new IllegalArgumentException("HTTP request may not be null");
        }
        if (httpContext == null) {
            throw new IllegalArgumentException("HTTP context may not be null");
        }
        if (httpRequest.getRequestLine().getMethod().equalsIgnoreCase("CONNECT") || httpRequest.containsHeader("Authorization")) {
            return;
        }
        AuthState authState = (AuthState) httpContext.getAttribute(ClientContext.TARGET_AUTH_STATE);
        if (authState == null) {
            log = this.log;
            str = "Target auth state not set in the context";
        } else {
            AuthScheme authScheme = authState.getAuthScheme();
            if (authScheme == null) {
                return;
            }
            Credentials credentials = authState.getCredentials();
            if (credentials != null) {
                if (authState.getAuthScope() == null && authScheme.isConnectionBased()) {
                    return;
                }
                try {
                    httpRequest.addHeader(authScheme instanceof ContextAwareAuthScheme ? ((ContextAwareAuthScheme) authScheme).authenticate(credentials, httpRequest, httpContext) : authScheme.authenticate(credentials, httpRequest));
                    return;
                } catch (AuthenticationException e2) {
                    if (this.log.isErrorEnabled()) {
                        this.log.error("Authentication error: " + e2.getMessage());
                        return;
                    }
                    return;
                }
            }
            log = this.log;
            str = "User credentials not available";
        }
        log.debug(str);
    }
}
