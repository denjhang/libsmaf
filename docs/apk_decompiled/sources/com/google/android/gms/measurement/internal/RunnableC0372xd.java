package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import android.text.TextUtils;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.xd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0372xd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ boolean f2458a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ boolean f2459b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ zzan f2460c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ zzm f2461d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ String f2462e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ C0318md f2463f;

    RunnableC0372xd(C0318md c0318md, boolean z, boolean z2, zzan zzanVar, zzm zzmVar, String str) {
        this.f2463f = c0318md;
        this.f2458a = z;
        this.f2459b = z2;
        this.f2460c = zzanVar;
        this.f2461d = zzmVar;
        this.f2462e = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        InterfaceC0326ob interfaceC0326ob = this.f2463f.f2336d;
        if (interfaceC0326ob == null) {
            this.f2463f.d().t().a("Discarding data. Failed to send event to service");
            return;
        }
        if (this.f2458a) {
            this.f2463f.a(interfaceC0326ob, this.f2459b ? null : this.f2460c, this.f2461d);
        } else {
            try {
                if (TextUtils.isEmpty(this.f2462e)) {
                    interfaceC0326ob.a(this.f2460c, this.f2461d);
                } else {
                    interfaceC0326ob.a(this.f2460c, this.f2462e, this.f2463f.d().C());
                }
            } catch (RemoteException e2) {
                this.f2463f.d().t().a("Failed to send event to the service", e2);
            }
        }
        this.f2463f.J();
    }
}
