package e;

import java.io.Closeable;
import java.io.InputStream;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class M implements Closeable {
    public static M a(C c2, long j, f.h hVar) {
        if (hVar != null) {
            return new L(c2, j, hVar);
        }
        throw new NullPointerException("source == null");
    }

    public static M a(C c2, byte[] bArr) {
        f.f fVar = new f.f();
        fVar.write(bArr);
        return a(c2, bArr.length, fVar);
    }

    private Charset f() {
        C c2 = c();
        return c2 != null ? c2.a(e.a.e.j) : e.a.e.j;
    }

    public final InputStream a() {
        return d().v();
    }

    public abstract long b();

    public abstract C c();

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        e.a.e.a(d());
    }

    public abstract f.h d();

    public final String e() {
        f.h hVarD = d();
        try {
            return hVarD.a(e.a.e.a(hVarD, f()));
        } finally {
            e.a.e.a(hVarD);
        }
    }
}
