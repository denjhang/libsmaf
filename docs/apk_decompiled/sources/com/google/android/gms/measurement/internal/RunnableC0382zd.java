package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import android.text.TextUtils;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.zd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0382zd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f2496a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2497b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2498c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ String f2499d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ zzm f2500e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ C0318md f2501f;

    RunnableC0382zd(C0318md c0318md, AtomicReference atomicReference, String str, String str2, String str3, zzm zzmVar) {
        this.f2501f = c0318md;
        this.f2496a = atomicReference;
        this.f2497b = str;
        this.f2498c = str2;
        this.f2499d = str3;
        this.f2500e = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        AtomicReference atomicReference;
        InterfaceC0326ob interfaceC0326ob;
        AtomicReference atomicReference2;
        List<zzv> listA;
        synchronized (this.f2496a) {
            try {
                try {
                    interfaceC0326ob = this.f2501f.f2336d;
                } catch (RemoteException e2) {
                    this.f2501f.d().t().a("Failed to get conditional properties", C0365wb.a(this.f2497b), this.f2498c, e2);
                    this.f2496a.set(Collections.emptyList());
                    atomicReference = this.f2496a;
                }
                if (interfaceC0326ob == null) {
                    this.f2501f.d().t().a("Failed to get conditional properties", C0365wb.a(this.f2497b), this.f2498c, this.f2499d);
                    this.f2496a.set(Collections.emptyList());
                    return;
                }
                if (TextUtils.isEmpty(this.f2497b)) {
                    atomicReference2 = this.f2496a;
                    listA = interfaceC0326ob.a(this.f2498c, this.f2499d, this.f2500e);
                } else {
                    atomicReference2 = this.f2496a;
                    listA = interfaceC0326ob.a(this.f2497b, this.f2498c, this.f2499d);
                }
                atomicReference2.set(listA);
                this.f2501f.J();
                atomicReference = this.f2496a;
                atomicReference.notify();
            } finally {
                this.f2496a.notify();
            }
        }
    }
}
