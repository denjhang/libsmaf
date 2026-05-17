package com.google.android.gms.measurement.internal;

import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Sc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f2095a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2096b;

    Sc(Gc gc, AtomicReference atomicReference) {
        this.f2096b = gc;
        this.f2095a = atomicReference;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f2095a) {
            try {
                this.f2095a.set(Long.valueOf(this.f2096b.m().a(this.f2096b.q().B(), C0324o.Q)));
            } finally {
                this.f2095a.notify();
            }
        }
    }
}
