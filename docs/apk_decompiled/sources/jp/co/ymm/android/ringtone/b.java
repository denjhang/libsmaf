package jp.co.ymm.android.ringtone;

import android.app.Activity;
import java.util.List;
import jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener;
import jp.co.ymm.android.ringtone.util.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements n.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Activity f3502a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ MyApplication f3503b;

    b(MyApplication myApplication, Activity activity) {
        this.f3503b = myApplication;
        this.f3502a = activity;
    }

    @Override // jp.co.ymm.android.ringtone.util.n.b
    public void a(List<String> list, boolean z) {
        if (list.contains("android.permission.READ_PHONE_STATE")) {
            RingtoneListener.a(this.f3502a);
        }
        MyApplication.e(this.f3502a);
    }
}
