package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.uc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class AbstractC0356uc extends C0361vc {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f2432b;

    AbstractC0356uc(_b _bVar) {
        super(_bVar);
        this.f2438a.a(this);
    }

    protected void n() {
    }

    protected final void o() {
        if (!s()) {
            throw new IllegalStateException("Not initialized");
        }
    }

    public final void p() {
        if (this.f2432b) {
            throw new IllegalStateException("Can't initialize twice");
        }
        if (r()) {
            return;
        }
        this.f2438a.l();
        this.f2432b = true;
    }

    public final void q() {
        if (this.f2432b) {
            throw new IllegalStateException("Can't initialize twice");
        }
        n();
        this.f2438a.l();
        this.f2432b = true;
    }

    protected abstract boolean r();

    final boolean s() {
        return this.f2432b;
    }
}
