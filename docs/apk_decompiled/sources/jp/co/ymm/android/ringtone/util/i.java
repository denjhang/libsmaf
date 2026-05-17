package jp.co.ymm.android.ringtone.util;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.ComponentName;
import android.content.DialogInterface;
import android.content.Intent;
import android.widget.Toast;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.util.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Activity f3882a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f3883b;

    i(Activity activity, String str) {
        this.f3882a = activity;
        this.f3883b = str;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        if (i2 != -1) {
            if (i2 != -2 || this.f3883b.equals(o.U)) {
                return;
            }
            try {
                Intent intent = new Intent("android.intent.action.MAIN");
                intent.setComponent(new ComponentName(this.f3882a.getString(this.f3882a.getResources().getIdentifier(this.f3883b + "_mail_package", "string", "jp.co.ymm.android.ringtone")), this.f3882a.getString(this.f3882a.getResources().getIdentifier(this.f3883b + "_mail_activity", "string", "jp.co.ymm.android.ringtone"))));
                this.f3882a.startActivity(intent);
            } catch (ActivityNotFoundException | SecurityException unused) {
                Activity activity = this.f3882a;
                Toast.makeText(activity, activity.getText(2131492943), 0).show();
            }
        }
        dialogInterface.cancel();
        MyApplication.d(this.f3882a);
    }
}
