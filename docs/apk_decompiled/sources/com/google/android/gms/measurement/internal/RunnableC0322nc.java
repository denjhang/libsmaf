package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.nc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0322nc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzan f2345a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ zzm f2346b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2347c;

    RunnableC0322nc(BinderC0282fc binderC0282fc, zzan zzanVar, zzm zzmVar) {
        this.f2347c = binderC0282fc;
        this.f2345a = zzanVar;
        this.f2346b = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzan zzanVarB = this.f2347c.b(this.f2345a, this.f2346b);
        this.f2347c.f2247a.r();
        this.f2347c.f2247a.a(zzanVarB, this.f2346b);
    }
}
