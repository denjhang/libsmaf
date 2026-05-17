package com.google.android.gms.internal.measurement;

import android.app.Activity;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.t, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0210t extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Activity f1815e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ Mf.b f1816f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0210t(Mf.b bVar, Activity activity) {
        super(Mf.this);
        this.f1816f = bVar;
        this.f1815e = activity;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        Mf.this.p.onActivityResumed(c.a.a.a.c.b.a(this.f1815e), this.f1531b);
    }
}
