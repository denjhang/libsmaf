package com.google.android.gms.internal.measurement;

import android.app.Activity;
import android.os.Bundle;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.s, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0204s extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Activity f1804e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ Bundle f1805f;
    private final /* synthetic */ Mf.b g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0204s(Mf.b bVar, Activity activity, Bundle bundle) {
        super(Mf.this);
        this.g = bVar;
        this.f1804e = activity;
        this.f1805f = bundle;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        Mf.this.p.onActivityCreated(c.a.a.a.c.b.a(this.f1804e), this.f1805f, this.f1531b);
    }
}
