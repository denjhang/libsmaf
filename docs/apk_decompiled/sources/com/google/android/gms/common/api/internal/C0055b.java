package com.google.android.gms.common.api.internal;

import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import android.os.DeadObjectException;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.Feature;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.a;
import com.google.android.gms.common.internal.AbstractC0065c;
import com.google.android.gms.common.internal.C0072j;
import com.google.android.gms.common.internal.C0079q;
import com.google.android.gms.common.internal.C0081t;
import com.google.android.gms.common.internal.InterfaceC0073k;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;
import org.apache.http.protocol.HTTP;

/* JADX INFO: renamed from: com.google.android.gms.common.api.internal.b, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class C0055b implements Handler.Callback {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Status f1067a = new Status(4, "Sign-out occurred while this API call was in progress.");

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Status f1068b = new Status(4, "The user must be signed in to make this API call.");

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final Object f1069c = new Object();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static C0055b f1070d;
    private final Context h;
    private final com.google.android.gms.common.c i;
    private final C0072j j;
    private final Handler q;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private long f1071e = 5000;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private long f1072f = 120000;
    private long g = 10000;
    private final AtomicInteger k = new AtomicInteger(1);
    private final AtomicInteger l = new AtomicInteger(0);
    private final Map<E<?>, a<?>> m = new ConcurrentHashMap(5, 0.75f, 1);
    private j n = null;
    private final Set<E<?>> o = new b.b.d();
    private final Set<E<?>> p = new b.b.d();

    /* JADX INFO: renamed from: com.google.android.gms.common.api.internal.b$a */
    public class a<O extends a.d> implements com.google.android.gms.common.api.f, com.google.android.gms.common.api.g, I {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final a.f f1074b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final a.b f1075c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final E<O> f1076d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final C0062i f1077e;
        private final int h;
        private final w i;
        private boolean j;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Queue<l> f1073a = new LinkedList();

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private final Set<F> f1078f = new HashSet();
        private final Map<C0059f<?>, u> g = new HashMap();
        private final List<C0025b> k = new ArrayList();
        private ConnectionResult l = null;

        public a(com.google.android.gms.common.api.e<O> eVar) {
            this.f1074b = eVar.a(C0055b.this.q.getLooper(), this);
            a.b bVar = this.f1074b;
            this.f1075c = bVar instanceof C0081t ? ((C0081t) bVar).w() : bVar;
            this.f1076d = eVar.c();
            this.f1077e = new C0062i();
            this.h = eVar.b();
            if (this.f1074b.g()) {
                this.i = eVar.a(C0055b.this.h, C0055b.this.q);
            } else {
                this.i = null;
            }
        }

        /* JADX WARN: Multi-variable type inference failed */
        private final Feature a(Feature[] featureArr) {
            if (featureArr != null && featureArr.length != 0) {
                Feature[] featureArrF = this.f1074b.f();
                if (featureArrF == null) {
                    featureArrF = new Feature[0];
                }
                b.b.b bVar = new b.b.b(featureArrF.length);
                for (Feature feature : featureArrF) {
                    bVar.put(feature.a(), Long.valueOf(feature.b()));
                }
                for (Feature feature2 : featureArr) {
                    if (!bVar.containsKey(feature2.a()) || ((Long) bVar.get(feature2.a())).longValue() < feature2.b()) {
                        return feature2;
                    }
                }
            }
            return null;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void a(C0025b c0025b) {
            if (this.k.contains(c0025b) && !this.j) {
                if (this.f1074b.isConnected()) {
                    o();
                } else {
                    a();
                }
            }
        }

        static /* synthetic */ boolean a(a aVar, boolean z) {
            return aVar.a(false);
        }

        private final boolean a(boolean z) {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            if (!this.f1074b.isConnected() || this.g.size() != 0) {
                return false;
            }
            if (!this.f1077e.a()) {
                this.f1074b.a();
                return true;
            }
            if (z) {
                q();
            }
            return false;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void b(C0025b c0025b) {
            Feature[] featureArrB;
            if (this.k.remove(c0025b)) {
                C0055b.this.q.removeMessages(15, c0025b);
                C0055b.this.q.removeMessages(16, c0025b);
                Feature feature = c0025b.f1080b;
                ArrayList arrayList = new ArrayList(this.f1073a.size());
                for (l lVar : this.f1073a) {
                    if ((lVar instanceof v) && (featureArrB = ((v) lVar).b((a<?>) this)) != null && com.google.android.gms.common.util.b.a(featureArrB, feature)) {
                        arrayList.add(lVar);
                    }
                }
                int size = arrayList.size();
                int i = 0;
                while (i < size) {
                    Object obj = arrayList.get(i);
                    i++;
                    l lVar2 = (l) obj;
                    this.f1073a.remove(lVar2);
                    lVar2.a(new com.google.android.gms.common.api.l(feature));
                }
            }
        }

        private final boolean b(l lVar) {
            if (!(lVar instanceof v)) {
                c(lVar);
                return true;
            }
            v vVar = (v) lVar;
            Feature featureA = a(vVar.b((a<?>) this));
            if (featureA == null) {
                c(lVar);
                return true;
            }
            if (!vVar.c(this)) {
                vVar.a(new com.google.android.gms.common.api.l(featureA));
                return false;
            }
            C0025b c0025b = new C0025b(this.f1076d, featureA, null);
            int iIndexOf = this.k.indexOf(c0025b);
            if (iIndexOf >= 0) {
                C0025b c0025b2 = this.k.get(iIndexOf);
                C0055b.this.q.removeMessages(15, c0025b2);
                C0055b.this.q.sendMessageDelayed(Message.obtain(C0055b.this.q, 15, c0025b2), C0055b.this.f1071e);
                return false;
            }
            this.k.add(c0025b);
            C0055b.this.q.sendMessageDelayed(Message.obtain(C0055b.this.q, 15, c0025b), C0055b.this.f1071e);
            C0055b.this.q.sendMessageDelayed(Message.obtain(C0055b.this.q, 16, c0025b), C0055b.this.f1072f);
            ConnectionResult connectionResult = new ConnectionResult(2, null);
            if (c(connectionResult)) {
                return false;
            }
            C0055b.this.b(connectionResult, this.h);
            return false;
        }

        private final void c(l lVar) {
            lVar.a(this.f1077e, d());
            try {
                lVar.a((a<?>) this);
            } catch (DeadObjectException unused) {
                c(1);
                this.f1074b.a();
            }
        }

        private final boolean c(ConnectionResult connectionResult) {
            synchronized (C0055b.f1069c) {
                if (C0055b.this.n != null && C0055b.this.o.contains(this.f1076d)) {
                    C0055b.this.n.a(connectionResult, this.h);
                    throw null;
                }
            }
            return false;
        }

        private final void d(ConnectionResult connectionResult) {
            for (F f2 : this.f1078f) {
                String strC = null;
                if (C0079q.a(connectionResult, ConnectionResult.f1002a)) {
                    strC = this.f1074b.c();
                }
                f2.a(this.f1076d, connectionResult, strC);
            }
            this.f1078f.clear();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void m() {
            j();
            d(ConnectionResult.f1002a);
            p();
            Iterator<u> it = this.g.values().iterator();
            while (it.hasNext()) {
                u next = it.next();
                if (a(next.f1110a.b()) == null) {
                    try {
                        next.f1110a.a(this.f1075c, new c.a.a.a.f.h<>());
                    } catch (DeadObjectException unused) {
                        c(1);
                        this.f1074b.a();
                    } catch (RemoteException unused2) {
                        it.remove();
                    }
                }
                it.remove();
            }
            o();
            q();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void n() {
            j();
            this.j = true;
            this.f1077e.c();
            C0055b.this.q.sendMessageDelayed(Message.obtain(C0055b.this.q, 9, this.f1076d), C0055b.this.f1071e);
            C0055b.this.q.sendMessageDelayed(Message.obtain(C0055b.this.q, 11, this.f1076d), C0055b.this.f1072f);
            C0055b.this.j.a();
        }

        private final void o() {
            ArrayList arrayList = new ArrayList(this.f1073a);
            int size = arrayList.size();
            int i = 0;
            while (i < size) {
                Object obj = arrayList.get(i);
                i++;
                l lVar = (l) obj;
                if (!this.f1074b.isConnected()) {
                    return;
                }
                if (b(lVar)) {
                    this.f1073a.remove(lVar);
                }
            }
        }

        private final void p() {
            if (this.j) {
                C0055b.this.q.removeMessages(11, this.f1076d);
                C0055b.this.q.removeMessages(9, this.f1076d);
                this.j = false;
            }
        }

        private final void q() {
            C0055b.this.q.removeMessages(12, this.f1076d);
            C0055b.this.q.sendMessageDelayed(C0055b.this.q.obtainMessage(12, this.f1076d), C0055b.this.g);
        }

        public final void a() {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            if (this.f1074b.isConnected() || this.f1074b.b()) {
                return;
            }
            int iA = C0055b.this.j.a(C0055b.this.h, this.f1074b);
            if (iA != 0) {
                a(new ConnectionResult(iA, null));
                return;
            }
            c cVar = C0055b.this.new c(this.f1074b, this.f1076d);
            if (this.f1074b.g()) {
                this.i.a(cVar);
            }
            this.f1074b.a(cVar);
        }

        @Override // com.google.android.gms.common.api.g
        public final void a(ConnectionResult connectionResult) {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            w wVar = this.i;
            if (wVar != null) {
                wVar.e();
            }
            j();
            C0055b.this.j.a();
            d(connectionResult);
            if (connectionResult.a() == 4) {
                a(C0055b.f1068b);
                return;
            }
            if (this.f1073a.isEmpty()) {
                this.l = connectionResult;
                return;
            }
            if (c(connectionResult) || C0055b.this.b(connectionResult, this.h)) {
                return;
            }
            if (connectionResult.a() == 18) {
                this.j = true;
            }
            if (this.j) {
                C0055b.this.q.sendMessageDelayed(Message.obtain(C0055b.this.q, 9, this.f1076d), C0055b.this.f1071e);
                return;
            }
            String strA = this.f1076d.a();
            StringBuilder sb = new StringBuilder(String.valueOf(strA).length() + 38);
            sb.append("API: ");
            sb.append(strA);
            sb.append(" is not available on this device.");
            a(new Status(17, sb.toString()));
        }

        public final void a(Status status) {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            Iterator<l> it = this.f1073a.iterator();
            while (it.hasNext()) {
                it.next().a(status);
            }
            this.f1073a.clear();
        }

        public final void a(F f2) {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            this.f1078f.add(f2);
        }

        public final void a(l lVar) {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            if (this.f1074b.isConnected()) {
                if (b(lVar)) {
                    q();
                    return;
                } else {
                    this.f1073a.add(lVar);
                    return;
                }
            }
            this.f1073a.add(lVar);
            ConnectionResult connectionResult = this.l;
            if (connectionResult == null || !connectionResult.d()) {
                a();
            } else {
                a(this.l);
            }
        }

        public final int b() {
            return this.h;
        }

        public final void b(ConnectionResult connectionResult) {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            this.f1074b.a();
            a(connectionResult);
        }

        @Override // com.google.android.gms.common.api.f
        public final void c(int i) {
            if (Looper.myLooper() == C0055b.this.q.getLooper()) {
                n();
            } else {
                C0055b.this.q.post(new o(this));
            }
        }

        @Override // com.google.android.gms.common.api.f
        public final void c(Bundle bundle) {
            if (Looper.myLooper() == C0055b.this.q.getLooper()) {
                m();
            } else {
                C0055b.this.q.post(new n(this));
            }
        }

        final boolean c() {
            return this.f1074b.isConnected();
        }

        public final boolean d() {
            return this.f1074b.g();
        }

        public final void e() {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            if (this.j) {
                a();
            }
        }

        public final a.f f() {
            return this.f1074b;
        }

        public final void g() {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            if (this.j) {
                p();
                a(C0055b.this.i.b(C0055b.this.h) == 18 ? new Status(8, "Connection timed out while waiting for Google Play services update to complete.") : new Status(8, "API failed to connect while resuming due to an unknown error."));
                this.f1074b.a();
            }
        }

        public final void h() {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            a(C0055b.f1067a);
            this.f1077e.b();
            for (C0059f c0059f : (C0059f[]) this.g.keySet().toArray(new C0059f[this.g.size()])) {
                a(new D(c0059f, new c.a.a.a.f.h()));
            }
            d(new ConnectionResult(4));
            if (this.f1074b.isConnected()) {
                this.f1074b.a(new p(this));
            }
        }

        public final Map<C0059f<?>, u> i() {
            return this.g;
        }

        public final void j() {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            this.l = null;
        }

        public final ConnectionResult k() {
            com.google.android.gms.common.internal.r.a(C0055b.this.q);
            return this.l;
        }

        public final boolean l() {
            return a(true);
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.api.internal.b$b, reason: collision with other inner class name */
    private static class C0025b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final E<?> f1079a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final Feature f1080b;

        private C0025b(E<?> e2, Feature feature) {
            this.f1079a = e2;
            this.f1080b = feature;
        }

        /* synthetic */ C0025b(E e2, Feature feature, m mVar) {
            this(e2, feature);
        }

        public final boolean equals(Object obj) {
            if (obj != null && (obj instanceof C0025b)) {
                C0025b c0025b = (C0025b) obj;
                if (C0079q.a(this.f1079a, c0025b.f1079a) && C0079q.a(this.f1080b, c0025b.f1080b)) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            return C0079q.a(this.f1079a, this.f1080b);
        }

        public final String toString() {
            C0079q.a aVarA = C0079q.a(this);
            aVarA.a("key", this.f1079a);
            aVarA.a("feature", this.f1080b);
            return aVarA.toString();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: com.google.android.gms.common.api.internal.b$c */
    class c implements z, AbstractC0065c.InterfaceC0026c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final a.f f1081a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final E<?> f1082b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private InterfaceC0073k f1083c = null;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private Set<Scope> f1084d = null;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private boolean f1085e = false;

        public c(a.f fVar, E<?> e2) {
            this.f1081a = fVar;
            this.f1082b = e2;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void a() {
            InterfaceC0073k interfaceC0073k;
            if (!this.f1085e || (interfaceC0073k = this.f1083c) == null) {
                return;
            }
            this.f1081a.a(interfaceC0073k, this.f1084d);
        }

        static /* synthetic */ boolean a(c cVar, boolean z) {
            cVar.f1085e = true;
            return true;
        }

        @Override // com.google.android.gms.common.internal.AbstractC0065c.InterfaceC0026c
        public final void a(ConnectionResult connectionResult) {
            C0055b.this.q.post(new r(this, connectionResult));
        }

        @Override // com.google.android.gms.common.api.internal.z
        public final void a(InterfaceC0073k interfaceC0073k, Set<Scope> set) {
            if (interfaceC0073k == null || set == null) {
                Log.wtf("GoogleApiManager", "Received null response from onSignInSuccess", new Exception());
                b(new ConnectionResult(4));
            } else {
                this.f1083c = interfaceC0073k;
                this.f1084d = set;
                a();
            }
        }

        @Override // com.google.android.gms.common.api.internal.z
        public final void b(ConnectionResult connectionResult) {
            ((a) C0055b.this.m.get(this.f1082b)).b(connectionResult);
        }
    }

    private C0055b(Context context, Looper looper, com.google.android.gms.common.c cVar) {
        this.h = context;
        this.q = new c.a.a.a.d.b.e(looper, this);
        this.i = cVar;
        this.j = new C0072j(cVar);
        Handler handler = this.q;
        handler.sendMessage(handler.obtainMessage(6));
    }

    public static C0055b a(Context context) {
        C0055b c0055b;
        synchronized (f1069c) {
            if (f1070d == null) {
                HandlerThread handlerThread = new HandlerThread("GoogleApiHandler", 9);
                handlerThread.start();
                f1070d = new C0055b(context.getApplicationContext(), handlerThread.getLooper(), com.google.android.gms.common.c.a());
            }
            c0055b = f1070d;
        }
        return c0055b;
    }

    private final void a(com.google.android.gms.common.api.e<?> eVar) {
        Object objC = eVar.c();
        a<?> aVar = this.m.get(objC);
        if (aVar == null) {
            aVar = new a<>(eVar);
            this.m.put((E<?>) objC, aVar);
        }
        if (aVar.d()) {
            this.p.add((E<?>) objC);
        }
        aVar.a();
    }

    public final void a(ConnectionResult connectionResult, int i) {
        if (b(connectionResult, i)) {
            return;
        }
        Handler handler = this.q;
        handler.sendMessage(handler.obtainMessage(5, i, 0, connectionResult));
    }

    final boolean b(ConnectionResult connectionResult, int i) {
        return this.i.a(this.h, connectionResult, i);
    }

    public final void c() {
        Handler handler = this.q;
        handler.sendMessage(handler.obtainMessage(3));
    }

    @Override // android.os.Handler.Callback
    public boolean handleMessage(Message message) {
        a<?> next;
        c.a.a.a.f.h<Boolean> hVarA;
        boolean zValueOf;
        int i = message.what;
        switch (i) {
            case 1:
                this.g = ((Boolean) message.obj).booleanValue() ? 10000L : 300000L;
                this.q.removeMessages(12);
                for (E<?> e2 : this.m.keySet()) {
                    Handler handler = this.q;
                    handler.sendMessageDelayed(handler.obtainMessage(12, e2), this.g);
                }
                return true;
            case 2:
                F f2 = (F) message.obj;
                Iterator<E<?>> it = f2.a().iterator();
                while (true) {
                    if (it.hasNext()) {
                        E<?> next2 = it.next();
                        a<?> aVar = this.m.get(next2);
                        if (aVar == null) {
                            f2.a(next2, new ConnectionResult(13), null);
                        } else if (aVar.c()) {
                            f2.a(next2, ConnectionResult.f1002a, aVar.f().c());
                        } else if (aVar.k() != null) {
                            f2.a(next2, aVar.k(), null);
                        } else {
                            aVar.a(f2);
                            aVar.a();
                        }
                    }
                }
                return true;
            case 3:
                for (a<?> aVar2 : this.m.values()) {
                    aVar2.j();
                    aVar2.a();
                }
                return true;
            case 4:
            case 8:
            case HTTP.CR /* 13 */:
                t tVar = (t) message.obj;
                a<?> aVar3 = this.m.get(tVar.f1109c.c());
                if (aVar3 == null) {
                    a(tVar.f1109c);
                    aVar3 = this.m.get(tVar.f1109c.c());
                }
                if (!aVar3.d() || this.l.get() == tVar.f1108b) {
                    aVar3.a(tVar.f1107a);
                } else {
                    tVar.f1107a.a(f1067a);
                    aVar3.h();
                }
                return true;
            case 5:
                int i2 = message.arg1;
                ConnectionResult connectionResult = (ConnectionResult) message.obj;
                Iterator<a<?>> it2 = this.m.values().iterator();
                while (true) {
                    if (it2.hasNext()) {
                        next = it2.next();
                        if (next.b() == i2) {
                        }
                    } else {
                        next = null;
                    }
                }
                if (next != null) {
                    String strA = this.i.a(connectionResult.a());
                    String strB = connectionResult.b();
                    StringBuilder sb = new StringBuilder(String.valueOf(strA).length() + 69 + String.valueOf(strB).length());
                    sb.append("Error resolution was canceled by the user, original error message: ");
                    sb.append(strA);
                    sb.append(": ");
                    sb.append(strB);
                    next.a(new Status(17, sb.toString()));
                } else {
                    StringBuilder sb2 = new StringBuilder(76);
                    sb2.append("Could not find API instance ");
                    sb2.append(i2);
                    sb2.append(" while trying to fail enqueued calls.");
                    Log.wtf("GoogleApiManager", sb2.toString(), new Exception());
                }
                return true;
            case 6:
                if (com.google.android.gms.common.util.n.a() && (this.h.getApplicationContext() instanceof Application)) {
                    ComponentCallbacks2C0054a.a((Application) this.h.getApplicationContext());
                    ComponentCallbacks2C0054a.a().a(new m(this));
                    if (!ComponentCallbacks2C0054a.a().a(true)) {
                        this.g = 300000L;
                    }
                }
                return true;
            case 7:
                a((com.google.android.gms.common.api.e<?>) message.obj);
                return true;
            case 9:
                if (this.m.containsKey(message.obj)) {
                    this.m.get(message.obj).e();
                }
                return true;
            case 10:
                Iterator<E<?>> it3 = this.p.iterator();
                while (it3.hasNext()) {
                    this.m.remove(it3.next()).h();
                }
                this.p.clear();
                return true;
            case 11:
                if (this.m.containsKey(message.obj)) {
                    this.m.get(message.obj).g();
                }
                return true;
            case 12:
                if (this.m.containsKey(message.obj)) {
                    this.m.get(message.obj).l();
                }
                return true;
            case 14:
                k kVar = (k) message.obj;
                E<?> eB = kVar.b();
                if (this.m.containsKey(eB)) {
                    boolean zA = a.a((a) this.m.get(eB), false);
                    hVarA = kVar.a();
                    zValueOf = Boolean.valueOf(zA);
                } else {
                    hVarA = kVar.a();
                    zValueOf = false;
                }
                hVarA.a(zValueOf);
                return true;
            case 15:
                C0025b c0025b = (C0025b) message.obj;
                if (this.m.containsKey(c0025b.f1079a)) {
                    this.m.get(c0025b.f1079a).a(c0025b);
                }
                return true;
            case 16:
                C0025b c0025b2 = (C0025b) message.obj;
                if (this.m.containsKey(c0025b2.f1079a)) {
                    this.m.get(c0025b2.f1079a).b(c0025b2);
                }
                return true;
            default:
                StringBuilder sb3 = new StringBuilder(31);
                sb3.append("Unknown message id: ");
                sb3.append(i);
                Log.w("GoogleApiManager", sb3.toString());
                return false;
        }
    }
}
