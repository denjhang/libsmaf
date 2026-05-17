package androidx.fragment.app;

/* JADX INFO: renamed from: androidx.fragment.app.d, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class RunnableC0040d implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Fragment f376a;

    RunnableC0040d(Fragment fragment) {
        this.f376a = fragment;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f376a.c();
    }
}
