package org.apache.http.protocol;

import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class HttpRequestHandlerRegistry implements HttpRequestHandlerResolver {
    private final UriPatternMatcher matcher = new UriPatternMatcher();

    @Override // org.apache.http.protocol.HttpRequestHandlerResolver
    public HttpRequestHandler lookup(String str) {
        return (HttpRequestHandler) this.matcher.lookup(str);
    }

    protected boolean matchUriRequestPattern(String str, String str2) {
        return this.matcher.matchUriRequestPattern(str, str2);
    }

    public void register(String str, HttpRequestHandler httpRequestHandler) {
        if (str == null) {
            throw new IllegalArgumentException("URI request pattern may not be null");
        }
        if (httpRequestHandler == null) {
            throw new IllegalArgumentException("Request handler may not be null");
        }
        this.matcher.register(str, httpRequestHandler);
    }

    public void setHandlers(Map map) {
        this.matcher.setObjects(map);
    }

    public void unregister(String str) {
        this.matcher.unregister(str);
    }
}
