package jp.co.ymm.android.ringtone.player;

import java.util.TimerTask;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g extends TimerTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ h f3722a;

    g(h hVar) {
        this.f3722a = hVar;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public void run() {
        this.f3722a.d();
    }
}
