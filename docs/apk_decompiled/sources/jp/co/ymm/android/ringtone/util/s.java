package jp.co.ymm.android.ringtone.util;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class s implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ t f3923a;

    s(t tVar) {
        this.f3923a = tVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f3923a.f3927d = false;
        this.f3923a.f3925b.stopLoading();
    }
}
