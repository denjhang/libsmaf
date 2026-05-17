package jp.co.acrodea.runtime.drm;

import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class r extends InputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private InputStream f3430a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private u f3431b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private c f3432c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private long f3433d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private long f3434e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private long f3435f;
    private long g;
    private long h;
    private boolean i;
    private byte[] j;
    private int k;
    private int l;
    private long m;

    public r(InputStream inputStream, c cVar) {
        this(cVar);
        this.f3430a = inputStream;
    }

    private r(c cVar) {
        this.f3432c = cVar;
        this.f3433d = 0L;
        this.f3434e = cVar.b();
        this.f3435f = cVar.c();
        this.g = 0L;
        this.h = -1L;
        this.i = false;
        this.k = 256;
        this.j = new byte[this.k];
        this.l = 0;
        this.m = -1L;
    }

    public r(u uVar, c cVar) {
        this(cVar);
        this.f3431b = uVar;
        this.f3433d = this.f3431b.b();
    }

    @Override // java.io.InputStream
    public int available() throws IOException {
        if (this.f3432c == null) {
            throw new IOException("Already closed");
        }
        long j = this.g;
        if (j >= this.f3434e) {
            return 0;
        }
        long j2 = this.m;
        if (j2 <= j) {
            int i = this.l;
            if (j < ((long) i) + j2) {
                return (int) ((j2 - j) + ((long) i));
            }
        }
        if (this.f3431b != null) {
            return 0;
        }
        return this.f3430a.available() & (-16);
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f3430a = null;
        this.f3431b = null;
        this.f3432c = null;
    }

    @Override // java.io.InputStream
    public void mark(int i) {
        this.h = this.g;
    }

    @Override // java.io.InputStream
    public boolean markSupported() {
        return this.f3431b != null;
    }

    @Override // java.io.InputStream
    public int read() throws IOException {
        byte[] bArr = new byte[1];
        int i = read(bArr, 0, 1);
        return i < 0 ? i : bArr[0] & 255;
    }

    @Override // java.io.InputStream
    public int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0045  */
    @Override // java.io.InputStream
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public int read(byte[] r19, int r20, int r21) throws java.io.IOException {
        /*
            Method dump skipped, instruction units count: 450
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.r.read(byte[], int, int):int");
    }

    @Override // java.io.InputStream
    public synchronized void reset() {
        if (this.f3432c == null) {
            throw new IOException("Already closed");
        }
        if (this.h < 0) {
            throw new IOException("Not marked");
        }
        if (this.f3431b == null) {
            throw new IOException("Mark does not support");
        }
        this.g = this.h;
        this.i = true;
    }

    @Override // java.io.InputStream
    public long skip(long j) throws IOException {
        int i;
        if (this.f3432c == null) {
            throw new IOException("Already closed");
        }
        if (j <= 0) {
            return 0L;
        }
        long j2 = this.g;
        long j3 = j2 + j;
        long j4 = this.f3434e;
        if (j3 > j4) {
            j = j4 - j2;
        }
        if (this.f3431b != null) {
            this.g += j;
            this.i = true;
            return j;
        }
        byte[] bArr = new byte[h.CLIENT_AUTOGEN_KEYBIT];
        long j5 = j;
        while (j5 > 0 && (i = read(bArr, 0, (int) Math.min(1024L, j5))) >= 0) {
            j5 -= (long) i;
        }
        return j - j5;
    }
}
