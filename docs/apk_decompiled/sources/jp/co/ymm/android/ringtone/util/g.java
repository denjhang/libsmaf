package jp.co.ymm.android.ringtone.util;

import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f3878a = false;

    static StackTraceElement a(int i) {
        StackTraceElement[] stackTrace = new Throwable().getStackTrace();
        int i2 = i + 1;
        return (i2 < 0 || i2 >= stackTrace.length) ? new StackTraceElement("?", "?", "?", 0) : stackTrace[i2];
    }

    public static void a() {
        if (f3878a) {
            Log.v("YmmRingtone", h("<--: "));
        }
    }

    public static void a(String str) {
        if (f3878a) {
            Log.d("YmmRingtone", h(str));
        }
    }

    public static void a(String str, Throwable th) {
        if (f3878a) {
            Log.e("YmmRingtone", h(str), th);
        }
    }

    public static void a(boolean z) {
        if (!f3878a || z) {
            return;
        }
        Log.e("YmmRingtone", h("Assert: "));
        throw new AssertionError();
    }

    public static void a(boolean z, String str) {
        if (!f3878a || z) {
            return;
        }
        Log.e("YmmRingtone", h("Assert: " + str));
        throw new AssertionError();
    }

    public static void b(String str) {
        if (f3878a) {
            Log.e("YmmRingtone", h(str));
        }
    }

    public static void b(String str, Throwable th) {
        if (f3878a) {
            Log.w("YmmRingtone", h(str), th);
        }
    }

    public static void b(boolean z) {
        f3878a = z;
    }

    public static void c(String str) {
        if (f3878a) {
            Log.v("YmmRingtone", h("-->: " + str));
        }
    }

    public static void d(String str) {
        if (f3878a) {
            Log.i("YmmRingtone", h(str));
        }
    }

    static String e(String str) {
        return str.substring(str.lastIndexOf(46) + 1);
    }

    public static void f(String str) {
        if (f3878a) {
            Log.v("YmmRingtone", h(str));
        }
    }

    public static void g(String str) {
        if (f3878a) {
            Log.w("YmmRingtone", h(str));
        }
    }

    private static String h(String str) {
        StackTraceElement stackTraceElementA = a(2);
        return str + String.format(" (%s.%s:%d)", e(stackTraceElementA.getClassName()), stackTraceElementA.getMethodName(), Integer.valueOf(stackTraceElementA.getLineNumber()));
    }
}
