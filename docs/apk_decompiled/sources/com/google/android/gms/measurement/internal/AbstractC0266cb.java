package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.cb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class AbstractC0266cb extends Db {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f2201b;

    AbstractC0266cb(_b _bVar) {
        super(_bVar);
        this.f2438a.a(this);
    }

    protected abstract boolean A();

    protected void v() {
    }

    final boolean w() {
        return this.f2201b;
    }

    protected final void x() {
        if (!w()) {
            throw new IllegalStateException("Not initialized");
        }
    }

    public final void y() {
        if (this.f2201b) {
            throw new IllegalStateException("Can't initialize twice");
        }
        if (A()) {
            return;
        }
        this.f2438a.l();
        this.f2201b = true;
    }

    public final void z() {
        if (this.f2201b) {
            throw new IllegalStateException("Can't initialize twice");
        }
        v();
        this.f2438a.l();
        this.f2201b = true;
    }
}
