package jp.co.ymm.android.ringtone.mail.carrier;

import android.content.Context;
import java.util.TimerTask;
import jp.co.ymm.android.ringtone.util.l;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b extends TimerTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f3620a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ CarrierMailReceiver f3621b;

    b(CarrierMailReceiver carrierMailReceiver, Context context) {
        this.f3621b = carrierMailReceiver;
        this.f3620a = context;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public void run() {
        l.j(this.f3620a);
    }
}
