package com.google.firebase.iid;

import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import java.util.concurrent.ScheduledExecutorService;

/* JADX INFO: renamed from: com.google.firebase.iid.f, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0388f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0388f f2669a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Context f2670b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final ScheduledExecutorService f2671c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private ServiceConnectionC0390h f2672d = new ServiceConnectionC0390h(this);

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f2673e = 1;

    private C0388f(Context context, ScheduledExecutorService scheduledExecutorService) {
        this.f2671c = scheduledExecutorService;
        this.f2670b = context.getApplicationContext();
    }

    private final synchronized int a() {
        int i;
        i = this.f2673e;
        this.f2673e = i + 1;
        return i;
    }

    private final synchronized <T> c.a.a.a.f.g<T> a(AbstractC0395m<T> abstractC0395m) {
        if (Log.isLoggable("MessengerIpcClient", 3)) {
            String strValueOf = String.valueOf(abstractC0395m);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 9);
            sb.append("Queueing ");
            sb.append(strValueOf);
            Log.d("MessengerIpcClient", sb.toString());
        }
        if (!this.f2672d.a(abstractC0395m)) {
            this.f2672d = new ServiceConnectionC0390h(this);
            this.f2672d.a(abstractC0395m);
        }
        return abstractC0395m.f2688b.a();
    }

    public static synchronized C0388f a(Context context) {
        if (f2669a == null) {
            f2669a = new C0388f(context, c.a.a.a.d.d.a.a().a(1, new com.google.android.gms.common.util.a.a("MessengerIpcClient"), c.a.a.a.d.d.f.f834a));
        }
        return f2669a;
    }

    public final c.a.a.a.f.g<Bundle> a(int i, Bundle bundle) {
        return a(new C0396n(a(), 1, bundle));
    }
}
