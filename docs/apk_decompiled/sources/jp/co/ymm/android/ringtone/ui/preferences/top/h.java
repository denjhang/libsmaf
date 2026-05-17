package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.widget.SeekBar;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SeekBar f3862a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ RingtoneVolumePreference f3863b;

    h(RingtoneVolumePreference ringtoneVolumePreference, SeekBar seekBar) {
        this.f3863b = ringtoneVolumePreference;
        this.f3862a = seekBar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f3862a.setEnabled(true);
    }
}
