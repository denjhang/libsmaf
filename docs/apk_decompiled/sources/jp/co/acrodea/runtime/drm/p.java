package jp.co.acrodea.runtime.drm;

import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class p extends b {
    p() {
    }

    public static p a(InputStream inputStream) throws IOException {
        BufferedInputStream bufferedInputStream = !(inputStream instanceof BufferedInputStream) ? new BufferedInputStream(inputStream) : (BufferedInputStream) inputStream;
        q qVar = new q();
        if (qVar.a(bufferedInputStream)) {
            return qVar;
        }
        throw new IOException("Unknown extention header format");
    }
}
