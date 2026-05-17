package com.google.android.gms.common.internal;

import android.accounts.Account;
import android.app.PendingIntent;
import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.DeadObjectException;
import android.os.Handler;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.Message;
import android.os.RemoteException;
import android.text.TextUtils;
import android.util.Log;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.Feature;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.internal.AbstractC0071i;
import com.google.android.gms.common.internal.InterfaceC0075m;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Set;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.c, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractC0065c<T extends IInterface> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Feature[] f1236a = new Feature[0];

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static final String[] f1237b = {"service_esmobile", "service_googleme"};
    private boolean A;
    private volatile zzb B;
    protected AtomicInteger C;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f1238c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private long f1239d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private long f1240e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f1241f;
    private long g;
    private K h;
    private final Context i;
    private final Looper j;
    private final AbstractC0071i k;
    private final com.google.android.gms.common.d l;
    final Handler m;
    private final Object n;
    private final Object o;
    private InterfaceC0077o p;
    protected InterfaceC0026c q;
    private T r;
    private final ArrayList<h<?>> s;
    private j t;
    private int u;
    private final a v;
    private final b w;
    private final int x;
    private final String y;
    private ConnectionResult z;

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$a */
    public interface a {
        void c(int i);

        void c(Bundle bundle);
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$b */
    public interface b {
        void a(ConnectionResult connectionResult);
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$c, reason: collision with other inner class name */
    public interface InterfaceC0026c {
        void a(ConnectionResult connectionResult);
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$d */
    protected class d implements InterfaceC0026c {
        public d() {
        }

        @Override // com.google.android.gms.common.internal.AbstractC0065c.InterfaceC0026c
        public void a(ConnectionResult connectionResult) {
            if (connectionResult.e()) {
                AbstractC0065c abstractC0065c = AbstractC0065c.this;
                abstractC0065c.a((InterfaceC0073k) null, abstractC0065c.q());
            } else if (AbstractC0065c.this.w != null) {
                AbstractC0065c.this.w.a(connectionResult);
            }
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$e */
    public interface e {
        void a();
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$f */
    private abstract class f extends h<Boolean> {

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final int f1243d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final Bundle f1244e;

        protected f(int i, Bundle bundle) {
            super(true);
            this.f1243d = i;
            this.f1244e = bundle;
        }

        protected abstract void a(ConnectionResult connectionResult);

        @Override // com.google.android.gms.common.internal.AbstractC0065c.h
        protected final /* synthetic */ void a(Boolean bool) {
            if (bool == null) {
                AbstractC0065c.this.b(1, null);
                return;
            }
            int i = this.f1243d;
            if (i == 0) {
                if (e()) {
                    return;
                }
                AbstractC0065c.this.b(1, null);
                a(new ConnectionResult(8, null));
                return;
            }
            if (i == 10) {
                AbstractC0065c.this.b(1, null);
                throw new IllegalStateException(String.format("A fatal developer error has occurred. Class name: %s. Start service action: %s. Service Descriptor: %s. ", getClass().getSimpleName(), AbstractC0065c.this.t(), AbstractC0065c.this.s()));
            }
            AbstractC0065c.this.b(1, null);
            Bundle bundle = this.f1244e;
            a(new ConnectionResult(this.f1243d, bundle != null ? (PendingIntent) bundle.getParcelable("pendingIntent") : null));
        }

        @Override // com.google.android.gms.common.internal.AbstractC0065c.h
        protected final void c() {
        }

        protected abstract boolean e();
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$g */
    final class g extends c.a.a.a.d.c.d {
        public g(Looper looper) {
            super(looper);
        }

        private static void a(Message message) {
            h hVar = (h) message.obj;
            hVar.c();
            hVar.b();
        }

        private static boolean b(Message message) {
            int i = message.what;
            return i == 2 || i == 1 || i == 7;
        }

        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            if (AbstractC0065c.this.C.get() != message.arg1) {
                if (b(message)) {
                    a(message);
                    return;
                }
                return;
            }
            int i = message.what;
            if ((i == 1 || i == 7 || ((i == 4 && !AbstractC0065c.this.j()) || message.what == 5)) && !AbstractC0065c.this.b()) {
                a(message);
                return;
            }
            int i2 = message.what;
            if (i2 == 4) {
                AbstractC0065c.this.z = new ConnectionResult(message.arg2);
                if (AbstractC0065c.this.y() && !AbstractC0065c.this.A) {
                    AbstractC0065c.this.b(3, null);
                    return;
                }
                ConnectionResult connectionResult = AbstractC0065c.this.z != null ? AbstractC0065c.this.z : new ConnectionResult(8);
                AbstractC0065c.this.q.a(connectionResult);
                AbstractC0065c.this.a(connectionResult);
                return;
            }
            if (i2 == 5) {
                ConnectionResult connectionResult2 = AbstractC0065c.this.z != null ? AbstractC0065c.this.z : new ConnectionResult(8);
                AbstractC0065c.this.q.a(connectionResult2);
                AbstractC0065c.this.a(connectionResult2);
                return;
            }
            if (i2 == 3) {
                Object obj = message.obj;
                ConnectionResult connectionResult3 = new ConnectionResult(message.arg2, obj instanceof PendingIntent ? (PendingIntent) obj : null);
                AbstractC0065c.this.q.a(connectionResult3);
                AbstractC0065c.this.a(connectionResult3);
                return;
            }
            if (i2 == 6) {
                AbstractC0065c.this.b(5, null);
                if (AbstractC0065c.this.v != null) {
                    AbstractC0065c.this.v.c(message.arg2);
                }
                AbstractC0065c.this.a(message.arg2);
                AbstractC0065c.this.a(5, 1, (IInterface) null);
                return;
            }
            if (i2 == 2 && !AbstractC0065c.this.isConnected()) {
                a(message);
                return;
            }
            if (b(message)) {
                ((h) message.obj).d();
                return;
            }
            int i3 = message.what;
            StringBuilder sb = new StringBuilder(45);
            sb.append("Don't know how to handle message: ");
            sb.append(i3);
            Log.wtf("GmsClient", sb.toString(), new Exception());
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$h */
    protected abstract class h<TListener> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private TListener f1247a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private boolean f1248b = false;

        public h(TListener tlistener) {
            this.f1247a = tlistener;
        }

        public final void a() {
            synchronized (this) {
                this.f1247a = null;
            }
        }

        protected abstract void a(TListener tlistener);

        public final void b() {
            a();
            synchronized (AbstractC0065c.this.s) {
                AbstractC0065c.this.s.remove(this);
            }
        }

        protected abstract void c();

        public final void d() {
            TListener tlistener;
            synchronized (this) {
                tlistener = this.f1247a;
                if (this.f1248b) {
                    String strValueOf = String.valueOf(this);
                    StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 47);
                    sb.append("Callback proxy ");
                    sb.append(strValueOf);
                    sb.append(" being reused. This is not safe.");
                    Log.w("GmsClient", sb.toString());
                }
            }
            if (tlistener != null) {
                try {
                    a(tlistener);
                } catch (RuntimeException e2) {
                    c();
                    throw e2;
                }
            } else {
                c();
            }
            synchronized (this) {
                this.f1248b = true;
            }
            b();
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$i */
    public static final class i extends InterfaceC0075m.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private AbstractC0065c f1250a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final int f1251b;

        public i(AbstractC0065c abstractC0065c, int i) {
            this.f1250a = abstractC0065c;
            this.f1251b = i;
        }

        @Override // com.google.android.gms.common.internal.InterfaceC0075m
        public final void a(int i, IBinder iBinder, Bundle bundle) {
            r.a(this.f1250a, "onPostInitComplete can be called only once per call to getRemoteService");
            this.f1250a.a(i, iBinder, bundle, this.f1251b);
            this.f1250a = null;
        }

        @Override // com.google.android.gms.common.internal.InterfaceC0075m
        public final void a(int i, IBinder iBinder, zzb zzbVar) {
            r.a(this.f1250a, "onPostInitCompleteWithConnectionInfo can be called only once per call togetRemoteService");
            r.a(zzbVar);
            this.f1250a.a(zzbVar);
            a(i, iBinder, zzbVar.f1287a);
        }

        @Override // com.google.android.gms.common.internal.InterfaceC0075m
        public final void b(int i, Bundle bundle) {
            Log.wtf("GmsClient", "received deprecated onAccountValidationComplete callback, ignoring", new Exception());
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$j */
    public final class j implements ServiceConnection {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f1252a;

        public j(int i) {
            this.f1252a = i;
        }

        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            InterfaceC0077o c0076n;
            if (iBinder == null) {
                AbstractC0065c.this.c(16);
                return;
            }
            synchronized (AbstractC0065c.this.o) {
                AbstractC0065c abstractC0065c = AbstractC0065c.this;
                if (iBinder == null) {
                    c0076n = null;
                } else {
                    IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.common.internal.IGmsServiceBroker");
                    c0076n = (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof InterfaceC0077o)) ? new C0076n(iBinder) : (InterfaceC0077o) iInterfaceQueryLocalInterface;
                }
                abstractC0065c.p = c0076n;
            }
            AbstractC0065c.this.a(0, (Bundle) null, this.f1252a);
        }

        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
            synchronized (AbstractC0065c.this.o) {
                AbstractC0065c.this.p = null;
            }
            Handler handler = AbstractC0065c.this.m;
            handler.sendMessage(handler.obtainMessage(6, this.f1252a, 1));
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$k */
    protected final class k extends f {
        private final IBinder g;

        public k(int i, IBinder iBinder, Bundle bundle) {
            super(i, bundle);
            this.g = iBinder;
        }

        @Override // com.google.android.gms.common.internal.AbstractC0065c.f
        protected final void a(ConnectionResult connectionResult) {
            if (AbstractC0065c.this.w != null) {
                AbstractC0065c.this.w.a(connectionResult);
            }
            AbstractC0065c.this.a(connectionResult);
        }

        @Override // com.google.android.gms.common.internal.AbstractC0065c.f
        protected final boolean e() {
            try {
                String interfaceDescriptor = this.g.getInterfaceDescriptor();
                if (!AbstractC0065c.this.s().equals(interfaceDescriptor)) {
                    String strS = AbstractC0065c.this.s();
                    StringBuilder sb = new StringBuilder(String.valueOf(strS).length() + 34 + String.valueOf(interfaceDescriptor).length());
                    sb.append("service descriptor mismatch: ");
                    sb.append(strS);
                    sb.append(" vs. ");
                    sb.append(interfaceDescriptor);
                    Log.e("GmsClient", sb.toString());
                    return false;
                }
                IInterface iInterfaceA = AbstractC0065c.this.a(this.g);
                if (iInterfaceA == null || !(AbstractC0065c.this.a(2, 4, iInterfaceA) || AbstractC0065c.this.a(3, 4, iInterfaceA))) {
                    return false;
                }
                AbstractC0065c.this.z = null;
                Bundle bundleM = AbstractC0065c.this.m();
                if (AbstractC0065c.this.v == null) {
                    return true;
                }
                AbstractC0065c.this.v.c(bundleM);
                return true;
            } catch (RemoteException unused) {
                Log.w("GmsClient", "service probably died");
                return false;
            }
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.c$l */
    protected final class l extends f {
        public l(int i, Bundle bundle) {
            super(i, null);
        }

        @Override // com.google.android.gms.common.internal.AbstractC0065c.f
        protected final void a(ConnectionResult connectionResult) {
            if (AbstractC0065c.this.j() && AbstractC0065c.this.y()) {
                AbstractC0065c.this.c(16);
            } else {
                AbstractC0065c.this.q.a(connectionResult);
                AbstractC0065c.this.a(connectionResult);
            }
        }

        @Override // com.google.android.gms.common.internal.AbstractC0065c.f
        protected final boolean e() {
            AbstractC0065c.this.q.a(ConnectionResult.f1002a);
            return true;
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    protected AbstractC0065c(Context context, Looper looper, int i2, a aVar, b bVar, String str) {
        AbstractC0071i abstractC0071iA = AbstractC0071i.a(context);
        com.google.android.gms.common.d dVarA = com.google.android.gms.common.d.a();
        r.a(aVar);
        r.a(bVar);
        this(context, looper, abstractC0071iA, dVarA, i2, aVar, bVar, str);
    }

    protected AbstractC0065c(Context context, Looper looper, AbstractC0071i abstractC0071i, com.google.android.gms.common.d dVar, int i2, a aVar, b bVar, String str) {
        this.n = new Object();
        this.o = new Object();
        this.s = new ArrayList<>();
        this.u = 1;
        this.z = null;
        this.A = false;
        this.B = null;
        this.C = new AtomicInteger(0);
        r.a(context, "Context must not be null");
        this.i = context;
        r.a(looper, "Looper must not be null");
        this.j = looper;
        r.a(abstractC0071i, "Supervisor must not be null");
        this.k = abstractC0071i;
        r.a(dVar, "API availability must not be null");
        this.l = dVar;
        this.m = new g(looper);
        this.x = i2;
        this.v = aVar;
        this.w = bVar;
        this.y = str;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(zzb zzbVar) {
        this.B = zzbVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean a(int i2, int i3, T t) {
        synchronized (this.n) {
            if (this.u != i2) {
                return false;
            }
            b(i3, t);
            return true;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(int i2, T t) {
        r.a((i2 == 4) == (t != null));
        synchronized (this.n) {
            this.u = i2;
            this.r = t;
            a(i2, t);
            if (i2 != 1) {
                if (i2 == 2 || i2 == 3) {
                    if (this.t != null && this.h != null) {
                        String strC = this.h.c();
                        String strA = this.h.a();
                        StringBuilder sb = new StringBuilder(String.valueOf(strC).length() + 70 + String.valueOf(strA).length());
                        sb.append("Calling connect() while still connected, missing disconnect() for ");
                        sb.append(strC);
                        sb.append(" on ");
                        sb.append(strA);
                        Log.e("GmsClient", sb.toString());
                        this.k.a(this.h.c(), this.h.a(), this.h.b(), this.t, w());
                        this.C.incrementAndGet();
                    }
                    this.t = new j(this.C.get());
                    this.h = (this.u != 3 || p() == null) ? new K(u(), t(), false, 129) : new K(n().getPackageName(), p(), true, 129);
                    if (!this.k.a(new AbstractC0071i.a(this.h.c(), this.h.a(), this.h.b()), this.t, w())) {
                        String strC2 = this.h.c();
                        String strA2 = this.h.a();
                        StringBuilder sb2 = new StringBuilder(String.valueOf(strC2).length() + 34 + String.valueOf(strA2).length());
                        sb2.append("unable to connect to service: ");
                        sb2.append(strC2);
                        sb2.append(" on ");
                        sb2.append(strA2);
                        Log.e("GmsClient", sb2.toString());
                        a(16, (Bundle) null, this.C.get());
                    }
                } else if (i2 == 4) {
                    a(t);
                }
            } else if (this.t != null) {
                this.k.a(this.h.c(), this.h.a(), this.h.b(), this.t, w());
                this.t = null;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void c(int i2) {
        int i3;
        if (x()) {
            i3 = 5;
            this.A = true;
        } else {
            i3 = 4;
        }
        Handler handler = this.m;
        handler.sendMessage(handler.obtainMessage(i3, this.C.get(), 16));
    }

    private final String w() {
        String str = this.y;
        return str == null ? this.i.getClass().getName() : str;
    }

    private final boolean x() {
        boolean z;
        synchronized (this.n) {
            z = this.u == 3;
        }
        return z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean y() {
        if (this.A || TextUtils.isEmpty(s()) || TextUtils.isEmpty(p())) {
            return false;
        }
        try {
            Class.forName(s());
            return true;
        } catch (ClassNotFoundException unused) {
            return false;
        }
    }

    protected abstract T a(IBinder iBinder);

    public void a() {
        this.C.incrementAndGet();
        synchronized (this.s) {
            int size = this.s.size();
            for (int i2 = 0; i2 < size; i2++) {
                this.s.get(i2).a();
            }
            this.s.clear();
        }
        synchronized (this.o) {
            this.p = null;
        }
        b(1, null);
    }

    protected void a(int i2) {
        this.f1238c = i2;
        this.f1239d = System.currentTimeMillis();
    }

    protected final void a(int i2, Bundle bundle, int i3) {
        Handler handler = this.m;
        handler.sendMessage(handler.obtainMessage(7, i3, -1, new l(i2, null)));
    }

    protected void a(int i2, IBinder iBinder, Bundle bundle, int i3) {
        Handler handler = this.m;
        handler.sendMessage(handler.obtainMessage(1, i3, -1, new k(i2, iBinder, bundle)));
    }

    void a(int i2, T t) {
    }

    protected void a(T t) {
        this.f1240e = System.currentTimeMillis();
    }

    protected void a(ConnectionResult connectionResult) {
        this.f1241f = connectionResult.a();
        this.g = System.currentTimeMillis();
    }

    public void a(InterfaceC0026c interfaceC0026c) {
        r.a(interfaceC0026c, "Connection progress callbacks cannot be null.");
        this.q = interfaceC0026c;
        b(2, null);
    }

    protected void a(InterfaceC0026c interfaceC0026c, int i2, PendingIntent pendingIntent) {
        r.a(interfaceC0026c, "Connection progress callbacks cannot be null.");
        this.q = interfaceC0026c;
        Handler handler = this.m;
        handler.sendMessage(handler.obtainMessage(3, this.C.get(), i2, pendingIntent));
    }

    public void a(e eVar) {
        eVar.a();
    }

    public void a(InterfaceC0073k interfaceC0073k, Set<Scope> set) {
        Bundle bundleO = o();
        GetServiceRequest getServiceRequest = new GetServiceRequest(this.x);
        getServiceRequest.f1200d = this.i.getPackageName();
        getServiceRequest.g = bundleO;
        if (set != null) {
            getServiceRequest.f1202f = (Scope[]) set.toArray(new Scope[set.size()]);
        }
        if (g()) {
            getServiceRequest.h = k() != null ? k() : new Account("<<default account>>", "com.google");
            if (interfaceC0073k != null) {
                getServiceRequest.f1201e = interfaceC0073k.asBinder();
            }
        } else if (v()) {
            getServiceRequest.h = k();
        }
        getServiceRequest.i = f1236a;
        getServiceRequest.j = l();
        try {
            synchronized (this.o) {
                if (this.p != null) {
                    this.p.a(new i(this, this.C.get()), getServiceRequest);
                } else {
                    Log.w("GmsClient", "mServiceBroker is null, client disconnected");
                }
            }
        } catch (DeadObjectException e2) {
            Log.w("GmsClient", "IGmsServiceBroker.getService failed", e2);
            b(1);
        } catch (RemoteException e3) {
            e = e3;
            Log.w("GmsClient", "IGmsServiceBroker.getService failed", e);
            a(8, (IBinder) null, (Bundle) null, this.C.get());
        } catch (SecurityException e4) {
            throw e4;
        } catch (RuntimeException e5) {
            e = e5;
            Log.w("GmsClient", "IGmsServiceBroker.getService failed", e);
            a(8, (IBinder) null, (Bundle) null, this.C.get());
        }
    }

    public void b(int i2) {
        Handler handler = this.m;
        handler.sendMessage(handler.obtainMessage(6, this.C.get(), i2));
    }

    public boolean b() {
        boolean z;
        synchronized (this.n) {
            z = this.u == 2 || this.u == 3;
        }
        return z;
    }

    public String c() {
        K k2;
        if (!isConnected() || (k2 = this.h) == null) {
            throw new RuntimeException("Failed to connect when checking package");
        }
        return k2.a();
    }

    public boolean d() {
        return true;
    }

    public int e() {
        return com.google.android.gms.common.d.f1132a;
    }

    public final Feature[] f() {
        zzb zzbVar = this.B;
        if (zzbVar == null) {
            return null;
        }
        return zzbVar.f1288b;
    }

    public boolean g() {
        return false;
    }

    public void h() {
        int iA = this.l.a(this.i, e());
        if (iA == 0) {
            a(new d());
        } else {
            b(1, null);
            a(new d(), iA, (PendingIntent) null);
        }
    }

    protected final void i() {
        if (!isConnected()) {
            throw new IllegalStateException("Not connected. Call connect() and wait for onConnected() to be called.");
        }
    }

    public boolean isConnected() {
        boolean z;
        synchronized (this.n) {
            z = this.u == 4;
        }
        return z;
    }

    protected boolean j() {
        return false;
    }

    public Account k() {
        return null;
    }

    public Feature[] l() {
        return f1236a;
    }

    public Bundle m() {
        return null;
    }

    public final Context n() {
        return this.i;
    }

    protected Bundle o() {
        return new Bundle();
    }

    protected String p() {
        return null;
    }

    protected Set<Scope> q() {
        return Collections.EMPTY_SET;
    }

    public final T r() {
        T t;
        synchronized (this.n) {
            if (this.u == 5) {
                throw new DeadObjectException();
            }
            i();
            r.b(this.r != null, "Client is connected but service is null");
            t = this.r;
        }
        return t;
    }

    protected abstract String s();

    protected abstract String t();

    protected String u() {
        return "com.google.android.gms";
    }

    public boolean v() {
        return false;
    }
}
