package jp.co.ymm.android.ringtone.util;

import android.media.AudioManager;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class x implements AudioManager.OnAudioFocusChangeListener {
    x() {
    }

    @Override // android.media.AudioManager.OnAudioFocusChangeListener
    public void onAudioFocusChange(int i) {
        g.d("onAudioFocusChange: " + i);
    }
}
