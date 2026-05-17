package com.google.android.gms.internal.measurement;

import android.app.Activity;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.d, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0104d extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Activity f1666e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ String f1667f;
    private final /* synthetic */ String g;
    private final /* synthetic */ Mf h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0104d(Mf mf, Activity activity, String str, String str2) {
        super(mf);
        this.h = mf;
        this.f1666e = activity;
        this.f1667f = str;
        this.g = str2;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.h.p.setCurrentScreen(c.a.a.a.c.b.a(this.f1666e), this.f1667f, this.g, this.f1530a);
    }
}
