package com.google.android.gms.measurement.internal;

import android.os.RemoteException;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.pd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0333pd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2377a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ C0318md f2378b;

    RunnableC0333pd(C0318md c0318md, zzm zzmVar) {
        this.f2378b = c0318md;
        this.f2377a = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        InterfaceC0326ob interfaceC0326ob = this.f2378b.f2336d;
        if (interfaceC0326ob == null) {
            this.f2378b.d().t().a("Failed to reset data on the service; null service");
            return;
        }
        try {
            interfaceC0326ob.a(this.f2377a);
        } catch (RemoteException e2) {
            this.f2378b.d().t().a("Failed to reset data on the service", e2);
        }
        this.f2378b.J();
    }
}
