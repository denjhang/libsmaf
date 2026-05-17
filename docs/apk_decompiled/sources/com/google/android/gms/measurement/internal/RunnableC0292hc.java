package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.hc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0292hc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzv f2265a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2266b;

    RunnableC0292hc(BinderC0282fc binderC0282fc, zzv zzvVar) {
        this.f2266b = binderC0282fc;
        this.f2265a = zzvVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2266b.f2247a.r();
        if (this.f2265a.f2524c.h() == null) {
            this.f2266b.f2247a.b(this.f2265a);
        } else {
            this.f2266b.f2247a.a(this.f2265a);
        }
    }
}
