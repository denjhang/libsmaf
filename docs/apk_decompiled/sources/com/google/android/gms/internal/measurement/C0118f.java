package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.f, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0118f extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ String f1691e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ Mf f1692f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0118f(Mf mf, String str) {
        super(mf);
        this.f1692f = mf;
        this.f1691e = str;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.f1692f.p.endAdUnitExposure(this.f1691e, this.f1531b);
    }
}
