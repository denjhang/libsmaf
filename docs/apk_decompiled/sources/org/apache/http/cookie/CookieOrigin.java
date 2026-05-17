package org.apache.http.cookie;

import java.util.Locale;
import org.apache.http.annotation.Immutable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public final class CookieOrigin {
    private final String host;
    private final String path;
    private final int port;
    private final boolean secure;

    public CookieOrigin(String str, int i, String str2, boolean z) {
        if (str == null) {
            throw new IllegalArgumentException("Host of origin may not be null");
        }
        if (str.trim().length() == 0) {
            throw new IllegalArgumentException("Host of origin may not be blank");
        }
        if (i < 0) {
            throw new IllegalArgumentException("Invalid port: " + i);
        }
        if (str2 == null) {
            throw new IllegalArgumentException("Path of origin may not be null.");
        }
        this.host = str.toLowerCase(Locale.ENGLISH);
        this.port = i;
        if (str2.trim().length() != 0) {
            this.path = str2;
        } else {
            this.path = "/";
        }
        this.secure = z;
    }

    public String getHost() {
        return this.host;
    }

    public String getPath() {
        return this.path;
    }

    public int getPort() {
        return this.port;
    }

    public boolean isSecure() {
        return this.secure;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append('[');
        if (this.secure) {
            sb.append("(secure)");
        }
        sb.append(this.host);
        sb.append(':');
        sb.append(Integer.toString(this.port));
        sb.append(this.path);
        sb.append(']');
        return sb.toString();
    }
}
