package e.a.c;

import e.B;
import e.C;
import e.C0422o;
import e.H;
import e.J;
import e.K;
import e.q;
import e.z;
import f.m;
import f.r;
import java.util.List;
import org.apache.http.HttpHeaders;
import org.apache.http.cookie.SM;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class a implements B {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final q f2936a;

    public a(q qVar) {
        this.f2936a = qVar;
    }

    private String a(List<C0422o> list) {
        StringBuilder sb = new StringBuilder();
        int size = list.size();
        for (int i = 0; i < size; i++) {
            if (i > 0) {
                sb.append("; ");
            }
            C0422o c0422o = list.get(i);
            sb.append(c0422o.a());
            sb.append('=');
            sb.append(c0422o.b());
        }
        return sb.toString();
    }

    @Override // e.B
    public K a(B.a aVar) {
        H hD = aVar.d();
        H.a aVarF = hD.f();
        J jA = hD.a();
        if (jA != null) {
            C cB = jA.b();
            if (cB != null) {
                aVarF.b("Content-Type", cB.toString());
            }
            long jA2 = jA.a();
            if (jA2 != -1) {
                aVarF.b("Content-Length", Long.toString(jA2));
                aVarF.a("Transfer-Encoding");
            } else {
                aVarF.b("Transfer-Encoding", HTTP.CHUNK_CODING);
                aVarF.a("Content-Length");
            }
        }
        boolean z = false;
        if (hD.a("Host") == null) {
            aVarF.b("Host", e.a.e.a(hD.g(), false));
        }
        if (hD.a("Connection") == null) {
            aVarF.b("Connection", HTTP.CONN_KEEP_ALIVE);
        }
        if (hD.a(HttpHeaders.ACCEPT_ENCODING) == null && hD.a(HttpHeaders.RANGE) == null) {
            z = true;
            aVarF.b(HttpHeaders.ACCEPT_ENCODING, "gzip");
        }
        List<C0422o> listA = this.f2936a.a(hD.g());
        if (!listA.isEmpty()) {
            aVarF.b(SM.COOKIE, a(listA));
        }
        if (hD.a("User-Agent") == null) {
            aVarF.b("User-Agent", e.a.f.a());
        }
        K kA = aVar.a(aVarF.a());
        f.a(this.f2936a, hD.g(), kA.e());
        K.a aVarF2 = kA.f();
        aVarF2.a(hD);
        if (z && "gzip".equalsIgnoreCase(kA.a("Content-Encoding")) && f.b(kA)) {
            m mVar = new m(kA.a().d());
            z.a aVarA = kA.e().a();
            aVarA.b("Content-Encoding");
            aVarA.b("Content-Length");
            aVarF2.a(aVarA.a());
            aVarF2.a(new i(kA.a("Content-Type"), -1L, r.a(mVar)));
        }
        return aVarF2.a();
    }
}
