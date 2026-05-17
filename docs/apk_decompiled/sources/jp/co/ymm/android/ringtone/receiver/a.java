package jp.co.ymm.android.ringtone.receiver;

import android.content.Context;
import android.content.Intent;
import java.util.TimerTask;
import jp.co.ymm.android.ringtone.player.PlayerService;
import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a extends TimerTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f3764a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ RingtoneReceiver f3765b;

    a(RingtoneReceiver ringtoneReceiver, Context context) {
        this.f3765b = ringtoneReceiver;
        this.f3764a = context;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public void run() {
        if (RingtoneReceiver.f3763b) {
            g.a("stopRingtone");
            Intent intent = new Intent(this.f3764a.getApplicationContext(), (Class<?>) PlayerService.class);
            intent.setAction("jp.co.ymm.android.ringtone.action.STOP");
            intent.putExtra("ringtone-type", l.CarrierMail.name());
            this.f3764a.startService(intent);
            boolean unused = RingtoneReceiver.f3763b = false;
        }
    }
}
