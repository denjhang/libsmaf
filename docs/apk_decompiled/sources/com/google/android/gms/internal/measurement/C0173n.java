package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.n, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0173n extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ String f1756e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ BinderC0109de f1757f;
    private final /* synthetic */ Mf g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0173n(Mf mf, String str, BinderC0109de binderC0109de) {
        super(mf);
        this.g = mf;
        this.f1756e = str;
        this.f1757f = binderC0109de;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.g.p.getMaxUserProperties(this.f1756e, this.f1757f);
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    protected final void b() {
        this.f1757f.b((Bundle) null);
    }
}
