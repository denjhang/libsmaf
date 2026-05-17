package com.google.android.gms.measurement.internal;

import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ic implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f1995a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f1996b;

    Ic(Gc gc, AtomicReference atomicReference) {
        this.f1996b = gc;
        this.f1995a = atomicReference;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f1995a) {
            try {
                this.f1995a.set(Boolean.valueOf(this.f1996b.m().g(this.f1996b.q().B())));
            } finally {
                this.f1995a.notify();
            }
        }
    }
}
