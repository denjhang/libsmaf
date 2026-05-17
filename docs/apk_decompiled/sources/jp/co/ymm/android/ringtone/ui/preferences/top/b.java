package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.content.Context;
import android.content.DialogInterface;
import jp.co.ymm.android.ringtone.util.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f3855a;

    b(Context context) {
        this.f3855a = context;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        if (i2 == -1) {
            AddContentDialogPreference.b(this.f3855a);
        } else if (i2 == -2) {
            dialogInterface.cancel();
        }
    }
}
