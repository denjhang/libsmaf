package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.m, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0166m extends Mf.a {

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ String f1752f;
    private final /* synthetic */ Object g;
    private final /* synthetic */ Mf j;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ int f1751e = 5;
    private final /* synthetic */ Object h = null;
    private final /* synthetic */ Object i = null;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0166m(Mf mf, boolean z, int i, String str, Object obj, Object obj2, Object obj3) {
        super(false);
        this.j = mf;
        this.f1752f = str;
        this.g = obj;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.j.p.logHealthData(this.f1751e, this.f1752f, c.a.a.a.c.b.a(this.g), c.a.a.a.c.b.a(this.h), c.a.a.a.c.b.a(this.i));
    }
}
