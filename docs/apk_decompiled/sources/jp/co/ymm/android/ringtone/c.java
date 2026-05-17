package jp.co.ymm.android.ringtone;

import android.app.Activity;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SharedPreferences f3555a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ Activity f3556b;

    c(SharedPreferences sharedPreferences, Activity activity) {
        this.f3555a = sharedPreferences;
        this.f3556b = activity;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        if (i2 == -1) {
            SharedPreferences.Editor editorEdit = this.f3555a.edit();
            editorEdit.putBoolean(o.Welcome.name(), true);
            editorEdit.apply();
        }
        MyApplication.a((BaseActivity) this.f3556b, true);
    }
}
