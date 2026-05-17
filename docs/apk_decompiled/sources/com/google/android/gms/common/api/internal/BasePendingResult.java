package com.google.android.gms.common.api.internal;

import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.util.Pair;
import com.google.android.gms.common.annotation.KeepName;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.h;
import com.google.android.gms.common.api.j;
import com.google.android.gms.common.internal.InterfaceC0074l;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@KeepName
public abstract class BasePendingResult<R extends com.google.android.gms.common.api.j> extends com.google.android.gms.common.api.h<R> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final ThreadLocal<Boolean> f1044a = new H();
    private com.google.android.gms.common.api.k<? super R> g;
    private R i;
    private Status j;
    private volatile boolean k;
    private boolean l;
    private boolean m;

    @KeepName
    private b mResultGuardian;
    private InterfaceC0074l n;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Object f1045b = new Object();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final CountDownLatch f1048e = new CountDownLatch(1);

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final ArrayList<h.a> f1049f = new ArrayList<>();
    private final AtomicReference<B> h = new AtomicReference<>();
    private boolean o = false;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final a<R> f1046c = new a<>(Looper.getMainLooper());

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final WeakReference<Object> f1047d = new WeakReference<>(null);

    public static class a<R extends com.google.android.gms.common.api.j> extends c.a.a.a.d.b.e {
        public a(Looper looper) {
            super(looper);
        }

        public final void a(com.google.android.gms.common.api.k<? super R> kVar, R r) {
            sendMessage(obtainMessage(1, new Pair(kVar, r)));
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i != 1) {
                if (i == 2) {
                    ((BasePendingResult) message.obj).b(Status.f1027d);
                    return;
                }
                StringBuilder sb = new StringBuilder(45);
                sb.append("Don't know how to handle message: ");
                sb.append(i);
                Log.wtf("BasePendingResult", sb.toString(), new Exception());
                return;
            }
            Pair pair = (Pair) message.obj;
            com.google.android.gms.common.api.k kVar = (com.google.android.gms.common.api.k) pair.first;
            com.google.android.gms.common.api.j jVar = (com.google.android.gms.common.api.j) pair.second;
            try {
                kVar.a(jVar);
            } catch (RuntimeException e2) {
                BasePendingResult.b(jVar);
                throw e2;
            }
        }
    }

    private final class b {
        private b() {
        }

        /* synthetic */ b(BasePendingResult basePendingResult, H h) {
            this();
        }

        protected final void finalize() throws Throwable {
            BasePendingResult.b(BasePendingResult.this.i);
            super.finalize();
        }
    }

    @Deprecated
    BasePendingResult() {
    }

    private final R b() {
        R r;
        synchronized (this.f1045b) {
            com.google.android.gms.common.internal.r.b(!this.k, "Result has already been consumed.");
            com.google.android.gms.common.internal.r.b(a(), "Result is not ready.");
            r = this.i;
            this.i = null;
            this.g = null;
            this.k = true;
        }
        B andSet = this.h.getAndSet(null);
        if (andSet != null) {
            andSet.a(this);
        }
        return r;
    }

    public static void b(com.google.android.gms.common.api.j jVar) {
        if (jVar instanceof com.google.android.gms.common.api.i) {
            try {
                ((com.google.android.gms.common.api.i) jVar).a();
            } catch (RuntimeException e2) {
                String strValueOf = String.valueOf(jVar);
                StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 18);
                sb.append("Unable to release ");
                sb.append(strValueOf);
                Log.w("BasePendingResult", sb.toString(), e2);
            }
        }
    }

    private final void c(R r) {
        this.i = r;
        H h = null;
        this.n = null;
        this.f1048e.countDown();
        this.j = this.i.getStatus();
        if (this.l) {
            this.g = null;
        } else if (this.g != null) {
            this.f1046c.removeMessages(2);
            this.f1046c.a(this.g, b());
        } else if (this.i instanceof com.google.android.gms.common.api.i) {
            this.mResultGuardian = new b(this, h);
        }
        ArrayList<h.a> arrayList = this.f1049f;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            h.a aVar = arrayList.get(i);
            i++;
            aVar.a(this.j);
        }
        this.f1049f.clear();
    }

    protected abstract R a(Status status);

    public final void a(R r) {
        synchronized (this.f1045b) {
            if (this.m || this.l) {
                b(r);
                return;
            }
            a();
            boolean z = true;
            com.google.android.gms.common.internal.r.b(!a(), "Results have already been set");
            if (this.k) {
                z = false;
            }
            com.google.android.gms.common.internal.r.b(z, "Result has already been consumed");
            c(r);
        }
    }

    public final boolean a() {
        return this.f1048e.getCount() == 0;
    }

    public final void b(Status status) {
        synchronized (this.f1045b) {
            if (!a()) {
                a(a(status));
                this.m = true;
            }
        }
    }
}
