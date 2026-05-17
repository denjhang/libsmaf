package com.google.android.gms.internal.measurement;

import android.app.Activity;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.y, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0240y extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Activity f1871e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ BinderC0109de f1872f;
    private final /* synthetic */ Mf.b g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0240y(Mf.b bVar, Activity activity, BinderC0109de binderC0109de) {
        super(Mf.this);
        this.g = bVar;
        this.f1871e = activity;
        this.f1872f = binderC0109de;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        Mf.this.p.onActivitySaveInstanceState(c.a.a.a.c.b.a(this.f1871e), this.f1872f, this.f1531b);
    }
}
