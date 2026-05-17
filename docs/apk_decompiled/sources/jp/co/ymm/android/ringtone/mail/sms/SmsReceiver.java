package jp.co.ymm.android.ringtone.mail.sms;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.media.AudioManager;
import android.os.Bundle;
import android.telephony.SmsMessage;
import jp.co.ymm.android.ringtone.player.PlayerService;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.l;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class SmsReceiver extends BroadcastReceiver {
    private String a(Intent intent) {
        SmsMessage smsMessageCreateFromPdu;
        Bundle extras = intent.getExtras();
        if (extras == null) {
            return "";
        }
        Object[] objArr = (Object[]) extras.get("pdus");
        return (objArr.length <= 0 || (smsMessageCreateFromPdu = SmsMessage.createFromPdu((byte[]) objArr[0])) == null) ? "" : smsMessageCreateFromPdu.getOriginatingAddress();
    }

    public static synchronized void a(Context context) {
        if (PlayerService.a(context)) {
            return;
        }
        String strA = z.a(context, o.Tone_SMS.name(), "");
        if (strA.isEmpty()) {
            g.g("unset tone");
            return;
        }
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        if (z.b(audioManager)) {
            g.a("manner mode");
            return;
        }
        if (l.i(context)) {
            return;
        }
        PlayerService.b(context);
        z.a(audioManager, 5, true);
        g.a("STREAM_NOTIFICATION(5) is muted");
        z.a(context, PlayerService.a(context, strA, "SMS"), z.d(context, o.Volume_Mail.name(), o.M), jp.co.ymm.android.ringtone.player.l.SMS, z.d(context, o.Ring_Time.name(), o.N), 5);
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        Bundle extras;
        Context applicationContext = context.getApplicationContext();
        if ("android.provider.Telephony.SMS_RECEIVED".equals(intent.getAction()) && (extras = intent.getExtras()) != null) {
            for (Object obj : (Object[]) extras.get("pdus")) {
                SmsMessage smsMessageCreateFromPdu = SmsMessage.createFromPdu((byte[]) obj);
                if (smsMessageCreateFromPdu.getOriginatingAddress() == null || smsMessageCreateFromPdu.getOriginatingAddress().equals("")) {
                    return;
                }
            }
            g.d("onReceive(SMS): " + a(intent));
            a(applicationContext);
        }
    }
}
