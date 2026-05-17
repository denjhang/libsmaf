package org.apache.http.client.protocol;

import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.http.HttpHost;
import org.apache.http.HttpResponse;
import org.apache.http.HttpResponseInterceptor;
import org.apache.http.annotation.Immutable;
import org.apache.http.auth.AuthScheme;
import org.apache.http.auth.AuthState;
import org.apache.http.client.AuthCache;
import org.apache.http.client.params.AuthPolicy;
import org.apache.http.impl.client.BasicAuthCache;
import org.apache.http.protocol.ExecutionContext;
import org.apache.http.protocol.HttpContext;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class ResponseAuthCache implements HttpResponseInterceptor {
    private final Log log = LogFactory.getLog(ResponseAuthCache.class);

    private void cache(AuthCache authCache, HttpHost httpHost, AuthState authState) {
        AuthScheme authScheme = authState.getAuthScheme();
        if (authState.getAuthScope() != null) {
            if (authState.getCredentials() == null) {
                authCache.remove(httpHost);
                return;
            }
            if (this.log.isDebugEnabled()) {
                this.log.debug("Caching '" + authScheme.getSchemeName() + "' auth scheme for " + httpHost);
            }
            authCache.put(httpHost, authScheme);
        }
    }

    private boolean isCachable(AuthState authState) {
        AuthScheme authScheme = authState.getAuthScheme();
        if (authScheme == null || !authScheme.isComplete()) {
            return false;
        }
        String schemeName = authScheme.getSchemeName();
        return schemeName.equalsIgnoreCase(AuthPolicy.BASIC) || schemeName.equalsIgnoreCase(AuthPolicy.DIGEST);
    }

    @Override // org.apache.http.HttpResponseInterceptor
    public void process(HttpResponse httpResponse, HttpContext httpContext) {
        if (httpResponse == null) {
            throw new IllegalArgumentException("HTTP request may not be null");
        }
        if (httpContext == null) {
            throw new IllegalArgumentException("HTTP context may not be null");
        }
        AuthCache basicAuthCache = (AuthCache) httpContext.getAttribute(ClientContext.AUTH_CACHE);
        HttpHost httpHost = (HttpHost) httpContext.getAttribute(ExecutionContext.HTTP_TARGET_HOST);
        AuthState authState = (AuthState) httpContext.getAttribute(ClientContext.TARGET_AUTH_STATE);
        if (httpHost != null && authState != null && isCachable(authState)) {
            if (basicAuthCache == null) {
                basicAuthCache = new BasicAuthCache();
                httpContext.setAttribute(ClientContext.AUTH_CACHE, basicAuthCache);
            }
            cache(basicAuthCache, httpHost, authState);
        }
        HttpHost httpHost2 = (HttpHost) httpContext.getAttribute(ExecutionContext.HTTP_PROXY_HOST);
        AuthState authState2 = (AuthState) httpContext.getAttribute(ClientContext.PROXY_AUTH_STATE);
        if (httpHost2 == null || authState2 == null || !isCachable(authState2)) {
            return;
        }
        if (basicAuthCache == null) {
            basicAuthCache = new BasicAuthCache();
            httpContext.setAttribute(ClientContext.AUTH_CACHE, basicAuthCache);
        }
        cache(basicAuthCache, httpHost2, authState2);
    }
}
