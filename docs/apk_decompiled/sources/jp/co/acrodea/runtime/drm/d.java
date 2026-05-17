package jp.co.acrodea.runtime.drm;

import java.io.EOFException;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class d extends FilterInputStream {
    public d(InputStream inputStream) {
        super(inputStream);
    }

    long a(long j) throws IOException {
        long j2 = 0;
        while (j > 0) {
            long jSkip = ((FilterInputStream) this).in.skip(j);
            if (jSkip == 0) {
                if (((FilterInputStream) this).in.read() < 0) {
                    throw new EOFException();
                }
                jSkip = 1;
            }
            j -= jSkip;
            j2 += jSkip;
        }
        return j2;
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

    void a(byte[] bArr, int i, int i2) throws IOException {
        while (i2 > 0) {
            int i3 = ((FilterInputStream) this).in.read(bArr, i, i2);
            if (i3 < 0) {
                throw new EOFException();
            }
            i2 -= i3;
            i += i3;
        }
    }
}
