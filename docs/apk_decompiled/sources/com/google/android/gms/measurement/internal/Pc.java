package com.google.android.gms.measurement.internal;

import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Pc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f2070a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2071b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2072c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ String f2073d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ boolean f2074e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ Gc f2075f;

    Pc(Gc gc, AtomicReference atomicReference, String str, String str2, String str3, boolean z) {
        this.f2075f = gc;
        this.f2070a = atomicReference;
        this.f2071b = str;
        this.f2072c = str2;
        this.f2073d = str3;
        this.f2074e = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2075f.f2438a.E().a(this.f2070a, this.f2071b, this.f2072c, this.f2073d, this.f2074e);
    }
}
