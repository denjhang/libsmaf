package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import com.google.android.gms.internal.measurement.Ef;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.rd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0342rd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2392a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Ef f2393b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ C0318md f2394c;

    RunnableC0342rd(C0318md c0318md, zzm zzmVar, Ef ef) {
        this.f2394c = c0318md;
        this.f2392a = zzmVar;
        this.f2393b = ef;
    }

    @Override // java.lang.Runnable
    public final void run() {
        String strC = null;
        try {
            try {
                InterfaceC0326ob interfaceC0326ob = this.f2394c.f2336d;
                if (interfaceC0326ob == null) {
                    this.f2394c.d().t().a("Failed to get app instance id");
                } else {
                    strC = interfaceC0326ob.c(this.f2392a);
                    if (strC != null) {
                        this.f2394c.p().a(strC);
                        this.f2394c.l().m.a(strC);
                    }
                    this.f2394c.J();
                }
            } catch (RemoteException e2) {
                this.f2394c.d().t().a("Failed to get app instance id", e2);
            }
        } finally {
            this.f2394c.k().a(this.f2393b, (String) null);
        }
    }
}
