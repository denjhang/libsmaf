package org.apache.http.impl.client;

import java.util.HashMap;
import org.apache.http.HttpHost;
import org.apache.http.annotation.NotThreadSafe;
import org.apache.http.auth.AuthScheme;
import org.apache.http.client.AuthCache;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@NotThreadSafe
public class BasicAuthCache implements AuthCache {
    private final HashMap<HttpHost, AuthScheme> map = new HashMap<>();

    @Override // org.apache.http.client.AuthCache
    public void clear() {
        this.map.clear();
    }

    @Override // org.apache.http.client.AuthCache
    public AuthScheme get(HttpHost httpHost) {
        if (httpHost != null) {
            return this.map.get(httpHost);
        }
        throw new IllegalArgumentException("HTTP host may not be null");
    }

    @Override // org.apache.http.client.AuthCache
    public void put(HttpHost httpHost, AuthScheme authScheme) {
        if (httpHost == null) {
            throw new IllegalArgumentException("HTTP host may not be null");
        }
        this.map.put(httpHost, authScheme);
    }

    @Override // org.apache.http.client.AuthCache
    public void remove(HttpHost httpHost) {
        if (httpHost == null) {
            throw new IllegalArgumentException("HTTP host may not be null");
        }
        this.map.remove(httpHost);
    }

    public String toString() {
        return this.map.toString();
    }
}
