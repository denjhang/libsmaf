package org.apache.http.conn;

import java.net.ConnectException;
import org.apache.http.HttpHost;
import org.apache.http.annotation.Immutable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class HttpHostConnectException extends ConnectException {
    private static final long serialVersionUID = -3194482710275220224L;
    private final HttpHost host;

    public HttpHostConnectException(HttpHost httpHost, ConnectException connectException) {
        super("Connection to " + httpHost + " refused");
        this.host = httpHost;
        initCause(connectException);
    }

    public HttpHost getHost() {
        return this.host;
    }
}
