package com.google.firebase.iid;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.os.Build;
import android.os.Looper;
import android.util.Log;
import androidx.annotation.Keep;
import c.a.a.a.f.InterfaceC0053a;
import com.google.firebase.iid.FirebaseInstanceId;
import java.io.IOException;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Executor;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class FirebaseInstanceId {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final long f2617a = TimeUnit.HOURS.toSeconds(8);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static C0405x f2618b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static ScheduledExecutorService f2619c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Executor f2620d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final c.a.b.d f2621e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final C0398p f2622f;
    private InterfaceC0384b g;
    private final C0400s h;
    private final B i;
    private boolean j;
    private final a k;

    /* JADX INFO: Access modifiers changed from: private */
    class a {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final c.a.b.a.d f2624b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private c.a.b.a.b<c.a.b.a> f2625c;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final boolean f2623a = c();

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private Boolean f2626d = b();

        a(c.a.b.a.d dVar) {
            this.f2624b = dVar;
            if (this.f2626d == null && this.f2623a) {
                this.f2625c = new c.a.b.a.b(this) { // from class: com.google.firebase.iid.Q

                    /* JADX INFO: renamed from: a, reason: collision with root package name */
                    private final FirebaseInstanceId.a f2653a;

                    {
                        this.f2653a = this;
                    }

                    @Override // c.a.b.a.b
                    public final void a(c.a.b.a.a aVar) {
                        FirebaseInstanceId.a aVar2 = this.f2653a;
                        synchronized (aVar2) {
                            if (aVar2.a()) {
                                FirebaseInstanceId.this.l();
                            }
                        }
                    }
                };
                dVar.a(c.a.b.a.class, this.f2625c);
            }
        }

        private final Boolean b() {
            ApplicationInfo applicationInfo;
            Context contextB = FirebaseInstanceId.this.f2621e.b();
            SharedPreferences sharedPreferences = contextB.getSharedPreferences("com.google.firebase.messaging", 0);
            if (sharedPreferences.contains("auto_init")) {
                return Boolean.valueOf(sharedPreferences.getBoolean("auto_init", false));
            }
            try {
                PackageManager packageManager = contextB.getPackageManager();
                if (packageManager == null || (applicationInfo = packageManager.getApplicationInfo(contextB.getPackageName(), 128)) == null || applicationInfo.metaData == null || !applicationInfo.metaData.containsKey("firebase_messaging_auto_init_enabled")) {
                    return null;
                }
                return Boolean.valueOf(applicationInfo.metaData.getBoolean("firebase_messaging_auto_init_enabled"));
            } catch (PackageManager.NameNotFoundException unused) {
                return null;
            }
        }

        private final boolean c() {
            try {
                Class.forName("com.google.firebase.messaging.FirebaseMessaging");
                return true;
            } catch (ClassNotFoundException unused) {
                Context contextB = FirebaseInstanceId.this.f2621e.b();
                Intent intent = new Intent("com.google.firebase.MESSAGING_EVENT");
                intent.setPackage(contextB.getPackageName());
                ResolveInfo resolveInfoResolveService = contextB.getPackageManager().resolveService(intent, 0);
                return (resolveInfoResolveService == null || resolveInfoResolveService.serviceInfo == null) ? false : true;
            }
        }

        final synchronized boolean a() {
            if (this.f2626d != null) {
                return this.f2626d.booleanValue();
            }
            return this.f2623a && FirebaseInstanceId.this.f2621e.g();
        }
    }

    FirebaseInstanceId(c.a.b.d dVar, c.a.b.a.d dVar2, c.a.b.d.g gVar) {
        this(dVar, new C0398p(dVar.b()), I.b(), I.b(), dVar2, gVar);
    }

    private FirebaseInstanceId(c.a.b.d dVar, C0398p c0398p, Executor executor, Executor executor2, c.a.b.a.d dVar2, c.a.b.d.g gVar) {
        this.j = false;
        if (C0398p.a(dVar) == null) {
            throw new IllegalStateException("FirebaseInstanceId failed to initialize, FirebaseApp is missing project ID");
        }
        synchronized (FirebaseInstanceId.class) {
            if (f2618b == null) {
                f2618b = new C0405x(dVar.b());
            }
        }
        this.f2621e = dVar;
        this.f2622f = c0398p;
        if (this.g == null) {
            InterfaceC0384b interfaceC0384b = (InterfaceC0384b) dVar.a(InterfaceC0384b.class);
            this.g = (interfaceC0384b == null || !interfaceC0384b.b()) ? new T(dVar, c0398p, executor, gVar) : interfaceC0384b;
        }
        this.g = this.g;
        this.f2620d = executor2;
        this.i = new B(f2618b);
        this.k = new a(dVar2);
        this.h = new C0400s(executor);
        if (this.k.a()) {
            l();
        }
    }

    private final <T> T a(c.a.a.a.f.g<T> gVar) throws IOException {
        try {
            return (T) c.a.a.a.f.j.a(gVar, 30000L, TimeUnit.MILLISECONDS);
        } catch (InterruptedException | TimeoutException unused) {
            throw new IOException("SERVICE_NOT_AVAILABLE");
        } catch (ExecutionException e2) {
            Throwable cause = e2.getCause();
            if (cause instanceof IOException) {
                if ("INSTANCE_ID_RESET".equals(cause.getMessage())) {
                    g();
                }
                throw ((IOException) cause);
            }
            if (cause instanceof RuntimeException) {
                throw ((RuntimeException) cause);
            }
            throw new IOException(e2);
        }
    }

    static void a(Runnable runnable, long j) {
        synchronized (FirebaseInstanceId.class) {
            if (f2619c == null) {
                f2619c = new ScheduledThreadPoolExecutor(1, new com.google.android.gms.common.util.a.a("FirebaseInstanceId"));
            }
            f2619c.schedule(runnable, j, TimeUnit.SECONDS);
        }
    }

    private final c.a.a.a.f.g<InterfaceC0383a> b(final String str, String str2) {
        final String strC = c(str2);
        return c.a.a.a.f.j.a((Object) null).b(this.f2620d, new InterfaceC0053a(this, str, strC) { // from class: com.google.firebase.iid.O

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final FirebaseInstanceId f2646a;

            /* JADX INFO: renamed from: b, reason: collision with root package name */
            private final String f2647b;

            /* JADX INFO: renamed from: c, reason: collision with root package name */
            private final String f2648c;

            {
                this.f2646a = this;
                this.f2647b = str;
                this.f2648c = strC;
            }

            @Override // c.a.a.a.f.InterfaceC0053a
            public final Object a(c.a.a.a.f.g gVar) {
                return this.f2646a.a(this.f2647b, this.f2648c, gVar);
            }
        });
    }

    public static FirebaseInstanceId b() {
        return getInstance(c.a.b.d.c());
    }

    private static A c(String str, String str2) {
        return f2618b.a("", str, str2);
    }

    private static String c(String str) {
        return (str.isEmpty() || str.equalsIgnoreCase("fcm") || str.equalsIgnoreCase("gcm")) ? "*" : str;
    }

    static boolean f() {
        if (Log.isLoggable("FirebaseInstanceId", 3)) {
            return true;
        }
        return Build.VERSION.SDK_INT == 23 && Log.isLoggable("FirebaseInstanceId", 3);
    }

    @Keep
    public static FirebaseInstanceId getInstance(c.a.b.d dVar) {
        return (FirebaseInstanceId) dVar.a(FirebaseInstanceId.class);
    }

    private final synchronized void k() {
        if (!this.j) {
            a(0L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void l() {
        A aD = d();
        if (j() || a(aD) || this.i.a()) {
            k();
        }
    }

    private static String m() {
        return C0398p.a(f2618b.b("").a());
    }

    final /* synthetic */ c.a.a.a.f.g a(final String str, final String str2, c.a.a.a.f.g gVar) {
        final String strM = m();
        A aC = c(str, str2);
        if (!this.g.a() && !a(aC)) {
            return c.a.a.a.f.j.a(new Y(strM, aC.f2601b));
        }
        final String strA = A.a(aC);
        return this.h.a(str, str2, new InterfaceC0401t(this, strM, strA, str, str2) { // from class: com.google.firebase.iid.N

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final FirebaseInstanceId f2641a;

            /* JADX INFO: renamed from: b, reason: collision with root package name */
            private final String f2642b;

            /* JADX INFO: renamed from: c, reason: collision with root package name */
            private final String f2643c;

            /* JADX INFO: renamed from: d, reason: collision with root package name */
            private final String f2644d;

            /* JADX INFO: renamed from: e, reason: collision with root package name */
            private final String f2645e;

            {
                this.f2641a = this;
                this.f2642b = strM;
                this.f2643c = strA;
                this.f2644d = str;
                this.f2645e = str2;
            }

            @Override // com.google.firebase.iid.InterfaceC0401t
            public final c.a.a.a.f.g a() {
                return this.f2641a.a(this.f2642b, this.f2643c, this.f2644d, this.f2645e);
            }
        });
    }

    final /* synthetic */ c.a.a.a.f.g a(final String str, String str2, final String str3, final String str4) {
        return this.g.a(str, str2, str3, str4).a(this.f2620d, new c.a.a.a.f.f(this, str3, str4, str) { // from class: com.google.firebase.iid.P

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final FirebaseInstanceId f2649a;

            /* JADX INFO: renamed from: b, reason: collision with root package name */
            private final String f2650b;

            /* JADX INFO: renamed from: c, reason: collision with root package name */
            private final String f2651c;

            /* JADX INFO: renamed from: d, reason: collision with root package name */
            private final String f2652d;

            {
                this.f2649a = this;
                this.f2650b = str3;
                this.f2651c = str4;
                this.f2652d = str;
            }

            @Override // c.a.a.a.f.f
            public final c.a.a.a.f.g a(Object obj) {
                return this.f2649a.b(this.f2650b, this.f2651c, this.f2652d, (String) obj);
            }
        });
    }

    public String a() {
        l();
        return m();
    }

    public String a(String str, String str2) throws IOException {
        if (Looper.getMainLooper() != Looper.myLooper()) {
            return ((InterfaceC0383a) a(b(str, str2))).a();
        }
        throw new IOException("MAIN_THREAD");
    }

    final synchronized void a(long j) {
        a(new RunnableC0407z(this, this.f2622f, this.i, Math.min(Math.max(30L, j << 1), f2617a)), j);
        this.j = true;
    }

    final void a(String str) throws IOException {
        A aD = d();
        if (a(aD)) {
            throw new IOException("token not available");
        }
        a(this.g.b(m(), aD.f2601b, str));
    }

    final synchronized void a(boolean z) {
        this.j = z;
    }

    final boolean a(A a2) {
        return a2 == null || a2.b(this.f2622f.b());
    }

    final /* synthetic */ c.a.a.a.f.g b(String str, String str2, String str3, String str4) {
        f2618b.a("", str, str2, str4, this.f2622f.b());
        return c.a.a.a.f.j.a(new Y(str3, str4));
    }

    final void b(String str) throws IOException {
        A aD = d();
        if (a(aD)) {
            throw new IOException("token not available");
        }
        a(this.g.a(m(), aD.f2601b, str));
    }

    final c.a.b.d c() {
        return this.f2621e;
    }

    final A d() {
        return c(C0398p.a(this.f2621e), "*");
    }

    final String e() {
        return a(C0398p.a(this.f2621e), "*");
    }

    final synchronized void g() {
        f2618b.b();
        if (this.k.a()) {
            k();
        }
    }

    final boolean h() {
        return this.g.b();
    }

    final void i() {
        f2618b.c("");
        k();
    }

    final boolean j() {
        return this.g.a();
    }
}
