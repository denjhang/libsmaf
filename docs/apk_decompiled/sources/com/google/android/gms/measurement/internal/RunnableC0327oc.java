package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.oc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0327oc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzkj f2360a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ zzm f2361b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2362c;

    RunnableC0327oc(BinderC0282fc binderC0282fc, zzkj zzkjVar, zzm zzmVar) {
        this.f2362c = binderC0282fc;
        this.f2360a = zzkjVar;
        this.f2361b = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2362c.f2247a.r();
        if (this.f2360a.h() == null) {
            this.f2362c.f2247a.b(this.f2360a, this.f2361b);
        } else {
            this.f2362c.f2247a.a(this.f2360a, this.f2361b);
        }
    }
}
