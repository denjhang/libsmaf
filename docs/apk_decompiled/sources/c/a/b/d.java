package c.a.b;

import android.annotation.TargetApi;
import android.app.Application;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import c.a.b.d.f;
import com.google.android.gms.common.api.internal.ComponentCallbacks2C0054a;
import com.google.android.gms.common.internal.C0079q;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.common.util.o;
import com.google.firebase.components.h;
import com.google.firebase.components.n;
import com.google.firebase.components.v;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.Executor;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f907a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Executor f908b = new c();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    static final Map<String, d> f909c = new b.b.b();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Context f910d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final String f911e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final e f912f;
    private final n g;
    private final v<c.a.b.c.a> j;
    private final AtomicBoolean h = new AtomicBoolean(false);
    private final AtomicBoolean i = new AtomicBoolean();
    private final List<a> k = new CopyOnWriteArrayList();
    private final List<Object> l = new CopyOnWriteArrayList();

    public interface a {
        void a(boolean z);
    }

    @TargetApi(14)
    private static class b implements ComponentCallbacks2C0054a.InterfaceC0024a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static AtomicReference<b> f913a = new AtomicReference<>();

        private b() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static void b(Context context) {
            if (com.google.android.gms.common.util.n.a() && (context.getApplicationContext() instanceof Application)) {
                Application application = (Application) context.getApplicationContext();
                if (f913a.get() == null) {
                    b bVar = new b();
                    if (f913a.compareAndSet(null, bVar)) {
                        ComponentCallbacks2C0054a.a(application);
                        ComponentCallbacks2C0054a.a().a(bVar);
                    }
                }
            }
        }

        @Override // com.google.android.gms.common.api.internal.ComponentCallbacks2C0054a.InterfaceC0024a
        public void a(boolean z) {
            synchronized (d.f907a) {
                for (d dVar : new ArrayList(d.f909c.values())) {
                    if (dVar.h.get()) {
                        dVar.a(z);
                    }
                }
            }
        }
    }

    private static class c implements Executor {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final Handler f914a = new Handler(Looper.getMainLooper());

        private c() {
        }

        @Override // java.util.concurrent.Executor
        public void execute(Runnable runnable) {
            f914a.post(runnable);
        }
    }

    /* JADX INFO: renamed from: c.a.b.d$d, reason: collision with other inner class name */
    @TargetApi(24)
    private static class C0020d extends BroadcastReceiver {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static AtomicReference<C0020d> f915a = new AtomicReference<>();

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final Context f916b;

        public C0020d(Context context) {
            this.f916b = context;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static void b(Context context) {
            if (f915a.get() == null) {
                C0020d c0020d = new C0020d(context);
                if (f915a.compareAndSet(null, c0020d)) {
                    context.registerReceiver(c0020d, new IntentFilter("android.intent.action.USER_UNLOCKED"));
                }
            }
        }

        public void a() {
            this.f916b.unregisterReceiver(this);
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            synchronized (d.f907a) {
                Iterator<d> it = d.f909c.values().iterator();
                while (it.hasNext()) {
                    it.next().j();
                }
            }
            a();
        }
    }

    protected d(Context context, String str, e eVar) {
        r.a(context);
        this.f910d = context;
        r.b(str);
        this.f911e = str;
        r.a(eVar);
        this.f912f = eVar;
        this.g = new n(f908b, h.a(context).a(), com.google.firebase.components.e.a(context, Context.class, new Class[0]), com.google.firebase.components.e.a(this, d.class, new Class[0]), com.google.firebase.components.e.a(eVar, e.class, new Class[0]), f.a("fire-android", ""), f.a("fire-core", "19.0.0"), c.a.b.d.c.b());
        this.j = new v<>(c.a.b.b.a(this, context));
    }

    static /* synthetic */ c.a.b.c.a a(d dVar, Context context) {
        return new c.a.b.c.a(context, dVar.f(), (c.a.b.a.c) dVar.g.a(c.a.b.a.c.class));
    }

    public static d a(Context context) {
        synchronized (f907a) {
            if (f909c.containsKey("[DEFAULT]")) {
                return c();
            }
            e eVarA = e.a(context);
            if (eVarA == null) {
                Log.w("FirebaseApp", "Default FirebaseApp failed to initialize because no default options were found. This usually means that com.google.gms:google-services was not applied to your gradle project.");
                return null;
            }
            return a(context, eVarA);
        }
    }

    public static d a(Context context, e eVar) {
        return a(context, eVar, "[DEFAULT]");
    }

    public static d a(Context context, e eVar, String str) {
        d dVar;
        b.b(context);
        String strA = a(str);
        if (context.getApplicationContext() != null) {
            context = context.getApplicationContext();
        }
        synchronized (f907a) {
            r.b(!f909c.containsKey(strA), "FirebaseApp name " + strA + " already exists!");
            r.a(context, "Application context cannot be null.");
            dVar = new d(context, strA, eVar);
            f909c.put(strA, dVar);
        }
        dVar.j();
        return dVar;
    }

    private static String a(String str) {
        return str.trim();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(boolean z) {
        Log.d("FirebaseApp", "Notifying background state change listeners.");
        Iterator<a> it = this.k.iterator();
        while (it.hasNext()) {
            it.next().a(z);
        }
    }

    public static d c() {
        d dVar;
        synchronized (f907a) {
            dVar = f909c.get("[DEFAULT]");
            if (dVar == null) {
                throw new IllegalStateException("Default FirebaseApp is not initialized in this process " + o.a() + ". Make sure to call FirebaseApp.initializeApp(Context) first.");
            }
        }
        return dVar;
    }

    private void i() {
        r.b(!this.i.get(), "FirebaseApp was deleted");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void j() {
        if (!b.d.b.a.a(this.f910d)) {
            C0020d.b(this.f910d);
        } else {
            this.g.a(h());
        }
    }

    public <T> T a(Class<T> cls) {
        i();
        return (T) this.g.a(cls);
    }

    public Context b() {
        i();
        return this.f910d;
    }

    public String d() {
        i();
        return this.f911e;
    }

    public e e() {
        i();
        return this.f912f;
    }

    public boolean equals(Object obj) {
        if (obj instanceof d) {
            return this.f911e.equals(((d) obj).d());
        }
        return false;
    }

    public String f() {
        return com.google.android.gms.common.util.c.c(d().getBytes(Charset.defaultCharset())) + "+" + com.google.android.gms.common.util.c.c(e().a().getBytes(Charset.defaultCharset()));
    }

    public boolean g() {
        i();
        return this.j.get().a();
    }

    public boolean h() {
        return "[DEFAULT]".equals(d());
    }

    public int hashCode() {
        return this.f911e.hashCode();
    }

    public String toString() {
        C0079q.a aVarA = C0079q.a(this);
        aVarA.a("name", this.f911e);
        aVarA.a("options", this.f912f);
        return aVarA.toString();
    }
}
