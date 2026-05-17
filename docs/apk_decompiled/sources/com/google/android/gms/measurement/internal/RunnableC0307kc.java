package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.kc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0307kc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2306a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2307b;

    RunnableC0307kc(BinderC0282fc binderC0282fc, zzm zzmVar) {
        this.f2307b = binderC0282fc;
        this.f2306a = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2307b.f2247a.r();
        this.f2307b.f2247a.a(this.f2306a);
    }
}
