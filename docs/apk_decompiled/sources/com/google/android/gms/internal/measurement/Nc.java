package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Nc extends Tc {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ Mc f1537b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private Nc(Mc mc) {
        super(mc, null);
        this.f1537b = mc;
    }

    /* synthetic */ Nc(Mc mc, Lc lc) {
        this(mc);
    }

    @Override // com.google.android.gms.internal.measurement.Tc, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator<Map.Entry<K, V>> iterator() {
        return new Oc(this.f1537b, null);
    }
}
