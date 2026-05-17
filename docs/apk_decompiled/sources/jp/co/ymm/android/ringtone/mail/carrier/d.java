package jp.co.ymm.android.ringtone.mail.carrier;

import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f3624a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f3625b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ RingtoneListener f3626c;

    d(RingtoneListener ringtoneListener, String str, int i) {
        this.f3626c = ringtoneListener;
        this.f3624a = str;
        this.f3625b = i;
    }

    @Override // java.lang.Runnable
    public void run() {
        z.a(this.f3626c, this.f3624a, this.f3625b, l.Phone);
    }
}
