package com.google.android.gms.measurement.internal;

import android.os.RemoteException;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.ud, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0357ud implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2433a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ C0318md f2434b;

    RunnableC0357ud(C0318md c0318md, zzm zzmVar) {
        this.f2434b = c0318md;
        this.f2433a = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        InterfaceC0326ob interfaceC0326ob = this.f2434b.f2336d;
        if (interfaceC0326ob == null) {
            this.f2434b.d().t().a("Failed to send measurementEnabled to service");
            return;
        }
        try {
            interfaceC0326ob.b(this.f2433a);
            this.f2434b.J();
        } catch (RemoteException e2) {
            this.f2434b.d().t().a("Failed to send measurementEnabled to the service", e2);
        }
    }
}
