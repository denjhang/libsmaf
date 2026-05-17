package jp.co.acrodea.runtime.drm.agent;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class n extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ m f3376a;

    n(m mVar) {
        this.f3376a = mVar;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        this.f3376a.f3370a.onShutdowned();
    }
}
