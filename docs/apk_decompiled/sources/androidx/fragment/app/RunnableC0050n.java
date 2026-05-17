package androidx.fragment.app;

import android.view.View;

/* JADX INFO: renamed from: androidx.fragment.app.n, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class RunnableC0050n implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ o f387a;

    RunnableC0050n(o oVar) {
        this.f387a = oVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.f387a.f389c.g() != null) {
            this.f387a.f389c.a((View) null);
            o oVar = this.f387a;
            s sVar = oVar.f390d;
            Fragment fragment = oVar.f389c;
            sVar.a(fragment, fragment.x(), 0, 0, false);
        }
    }
}
