package androidx.lifecycle;

import androidx.lifecycle.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class CompositeGeneratedAdaptersObserver implements e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final d[] f438a;

    CompositeGeneratedAdaptersObserver(d[] dVarArr) {
        this.f438a = dVarArr;
    }

    @Override // androidx.lifecycle.e
    public void a(h hVar, f.a aVar) {
        n nVar = new n();
        for (d dVar : this.f438a) {
            dVar.a(hVar, aVar, false, nVar);
        }
        for (d dVar2 : this.f438a) {
            dVar2.a(hVar, aVar, true, nVar);
        }
    }
}
