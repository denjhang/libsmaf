package jp.co.ymm.android.ringtone;

import android.app.Activity;
import android.content.DialogInterface;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.p;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ p f3602a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ MyApplication f3603b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ Activity f3604c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ MyApplication f3605d;

    f(MyApplication myApplication, p pVar, MyApplication myApplication2, Activity activity) {
        this.f3605d = myApplication;
        this.f3602a = pVar;
        this.f3603b = myApplication2;
        this.f3604c = activity;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        if (i2 == -1) {
            this.f3602a.b();
            this.f3603b.g(this.f3604c);
        } else if (i2 == -2) {
            ((BaseActivity) this.f3604c).a();
            this.f3604c.finish();
        }
    }
}
