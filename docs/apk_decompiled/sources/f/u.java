package f;

import java.io.EOFException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class u implements h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final f f3269a = new f();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public final z f3270b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    boolean f3271c;

    u(z zVar) {
        if (zVar == null) {
            throw new NullPointerException("source == null");
        }
        this.f3270b = zVar;
    }

    @Override // f.h
    public long a(byte b2) {
        return a(b2, 0L, Long.MAX_VALUE);
    }

    public long a(byte b2, long j, long j2) {
        if (this.f3271c) {
            throw new IllegalStateException("closed");
        }
        if (j < 0 || j2 < j) {
            throw new IllegalArgumentException(String.format("fromIndex=%s toIndex=%s", Long.valueOf(j), Long.valueOf(j2)));
        }
        while (j < j2) {
            long jA = this.f3269a.a(b2, j, j2);
            if (jA != -1) {
                return jA;
            }
            f fVar = this.f3269a;
            long j3 = fVar.f3242c;
            if (j3 >= j2 || this.f3270b.a(fVar, 8192L) == -1) {
                break;
            }
            j = Math.max(j, j3);
        }
        return -1L;
    }

    @Override // f.z
    public long a(f fVar, long j) {
        if (fVar == null) {
            throw new IllegalArgumentException("sink == null");
        }
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (this.f3271c) {
            throw new IllegalStateException("closed");
        }
        f fVar2 = this.f3269a;
        if (fVar2.f3242c == 0 && this.f3270b.a(fVar2, 8192L) == -1) {
            return -1L;
        }
        return this.f3269a.a(fVar, Math.min(j, this.f3269a.f3242c));
    }

    @Override // f.h
    public String a(Charset charset) {
        if (charset == null) {
            throw new IllegalArgumentException("charset == null");
        }
        this.f3269a.a(this.f3270b);
        return this.f3269a.a(charset);
    }

    public boolean a(long j) {
        f fVar;
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (this.f3271c) {
            throw new IllegalStateException("closed");
        }
        do {
            fVar = this.f3269a;
            if (fVar.f3242c >= j) {
                return true;
            }
        } while (this.f3270b.a(fVar, 8192L) != -1);
        return false;
    }

    @Override // f.h
    public boolean a(long j, i iVar) {
        return a(j, iVar, 0, iVar.e());
    }

    public boolean a(long j, i iVar, int i, int i2) {
        if (this.f3271c) {
            throw new IllegalStateException("closed");
        }
        if (j < 0 || i < 0 || i2 < 0 || iVar.e() - i < i2) {
            return false;
        }
        for (int i3 = 0; i3 < i2; i3++) {
            long j2 = ((long) i3) + j;
            if (!a(1 + j2) || this.f3269a.a(j2) != iVar.a(i + i3)) {
                return false;
            }
        }
        return true;
    }

    @Override // f.h
    public i b(long j) throws EOFException {
        e(j);
        return this.f3269a.b(j);
    }

    @Override // f.h
    public String c(long j) throws EOFException {
        if (j < 0) {
            throw new IllegalArgumentException("limit < 0: " + j);
        }
        long j2 = j == Long.MAX_VALUE ? Long.MAX_VALUE : j + 1;
        long jA = a((byte) 10, 0L, j2);
        if (jA != -1) {
            return this.f3269a.h(jA);
        }
        if (j2 < Long.MAX_VALUE && a(j2) && this.f3269a.a(j2 - 1) == 13 && a(1 + j2) && this.f3269a.a(j2) == 10) {
            return this.f3269a.h(j2);
        }
        f fVar = new f();
        f fVar2 = this.f3269a;
        fVar2.a(fVar, 0L, Math.min(32L, fVar2.size()));
        throw new EOFException("\\n not found: limit=" + Math.min(this.f3269a.size(), j) + " content=" + fVar.e().b() + (char) 8230);
    }

    @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        if (this.f3271c) {
            return;
        }
        this.f3271c = true;
        this.f3270b.close();
        this.f3269a.b();
    }

    @Override // f.h
    public byte[] d(long j) throws EOFException {
        e(j);
        return this.f3269a.d(j);
    }

    @Override // f.h
    public void e(long j) throws EOFException {
        if (!a(j)) {
            throw new EOFException();
        }
    }

    @Override // java.nio.channels.Channel
    public boolean isOpen() {
        return !this.f3271c;
    }

    @Override // f.h, f.g
    public f o() {
        return this.f3269a;
    }

    @Override // f.z
    public B p() {
        return this.f3270b.p();
    }

    @Override // f.h
    public boolean q() {
        if (this.f3271c) {
            throw new IllegalStateException("closed");
        }
        return this.f3269a.q() && this.f3270b.a(this.f3269a, 8192L) == -1;
    }

    @Override // f.h
    public String r() {
        return c(Long.MAX_VALUE);
    }

    @Override // java.nio.channels.ReadableByteChannel
    public int read(ByteBuffer byteBuffer) {
        f fVar = this.f3269a;
        if (fVar.f3242c == 0 && this.f3270b.a(fVar, 8192L) == -1) {
            return -1;
        }
        return this.f3269a.read(byteBuffer);
    }

    @Override // f.h
    public byte readByte() throws EOFException {
        e(1L);
        return this.f3269a.readByte();
    }

    @Override // f.h
    public void readFully(byte[] bArr) throws EOFException {
        try {
            e(bArr.length);
            this.f3269a.readFully(bArr);
        } catch (EOFException e2) {
            int i = 0;
            while (true) {
                f fVar = this.f3269a;
                long j = fVar.f3242c;
                if (j <= 0) {
                    throw e2;
                }
                int iA = fVar.a(bArr, i, (int) j);
                if (iA == -1) {
                    throw new AssertionError();
                }
                i += iA;
            }
        }
    }

    @Override // f.h
    public int readInt() throws EOFException {
        e(4L);
        return this.f3269a.readInt();
    }

    @Override // f.h
    public short readShort() throws EOFException {
        e(2L);
        return this.f3269a.readShort();
    }

    @Override // f.h
    public int s() throws EOFException {
        e(4L);
        return this.f3269a.s();
    }

    @Override // f.h
    public void skip(long j) throws EOFException {
        if (this.f3271c) {
            throw new IllegalStateException("closed");
        }
        while (j > 0) {
            f fVar = this.f3269a;
            if (fVar.f3242c == 0 && this.f3270b.a(fVar, 8192L) == -1) {
                throw new EOFException();
            }
            long jMin = Math.min(j, this.f3269a.size());
            this.f3269a.skip(jMin);
            j -= jMin;
        }
    }

    @Override // f.h
    public short t() throws EOFException {
        e(2L);
        return this.f3269a.t();
    }

    public String toString() {
        return "buffer(" + this.f3270b + ")";
    }

    @Override // f.h
    public long u() throws EOFException {
        byte bA;
        e(1L);
        int i = 0;
        while (true) {
            int i2 = i + 1;
            if (!a(i2)) {
                break;
            }
            bA = this.f3269a.a(i);
            if ((bA < 48 || bA > 57) && ((bA < 97 || bA > 102) && (bA < 65 || bA > 70))) {
                break;
            }
            i = i2;
        }
        if (i == 0) {
            throw new NumberFormatException(String.format("Expected leading [0-9a-fA-F] character but was %#x", Byte.valueOf(bA)));
        }
        return this.f3269a.u();
    }

    @Override // f.h
    public InputStream v() {
        return new t(this);
    }
}
