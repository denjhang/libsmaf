package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.o, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0180o extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ boolean f1762e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ Mf f1763f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0180o(Mf mf, boolean z) {
        super(mf);
        this.f1763f = mf;
        this.f1762e = z;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.f1763f.p.setDataCollectionEnabled(this.f1762e);
    }
}
