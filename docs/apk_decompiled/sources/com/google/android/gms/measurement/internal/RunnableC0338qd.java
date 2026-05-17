package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.qd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0338qd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2385a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ boolean f2386b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ C0318md f2387c;

    RunnableC0338qd(C0318md c0318md, zzm zzmVar, boolean z) {
        this.f2387c = c0318md;
        this.f2385a = zzmVar;
        this.f2386b = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        InterfaceC0326ob interfaceC0326ob = this.f2387c.f2336d;
        if (interfaceC0326ob == null) {
            this.f2387c.d().t().a("Discarding data. Failed to send app launch");
            return;
        }
        try {
            interfaceC0326ob.d(this.f2385a);
            if (this.f2386b) {
                this.f2387c.t().D();
            }
            this.f2387c.a(interfaceC0326ob, (AbstractSafeParcelable) null, this.f2385a);
            this.f2387c.J();
        } catch (RemoteException e2) {
            this.f2387c.d().t().a("Failed to send app launch to the service", e2);
        }
    }
}
