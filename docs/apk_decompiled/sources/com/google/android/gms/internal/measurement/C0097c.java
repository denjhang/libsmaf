package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.c, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0097c extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ String f1656e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ String f1657f;
    private final /* synthetic */ BinderC0109de g;
    private final /* synthetic */ Mf h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0097c(Mf mf, String str, String str2, BinderC0109de binderC0109de) {
        super(mf);
        this.h = mf;
        this.f1656e = str;
        this.f1657f = str2;
        this.g = binderC0109de;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.h.p.getConditionalUserProperties(this.f1656e, this.f1657f, this.g);
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    protected final void b() {
        this.g.b((Bundle) null);
    }
}
