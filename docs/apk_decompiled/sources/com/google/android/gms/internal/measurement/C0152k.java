package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.k, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0152k extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ String f1735e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ String f1736f;
    private final /* synthetic */ boolean g;
    private final /* synthetic */ BinderC0109de h;
    private final /* synthetic */ Mf i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0152k(Mf mf, String str, String str2, boolean z, BinderC0109de binderC0109de) {
        super(mf);
        this.i = mf;
        this.f1735e = str;
        this.f1736f = str2;
        this.g = z;
        this.h = binderC0109de;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.i.p.getUserProperties(this.f1735e, this.f1736f, this.g, this.h);
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    protected final void b() {
        this.h.b((Bundle) null);
    }
}
