package com.google.android.gms.common.api.internal;

import com.google.android.gms.common.api.internal.C0055b;
import com.google.android.gms.common.internal.AbstractC0065c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class p implements AbstractC0065c.e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ C0055b.a f1103a;

    p(C0055b.a aVar) {
        this.f1103a = aVar;
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c.e
    public final void a() {
        C0055b.this.q.post(new q(this));
    }
}
