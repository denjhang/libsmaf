package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.od, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0328od implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f2363a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ zzm f2364b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ C0318md f2365c;

    RunnableC0328od(C0318md c0318md, AtomicReference atomicReference, zzm zzmVar) {
        this.f2365c = c0318md;
        this.f2363a = atomicReference;
        this.f2364b = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        AtomicReference atomicReference;
        InterfaceC0326ob interfaceC0326ob;
        synchronized (this.f2363a) {
            try {
                try {
                    interfaceC0326ob = this.f2365c.f2336d;
                } catch (RemoteException e2) {
                    this.f2365c.d().t().a("Failed to get app instance id", e2);
                    atomicReference = this.f2363a;
                }
                if (interfaceC0326ob == null) {
                    this.f2365c.d().t().a("Failed to get app instance id");
                    return;
                }
                this.f2363a.set(interfaceC0326ob.c(this.f2364b));
                String str = (String) this.f2363a.get();
                if (str != null) {
                    this.f2365c.p().a(str);
                    this.f2365c.l().m.a(str);
                }
                this.f2365c.J();
                atomicReference = this.f2363a;
                atomicReference.notify();
            } finally {
                this.f2363a.notify();
            }
        }
    }
}
