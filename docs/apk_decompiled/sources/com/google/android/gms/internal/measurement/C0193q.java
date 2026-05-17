package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.q, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0193q extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Long f1788e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ String f1789f;
    private final /* synthetic */ String g;
    private final /* synthetic */ Bundle h;
    private final /* synthetic */ boolean i;
    private final /* synthetic */ boolean j;
    private final /* synthetic */ Mf k;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0193q(Mf mf, Long l, String str, String str2, Bundle bundle, boolean z, boolean z2) {
        super(mf);
        this.k = mf;
        this.f1788e = l;
        this.f1789f = str;
        this.g = str2;
        this.h = bundle;
        this.i = z;
        this.j = z2;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        Long l = this.f1788e;
        this.k.p.logEvent(this.f1789f, this.g, this.h, this.i, this.j, l == null ? this.f1530a : l.longValue());
    }
}
