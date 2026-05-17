package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Xd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final com.google.android.gms.common.util.e f2141a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private long f2142b;

    public Xd(com.google.android.gms.common.util.e eVar) {
        com.google.android.gms.common.internal.r.a(eVar);
        this.f2141a = eVar;
    }

    public final void a() {
        this.f2142b = this.f2141a.b();
    }

    public final boolean a(long j) {
        return this.f2142b == 0 || this.f2141a.b() - this.f2142b >= 3600000;
    }

    public final void b() {
        this.f2142b = 0L;
    }
}
