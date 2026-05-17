package jp.co.ymm.android.ringtone.util;

import android.accessibilityservice.AccessibilityServiceInfo;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.Notification;
import android.content.Context;
import android.content.SharedPreferences;
import android.media.AudioManager;
import android.os.Build;
import android.telephony.TelephonyManager;
import android.view.accessibility.AccessibilityManager;
import android.widget.CheckBox;
import android.widget.TextView;
import java.util.Iterator;
import java.util.List;
import java.util.Timer;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.player.PlayerService;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class l {
    public static void a(Context context, String str) {
        SharedPreferences sharedPreferences = context.getSharedPreferences(o.L, 0);
        if (!sharedPreferences.contains(o.Tone_Carrier.name())) {
            g.g("unset tone");
            return;
        }
        AudioManager audioManager = (AudioManager) context.getApplicationContext().getSystemService("audio");
        if (z.b(audioManager)) {
            g.a("manner mode");
            return;
        }
        if (i(context)) {
            return;
        }
        if (!PlayerService.a(context)) {
            PlayerService.b(context);
        }
        int iC = c(context, str);
        z.a(audioManager, iC, true);
        sharedPreferences.edit().putInt(o.Mute_System_Volume.name(), iC).apply();
        g.a("STREAM: " + iC + " is muted");
        new Timer().schedule(new h(audioManager, iC, sharedPreferences), 20000L);
    }

    public static boolean a(Activity activity) {
        if (!a((Context) activity)) {
            return false;
        }
        if (f(activity)) {
            return true;
        }
        a(activity, o.AccessibilityService_Accepted);
        return true;
    }

    public static boolean a(Activity activity, o oVar) {
        if (z.a((Context) activity, oVar.name(), false)) {
            return false;
        }
        MyApplication.c(activity);
        ((BaseActivity) activity).a(24, 2131296274, new k(activity, oVar));
        return true;
    }

    public static boolean a(Notification notification) {
        if (Build.VERSION.SDK_INT < 21) {
            return true;
        }
        g.a("Notification: " + notification.category);
        return "email".equals(notification.category);
    }

    public static boolean a(Context context) {
        if (Build.MODEL.equals("SH-03C")) {
            return false;
        }
        return z.a(context, 2131493130, 2131492953);
    }

    public static void b(Context context, String str) {
        SharedPreferences sharedPreferences = context.getSharedPreferences(o.L, 0);
        if (!sharedPreferences.contains(o.Tone_Carrier.name())) {
            g.g("unset tone");
            return;
        }
        AudioManager audioManager = (AudioManager) context.getApplicationContext().getSystemService("audio");
        if (z.b(audioManager)) {
            g.a("manner mode");
            return;
        }
        if (i(context)) {
            return;
        }
        if (!PlayerService.a(context)) {
            PlayerService.b(context);
        }
        int iC = c(context, str);
        z.a(audioManager, iC, true);
        g.a("STREAM: " + iC + " is muted");
        z.a(context.getApplicationContext(), PlayerService.a(context, sharedPreferences.getString(o.Tone_Carrier.name(), ""), l(context)), sharedPreferences.getInt(o.Volume_Mail.name(), o.M), jp.co.ymm.android.ringtone.player.l.CarrierMail, sharedPreferences.getInt(o.Ring_Time.name(), o.N), iC);
    }

    public static boolean b(Activity activity) {
        if (!h(activity) || f(activity)) {
            return false;
        }
        a(activity, o.AccessibilityService_Gmail_Accepted);
        return true;
    }

    public static boolean b(Context context) {
        return z.a(context, 2131493034) || z.a(context, 2131493033);
    }

    private static int c(Context context, String str) {
        return (!f(context).equals(o.T) || str.equals(context.getString(2131492953))) ? 2 : 5;
    }

    public static boolean c(Activity activity) {
        if (!c((Context) activity)) {
            return false;
        }
        if (!b((Context) activity) && !k(activity)) {
            g(activity);
            return true;
        }
        if (f(activity)) {
            return true;
        }
        a(activity, o.AccessibilityService_Accepted);
        return true;
    }

    public static boolean c(Context context) {
        return z.a(context, 2131493040, 2131493034, 2131493033);
    }

    public static boolean d(Activity activity) {
        if (d((Context) activity) && !f(activity) && a(activity, o.AccessibilityService_Plus_Message_Accepted)) {
            return true;
        }
        if (!f((Context) activity).equals(o.V)) {
            return false;
        }
        e(activity);
        return false;
    }

    public static boolean d(Context context) {
        CharSequence charSequenceA = z.a(context, context.getString(2131493000));
        if (charSequenceA != null && charSequenceA.toString().contains("＋メッセージ")) {
            return true;
        }
        CharSequence charSequenceA2 = z.a(context, context.getString(2131493041));
        if (charSequenceA2 != null && charSequenceA2.toString().contains("＋メッセージ")) {
            return true;
        }
        CharSequence charSequenceA3 = z.a(context, context.getString(2131493129));
        return charSequenceA3 != null && charSequenceA3.toString().contains("＋メッセージ");
    }

    public static boolean e(Activity activity) {
        if (!e((Context) activity)) {
            return false;
        }
        g(activity);
        return true;
    }

    public static boolean e(Context context) {
        z.a(context, 2131493128);
        return false;
    }

    public static String f(Context context) {
        TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
        return (telephonyManager.getSimOperatorName().toUpperCase().trim().equals(o.P.toUpperCase()) || telephonyManager.getNetworkOperatorName().toUpperCase().trim().equals(o.P.toUpperCase())) ? o.T : (telephonyManager.getSimOperatorName().toUpperCase().trim().equals(o.Q.toUpperCase()) || telephonyManager.getNetworkOperatorName().toUpperCase().trim().equals(o.Q.toUpperCase()) || telephonyManager.getSimOperatorName().toUpperCase().trim().equals(o.R.toUpperCase()) || telephonyManager.getNetworkOperatorName().toUpperCase().trim().equals(o.R.toUpperCase())) ? o.U : (telephonyManager.getSimOperatorName().toUpperCase().trim().equals(o.S.toUpperCase()) || telephonyManager.getNetworkOperatorName().toUpperCase().trim().equals(o.S.toUpperCase())) ? o.V : "";
    }

    public static boolean f(Activity activity) {
        List<AccessibilityServiceInfo> listA = b.d.d.a.a.a((AccessibilityManager) activity.getSystemService("accessibility"), 16);
        g.a("getEnabledAccessibilityServiceList: " + listA.size());
        Iterator<AccessibilityServiceInfo> it = listA.iterator();
        while (it.hasNext()) {
            if (b.d.a.a.a(b.d.a.a.a(it.next())).startsWith(activity.getPackageName())) {
                return true;
            }
        }
        return false;
    }

    public static String g(Context context) {
        int identifier;
        String strF = f(context);
        if (strF.equals(o.T) || strF.equals(o.U) || strF.equals(o.V)) {
            identifier = context.getResources().getIdentifier("title_carrier_" + strF, "string", "jp.co.ymm.android.ringtone");
        } else {
            identifier = 2131493150;
        }
        return context.getString(identifier);
    }

    public static boolean g(Activity activity) {
        BaseActivity baseActivity;
        int i;
        int i2;
        SharedPreferences sharedPreferences = activity.getSharedPreferences(o.L, 0);
        if (sharedPreferences.getBoolean(o.CarrierMail_Alert_Hidden.name(), false)) {
            return false;
        }
        String strF = f((Context) activity);
        if (strF.equals("")) {
            return false;
        }
        MyApplication.c(activity);
        int identifier = activity.getResources().getIdentifier(strF + "_mail_alert_title", "string", "jp.co.ymm.android.ringtone");
        int identifier2 = activity.getResources().getIdentifier(strF + "_mail_alert_gomail", "string", "jp.co.ymm.android.ringtone");
        i iVar = new i(activity, strF);
        if (strF.equals(o.U)) {
            baseActivity = (BaseActivity) activity;
            i = 23;
            i2 = 2131296275;
            identifier2 = -1;
        } else {
            baseActivity = (BaseActivity) activity;
            i = 23;
            i2 = 2131296276;
        }
        baseActivity.a(i, identifier, i2, identifier2, iVar);
        AlertDialog alertDialogE = ((BaseActivity) activity).e();
        ((CheckBox) alertDialogE.findViewById(2131165222)).setOnClickListener(new j(sharedPreferences));
        ((TextView) alertDialogE.findViewById(2131165200)).setText(activity.getResources().getIdentifier(strF + "_mail_alert_text", "string", "jp.co.ymm.android.ringtone"));
        return true;
    }

    public static boolean h(Context context) {
        List<Integer> listA = z.a(context, "com.google.android.gm", 128);
        return listA != null && listA.size() >= 1 && listA.get(0).intValue() >= 7;
    }

    public static boolean i(Context context) {
        if (((TelephonyManager) context.getSystemService("phone")).getCallState() != 2) {
            return false;
        }
        g.g("in call");
        return true;
    }

    public static void j(Context context) {
        b(context, "");
    }

    private static boolean k(Context context) {
        if (Build.VERSION.SDK_INT < 26) {
            return false;
        }
        return z.a(context, 2131493040);
    }

    private static String l(Context context) {
        String strF = f(context);
        return strF.equals(o.T) ? "spモードメール" : strF.equals(o.U) ? "Eメール" : strF.equals(o.V) ? "S!メール" : "";
    }
}
