package jp.co.ymm.android.ringtone.mail.carrier;

import java.util.TimerTask;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e extends TimerTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SpmodeMailService f3627a;

    e(SpmodeMailService spmodeMailService) {
        this.f3627a = spmodeMailService;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public void run() {
        this.f3627a.f3618a = true;
    }
}
