package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.qc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0337qc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzm f2383a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2384b;

    RunnableC0337qc(BinderC0282fc binderC0282fc, zzm zzmVar) {
        this.f2384b = binderC0282fc;
        this.f2383a = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2384b.f2247a.r();
        this.f2384b.f2247a.b(this.f2383a);
    }
}
