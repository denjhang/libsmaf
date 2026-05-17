package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import com.google.android.gms.internal.measurement.Mf;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Of extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ String f1552e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ String f1553f;
    private final /* synthetic */ Bundle g;
    private final /* synthetic */ Mf h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    Of(Mf mf, String str, String str2, Bundle bundle) {
        super(mf);
        this.h = mf;
        this.f1552e = str;
        this.f1553f = str2;
        this.g = bundle;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    final void a() {
        this.h.p.clearConditionalUserProperty(this.f1552e, this.f1553f, this.g);
    }
}
