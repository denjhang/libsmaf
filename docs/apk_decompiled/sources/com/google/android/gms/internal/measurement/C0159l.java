package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.l, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0159l extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ BinderC0109de f1747e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ Mf f1748f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0159l(Mf mf, BinderC0109de binderC0109de) {
        super(mf);
        this.f1748f = mf;
        this.f1747e = binderC0109de;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.f1748f.p.getCurrentScreenClass(this.f1747e);
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    protected final void b() {
        this.f1747e.b((Bundle) null);
    }
}
