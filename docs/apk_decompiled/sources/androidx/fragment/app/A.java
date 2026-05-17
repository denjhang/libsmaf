package androidx.fragment.app;

import android.graphics.Rect;
import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class A implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Fragment f266a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ Fragment f267b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ boolean f268c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ b.b.b f269d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ View f270e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ L f271f;
    final /* synthetic */ Rect g;

    A(Fragment fragment, Fragment fragment2, boolean z, b.b.b bVar, View view, L l, Rect rect) {
        this.f266a = fragment;
        this.f267b = fragment2;
        this.f268c = z;
        this.f269d = bVar;
        this.f270e = view;
        this.f271f = l;
        this.g = rect;
    }

    @Override // java.lang.Runnable
    public void run() {
        C.a(this.f266a, this.f267b, this.f268c, (b.b.b<String, View>) this.f269d, false);
        View view = this.f270e;
        if (view != null) {
            this.f271f.a(view, this.g);
        }
    }
}
