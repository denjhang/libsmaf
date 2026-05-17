package com.google.android.gms.measurement.internal;

import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Nc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f2048a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2049b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2050c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ String f2051d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Gc f2052e;

    Nc(Gc gc, AtomicReference atomicReference, String str, String str2, String str3) {
        this.f2052e = gc;
        this.f2048a = atomicReference;
        this.f2049b = str;
        this.f2050c = str2;
        this.f2051d = str3;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2052e.f2438a.E().a(this.f2048a, this.f2049b, this.f2050c, this.f2051d);
    }
}
