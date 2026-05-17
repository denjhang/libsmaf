package jp.co.ymm.android.ringtone.util;

import android.content.SharedPreferences;
import android.media.AudioManager;
import java.util.TimerTask;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h extends TimerTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ AudioManager f3879a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f3880b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ SharedPreferences f3881c;

    h(AudioManager audioManager, int i, SharedPreferences sharedPreferences) {
        this.f3879a = audioManager;
        this.f3880b = i;
        this.f3881c = sharedPreferences;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public void run() {
        z.a(this.f3879a, this.f3880b, false);
        this.f3881c.edit().remove(o.Mute_System_Volume.name()).apply();
        g.a("STREAM: " + this.f3880b + " is unmuted");
    }
}
