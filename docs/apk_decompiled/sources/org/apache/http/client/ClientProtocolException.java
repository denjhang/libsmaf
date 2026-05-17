package org.apache.http.client;

import java.io.IOException;
import org.apache.http.annotation.Immutable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class ClientProtocolException extends IOException {
    private static final long serialVersionUID = -5596590843227115865L;

    public ClientProtocolException() {
    }

    public ClientProtocolException(String str) {
        super(str);
    }

    public ClientProtocolException(String str, Throwable th) {
        super(str);
        initCause(th);
    }

    public ClientProtocolException(Throwable th) {
        initCause(th);
    }
}
