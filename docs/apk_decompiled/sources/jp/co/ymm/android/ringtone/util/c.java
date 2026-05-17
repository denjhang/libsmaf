package jp.co.ymm.android.ringtone.util;

import android.app.Activity;
import android.content.Context;
import android.os.PowerManager;
import d.a.a.a.m;
import java.net.MalformedURLException;
import java.net.URL;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static PowerManager.WakeLock f3870a;

    public static String a(String str, String str2) {
        if (str != null && str2 != null && !str.equals("") && !str2.equals("")) {
            try {
                return new URL(str2).getHost();
            } catch (MalformedURLException unused) {
            }
        }
        return null;
    }

    public static void a() {
        g.f("Releasing cpu wake lock");
        PowerManager.WakeLock wakeLock = f3870a;
        if (wakeLock != null) {
            wakeLock.release();
            f3870a = null;
        }
    }

    public static void a(Activity activity, d.a.a.a.m mVar) {
        int iE;
        if (!c(activity) || (iE = z.e(activity)) == -1) {
            return;
        }
        new d.a.a.a.m(activity, activity.getString(com.yamaha.smafsynth.sample.d.app_name), activity.getString(2131492895), iE).a(true, 1440, (m.g) new b());
    }

    public static void a(Context context) {
        g.f("Acquiring cpu wake lock");
        if (f3870a != null) {
            return;
        }
        f3870a = ((PowerManager) context.getSystemService("power")).newWakeLock(805306378, "ActivityUtil_");
        f3870a.acquire();
    }

    public static String b(Context context) {
        return new BookmarkAgent(context).d();
    }

    public static boolean c(Context context) {
        jp.co.ymm.android.ringtone.a.a aVar = new jp.co.ymm.android.ringtone.a.a(context);
        return aVar.b(aVar.getWritableDatabase()).booleanValue();
    }

    public static boolean d(Context context) {
        String strC = z.c(context);
        if (strC == null) {
            return false;
        }
        return strC.equals("com.android.vending") || strC.equals("com.google.android.feedback");
    }
}
