package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class r extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Bundle f1800e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ Mf f1801f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    r(Mf mf, Bundle bundle) {
        super(mf);
        this.f1801f = mf;
        this.f1800e = bundle;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.f1801f.p.setConditionalUserProperty(this.f1800e, this.f1530a);
    }
}
