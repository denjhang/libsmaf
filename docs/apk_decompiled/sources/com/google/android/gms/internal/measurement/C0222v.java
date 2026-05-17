package com.google.android.gms.internal.measurement;

import android.app.Activity;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.v, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0222v extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Activity f1842e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ Mf.b f1843f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0222v(Mf.b bVar, Activity activity) {
        super(Mf.this);
        this.f1843f = bVar;
        this.f1842e = activity;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        Mf.this.p.onActivityStopped(c.a.a.a.c.b.a(this.f1842e), this.f1531b);
    }
}
