package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.sc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0346sc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzv f2399a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ zzm f2400b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2401c;

    RunnableC0346sc(BinderC0282fc binderC0282fc, zzv zzvVar, zzm zzmVar) {
        this.f2401c = binderC0282fc;
        this.f2399a = zzvVar;
        this.f2400b = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2401c.f2247a.r();
        if (this.f2399a.f2524c.h() == null) {
            this.f2401c.f2247a.b(this.f2399a, this.f2400b);
        } else {
            this.f2401c.f2247a.a(this.f2399a, this.f2400b);
        }
    }
}
