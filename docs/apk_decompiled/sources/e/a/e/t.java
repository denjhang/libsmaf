package e.a.e;

import e.a.e.d;
import java.io.Closeable;
import java.io.IOException;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class t implements Closeable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Logger f3102a = Logger.getLogger(e.class.getName());

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final f.g f3103b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final boolean f3104c;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private boolean f3107f;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final f.f f3105d = new f.f();
    final d.b g = new d.b(this.f3105d);

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f3106e = 16384;

    t(f.g gVar, boolean z) {
        this.f3103b = gVar;
        this.f3104c = z;
    }

    private static void a(f.g gVar, int i) {
        gVar.writeByte((i >>> 16) & 255);
        gVar.writeByte((i >>> 8) & 255);
        gVar.writeByte(i & 255);
    }

    private void b(int i, long j) {
        while (j > 0) {
            int iMin = (int) Math.min(this.f3106e, j);
            long j2 = iMin;
            j -= j2;
            a(i, iMin, (byte) 9, j == 0 ? (byte) 4 : (byte) 0);
            this.f3103b.b(this.f3105d, j2);
        }
    }

    public synchronized void a() {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        if (this.f3104c) {
            if (f3102a.isLoggable(Level.FINE)) {
                f3102a.fine(e.a.e.a(">> CONNECTION %s", e.f3017a.b()));
            }
            this.f3103b.write(e.f3017a.g());
            this.f3103b.flush();
        }
    }

    void a(int i, byte b2, f.f fVar, int i2) {
        a(i, i2, (byte) 0, b2);
        if (i2 > 0) {
            this.f3103b.b(fVar, i2);
        }
    }

    public void a(int i, int i2, byte b2, byte b3) {
        if (f3102a.isLoggable(Level.FINE)) {
            f3102a.fine(e.a(false, i, i2, b2, b3));
        }
        int i3 = this.f3106e;
        if (i2 > i3) {
            e.a("FRAME_SIZE_ERROR length > %d: %d", Integer.valueOf(i3), Integer.valueOf(i2));
            throw null;
        }
        if ((Integer.MIN_VALUE & i) != 0) {
            e.a("reserved bit set: %s", Integer.valueOf(i));
            throw null;
        }
        a(this.f3103b, i2);
        this.f3103b.writeByte(b2 & 255);
        this.f3103b.writeByte(b3 & 255);
        this.f3103b.writeInt(i & Integer.MAX_VALUE);
    }

    public synchronized void a(int i, int i2, List<c> list) {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        this.g.a(list);
        long size = this.f3105d.size();
        int iMin = (int) Math.min(this.f3106e - 4, size);
        long j = iMin;
        a(i, iMin + 4, (byte) 5, size == j ? (byte) 4 : (byte) 0);
        this.f3103b.writeInt(i2 & Integer.MAX_VALUE);
        this.f3103b.b(this.f3105d, j);
        if (size > j) {
            b(i, size - j);
        }
    }

    public synchronized void a(int i, long j) {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        if (j == 0 || j > 2147483647L) {
            e.a("windowSizeIncrement == 0 || windowSizeIncrement > 0x7fffffffL: %s", Long.valueOf(j));
            throw null;
        }
        a(i, 4, (byte) 8, (byte) 0);
        this.f3103b.writeInt((int) j);
        this.f3103b.flush();
    }

    public synchronized void a(int i, b bVar) {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        if (bVar.m == -1) {
            throw new IllegalArgumentException();
        }
        a(i, 4, (byte) 3, (byte) 0);
        this.f3103b.writeInt(bVar.m);
        this.f3103b.flush();
    }

    public synchronized void a(int i, b bVar, byte[] bArr) {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        if (bVar.m == -1) {
            e.a("errorCode.httpCode == -1", new Object[0]);
            throw null;
        }
        a(0, bArr.length + 8, (byte) 7, (byte) 0);
        this.f3103b.writeInt(i);
        this.f3103b.writeInt(bVar.m);
        if (bArr.length > 0) {
            this.f3103b.write(bArr);
        }
        this.f3103b.flush();
    }

    public synchronized void a(x xVar) {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        this.f3106e = xVar.c(this.f3106e);
        if (xVar.b() != -1) {
            this.g.a(xVar.b());
        }
        a(0, 0, (byte) 4, (byte) 1);
        this.f3103b.flush();
    }

    public synchronized void a(boolean z, int i, int i2) {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        a(0, 8, (byte) 6, z ? (byte) 1 : (byte) 0);
        this.f3103b.writeInt(i);
        this.f3103b.writeInt(i2);
        this.f3103b.flush();
    }

    public synchronized void a(boolean z, int i, int i2, List<c> list) {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        a(z, i, list);
    }

    public synchronized void a(boolean z, int i, f.f fVar, int i2) {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        a(i, z ? (byte) 1 : (byte) 0, fVar, i2);
    }

    void a(boolean z, int i, List<c> list) throws IOException {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        this.g.a(list);
        long size = this.f3105d.size();
        int iMin = (int) Math.min(this.f3106e, size);
        long j = iMin;
        byte b2 = size == j ? (byte) 4 : (byte) 0;
        if (z) {
            b2 = (byte) (b2 | 1);
        }
        a(i, iMin, (byte) 1, b2);
        this.f3103b.b(this.f3105d, j);
        if (size > j) {
            b(i, size - j);
        }
    }

    public int b() {
        return this.f3106e;
    }

    public synchronized void b(x xVar) {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        int i = 0;
        a(0, xVar.d() * 6, (byte) 4, (byte) 0);
        while (i < 10) {
            if (xVar.d(i)) {
                this.f3103b.writeShort(i == 4 ? 3 : i == 7 ? 4 : i);
                this.f3103b.writeInt(xVar.a(i));
            }
            i++;
        }
        this.f3103b.flush();
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public synchronized void close() {
        this.f3107f = true;
        this.f3103b.close();
    }

    public synchronized void flush() {
        if (this.f3107f) {
            throw new IOException("closed");
        }
        this.f3103b.flush();
    }
}
