package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.mc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0317mc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ zzan f2332a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2333b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2334c;

    RunnableC0317mc(BinderC0282fc binderC0282fc, zzan zzanVar, String str) {
        this.f2334c = binderC0282fc;
        this.f2332a = zzanVar;
        this.f2333b = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f2334c.f2247a.r();
        this.f2334c.f2247a.a(this.f2332a, this.f2333b);
    }
}
