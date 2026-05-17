package com.google.android.gms.internal.measurement;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.util.Log;
import android.util.Pair;
import com.google.android.gms.common.api.internal.C0056c;
import com.google.android.gms.dynamite.DynamiteModule;
import com.google.android.gms.dynamite.descriptors.com.google.android.gms.measurement.dynamite.ModuleDescriptor;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class Mf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile Mf f1524a = null;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static Boolean f1525b = null;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static Boolean f1526c = null;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static boolean f1527d = false;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static Boolean f1528e = null;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static String f1529f = "use_dynamite_api";
    private static String g = "allow_remote_dynamite";
    private final String h;
    protected final com.google.android.gms.common.util.e i;
    private final ExecutorService j;
    private final com.google.android.gms.measurement.a.a k;
    private List<Pair<com.google.android.gms.measurement.internal.Ec, Object>> l;
    private int m;
    private boolean n;
    private String o;
    private InterfaceC0117ef p;

    abstract class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final long f1530a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final long f1531b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final boolean f1532c;

        a(Mf mf) {
            this(true);
        }

        a(boolean z) {
            this.f1530a = Mf.this.i.a();
            this.f1531b = Mf.this.i.b();
            this.f1532c = z;
        }

        abstract void a();

        protected void b() {
        }

        @Override // java.lang.Runnable
        public void run() {
            if (Mf.this.n) {
                b();
                return;
            }
            try {
                a();
            } catch (Exception e2) {
                Mf.this.a(e2, false, this.f1532c);
                b();
            }
        }
    }

    class b implements Application.ActivityLifecycleCallbacks {
        b() {
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public final void onActivityCreated(Activity activity, Bundle bundle) {
            Mf.this.a(new C0204s(this, activity, bundle));
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public final void onActivityDestroyed(Activity activity) {
            Mf.this.a(new C0234x(this, activity));
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public final void onActivityPaused(Activity activity) {
            Mf.this.a(new C0228w(this, activity));
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public final void onActivityResumed(Activity activity) {
            Mf.this.a(new C0210t(this, activity));
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
            BinderC0109de binderC0109de = new BinderC0109de();
            Mf.this.a(new C0240y(this, activity, binderC0109de));
            Bundle bundleB = binderC0109de.b(50L);
            if (bundleB != null) {
                bundle.putAll(bundleB);
            }
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public final void onActivityStarted(Activity activity) {
            Mf.this.a(new C0216u(this, activity));
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public final void onActivityStopped(Activity activity) {
            Mf.this.a(new C0222v(this, activity));
        }
    }

    private Mf(Context context, String str, String str2, String str3, Bundle bundle) {
        this.h = (str == null || !b(str2, str3)) ? "FA" : str;
        this.i = com.google.android.gms.common.util.h.d();
        this.j = new ThreadPoolExecutor(0, 1, 30L, TimeUnit.SECONDS, new LinkedBlockingQueue());
        this.k = new com.google.android.gms.measurement.a.a(this);
        if (!(!f(context) || g())) {
            this.o = null;
            this.n = true;
            Log.w(this.h, "Disabling data collection. Found google_app_id in strings.xml but Google Analytics for Firebase is missing. Remove this value or add Google Analytics for Firebase to resume data collection.");
            return;
        }
        if (b(str2, str3)) {
            this.o = str2;
        } else {
            this.o = "fa";
            if (str2 != null && str3 != null) {
                Log.v(this.h, "Deferring to Google Analytics for Firebase for event data collection. https://goo.gl/J1sWQy");
                this.n = true;
                return;
            } else {
                if ((str2 == null) ^ (str3 == null)) {
                    Log.w(this.h, "Specified origin or custom app id is null. Both parameters will be ignored.");
                }
            }
        }
        a(new C0090b(this, str2, str3, context, bundle));
        Application application = (Application) context.getApplicationContext();
        if (application == null) {
            Log.w(this.h, "Unable to register lifecycle notifications. Application null.");
        } else {
            application.registerActivityLifecycleCallbacks(new b());
        }
    }

    public static Mf a(Context context) {
        return a(context, (String) null, (String) null, (String) null, (Bundle) null);
    }

    public static Mf a(Context context, String str, String str2, String str3, Bundle bundle) {
        com.google.android.gms.common.internal.r.a(context);
        if (f1524a == null) {
            synchronized (Mf.class) {
                if (f1524a == null) {
                    f1524a = new Mf(context, str, str2, str3, bundle);
                }
            }
        }
        return f1524a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(a aVar) {
        this.j.execute(aVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(Exception exc, boolean z, boolean z2) {
        this.n |= z;
        if (z) {
            Log.w(this.h, "Data collection startup failed. No data will be collected.", exc);
            return;
        }
        if (z2) {
            a(5, "Error with data collection. Data lost.", exc, (Object) null, (Object) null);
        }
        Log.w(this.h, "Error with data collection. Data lost.", exc);
    }

    private final void a(String str, String str2, Bundle bundle, boolean z, boolean z2, Long l) {
        a(new C0193q(this, l, str, str2, bundle, z, z2));
    }

    private static boolean a(Context context, String str) {
        com.google.android.gms.common.internal.r.b(str);
        try {
            ApplicationInfo applicationInfoA = com.google.android.gms.common.a.c.a(context).a(context.getPackageName(), 128);
            if (applicationInfoA != null && applicationInfoA.metaData != null) {
                return applicationInfoA.metaData.getBoolean(str);
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return false;
    }

    public static boolean b(Context context) {
        String str;
        boolean z;
        i(context);
        synchronized (Mf.class) {
            if (!f1527d) {
                try {
                    try {
                        str = (String) Class.forName("android.os.SystemProperties").getMethod("get", String.class, String.class).invoke(null, "measurement.dynamite.enabled", "");
                    } catch (Exception e2) {
                        Log.e("FA", "Unable to call SystemProperties.get()", e2);
                        f1528e = null;
                    }
                    if ("true".equals(str)) {
                        z = true;
                    } else if ("false".equals(str)) {
                        z = false;
                    } else {
                        f1528e = null;
                    }
                    f1528e = z;
                } finally {
                    f1527d = true;
                }
            }
        }
        Boolean bool = f1528e;
        if (bool == null) {
            bool = f1525b;
        }
        return bool.booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean b(String str, String str2) {
        return (str2 == null || str == null || g()) ? false : true;
    }

    private static boolean f(Context context) {
        try {
            C0056c.a(context);
        } catch (IllegalStateException unused) {
        }
        return C0056c.a() != null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int g(Context context) {
        return DynamiteModule.b(context, ModuleDescriptor.MODULE_ID);
    }

    private static boolean g() {
        try {
            Class.forName("com.google.firebase.analytics.FirebaseAnalytics");
            return true;
        } catch (ClassNotFoundException unused) {
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int h(Context context) {
        return DynamiteModule.a(context, ModuleDescriptor.MODULE_ID);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void i(Context context) {
        synchronized (Mf.class) {
            try {
            } catch (Exception e2) {
                Log.e("FA", "Exception reading flag from SharedPreferences.", e2);
                f1525b = false;
                f1526c = false;
            }
            if (f1525b == null || f1526c == null) {
                if (a(context, "app_measurement_internal_disable_startup_flags")) {
                    f1525b = false;
                    f1526c = false;
                    return;
                }
                SharedPreferences sharedPreferences = context.getSharedPreferences("com.google.android.gms.measurement.prefs", 0);
                f1525b = Boolean.valueOf(sharedPreferences.getBoolean(f1529f, false));
                f1526c = Boolean.valueOf(sharedPreferences.getBoolean(g, false));
                SharedPreferences.Editor editorEdit = sharedPreferences.edit();
                editorEdit.remove(f1529f);
                editorEdit.remove(g);
                editorEdit.apply();
            }
        }
    }

    protected final InterfaceC0117ef a(Context context, boolean z) {
        try {
            return Ee.asInterface(DynamiteModule.a(context, z ? DynamiteModule.l : DynamiteModule.i, ModuleDescriptor.MODULE_ID).a("com.google.android.gms.measurement.internal.AppMeasurementDynamiteService"));
        } catch (DynamiteModule.a e2) {
            a((Exception) e2, true, false);
            return null;
        }
    }

    public final String a() {
        BinderC0109de binderC0109de = new BinderC0109de();
        a(new C0132h(this, binderC0109de));
        return binderC0109de.a(500L);
    }

    public final List<Bundle> a(String str, String str2) {
        BinderC0109de binderC0109de = new BinderC0109de();
        a(new C0097c(this, str, str2, binderC0109de));
        List<Bundle> list = (List) BinderC0109de.a(binderC0109de.b(5000L), List.class);
        return list == null ? Collections.emptyList() : list;
    }

    public final Map<String, Object> a(String str, String str2, boolean z) {
        BinderC0109de binderC0109de = new BinderC0109de();
        a(new C0152k(this, str, str2, z, binderC0109de));
        Bundle bundleB = binderC0109de.b(5000L);
        if (bundleB == null || bundleB.size() == 0) {
            return Collections.emptyMap();
        }
        HashMap map = new HashMap(bundleB.size());
        for (String str3 : bundleB.keySet()) {
            Object obj = bundleB.get(str3);
            if ((obj instanceof Double) || (obj instanceof Long) || (obj instanceof String)) {
                map.put(str3, obj);
            }
        }
        return map;
    }

    public final void a(int i, String str, Object obj, Object obj2, Object obj3) {
        a(new C0166m(this, false, 5, str, obj, null, null));
    }

    public final void a(Activity activity, String str, String str2) {
        a(new C0104d(this, activity, str, str2));
    }

    public final void a(Bundle bundle) {
        a(new r(this, bundle));
    }

    public final void a(String str) {
        a(new C0111e(this, str));
    }

    public final void a(String str, Bundle bundle) {
        a(null, str, bundle, false, true, null);
    }

    public final void a(String str, String str2, Bundle bundle) {
        a(str, str2, bundle, true, true, null);
    }

    public final void a(boolean z) {
        a(new C0180o(this, z));
    }

    public final String b() {
        BinderC0109de binderC0109de = new BinderC0109de();
        a(new C0125g(this, binderC0109de));
        return binderC0109de.a(50L);
    }

    public final void b(String str) {
        a(new C0118f(this, str));
    }

    public final void b(String str, String str2, Bundle bundle) {
        a(new Of(this, str, str2, bundle));
    }

    public final int c(String str) {
        BinderC0109de binderC0109de = new BinderC0109de();
        a(new C0173n(this, str, binderC0109de));
        Integer num = (Integer) BinderC0109de.a(binderC0109de.b(10000L), Integer.class);
        if (num == null) {
            return 25;
        }
        return num.intValue();
    }

    public final long c() {
        BinderC0109de binderC0109de = new BinderC0109de();
        a(new C0145j(this, binderC0109de));
        Long l = (Long) BinderC0109de.a(binderC0109de.b(500L), Long.class);
        if (l != null) {
            return l.longValue();
        }
        long jNextLong = new Random(System.nanoTime() ^ this.i.a()).nextLong();
        int i = this.m + 1;
        this.m = i;
        return jNextLong + ((long) i);
    }

    public final String d() {
        BinderC0109de binderC0109de = new BinderC0109de();
        a(new C0139i(this, binderC0109de));
        return binderC0109de.a(500L);
    }

    public final String e() {
        BinderC0109de binderC0109de = new BinderC0109de();
        a(new C0159l(this, binderC0109de));
        return binderC0109de.a(500L);
    }
}
