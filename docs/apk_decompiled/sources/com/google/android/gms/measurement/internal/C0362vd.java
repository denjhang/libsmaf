package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.vd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0362vd extends AbstractC0284g {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ C0318md f2439e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0362vd(C0318md c0318md, InterfaceC0371xc interfaceC0371xc) {
        super(interfaceC0371xc);
        this.f2439e = c0318md;
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0284g
    public final void a() {
        this.f2439e.d().w().a("Tasks have been queued for a long time");
    }
}
