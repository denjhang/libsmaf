package jp.co.acrodea.runtime.drm.agent;

import java.io.EOFException;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class s extends FilterInputStream {
    public s(InputStream inputStream) {
        super(inputStream);
    }

    void a(byte[] bArr) throws IOException {
        int length = bArr.length;
        int i = 0;
        while (length > 0) {
            int i2 = ((FilterInputStream) this).in.read(bArr, i, length);
            if (i2 < 0) {
                throw new EOFException();
            }
            length -= i2;
            i += i2;
        }
    }
}
