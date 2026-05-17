package e.a.a;

import e.B;
import e.F;
import e.H;
import e.K;
import e.M;
import e.a.a.d;
import e.a.c.f;
import e.a.c.g;
import e.a.c.i;
import e.z;
import f.r;
import f.y;
import java.io.IOException;
import org.apache.http.HttpHeaders;
import org.apache.http.HttpStatus;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class b implements B {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final e f2898a;

    public b(e eVar) {
        this.f2898a = eVar;
    }

    private static K a(K k) {
        if (k == null || k.a() == null) {
            return k;
        }
        K.a aVarF = k.f();
        aVarF.a((M) null);
        return aVarF.a();
    }

    private K a(c cVar, K k) {
        y yVarA;
        if (cVar == null || (yVarA = cVar.a()) == null) {
            return k;
        }
        a aVar = new a(this, k.a().d(), cVar, r.a(yVarA));
        String strA = k.a("Content-Type");
        long jB = k.a().b();
        K.a aVarF = k.f();
        aVarF.a(new i(strA, jB, r.a(aVar)));
        return aVarF.a();
    }

    private static z a(z zVar, z zVar2) {
        z.a aVar = new z.a();
        int iB = zVar.b();
        for (int i = 0; i < iB; i++) {
            String strA = zVar.a(i);
            String strB = zVar.b(i);
            if ((!HttpHeaders.WARNING.equalsIgnoreCase(strA) || !strB.startsWith("1")) && (a(strA) || !b(strA) || zVar2.a(strA) == null)) {
                e.a.a.f2892a.a(aVar, strA, strB);
            }
        }
        int iB2 = zVar2.b();
        for (int i2 = 0; i2 < iB2; i2++) {
            String strA2 = zVar2.a(i2);
            if (!a(strA2) && b(strA2)) {
                e.a.a.f2892a.a(aVar, strA2, zVar2.b(i2));
            }
        }
        return aVar.a();
    }

    static boolean a(String str) {
        return "Content-Length".equalsIgnoreCase(str) || "Content-Encoding".equalsIgnoreCase(str) || "Content-Type".equalsIgnoreCase(str);
    }

    static boolean b(String str) {
        return ("Connection".equalsIgnoreCase(str) || HTTP.CONN_KEEP_ALIVE.equalsIgnoreCase(str) || "Proxy-Authenticate".equalsIgnoreCase(str) || "Proxy-Authorization".equalsIgnoreCase(str) || HttpHeaders.TE.equalsIgnoreCase(str) || "Trailers".equalsIgnoreCase(str) || "Transfer-Encoding".equalsIgnoreCase(str) || HttpHeaders.UPGRADE.equalsIgnoreCase(str)) ? false : true;
    }

    @Override // e.B
    public K a(B.a aVar) {
        e eVar = this.f2898a;
        K kB = eVar != null ? eVar.b(aVar.d()) : null;
        d dVarA = new d.a(System.currentTimeMillis(), aVar.d(), kB).a();
        H h = dVarA.f2899a;
        K k = dVarA.f2900b;
        e eVar2 = this.f2898a;
        if (eVar2 != null) {
            eVar2.a(dVarA);
        }
        if (kB != null && k == null) {
            e.a.e.a(kB.a());
        }
        if (h == null && k == null) {
            K.a aVar2 = new K.a();
            aVar2.a(aVar.d());
            aVar2.a(F.HTTP_1_1);
            aVar2.a(HttpStatus.SC_GATEWAY_TIMEOUT);
            aVar2.a("Unsatisfiable Request (only-if-cached)");
            aVar2.a(e.a.e.f2987c);
            aVar2.b(-1L);
            aVar2.a(System.currentTimeMillis());
            return aVar2.a();
        }
        if (h == null) {
            K.a aVarF = k.f();
            aVarF.a(a(k));
            return aVarF.a();
        }
        try {
            K kA = aVar.a(h);
            if (kA == null && kB != null) {
            }
            if (k != null) {
                if (kA.c() == 304) {
                    K.a aVarF2 = k.f();
                    aVarF2.a(a(k.e(), kA.e()));
                    aVarF2.b(kA.j());
                    aVarF2.a(kA.h());
                    aVarF2.a(a(k));
                    aVarF2.b(a(kA));
                    K kA2 = aVarF2.a();
                    kA.a().close();
                    this.f2898a.a();
                    this.f2898a.a(k, kA2);
                    return kA2;
                }
                e.a.e.a(k.a());
            }
            K.a aVarF3 = kA.f();
            aVarF3.a(a(k));
            aVarF3.b(a(kA));
            K kA3 = aVarF3.a();
            if (this.f2898a != null) {
                if (f.b(kA3) && d.a(kA3, h)) {
                    return a(this.f2898a.a(kA3), kA3);
                }
                if (g.a(h.e())) {
                    try {
                        this.f2898a.a(h);
                    } catch (IOException unused) {
                    }
                }
            }
            return kA3;
        } finally {
            if (kB != null) {
                e.a.e.a(kB.a());
            }
        }
    }
}
