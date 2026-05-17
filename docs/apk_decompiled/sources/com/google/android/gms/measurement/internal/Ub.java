package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ub implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ _b f2115a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ C0365wb f2116b;

    Ub(Rb rb, _b _bVar, C0365wb c0365wb) {
        this.f2115a = _bVar;
        this.f2116b = c0365wb;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.f2115a.s() == null) {
            this.f2116b.t().a("Install Referrer Reporter is null");
            return;
        }
        Qb qbS = this.f2115a.s();
        qbS.f2080a.j();
        qbS.a(qbS.f2080a.e().getPackageName());
    }
}
