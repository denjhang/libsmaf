package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.ec, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0277ec implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2226a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2227b;

    RunnableC0277ec(BinderC0282fc binderC0282fc, zzm zzmVar) {
        this.f2227b = binderC0282fc;
        this.f2226a = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2227b.f2247a.r();
        ee eeVar = this.f2227b.f2247a;
        zzm zzmVar = this.f2226a;
        eeVar.c().h();
        eeVar.p();
        com.google.android.gms.common.internal.r.b(zzmVar.f2516a);
        eeVar.c(zzmVar);
    }
}
