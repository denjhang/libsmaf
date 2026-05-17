package com.google.android.gms.measurement.internal;

import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Uc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f2117a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2118b;

    Uc(Gc gc, AtomicReference atomicReference) {
        this.f2118b = gc;
        this.f2117a = atomicReference;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f2117a) {
            try {
                this.f2117a.set(Double.valueOf(this.f2118b.m().c(this.f2118b.q().B(), C0324o.S)));
            } finally {
                this.f2117a.notify();
            }
        }
    }
}
