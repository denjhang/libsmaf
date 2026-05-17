package com.google.android.gms.measurement.internal;

import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class qe extends AbstractC0257ae {
    qe(ee eeVar) {
        super(eeVar);
    }

    final List<com.google.android.gms.internal.measurement.O> a(String str, List<com.google.android.gms.internal.measurement.Q> list, List<com.google.android.gms.internal.measurement.Z> list2, Long l) {
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.a(list);
        com.google.android.gms.common.internal.r.a(list2);
        return new ve(this, str).a(list, list2, l);
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0257ae
    protected final boolean u() {
        return false;
    }
}
