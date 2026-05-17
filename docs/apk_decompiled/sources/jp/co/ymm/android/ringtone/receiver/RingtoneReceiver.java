package jp.co.ymm.android.ringtone.receiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.media.AudioManager;
import java.util.Timer;
import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class RingtoneReceiver extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f3762a = 60;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static boolean f3763b = false;

    private void a(Context context) {
        Timer timer = new Timer();
        f3763b = true;
        timer.schedule(new a(this, context), 200L);
    }

    private static void a(Context context, String str, int i) {
        f3763b = false;
        if (str.equals("")) {
            g.g("unset tone");
            return;
        }
        if (z.b((AudioManager) context.getApplicationContext().getSystemService("audio"))) {
            g.a("manner mode");
            return;
        }
        if (i != 0 && (i < 1 || i > 60)) {
            i = f3762a;
        }
        int i2 = context.getSharedPreferences(o.L, 0).getInt(o.Volume_Mail.name(), o.M);
        z.a(context.getApplicationContext(), str, i2, l.CarrierMail, i, 2);
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        String stringExtra = intent.getStringExtra("method");
        if (!stringExtra.equals("start")) {
            if (stringExtra.equals("stop")) {
                g.a("onReceive(External:stop)");
                a(context);
                return;
            }
            return;
        }
        g.a("onReceive(External:start)");
        String stringExtra2 = intent.getStringExtra("requestId");
        a(context, intent.getParcelableExtra("android.intent.extra.ringtone.EXISTING_URI").toString(), intent.getIntExtra("term", -1));
        g.a("requestId: " + stringExtra2);
    }
}
