package androidx.fragment.app;

/* JADX INFO: renamed from: androidx.fragment.app.f, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class C0042f implements androidx.lifecycle.h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Fragment f378a;

    C0042f(Fragment fragment) {
        this.f378a = fragment;
    }

    @Override // androidx.lifecycle.h
    public androidx.lifecycle.f a() {
        Fragment fragment = this.f378a;
        if (fragment.V == null) {
            fragment.V = new androidx.lifecycle.j(fragment.W);
        }
        return this.f378a.V;
    }
}
