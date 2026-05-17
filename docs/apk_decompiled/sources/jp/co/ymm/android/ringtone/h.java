package jp.co.ymm.android.ringtone;

import android.app.Activity;
import android.content.DialogInterface;
import jp.co.ymm.android.ringtone.util.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Activity f3606a;

    h(Activity activity) {
        this.f3606a = activity;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        this.f3606a.finish();
    }
}
