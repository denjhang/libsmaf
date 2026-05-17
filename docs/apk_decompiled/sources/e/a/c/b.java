package e.a.c;

import e.B;
import e.H;
import e.K;
import e.M;
import f.r;
import f.y;
import java.net.ProtocolException;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class b implements B {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final boolean f2937a;

    static final class a extends f.j {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        long f2938b;

        a(y yVar) {
            super(yVar);
        }

        @Override // f.j, f.y
        public void b(f.f fVar, long j) {
            super.b(fVar, j);
            this.f2938b += j;
        }
    }

    public b(boolean z) {
        this.f2937a = z;
    }

    @Override // e.B
    public K a(B.a aVar) throws ProtocolException {
        K.a aVarF;
        M mA;
        h hVar = (h) aVar;
        c cVarH = hVar.h();
        e.a.b.g gVarI = hVar.i();
        e.a.b.c cVar = (e.a.b.c) hVar.f();
        H hD = hVar.d();
        long jCurrentTimeMillis = System.currentTimeMillis();
        hVar.g().d(hVar.e());
        cVarH.a(hD);
        hVar.g().a(hVar.e(), hD);
        K.a aVarA = null;
        if (g.b(hD.e()) && hD.a() != null) {
            if (HTTP.EXPECT_CONTINUE.equalsIgnoreCase(hD.a("Expect"))) {
                cVarH.b();
                hVar.g().f(hVar.e());
                aVarA = cVarH.a(true);
            }
            if (aVarA == null) {
                hVar.g().c(hVar.e());
                a aVar2 = new a(cVarH.a(hD, hD.a().a()));
                f.g gVarA = r.a(aVar2);
                hD.a().a(gVarA);
                gVarA.close();
                hVar.g().a(hVar.e(), aVar2.f2938b);
            } else if (!cVar.b()) {
                gVarI.d();
            }
        }
        cVarH.a();
        if (aVarA == null) {
            hVar.g().f(hVar.e());
            aVarA = cVarH.a(false);
        }
        aVarA.a(hD);
        aVarA.a(gVarI.b().a());
        aVarA.b(jCurrentTimeMillis);
        aVarA.a(System.currentTimeMillis());
        K kA = aVarA.a();
        int iC = kA.c();
        if (iC == 100) {
            K.a aVarA2 = cVarH.a(false);
            aVarA2.a(hD);
            aVarA2.a(gVarI.b().a());
            aVarA2.b(jCurrentTimeMillis);
            aVarA2.a(System.currentTimeMillis());
            kA = aVarA2.a();
            iC = kA.c();
        }
        hVar.g().a(hVar.e(), kA);
        if (this.f2937a && iC == 101) {
            aVarF = kA.f();
            mA = e.a.e.f2987c;
        } else {
            aVarF = kA.f();
            mA = cVarH.a(kA);
        }
        aVarF.a(mA);
        K kA2 = aVarF.a();
        if ("close".equalsIgnoreCase(kA2.i().a("Connection")) || "close".equalsIgnoreCase(kA2.a("Connection"))) {
            gVarI.d();
        }
        if ((iC != 204 && iC != 205) || kA2.a().b() <= 0) {
            return kA2;
        }
        throw new ProtocolException("HTTP " + iC + " had non-zero Content-Length: " + kA2.a().b());
    }
}
