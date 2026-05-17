package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.ae, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class AbstractC0257ae extends ce {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f2181c;

    AbstractC0257ae(ee eeVar) {
        super(eeVar);
        this.f2209b.a(this);
    }

    final boolean r() {
        return this.f2181c;
    }

    protected final void s() {
        if (!r()) {
            throw new IllegalStateException("Not initialized");
        }
    }

    public final void t() {
        if (this.f2181c) {
            throw new IllegalStateException("Can't initialize twice");
        }
        u();
        this.f2209b.s();
        this.f2181c = true;
    }

    protected abstract boolean u();
}
