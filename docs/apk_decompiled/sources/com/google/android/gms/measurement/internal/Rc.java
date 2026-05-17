package com.google.android.gms.measurement.internal;

import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Rc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f2087a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2088b;

    Rc(Gc gc, AtomicReference atomicReference) {
        this.f2088b = gc;
        this.f2087a = atomicReference;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f2087a) {
            try {
                this.f2087a.set(Integer.valueOf(this.f2088b.m().b(this.f2088b.q().B(), C0324o.R)));
            } finally {
                this.f2087a.notify();
            }
        }
    }
}
