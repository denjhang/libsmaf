package jp.co.acrodea.drm;

import java.io.Closeable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class DRMRandomAccessRead implements Closeable {
    public static final int SEEK_MODE_CUR = 1;
    public static final int SEEK_MODE_END = 2;
    public static final int SEEK_MODE_SET = 0;

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
    }

    public abstract long length();

    public abstract int read();

    public int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    public int read(byte[] bArr, int i, int i2) {
        if (i < 0 || i2 < 0 || i + i2 > bArr.length) {
            throw new IndexOutOfBoundsException();
        }
        if (i2 == 0) {
            return 0;
        }
        int i3 = read();
        if (i3 < 0) {
            return i3;
        }
        bArr[i] = (byte) i3;
        return 1;
    }

    public abstract void seek(long j, int i);

    public abstract long tell();
}
