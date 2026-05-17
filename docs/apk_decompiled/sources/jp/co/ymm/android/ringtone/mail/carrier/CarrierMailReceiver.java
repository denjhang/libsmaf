package jp.co.ymm.android.ringtone.mail.carrier;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import java.util.Timer;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.l;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class CarrierMailReceiver extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if ("android.provider.Telephony.WAP_PUSH_RECEIVED".equals(intent.getAction())) {
            g.a("onReceive(CarrierMail)");
            String strF = l.f(context);
            g.a("Carrier: " + strF);
            if (strF.equals(o.V)) {
                new Timer().schedule(new b(this, context), 5000L);
            }
        }
    }
}
