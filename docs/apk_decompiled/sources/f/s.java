package f;

import java.nio.ByteBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class s implements g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final f f3265a = new f();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public final y f3266b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    boolean f3267c;

    s(y yVar) {
        if (yVar == null) {
            throw new NullPointerException("sink == null");
        }
        this.f3266b = yVar;
    }

    @Override // f.y
    public void b(f fVar, long j) {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        this.f3265a.b(fVar, j);
        w();
    }

    @Override // f.y, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws Throwable {
        if (this.f3267c) {
            return;
        }
        try {
            if (this.f3265a.f3242c > 0) {
                this.f3266b.b(this.f3265a, this.f3265a.f3242c);
            }
            th = null;
        } catch (Throwable th) {
            th = th;
        }
        try {
            this.f3266b.close();
        } catch (Throwable th2) {
            if (th == null) {
                th = th2;
            }
        }
        this.f3267c = true;
        if (th == null) {
            return;
        }
        C.a(th);
        throw null;
    }

    @Override // f.g
    public g d(String str) {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        this.f3265a.d(str);
        w();
        return this;
    }

    @Override // f.g
    public g f(long j) {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        this.f3265a.f(j);
        w();
        return this;
    }

    @Override // f.g, f.y, java.io.Flushable
    public void flush() {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        f fVar = this.f3265a;
        long j = fVar.f3242c;
        if (j > 0) {
            this.f3266b.b(fVar, j);
        }
        this.f3266b.flush();
    }

    @Override // java.nio.channels.Channel
    public boolean isOpen() {
        return !this.f3267c;
    }

    @Override // f.g
    public f o() {
        return this.f3265a;
    }

    @Override // f.y
    public B p() {
        return this.f3266b.p();
    }

    public String toString() {
        return "buffer(" + this.f3266b + ")";
    }

    @Override // f.g
    public g w() {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        long jC = this.f3265a.c();
        if (jC > 0) {
            this.f3266b.b(this.f3265a, jC);
        }
        return this;
    }

    @Override // java.nio.channels.WritableByteChannel
    public int write(ByteBuffer byteBuffer) {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        int iWrite = this.f3265a.write(byteBuffer);
        w();
        return iWrite;
    }

    @Override // f.g
    public g write(byte[] bArr) {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        this.f3265a.write(bArr);
        w();
        return this;
    }

    @Override // f.g
    public g write(byte[] bArr, int i, int i2) {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        this.f3265a.write(bArr, i, i2);
        w();
        return this;
    }

    @Override // f.g
    public g writeByte(int i) {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        this.f3265a.writeByte(i);
        w();
        return this;
    }

    @Override // f.g
    public g writeInt(int i) {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        this.f3265a.writeInt(i);
        w();
        return this;
    }

    @Override // f.g
    public g writeShort(int i) {
        if (this.f3267c) {
            throw new IllegalStateException("closed");
        }
        this.f3265a.writeShort(i);
        w();
        return this;
    }
}
