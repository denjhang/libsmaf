package jp.co.ymm.android.ringtone.player;

import java.util.TimerTask;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class m extends TimerTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f3744a = false;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ n f3745b;

    m(n nVar) {
        this.f3745b = nVar;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public void run() {
        if (this.f3745b.g.a() != this.f3745b.g.b()) {
            this.f3744a = false;
            return;
        }
        if (this.f3744a) {
            jp.co.ymm.android.ringtone.util.g.d("Player stopped");
            this.f3745b.a(true);
        }
        this.f3744a = true;
    }
}
