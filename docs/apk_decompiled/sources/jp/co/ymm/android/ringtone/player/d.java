package jp.co.ymm.android.ringtone.player;

import android.media.MediaPlayer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements MediaPlayer.OnPreparedListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ e f3714a;

    d(e eVar) {
        this.f3714a = eVar;
    }

    @Override // android.media.MediaPlayer.OnPreparedListener
    public void onPrepared(MediaPlayer mediaPlayer) {
        if (!this.f3714a.isPlaying()) {
            jp.co.ymm.android.ringtone.util.g.g("already stopped.");
            return;
        }
        jp.co.ymm.android.ringtone.util.g.d("=> MediaPlayer.start");
        mediaPlayer.setVolume(1.0f, 1.0f);
        mediaPlayer.seekTo(this.f3714a.f3720f);
        mediaPlayer.start();
    }
}
