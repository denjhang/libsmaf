package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Zd extends AbstractC0284g {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ ee f2156e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ _d f2157f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    Zd(_d _dVar, InterfaceC0371xc interfaceC0371xc, ee eeVar) {
        super(interfaceC0371xc);
        this.f2157f = _dVar;
        this.f2156e = eeVar;
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0284g
    public final void a() {
        this.f2157f.v();
        this.f2157f.d().B().a("Starting upload from DelayedRunnable");
        this.f2156e.q();
    }
}
