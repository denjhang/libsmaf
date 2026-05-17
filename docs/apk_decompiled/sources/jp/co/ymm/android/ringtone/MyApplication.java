package jp.co.ymm.android.ringtone;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.app.Application;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.os.Build;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.widget.CheckBox;
import android.widget.Toast;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.List;
import jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.BookmarkAgent;
import jp.co.ymm.android.ringtone.util.l;
import jp.co.ymm.android.ringtone.util.m;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.p;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class MyApplication extends Application {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f3458a = "armeabi-v7a";

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static String f3459b = "arm64-v8a";

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3460c = 0;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public boolean f3461d = true;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public boolean f3462e = true;

    public static String a(Context context) {
        return context.getPackageName() + "RingAlarm";
    }

    public static List<String> a() {
        return Build.VERSION.SDK_INT < 21 ? Arrays.asList(Build.CPU_ABI, Build.CPU_ABI2) : Arrays.asList(Build.SUPPORTED_ABIS);
    }

    private void a(String str, int i, boolean z) {
        a(str, getString(i), z);
    }

    private void a(String str, CharSequence charSequence, boolean z) {
        if (Build.VERSION.SDK_INT >= 26) {
            NotificationChannel notificationChannel = new NotificationChannel(str, charSequence, z ? 4 : 2);
            NotificationManager notificationManager = (NotificationManager) getSystemService(NotificationManager.class);
            if (notificationManager == null) {
                jp.co.ymm.android.ringtone.util.g.a("notificationManager == null", new Throwable());
            } else {
                notificationManager.createNotificationChannel(notificationChannel);
            }
        }
    }

    public static void a(BaseActivity baseActivity, boolean z) {
        boolean z2 = !z.a((Context) baseActivity, o.Play_Key_Heads_Up.name(), false);
        if (((MyApplication) baseActivity.getApplicationContext()).f3461d) {
            boolean z3 = n.a(baseActivity, "android.permission.READ_PHONE_STATE") && n.a(baseActivity, "android.permission.WRITE_EXTERNAL_STORAGE") && n.a(baseActivity, "android.permission.READ_CONTACTS");
            boolean z4 = !z.a((Context) baseActivity, o.Welcome.name(), false);
            if (Build.VERSION.SDK_INT < 23 && z4) {
                z3 = false;
            }
            if (z2) {
                if (z || z3) {
                    ((MyApplication) baseActivity.getApplicationContext()).f3461d = false;
                    baseActivity.a(41, 2131296279, z.a(z.d(z.a(m.e().h(), true))));
                }
            }
        }
    }

    public static boolean a(Activity activity) {
        return a(activity, "");
    }

    public static boolean a(Activity activity, String str) {
        if (!e((Context) activity)) {
            if (str.equals(o.T)) {
                l.a(activity);
            } else if (str.equals(o.U)) {
                l.c(activity);
            } else if (str.equals(o.V)) {
                l.e(activity);
            } else if (o.Tone_Gmail.name().equals(str)) {
                l.b(activity);
            } else if (o.Tone_SMS.name().equals(str)) {
                l.d(activity);
            }
            return false;
        }
        SharedPreferences sharedPreferences = activity.getSharedPreferences(o.L, 0);
        if (!sharedPreferences.getBoolean(o.Launch_Alert_Hidden.name(), false)) {
            LayoutInflater.from(activity).inflate(2131296278, (ViewGroup) null);
            BaseActivity baseActivity = (BaseActivity) activity;
            baseActivity.a(32, 2131296278, new i(str, activity, (MyApplication) activity.getApplication()));
            ((CheckBox) baseActivity.e().findViewById(2131165222)).setOnClickListener(new a(sharedPreferences));
            return true;
        }
        if (str.equals(o.T)) {
            l.a(activity);
        } else if (str.equals(o.U)) {
            l.c(activity);
        } else if (str.equals(o.V)) {
            l.e(activity);
        } else if (o.Tone_Gmail.name().equals(str)) {
            l.b(activity);
        } else if (o.Tone_SMS.name().equals(str)) {
            l.d(activity);
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    @SuppressLint({"SetJavaScriptEnabled"})
    public boolean a(Long l, Activity activity) {
        p pVar = new p(activity);
        if (l.longValue() < 0) {
            if (pVar.a()) {
                return true;
            }
            Toast.makeText(activity, 2131493173, 0).show();
            activity.finish();
            return false;
        }
        if (pVar.a(l)) {
            pVar.b();
            return true;
        }
        WebView webView = new WebView(activity);
        webView.getSettings().setJavaScriptEnabled(true);
        webView.getSettings().setCacheMode(2);
        webView.setWebChromeClient(new WebChromeClient());
        BaseActivity baseActivity = (BaseActivity) activity;
        baseActivity.a(31, webView, new f(this, pVar, (MyApplication) activity.getApplication(), activity));
        webView.setWebViewClient(new g(this, activity, webView, 30000));
        webView.loadUrl(String.format(activity.getString(2131493182, new Object[]{String.valueOf(z.e(activity))}), ""));
        baseActivity.b(false);
        return false;
    }

    public static String b(Context context) {
        return context.getPackageName() + "DownloadProgress";
    }

    public static boolean b() {
        List<String> listA = a();
        jp.co.ymm.android.ringtone.util.g.d("Arch: " + listA.toString());
        return listA.contains(f3459b) || listA.contains(f3458a);
    }

    public static boolean b(Activity activity) {
        if (b() && f((Context) activity)) {
            return true;
        }
        ((BaseActivity) activity).a(30, new h(activity));
        return false;
    }

    public static String c(Context context) {
        return context.getPackageName() + "FileNotFound";
    }

    public static void c(Activity activity) {
        if (activity.getResources().getConfiguration().orientation == 1) {
            activity.setRequestedOrientation(1);
        } else {
            activity.setRequestedOrientation(0);
        }
    }

    public static String d(Context context) {
        return context.getPackageName() + "AppResident";
    }

    public static void d(Activity activity) {
        activity.setRequestedOrientation(-1);
    }

    public static boolean e(Activity activity) {
        SharedPreferences sharedPreferences = activity.getSharedPreferences(o.L, 0);
        if (sharedPreferences.getBoolean(o.Welcome.name(), false)) {
            return true;
        }
        String strB = new BookmarkAgent(activity).b();
        if (strB == null || strB.length() == 0) {
            ((BaseActivity) activity).a(33, new c(sharedPreferences, activity));
        } else {
            ((BaseActivity) activity).a(34, new d(sharedPreferences, strB, activity));
        }
        return false;
    }

    public static boolean e(Context context) {
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(context.getResources().getAssets().open("preinstalled/gray.list")));
            int i = 1;
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    return false;
                }
                if (!line.matches("^\\s*(#.*)*$")) {
                    String[] strArrSplit = line.split("=", 2);
                    if (strArrSplit.length != 2) {
                        throw new Exception("syntax error... : preinstalled/gray.list:" + i + ":\"" + line + "\"");
                    }
                    String str = strArrSplit[0];
                    String str2 = strArrSplit[1];
                    String str3 = (String) Build.class.getField(str).get(null);
                    if (str3.matches(str2)) {
                        jp.co.ymm.android.ringtone.util.g.b("match GrayList! : value=\"" + str3 + "\", preinstalled/gray.list:" + i + ":\"" + line + "\"");
                        return true;
                    }
                }
                i++;
            }
        } catch (Exception e2) {
            throw new Error("do not happen...", e2);
        }
    }

    public static boolean f(Context context) {
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(context.getResources().getAssets().open("preinstalled/black.list")));
            int i = 1;
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    return true;
                }
                if (!line.matches("^\\s*(#.*)*$")) {
                    String[] strArrSplit = line.split("=", 2);
                    if (strArrSplit.length != 2) {
                        throw new Exception("syntax error... : preinstalled/black.list:" + i + ":\"" + line + "\"");
                    }
                    String str = strArrSplit[0];
                    String str2 = strArrSplit[1];
                    String str3 = (String) Build.class.getField(str).get(null);
                    if (str3.matches(str2)) {
                        jp.co.ymm.android.ringtone.util.g.b("match BlackList! : value=\"" + str3 + "\", preinstalled/black.list:" + i + ":\"" + line + "\"");
                        return false;
                    }
                }
                i++;
            }
        } catch (Exception e2) {
            throw new Error("do not happen...", e2);
        }
    }

    private static boolean g(Context context) {
        ApplicationInfo applicationInfoA = z.a(context);
        return (applicationInfoA == null || (applicationInfoA.flags & 2) == 0) ? false : true;
    }

    private void h(Activity activity) {
        p pVar = new p(activity);
        pVar.a(new e(this));
        pVar.a(activity);
    }

    private void i(Activity activity) {
        while (true) {
            int i = this.f3460c;
            if (i != 0) {
                if (i == 1) {
                    h(activity);
                    return;
                } else if (i != 2) {
                    if (i != 3 || !j(activity)) {
                        return;
                    }
                } else if (a(activity)) {
                    return;
                }
            } else if (!b(activity)) {
                return;
            }
            this.f3460c++;
        }
    }

    private boolean j(Activity activity) {
        boolean z = !n.a().a(activity, new b(this, activity), "android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.READ_PHONE_STATE", "android.permission.READ_CONTACTS");
        if (n.a(activity, "android.permission.READ_PHONE_STATE")) {
            RingtoneListener.a(activity);
        }
        return z ? e(activity) : activity.getSharedPreferences(o.L, 0).getBoolean(o.Welcome.name(), false);
    }

    public void f(Activity activity) {
        this.f3460c = 0;
        i(activity);
    }

    public void g(Activity activity) {
        this.f3460c++;
        i(activity);
    }

    @Override // android.app.Application
    public void onCreate() {
        super.onCreate();
        boolean zG = g(this);
        jp.co.ymm.android.ringtone.util.g.b(zG);
        if (b()) {
            m.a(this, zG);
            jp.co.ymm.android.ringtone.b.d.a(this);
            jp.co.ymm.android.ringtone.a.b.a(this);
            a(d(getApplicationContext()), 2131493077, false);
            a(b(getApplicationContext()), 2131493075, false);
            a(a(getApplicationContext()), 2131493074, false);
            a(c(getApplicationContext()), 2131493076, true);
            z.b(this, o.Tone_SMS.name());
            if (l.f(this).equals(o.V)) {
                z.b(this, o.Tone_Carrier.name());
            }
            jp.co.ymm.android.ringtone.b.d.a();
        }
    }
}
