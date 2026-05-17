package com.google.firebase.iid;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.util.Log;
import android.util.SparseArray;
import java.util.ArrayDeque;
import java.util.Iterator;
import java.util.Queue;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: com.google.firebase.iid.h, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class ServiceConnectionC0390h implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f2675a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final Messenger f2676b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    C0393k f2677c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final Queue<AbstractC0395m<?>> f2678d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final SparseArray<AbstractC0395m<?>> f2679e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ C0388f f2680f;

    private ServiceConnectionC0390h(C0388f c0388f) {
        this.f2680f = c0388f;
        this.f2675a = 0;
        this.f2676b = new Messenger(new c.a.a.a.d.d.e(Looper.getMainLooper(), new Handler.Callback(this) { // from class: com.google.firebase.iid.g

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final ServiceConnectionC0390h f2674a;

            {
                this.f2674a = this;
            }

            @Override // android.os.Handler.Callback
            public final boolean handleMessage(Message message) {
                return this.f2674a.a(message);
            }
        }));
        this.f2678d = new ArrayDeque();
        this.f2679e = new SparseArray<>();
    }

    private final void c() {
        this.f2680f.f2671c.execute(new Runnable(this) { // from class: com.google.firebase.iid.i

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final ServiceConnectionC0390h f2681a;

            {
                this.f2681a = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                final AbstractC0395m<?> abstractC0395mPoll;
                final ServiceConnectionC0390h serviceConnectionC0390h = this.f2681a;
                while (true) {
                    synchronized (serviceConnectionC0390h) {
                        if (serviceConnectionC0390h.f2675a != 2) {
                            return;
                        }
                        if (serviceConnectionC0390h.f2678d.isEmpty()) {
                            serviceConnectionC0390h.b();
                            return;
                        } else {
                            abstractC0395mPoll = serviceConnectionC0390h.f2678d.poll();
                            serviceConnectionC0390h.f2679e.put(abstractC0395mPoll.f2687a, abstractC0395mPoll);
                            serviceConnectionC0390h.f2680f.f2671c.schedule(new Runnable(serviceConnectionC0390h, abstractC0395mPoll) { // from class: com.google.firebase.iid.l

                                /* JADX INFO: renamed from: a, reason: collision with root package name */
                                private final ServiceConnectionC0390h f2685a;

                                /* JADX INFO: renamed from: b, reason: collision with root package name */
                                private final AbstractC0395m f2686b;

                                {
                                    this.f2685a = serviceConnectionC0390h;
                                    this.f2686b = abstractC0395mPoll;
                                }

                                @Override // java.lang.Runnable
                                public final void run() {
                                    this.f2685a.a(this.f2686b.f2687a);
                                }
                            }, 30L, TimeUnit.SECONDS);
                        }
                    }
                    if (Log.isLoggable("MessengerIpcClient", 3)) {
                        String strValueOf = String.valueOf(abstractC0395mPoll);
                        StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 8);
                        sb.append("Sending ");
                        sb.append(strValueOf);
                        Log.d("MessengerIpcClient", sb.toString());
                    }
                    Context context = serviceConnectionC0390h.f2680f.f2670b;
                    Messenger messenger = serviceConnectionC0390h.f2676b;
                    Message messageObtain = Message.obtain();
                    messageObtain.what = abstractC0395mPoll.f2689c;
                    messageObtain.arg1 = abstractC0395mPoll.f2687a;
                    messageObtain.replyTo = messenger;
                    Bundle bundle = new Bundle();
                    bundle.putBoolean("oneWay", abstractC0395mPoll.a());
                    bundle.putString("pkg", context.getPackageName());
                    bundle.putBundle("data", abstractC0395mPoll.f2690d);
                    messageObtain.setData(bundle);
                    try {
                        serviceConnectionC0390h.f2677c.a(messageObtain);
                    } catch (RemoteException e2) {
                        serviceConnectionC0390h.a(2, e2.getMessage());
                    }
                }
            }
        });
    }

    final synchronized void a() {
        if (this.f2675a == 1) {
            a(1, "Timed out while binding");
        }
    }

    final synchronized void a(int i) {
        AbstractC0395m<?> abstractC0395m = this.f2679e.get(i);
        if (abstractC0395m != null) {
            StringBuilder sb = new StringBuilder(31);
            sb.append("Timing out request: ");
            sb.append(i);
            Log.w("MessengerIpcClient", sb.toString());
            this.f2679e.remove(i);
            abstractC0395m.a(new C0397o(3, "Timed out waiting for response"));
            b();
        }
    }

    final synchronized void a(int i, String str) {
        if (Log.isLoggable("MessengerIpcClient", 3)) {
            String strValueOf = String.valueOf(str);
            Log.d("MessengerIpcClient", strValueOf.length() != 0 ? "Disconnected: ".concat(strValueOf) : new String("Disconnected: "));
        }
        int i2 = this.f2675a;
        if (i2 == 0) {
            throw new IllegalStateException();
        }
        if (i2 != 1 && i2 != 2) {
            if (i2 == 3) {
                this.f2675a = 4;
                return;
            } else {
                if (i2 == 4) {
                    return;
                }
                int i3 = this.f2675a;
                StringBuilder sb = new StringBuilder(26);
                sb.append("Unknown state: ");
                sb.append(i3);
                throw new IllegalStateException(sb.toString());
            }
        }
        if (Log.isLoggable("MessengerIpcClient", 2)) {
            Log.v("MessengerIpcClient", "Unbinding service");
        }
        this.f2675a = 4;
        com.google.android.gms.common.stats.a.a().a(this.f2680f.f2670b, this);
        C0397o c0397o = new C0397o(i, str);
        Iterator<AbstractC0395m<?>> it = this.f2678d.iterator();
        while (it.hasNext()) {
            it.next().a(c0397o);
        }
        this.f2678d.clear();
        for (int i4 = 0; i4 < this.f2679e.size(); i4++) {
            this.f2679e.valueAt(i4).a(c0397o);
        }
        this.f2679e.clear();
    }

    final boolean a(Message message) {
        int i = message.arg1;
        if (Log.isLoggable("MessengerIpcClient", 3)) {
            StringBuilder sb = new StringBuilder(41);
            sb.append("Received response to request: ");
            sb.append(i);
            Log.d("MessengerIpcClient", sb.toString());
        }
        synchronized (this) {
            AbstractC0395m<?> abstractC0395m = this.f2679e.get(i);
            if (abstractC0395m == null) {
                StringBuilder sb2 = new StringBuilder(50);
                sb2.append("Received response for unknown request: ");
                sb2.append(i);
                Log.w("MessengerIpcClient", sb2.toString());
                return true;
            }
            this.f2679e.remove(i);
            b();
            Bundle data = message.getData();
            if (data.getBoolean("unsupported", false)) {
                abstractC0395m.a(new C0397o(4, "Not supported by GmsCore"));
            } else {
                abstractC0395m.a(data);
            }
            return true;
        }
    }

    final synchronized boolean a(AbstractC0395m abstractC0395m) {
        int i = this.f2675a;
        if (i == 0) {
            this.f2678d.add(abstractC0395m);
            com.google.android.gms.common.internal.r.b(this.f2675a == 0);
            if (Log.isLoggable("MessengerIpcClient", 2)) {
                Log.v("MessengerIpcClient", "Starting bind to GmsCore");
            }
            this.f2675a = 1;
            Intent intent = new Intent("com.google.android.c2dm.intent.REGISTER");
            intent.setPackage("com.google.android.gms");
            if (com.google.android.gms.common.stats.a.a().a(this.f2680f.f2670b, intent, this, 1)) {
                this.f2680f.f2671c.schedule(new Runnable(this) { // from class: com.google.firebase.iid.j

                    /* JADX INFO: renamed from: a, reason: collision with root package name */
                    private final ServiceConnectionC0390h f2682a;

                    {
                        this.f2682a = this;
                    }

                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f2682a.a();
                    }
                }, 30L, TimeUnit.SECONDS);
            } else {
                a(0, "Unable to bind to service");
            }
            return true;
        }
        if (i == 1) {
            this.f2678d.add(abstractC0395m);
            return true;
        }
        if (i == 2) {
            this.f2678d.add(abstractC0395m);
            c();
            return true;
        }
        if (i != 3 && i != 4) {
            int i2 = this.f2675a;
            StringBuilder sb = new StringBuilder(26);
            sb.append("Unknown state: ");
            sb.append(i2);
            throw new IllegalStateException(sb.toString());
        }
        return false;
    }

    final synchronized void b() {
        if (this.f2675a == 2 && this.f2678d.isEmpty() && this.f2679e.size() == 0) {
            if (Log.isLoggable("MessengerIpcClient", 2)) {
                Log.v("MessengerIpcClient", "Finished handling requests, unbinding");
            }
            this.f2675a = 3;
            com.google.android.gms.common.stats.a.a().a(this.f2680f.f2670b, this);
        }
    }

    @Override // android.content.ServiceConnection
    public final synchronized void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        if (Log.isLoggable("MessengerIpcClient", 2)) {
            Log.v("MessengerIpcClient", "Service connected");
        }
        if (iBinder == null) {
            a(0, "Null service connection");
            return;
        }
        try {
            this.f2677c = new C0393k(iBinder);
            this.f2675a = 2;
            c();
        } catch (RemoteException e2) {
            a(0, e2.getMessage());
        }
    }

    @Override // android.content.ServiceConnection
    public final synchronized void onServiceDisconnected(ComponentName componentName) {
        if (Log.isLoggable("MessengerIpcClient", 2)) {
            Log.v("MessengerIpcClient", "Service disconnected");
        }
        a(2, "Service disconnected");
    }
}
