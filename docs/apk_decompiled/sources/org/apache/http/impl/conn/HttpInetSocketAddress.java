package org.apache.http.impl.conn;

import java.net.InetAddress;
import java.net.InetSocketAddress;
import org.apache.http.HttpHost;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class HttpInetSocketAddress extends InetSocketAddress {
    private static final long serialVersionUID = -6650701828361907957L;
    private final HttpHost host;

    public HttpInetSocketAddress(HttpHost httpHost, InetAddress inetAddress, int i) {
        super(inetAddress, i);
        if (httpHost == null) {
            throw new IllegalArgumentException("HTTP host may not be null");
        }
        this.host = httpHost;
    }

    public HttpHost getHost() {
        return this.host;
    }

    @Override // java.net.InetSocketAddress
    public String toString() {
        return this.host.getHostName() + ":" + getPort();
    }
}
