package jp.co.ymm.android.ringtone;

import android.app.Activity;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SharedPreferences f3598a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f3599b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ Activity f3600c;

    d(SharedPreferences sharedPreferences, String str, Activity activity) {
        this.f3598a = sharedPreferences;
        this.f3599b = str;
        this.f3600c = activity;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        SharedPreferences.Editor editorEdit = this.f3598a.edit();
        editorEdit.putBoolean(o.Welcome.name(), true);
        editorEdit.apply();
        if (i2 != -2) {
            MyApplication.a((BaseActivity) this.f3600c, true);
        } else {
            this.f3600c.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(this.f3599b)));
        }
    }
}
