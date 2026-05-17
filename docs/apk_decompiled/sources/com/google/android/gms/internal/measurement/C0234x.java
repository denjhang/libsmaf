package com.google.android.gms.internal.measurement;

import android.app.Activity;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.x, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0234x extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Activity f1860e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ Mf.b f1861f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0234x(Mf.b bVar, Activity activity) {
        super(Mf.this);
        this.f1861f = bVar;
        this.f1860e = activity;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        Mf.this.p.onActivityDestroyed(c.a.a.a.c.b.a(this.f1860e), this.f1531b);
    }
}
