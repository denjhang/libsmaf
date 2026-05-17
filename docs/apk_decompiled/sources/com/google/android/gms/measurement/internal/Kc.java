package com.google.android.gms.measurement.internal;

import android.text.TextUtils;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Kc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ long f2015a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Gc f2016b;

    Kc(Gc gc, long j) {
        this.f2016b = gc;
        this.f2015a = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Gc gc = this.f2016b;
        long j = this.f2015a;
        gc.h();
        gc.a();
        gc.x();
        gc.d().A().a("Resetting analytics data (FE)");
        Nd ndU = gc.u();
        ndU.h();
        ndU.f2055e.a();
        if (gc.m().i(gc.q().B())) {
            gc.l().k.a(j);
        }
        if (!TextUtils.isEmpty(gc.l().C.a())) {
            gc.l().C.a(null);
        }
        boolean zH = gc.f2438a.h();
        if (!gc.m().q()) {
            gc.l().d(!zH);
        }
        gc.r().D();
        gc.h = !zH;
        this.f2016b.r().a(new AtomicReference<>());
    }
}
