package f;

import java.io.EOFException;
import java.io.IOException;
import java.util.zip.DataFormatException;
import java.util.zip.Inflater;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class n implements z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final h f3256a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Inflater f3257b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3258c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f3259d;

    n(h hVar, Inflater inflater) {
        if (hVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        if (inflater == null) {
            throw new IllegalArgumentException("inflater == null");
        }
        this.f3256a = hVar;
        this.f3257b = inflater;
    }

    private void b() {
        int i = this.f3258c;
        if (i == 0) {
            return;
        }
        int remaining = i - this.f3257b.getRemaining();
        this.f3258c -= remaining;
        this.f3256a.skip(remaining);
    }

    @Override // f.z
    public long a(f fVar, long j) throws IOException {
        boolean zA;
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (this.f3259d) {
            throw new IllegalStateException("closed");
        }
        if (j == 0) {
            return 0L;
        }
        do {
            zA = a();
            try {
                v vVarB = fVar.b(1);
                int iInflate = this.f3257b.inflate(vVarB.f3272a, vVarB.f3274c, (int) Math.min(j, 8192 - vVarB.f3274c));
                if (iInflate > 0) {
                    vVarB.f3274c += iInflate;
                    long j2 = iInflate;
                    fVar.f3242c += j2;
                    return j2;
                }
                if (!this.f3257b.finished() && !this.f3257b.needsDictionary()) {
                }
                b();
                if (vVarB.f3273b != vVarB.f3274c) {
                    return -1L;
                }
                fVar.f3241b = vVarB.b();
                w.a(vVarB);
                return -1L;
            } catch (DataFormatException e2) {
                throw new IOException(e2);
            }
        } while (!zA);
        throw new EOFException("source exhausted prematurely");
    }

    public boolean a() {
        if (!this.f3257b.needsInput()) {
            return false;
        }
        b();
        if (this.f3257b.getRemaining() != 0) {
            throw new IllegalStateException("?");
        }
        if (this.f3256a.q()) {
            return true;
        }
        v vVar = this.f3256a.o().f3241b;
        int i = vVar.f3274c;
        int i2 = vVar.f3273b;
        this.f3258c = i - i2;
        this.f3257b.setInput(vVar.f3272a, i2, this.f3258c);
        return false;
    }

    @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        if (this.f3259d) {
            return;
        }
        this.f3257b.end();
        this.f3259d = true;
        this.f3256a.close();
    }

    @Override // f.z
    public B p() {
        return this.f3256a.p();
    }
}
