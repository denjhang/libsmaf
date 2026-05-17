package f;

import java.io.EOFException;
import java.io.IOException;
import java.util.zip.CRC32;
import java.util.zip.Inflater;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class m implements z {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final h f3252b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Inflater f3253c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final n f3254d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f3251a = 0;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final CRC32 f3255e = new CRC32();

    public m(z zVar) {
        if (zVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        this.f3253c = new Inflater(true);
        this.f3252b = r.a(zVar);
        this.f3254d = new n(this.f3252b, this.f3253c);
    }

    private void a() throws IOException {
        this.f3252b.e(10L);
        byte bA = this.f3252b.o().a(3L);
        boolean z = ((bA >> 1) & 1) == 1;
        if (z) {
            a(this.f3252b.o(), 0L, 10L);
        }
        a("ID1ID2", 8075, this.f3252b.readShort());
        this.f3252b.skip(8L);
        if (((bA >> 2) & 1) == 1) {
            this.f3252b.e(2L);
            if (z) {
                a(this.f3252b.o(), 0L, 2L);
            }
            long jT = this.f3252b.o().t();
            this.f3252b.e(jT);
            if (z) {
                a(this.f3252b.o(), 0L, jT);
            }
            this.f3252b.skip(jT);
        }
        if (((bA >> 3) & 1) == 1) {
            long jA = this.f3252b.a((byte) 0);
            if (jA == -1) {
                throw new EOFException();
            }
            if (z) {
                a(this.f3252b.o(), 0L, jA + 1);
            }
            this.f3252b.skip(jA + 1);
        }
        if (((bA >> 4) & 1) == 1) {
            long jA2 = this.f3252b.a((byte) 0);
            if (jA2 == -1) {
                throw new EOFException();
            }
            if (z) {
                a(this.f3252b.o(), 0L, jA2 + 1);
            }
            this.f3252b.skip(jA2 + 1);
        }
        if (z) {
            a("FHCRC", this.f3252b.t(), (short) this.f3255e.getValue());
            this.f3255e.reset();
        }
    }

    private void a(f fVar, long j, long j2) {
        v vVar = fVar.f3241b;
        while (true) {
            int i = vVar.f3274c;
            int i2 = vVar.f3273b;
            if (j < i - i2) {
                break;
            }
            j -= (long) (i - i2);
            vVar = vVar.f3277f;
        }
        while (j2 > 0) {
            int i3 = (int) (((long) vVar.f3273b) + j);
            int iMin = (int) Math.min(vVar.f3274c - i3, j2);
            this.f3255e.update(vVar.f3272a, i3, iMin);
            j2 -= (long) iMin;
            vVar = vVar.f3277f;
            j = 0;
        }
    }

    private void a(String str, int i, int i2) throws IOException {
        if (i2 != i) {
            throw new IOException(String.format("%s: actual 0x%08x != expected 0x%08x", str, Integer.valueOf(i2), Integer.valueOf(i)));
        }
    }

    private void b() throws IOException {
        a("CRC", this.f3252b.s(), (int) this.f3255e.getValue());
        a("ISIZE", this.f3252b.s(), (int) this.f3253c.getBytesWritten());
    }

    @Override // f.z
    public long a(f fVar, long j) throws IOException {
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (j == 0) {
            return 0L;
        }
        if (this.f3251a == 0) {
            a();
            this.f3251a = 1;
        }
        if (this.f3251a == 1) {
            long j2 = fVar.f3242c;
            long jA = this.f3254d.a(fVar, j);
            if (jA != -1) {
                a(fVar, j2, jA);
                return jA;
            }
            this.f3251a = 2;
        }
        if (this.f3251a == 2) {
            b();
            this.f3251a = 3;
            if (!this.f3252b.q()) {
                throw new IOException("gzip finished without exhausting source");
            }
        }
        return -1L;
    }

    @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f3254d.close();
    }

    @Override // f.z
    public B p() {
        return this.f3252b.p();
    }
}
