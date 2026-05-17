package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import com.google.android.gms.internal.measurement.Ef;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.sd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0347sd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzan f2402a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2403b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ Ef f2404c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ C0318md f2405d;

    RunnableC0347sd(C0318md c0318md, zzan zzanVar, String str, Ef ef) {
        this.f2405d = c0318md;
        this.f2402a = zzanVar;
        this.f2403b = str;
        this.f2404c = ef;
    }

    @Override // java.lang.Runnable
    public final void run() {
        byte[] bArrA = null;
        try {
            try {
                InterfaceC0326ob interfaceC0326ob = this.f2405d.f2336d;
                if (interfaceC0326ob == null) {
                    this.f2405d.d().t().a("Discarding data. Failed to send event to service to bundle");
                } else {
                    bArrA = interfaceC0326ob.a(this.f2402a, this.f2403b);
                    this.f2405d.J();
                }
            } catch (RemoteException e2) {
                this.f2405d.d().t().a("Failed to send event to the service to bundle", e2);
            }
        } finally {
            this.f2405d.k().a(this.f2404c, bArrA);
        }
    }
}
