package jp.co.ymm.android.ringtone.c.a.f;

import java.util.List;
import jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener;
import jp.co.ymm.android.ringtone.util.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements n.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f3579a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ b f3580b;

    a(b bVar, String str) {
        this.f3580b = bVar;
        this.f3579a = str;
    }

    @Override // jp.co.ymm.android.ringtone.util.n.b
    public void a(List<String> list, boolean z) {
        if (list.contains("android.permission.READ_PHONE_STATE")) {
            RingtoneListener.a(this.f3580b.t);
        }
        if (z) {
            this.f3580b.a(this.f3579a);
        }
    }
}
