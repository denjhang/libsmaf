package jp.co.ymm.android.ringtone.player;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PlayerService f3735a;

    i(PlayerService playerService) {
        this.f3735a = playerService;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        jp.co.ymm.android.ringtone.util.g.a("android.media.AUDIO_BECOMING_NOISY".equals(intent.getAction()));
        this.f3735a.b();
    }
}
