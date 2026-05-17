package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.tc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0351tc implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f2418a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2419b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f2420c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ long f2421d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ BinderC0282fc f2422e;

    RunnableC0351tc(BinderC0282fc binderC0282fc, String str, String str2, String str3, long j) {
        this.f2422e = binderC0282fc;
        this.f2418a = str;
        this.f2419b = str2;
        this.f2420c = str3;
        this.f2421d = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        String str = this.f2418a;
        if (str == null) {
            this.f2422e.f2247a.t().D().a(this.f2419b, (C0298id) null);
        } else {
            this.f2422e.f2247a.t().D().a(this.f2419b, new C0298id(this.f2420c, str, this.f2421d));
        }
    }
}
