package com.google.android.gms.measurement.internal;

import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Qc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f2081a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2082b;

    Qc(Gc gc, AtomicReference atomicReference) {
        this.f2082b = gc;
        this.f2081a = atomicReference;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f2081a) {
            try {
                this.f2081a.set(this.f2082b.m().h(this.f2082b.q().B()));
            } finally {
                this.f2081a.notify();
            }
        }
    }
}
