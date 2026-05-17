package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.nd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0323nd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ boolean f2348a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ zzkj f2349b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ zzm f2350c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ C0318md f2351d;

    RunnableC0323nd(C0318md c0318md, boolean z, zzkj zzkjVar, zzm zzmVar) {
        this.f2351d = c0318md;
        this.f2348a = z;
        this.f2349b = zzkjVar;
        this.f2350c = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        InterfaceC0326ob interfaceC0326ob = this.f2351d.f2336d;
        if (interfaceC0326ob == null) {
            this.f2351d.d().t().a("Discarding data. Failed to set user attribute");
        } else {
            this.f2351d.a(interfaceC0326ob, this.f2348a ? null : this.f2349b, this.f2350c);
            this.f2351d.J();
        }
    }
}
