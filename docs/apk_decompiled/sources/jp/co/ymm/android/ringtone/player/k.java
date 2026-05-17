package jp.co.ymm.android.ringtone.player;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class k implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PlayerService f3737a;

    k(PlayerService playerService) {
        this.f3737a = playerService;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.f3737a.g != null) {
            this.f3737a.g.c();
            this.f3737a.g = null;
            this.f3737a.h.b();
            this.f3737a.h = null;
        }
        this.f3737a.f3711f.quit();
        jp.co.ymm.android.ringtone.util.g.a("Looper.quit");
        if (this.f3737a.i.booleanValue()) {
            this.f3737a.c();
        }
    }
}
