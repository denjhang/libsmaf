package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.jd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0303jd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ C0298id f2295a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ C0293hd f2296b;

    RunnableC0303jd(C0293hd c0293hd, C0298id c0298id) {
        this.f2296b = c0293hd;
        this.f2295a = c0298id;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2296b.a(this.f2295a, false);
        C0293hd c0293hd = this.f2296b;
        c0293hd.f2267c = null;
        c0293hd.r().a((C0298id) null);
    }
}
