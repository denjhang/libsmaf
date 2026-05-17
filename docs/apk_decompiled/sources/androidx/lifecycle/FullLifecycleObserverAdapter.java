package androidx.lifecycle;

import androidx.lifecycle.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class FullLifecycleObserverAdapter implements e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final b f439a;

    FullLifecycleObserverAdapter(b bVar) {
        this.f439a = bVar;
    }

    @Override // androidx.lifecycle.e
    public void a(h hVar, f.a aVar) {
        switch (c.f462a[aVar.ordinal()]) {
            case 1:
                this.f439a.b(hVar);
                return;
            case 2:
                this.f439a.f(hVar);
                return;
            case 3:
                this.f439a.a(hVar);
                return;
            case 4:
                this.f439a.c(hVar);
                return;
            case 5:
                this.f439a.d(hVar);
                return;
            case 6:
                this.f439a.e(hVar);
                return;
            case 7:
                throw new IllegalArgumentException("ON_ANY must not been send by anybody");
            default:
                return;
        }
    }
}
