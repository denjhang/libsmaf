package e.a.b;

import e.B;
import e.E;
import e.H;
import e.K;
import e.a.c.h;
import org.apache.http.client.methods.HttpGet;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class a implements B {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final E f2908a;

    public a(E e2) {
        this.f2908a = e2;
    }

    @Override // e.B
    public K a(B.a aVar) {
        h hVar = (h) aVar;
        H hD = hVar.d();
        g gVarI = hVar.i();
        return hVar.a(hD, gVarI, gVarI.a(this.f2908a, aVar, !hD.e().equals(HttpGet.METHOD_NAME)), gVarI.b());
    }
}
