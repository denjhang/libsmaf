package jp.co.ymm.android.ringtone;

import android.app.Activity;
import android.content.DialogInterface;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.l;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f3607a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ Activity f3608b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ MyApplication f3609c;

    i(String str, Activity activity, MyApplication myApplication) {
        this.f3607a = str;
        this.f3608b = activity;
        this.f3609c = myApplication;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        if (i2 != -1) {
            if (i2 == -2) {
                jp.co.ymm.android.ringtone.c.a.h.f fVarC = jp.co.ymm.android.ringtone.c.a.h.f.c();
                Activity activity = this.f3608b;
                if (activity instanceof BaseActivity) {
                    ((BaseActivity) activity).a(fVarC);
                }
                ((BaseActivity) this.f3608b).a();
                return;
            }
            return;
        }
        if (this.f3607a.equals(o.T)) {
            l.a(this.f3608b);
        } else if (this.f3607a.equals(o.U)) {
            l.c(this.f3608b);
        } else if (this.f3607a.equals(o.V)) {
            l.e(this.f3608b);
        } else if (o.Tone_Gmail.name().equals(this.f3607a)) {
            l.b(this.f3608b);
        } else if (o.Tone_SMS.name().equals(this.f3607a)) {
            l.d(this.f3608b);
        }
        dialogInterface.cancel();
        this.f3609c.g(this.f3608b);
    }
}
