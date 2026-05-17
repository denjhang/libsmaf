package com.google.android.gms.internal.measurement;

import android.annotation.SuppressLint;
import android.content.Context;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ua, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractC0217ua<T> {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static Ia<C0194qa> f1832d;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Aa f1834f;
    private final String g;
    private final T h;
    private volatile int i;
    private volatile T j;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f1829a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    @SuppressLint({"StaticFieldLeak"})
    private static Context f1830b = null;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static boolean f1831c = false;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final AtomicInteger f1833e = new AtomicInteger();

    private AbstractC0217ua(Aa aa, String str, T t) {
        this.i = -1;
        if (aa.f1391b == null) {
            throw new IllegalArgumentException("Must pass a valid SharedPreferences file name or ContentProvider URI");
        }
        this.f1834f = aa;
        this.g = str;
        this.h = t;
    }

    /* synthetic */ AbstractC0217ua(Aa aa, String str, Object obj, C0229wa c0229wa) {
        this(aa, str, obj);
    }

    private final String a(String str) {
        if (str != null && str.isEmpty()) {
            return this.g;
        }
        String strValueOf = String.valueOf(str);
        String strValueOf2 = String.valueOf(this.g);
        return strValueOf2.length() != 0 ? strValueOf.concat(strValueOf2) : new String(strValueOf);
    }

    static void a() {
        f1833e.incrementAndGet();
    }

    public static void a(Context context) {
        synchronized (f1829a) {
            Context applicationContext = context.getApplicationContext();
            if (applicationContext != null) {
                context = applicationContext;
            }
            if (f1830b != context) {
                C0119fa.c();
                Da.a();
                C0188pa.a();
                f1833e.incrementAndGet();
                f1830b = context;
                f1832d = Ma.a(C0235xa.f1862a);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static AbstractC0217ua<Double> b(Aa aa, String str, double d2) {
        return new C0241ya(aa, str, Double.valueOf(d2));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static AbstractC0217ua<Long> b(Aa aa, String str, long j) {
        return new C0229wa(aa, str, Long.valueOf(j));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static AbstractC0217ua<String> b(Aa aa, String str, String str2) {
        return new Ba(aa, str, str2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static AbstractC0217ua<Boolean> b(Aa aa, String str, boolean z) {
        return new C0247za(aa, str, Boolean.valueOf(z));
    }

    static final /* synthetic */ C0194qa d() {
        new C0211ta();
        return C0211ta.a(f1830b);
    }

    abstract T a(Object obj);

    public final String b() {
        return a(this.f1834f.f1393d);
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x00b9  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00ba A[Catch: all -> 0x00e7, TryCatch #0 {, blocks: (B:5:0x000b, B:7:0x000f, B:9:0x0013, B:11:0x002c, B:47:0x00d8, B:12:0x0032, B:14:0x0042, B:19:0x0053, B:21:0x0059, B:23:0x0065, B:27:0x007e, B:29:0x0088, B:40:0x00ba, B:42:0x00ce, B:46:0x00d6, B:25:0x0076, B:30:0x008d, B:32:0x0096, B:34:0x00a8, B:36:0x00b3, B:35:0x00ad, B:48:0x00dd, B:49:0x00e4, B:50:0x00e5), top: B:57:0x000b }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final T c() {
        /*
            Method dump skipped, instruction units count: 237
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.AbstractC0217ua.c():java.lang.Object");
    }
}
