package jp.co.ymm.android.ringtone.util;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.widget.CheckBox;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.util.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class k implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Activity f3885a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ o f3886b;

    k(Activity activity, o oVar) {
        this.f3885a = activity;
        this.f3886b = oVar;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        if (i2 != -1) {
            if (i2 == -2) {
                if (((CheckBox) ((AlertDialog) dialogInterface).findViewById(2131165222)).isChecked()) {
                    z.b((Context) this.f3885a, this.f3886b.name(), true);
                }
            }
            if (this.f3886b == o.AccessibilityService_Plus_Message_Accepted || !l.f((Context) this.f3885a).equals(o.V)) {
            }
            l.e(this.f3885a);
            return;
        }
        this.f3885a.startActivity(new Intent("android.settings.ACCESSIBILITY_SETTINGS"));
        dialogInterface.cancel();
        MyApplication.d(this.f3885a);
        if (this.f3886b == o.AccessibilityService_Plus_Message_Accepted) {
        }
    }
}
