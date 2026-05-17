package jp.co.acrodea.runtime.drm;

import java.io.Closeable;
import java.io.EOFException;
import java.io.IOException;
import java.io.RandomAccessFile;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class u implements Closeable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    RandomAccessFile[] f3446a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    long[] f3447b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    long[] f3448c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    long f3449d = -1;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    long f3450e = 0;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    int f3451f;

    public u(RandomAccessFile[] randomAccessFileArr) {
        this.f3446a = (RandomAccessFile[]) randomAccessFileArr.clone();
    }

    private void c() throws IOException {
        if (this.f3449d == -2) {
            throw new IOException("Already closed");
        }
        this.f3451f = 0;
        long j = 0;
        this.f3449d = 0L;
        int length = this.f3446a.length;
        if (length == 0) {
            throw new IOException("Empty file list");
        }
        this.f3447b = new long[length];
        this.f3448c = new long[length];
        for (int i = 0; i < length; i++) {
            long length2 = this.f3446a[i].length();
            this.f3447b[i] = j;
            this.f3448c[i] = length2;
            j += length2;
            this.f3449d += length2;
        }
    }

    private void d() {
        long[] jArr = this.f3447b;
        int i = this.f3451f;
        long j = jArr[i];
        long j2 = this.f3450e;
        if (j > j2 || j2 >= jArr[i] + this.f3448c[i]) {
            if (this.f3450e >= this.f3449d) {
                this.f3451f = -1;
            }
            int length = this.f3446a.length;
            int i2 = 0;
            while (i2 < length) {
                long[] jArr2 = this.f3447b;
                long j3 = jArr2[i2];
                long j4 = this.f3450e;
                if (j3 <= j4 && j4 < jArr2[i2] + this.f3448c[i2]) {
                    break;
                } else {
                    i2++;
                }
            }
            if (i2 != length) {
                this.f3451f = i2;
            } else {
                this.f3451f = -1;
            }
        }
    }

    public int a(byte[] bArr, int i, int i2) throws IOException {
        if (i < 0 || i2 < 0 || i + i2 > bArr.length) {
            throw new IndexOutOfBoundsException();
        }
        if (i2 == 0) {
            return 0;
        }
        if (this.f3449d < 0) {
            c();
        }
        d();
        long[] jArr = this.f3447b;
        int i3 = this.f3451f;
        int i4 = this.f3446a[this.f3451f].read(bArr, i, (int) Math.min((jArr[i3] + this.f3448c[i3]) - this.f3450e, i2));
        this.f3450e += (long) i4;
        return i4;
    }

    public long a() throws IOException {
        if (this.f3449d < 0) {
            c();
        }
        return this.f3449d;
    }

    public void a(long j) throws IOException {
        if (this.f3449d < 0) {
            c();
        }
        if (j < 0 || j > this.f3449d) {
            throw new IOException("Cannot seek");
        }
        this.f3450e = j;
        d();
        int i = this.f3451f;
        if (i < 0) {
            throw new IOException("Cannot seek");
        }
        this.f3446a[i].seek(this.f3450e - this.f3447b[i]);
    }

    public void a(byte[] bArr) throws IOException {
        b(bArr, 0, bArr.length);
    }

    public long b() {
        return this.f3450e;
    }

    public void b(byte[] bArr, int i, int i2) throws IOException {
        if (i < 0 || i2 < 0 || i + i2 > bArr.length) {
            throw new IndexOutOfBoundsException();
        }
        while (i2 > 0) {
            int iA = a(bArr, i, i2);
            if (iA < 0) {
                throw new EOFException();
            }
            i2 -= iA;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        if (this.f3449d == -2) {
            return;
        }
        int length = this.f3446a.length;
        for (int i = 0; i < length; i++) {
            this.f3446a[i].close();
        }
        this.f3449d = -2L;
    }
}
