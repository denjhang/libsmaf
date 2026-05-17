package com.google.android.gms.measurement.internal;

import android.os.RemoteException;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.td, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0352td implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ C0298id f2423a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ C0318md f2424b;

    RunnableC0352td(C0318md c0318md, C0298id c0298id) {
        this.f2424b = c0318md;
        this.f2423a = c0298id;
    }

    @Override // java.lang.Runnable
    public final void run() {
        long j;
        String str;
        String str2;
        String packageName;
        InterfaceC0326ob interfaceC0326ob = this.f2424b.f2336d;
        if (interfaceC0326ob == null) {
            this.f2424b.d().t().a("Failed to send current screen to service");
            return;
        }
        try {
            if (this.f2423a == null) {
                j = 0;
                str = null;
                str2 = null;
                packageName = this.f2424b.e().getPackageName();
            } else {
                j = this.f2423a.f2285c;
                str = this.f2423a.f2283a;
                str2 = this.f2423a.f2284b;
                packageName = this.f2424b.e().getPackageName();
            }
            interfaceC0326ob.a(j, str, str2, packageName);
            this.f2424b.J();
        } catch (RemoteException e2) {
            this.f2424b.d().t().a("Failed to send current screen to the service", e2);
        }
    }
}
