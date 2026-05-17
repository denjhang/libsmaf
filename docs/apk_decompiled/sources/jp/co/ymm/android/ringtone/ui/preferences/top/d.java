package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.content.DialogInterface;
import jp.co.ymm.android.ringtone.util.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PlayKeyDialogPreference f3857a;

    d(PlayKeyDialogPreference playKeyDialogPreference) {
        this.f3857a = playKeyDialogPreference;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        if (i2 == -1) {
            dialogInterface.cancel();
        } else if (i2 == -2) {
            super/*android.preference.DialogPreference*/.onClick();
        }
    }
}
