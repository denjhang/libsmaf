package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import android.text.TextUtils;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.wd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0367wd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ boolean f2450a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ boolean f2451b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ zzv f2452c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ zzm f2453d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ zzv f2454e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ C0318md f2455f;

    RunnableC0367wd(C0318md c0318md, boolean z, boolean z2, zzv zzvVar, zzm zzmVar, zzv zzvVar2) {
        this.f2455f = c0318md;
        this.f2450a = z;
        this.f2451b = z2;
        this.f2452c = zzvVar;
        this.f2453d = zzmVar;
        this.f2454e = zzvVar2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        InterfaceC0326ob interfaceC0326ob = this.f2455f.f2336d;
        if (interfaceC0326ob == null) {
            this.f2455f.d().t().a("Discarding data. Failed to send conditional user property to service");
            return;
        }
        if (this.f2450a) {
            this.f2455f.a(interfaceC0326ob, this.f2451b ? null : this.f2452c, this.f2453d);
        } else {
            try {
                if (TextUtils.isEmpty(this.f2454e.f2522a)) {
                    interfaceC0326ob.a(this.f2452c, this.f2453d);
                } else {
                    interfaceC0326ob.a(this.f2452c);
                }
            } catch (RemoteException e2) {
                this.f2455f.d().t().a("Failed to send conditional user property to the service", e2);
            }
        }
        this.f2455f.J();
    }
}
