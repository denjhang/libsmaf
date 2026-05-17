package c.a.a.a.a.a;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.RemoteException;
import android.os.SystemClock;
import android.util.Log;
import c.a.a.a.d.a.e;
import com.google.android.gms.common.internal.r;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private com.google.android.gms.common.a f806a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private c.a.a.a.d.a.d f807b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f808c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Object f809d = new Object();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private b f810e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Context f811f;
    private final boolean g;
    private final long h;

    /* JADX INFO: renamed from: c.a.a.a.a.a.a$a, reason: collision with other inner class name */
    public static final class C0016a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f812a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final boolean f813b;

        public C0016a(String str, boolean z) {
            this.f812a = str;
            this.f813b = z;
        }

        public final String a() {
            return this.f812a;
        }

        public final boolean b() {
            return this.f813b;
        }

        public final String toString() {
            String str = this.f812a;
            boolean z = this.f813b;
            StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 7);
            sb.append("{");
            sb.append(str);
            sb.append("}");
            sb.append(z);
            return sb.toString();
        }
    }

    static class b extends Thread {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private WeakReference<a> f814a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private long f815b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        CountDownLatch f816c = new CountDownLatch(1);

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        boolean f817d = false;

        public b(a aVar, long j) {
            this.f814a = new WeakReference<>(aVar);
            this.f815b = j;
            start();
        }

        private final void a() {
            a aVar = this.f814a.get();
            if (aVar != null) {
                aVar.a();
                this.f817d = true;
            }
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public final void run() {
            try {
                if (this.f816c.await(this.f815b, TimeUnit.MILLISECONDS)) {
                    return;
                }
                a();
            } catch (InterruptedException unused) {
                a();
            }
        }
    }

    private a(Context context, long j, boolean z, boolean z2) {
        Context applicationContext;
        r.a(context);
        if (z && (applicationContext = context.getApplicationContext()) != null) {
            context = applicationContext;
        }
        this.f811f = context;
        this.f808c = false;
        this.h = j;
        this.g = z2;
    }

    public static C0016a a(Context context) {
        c cVar = new c(context);
        boolean zA = cVar.a("gads:ad_id_app_context:enabled", false);
        float fA = cVar.a("gads:ad_id_app_context:ping_ratio", 0.0f);
        String strA = cVar.a("gads:ad_id_use_shared_preference:experiment_id", "");
        a aVar = new a(context, -1L, zA, cVar.a("gads:ad_id_use_persistent_service:enabled", false));
        try {
            try {
                long jElapsedRealtime = SystemClock.elapsedRealtime();
                aVar.b(false);
                C0016a c0016aB = aVar.b();
                aVar.a(c0016aB, zA, fA, SystemClock.elapsedRealtime() - jElapsedRealtime, strA, null);
                return c0016aB;
            } finally {
            }
        } finally {
            aVar.a();
        }
    }

    private static c.a.a.a.d.a.d a(Context context, com.google.android.gms.common.a aVar) throws IOException {
        try {
            return e.a(aVar.a(10000L, TimeUnit.MILLISECONDS));
        } catch (InterruptedException unused) {
            throw new IOException("Interrupted exception");
        } catch (Throwable th) {
            throw new IOException(th);
        }
    }

    private static com.google.android.gms.common.a a(Context context, boolean z) throws com.google.android.gms.common.e, IOException {
        try {
            context.getPackageManager().getPackageInfo("com.android.vending", 0);
            int iA = com.google.android.gms.common.d.a().a(context, 12451000);
            if (iA != 0 && iA != 2) {
                throw new IOException("Google Play services not available");
            }
            String str = z ? "com.google.android.gms.ads.identifier.service.PERSISTENT_START" : "com.google.android.gms.ads.identifier.service.START";
            com.google.android.gms.common.a aVar = new com.google.android.gms.common.a();
            Intent intent = new Intent(str);
            intent.setPackage("com.google.android.gms");
            try {
                if (com.google.android.gms.common.stats.a.a().a(context, intent, aVar, 1)) {
                    return aVar;
                }
                throw new IOException("Connection failure");
            } catch (Throwable th) {
                throw new IOException(th);
            }
        } catch (PackageManager.NameNotFoundException unused) {
            throw new com.google.android.gms.common.e(9);
        }
    }

    public static void a(boolean z) {
    }

    private final boolean a(C0016a c0016a, boolean z, float f2, long j, String str, Throwable th) {
        if (Math.random() > f2) {
            return false;
        }
        HashMap map = new HashMap();
        map.put("app_context", z ? "1" : "0");
        if (c0016a != null) {
            map.put("limit_ad_tracking", c0016a.b() ? "1" : "0");
        }
        if (c0016a != null && c0016a.a() != null) {
            map.put("ad_id_size", Integer.toString(c0016a.a().length()));
        }
        if (th != null) {
            map.put("error", th.getClass().getName());
        }
        if (str != null && !str.isEmpty()) {
            map.put("experiment_id", str);
        }
        map.put("tag", "AdvertisingIdClient");
        map.put("time_spent", Long.toString(j));
        new c.a.a.a.a.a.b(this, map).start();
        return true;
    }

    private final void b(boolean z) {
        r.c("Calling this from your main thread can lead to deadlock");
        synchronized (this) {
            if (this.f808c) {
                a();
            }
            this.f806a = a(this.f811f, this.g);
            this.f807b = a(this.f811f, this.f806a);
            this.f808c = true;
            if (z) {
                c();
            }
        }
    }

    private final void c() {
        synchronized (this.f809d) {
            if (this.f810e != null) {
                this.f810e.f816c.countDown();
                try {
                    this.f810e.join();
                } catch (InterruptedException unused) {
                }
            }
            if (this.h > 0) {
                this.f810e = new b(this, this.h);
            }
        }
    }

    public final void a() {
        r.c("Calling this from your main thread can lead to deadlock");
        synchronized (this) {
            if (this.f811f == null || this.f806a == null) {
                return;
            }
            try {
                if (this.f808c) {
                    com.google.android.gms.common.stats.a.a().a(this.f811f, this.f806a);
                }
            } catch (Throwable th) {
                Log.i("AdvertisingIdClient", "AdvertisingIdClient unbindService failed.", th);
            }
            this.f808c = false;
            this.f807b = null;
            this.f806a = null;
        }
    }

    public C0016a b() {
        C0016a c0016a;
        r.c("Calling this from your main thread can lead to deadlock");
        synchronized (this) {
            if (this.f808c) {
                r.a(this.f806a);
                r.a(this.f807b);
                c0016a = new C0016a(this.f807b.getId(), this.f807b.a(true));
            } else {
                synchronized (this.f809d) {
                    if (this.f810e == null || !this.f810e.f817d) {
                        throw new IOException("AdvertisingIdClient is not connected.");
                    }
                }
                try {
                    b(false);
                    if (!this.f808c) {
                        throw new IOException("AdvertisingIdClient cannot reconnect.");
                    }
                    r.a(this.f806a);
                    r.a(this.f807b);
                    try {
                        c0016a = new C0016a(this.f807b.getId(), this.f807b.a(true));
                    } catch (RemoteException e2) {
                        Log.i("AdvertisingIdClient", "GMS remote exception ", e2);
                        throw new IOException("Remote exception");
                    }
                } catch (Exception e3) {
                    throw new IOException("AdvertisingIdClient cannot reconnect.", e3);
                }
            }
        }
        c();
        return c0016a;
    }

    protected void finalize() throws Throwable {
        a();
        super.finalize();
    }
}
