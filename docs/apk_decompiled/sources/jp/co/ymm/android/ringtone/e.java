package jp.co.ymm.android.ringtone;

import android.app.Activity;
import jp.co.ymm.android.ringtone.util.p;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e implements p.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ MyApplication f3601a;

    e(MyApplication myApplication) {
        this.f3601a = myApplication;
    }

    @Override // jp.co.ymm.android.ringtone.util.p.b
    public void a(Long l, Activity activity) {
        if (this.f3601a.a(l, activity)) {
            this.f3601a.g(activity);
        }
    }
}
