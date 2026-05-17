package jp.co.ymm.android.ringtone.mail.gmail;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.media.AudioManager;
import android.preference.PreferenceManager;
import android.text.TextUtils;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import jp.co.ymm.android.ringtone.player.PlayerService;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.l;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class GmailReceiver extends BroadcastReceiver {
    public static synchronized void a(Context context) {
        if (PlayerService.a(context)) {
            return;
        }
        String strA = z.a(context, o.Tone_Gmail.name(), "");
        if (strA.isEmpty()) {
            g.a("unset tone");
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
        String strA2 = PlayerService.a(context, strA, "Gmail");
        int iD = z.d(context, o.Ring_Time.name(), o.N);
        int iD2 = z.d(context, o.Volume_Mail.name(), o.M);
        g.a("startPlayer toneId:" + strA2 + ", ringTime:" + iD + ", volume:" + iD2);
        z.a(context, strA2, iD2, jp.co.ymm.android.ringtone.player.l.Gmail, iD, 5);
    }

    private static void a(Context context, ArrayList<a> arrayList) {
        SharedPreferences defaultSharedPreferences = PreferenceManager.getDefaultSharedPreferences(context);
        StringBuilder sb = new StringBuilder();
        Iterator<a> it = arrayList.iterator();
        while (it.hasNext()) {
            sb.append(it.next().toString());
            sb.append("\n");
        }
        defaultSharedPreferences.edit().putString("accountlist", sb.toString()).commit();
    }

    public static boolean a(Context context, String str, int i) {
        int i2;
        if (str == null) {
            return false;
        }
        ArrayList<a> arrayListC = c(context);
        boolean z = true;
        if (arrayListC == null) {
            arrayListC = new ArrayList<>(1);
        } else {
            Iterator<a> it = arrayListC.iterator();
            while (true) {
                if (!it.hasNext()) {
                    i2 = -1;
                    break;
                }
                a next = it.next();
                if (next.a(str)) {
                    i2 = next.f3629b;
                    arrayListC.remove(next);
                    break;
                }
            }
            if (i2 != -1 && i <= i2) {
                z = false;
            }
        }
        arrayListC.add(new a(str, i));
        a(context, arrayListC);
        if (i == 0) {
            return false;
        }
        return z;
    }

    private boolean b(Context context) {
        List<Integer> listA = z.a(context, "com.google.android.gm", 128);
        if (listA == null || listA.size() < 2) {
            return false;
        }
        return listA.get(0).intValue() < 7 || (listA.get(0).intValue() == 7 && listA.get(1).intValue() <= 3);
    }

    private static ArrayList<a> c(Context context) {
        ArrayList<a> arrayList = null;
        String string = PreferenceManager.getDefaultSharedPreferences(context).getString("accountlist", null);
        if (!TextUtils.isEmpty(string)) {
            String[] strArrSplit = string.split("\n");
            arrayList = new ArrayList<>(strArrSplit.length);
            for (String str : strArrSplit) {
                int iIndexOf = str.indexOf("-");
                if (-1 < iIndexOf) {
                    arrayList.add(new a(str.substring(iIndexOf + 1), Integer.valueOf((String) str.subSequence(0, iIndexOf)).intValue()));
                }
            }
        }
        return arrayList;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        Context applicationContext = context.getApplicationContext();
        g.d("onReceive(Gmail):" + intent);
        if ("android.intent.action.PROVIDER_CHANGED".equals(intent.getAction()) || "com.android.mail.action.update_notification".equals(intent.getAction())) {
            String stringExtra = intent.getStringExtra("account");
            int intExtra = intent.getIntExtra("count", 0);
            Serializable serializableExtra = intent.getSerializableExtra("getAttention");
            a(applicationContext, stringExtra, intExtra);
            if (intent.getBooleanExtra("getAttention", false) || (serializableExtra == null && intExtra != 0)) {
                if (b(applicationContext) && serializableExtra == null) {
                    g.a("Gmail7.3 And Attention is null");
                } else {
                    a(applicationContext);
                }
            }
        }
    }
}
