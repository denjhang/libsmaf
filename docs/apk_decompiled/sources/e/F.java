package e;

import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public enum F {
    HTTP_1_0("http/1.0"),
    HTTP_1_1("http/1.1"),
    SPDY_3("spdy/3.1"),
    HTTP_2("h2"),
    QUIC("quic");

    private final String g;

    F(String str) {
        this.g = str;
    }

    public static F a(String str) throws IOException {
        if (str.equals(HTTP_1_0.g)) {
            return HTTP_1_0;
        }
        if (str.equals(HTTP_1_1.g)) {
            return HTTP_1_1;
        }
        if (str.equals(HTTP_2.g)) {
            return HTTP_2;
        }
        if (str.equals(SPDY_3.g)) {
            return SPDY_3;
        }
        if (str.equals(QUIC.g)) {
            return QUIC;
        }
        throw new IOException("Unexpected protocol: " + str);
    }

    @Override // java.lang.Enum
    public String toString() {
        return this.g;
    }
}
