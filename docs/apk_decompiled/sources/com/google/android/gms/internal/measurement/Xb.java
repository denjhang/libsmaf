package com.google.android.gms.internal.measurement;

import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Xb<K> implements Map.Entry<K, Object> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map.Entry<K, Vb> f1603a;

    private Xb(Map.Entry<K, Vb> entry) {
        this.f1603a = entry;
    }

    @Override // java.util.Map.Entry
    public final K getKey() {
        return this.f1603a.getKey();
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        if (this.f1603a.getValue() == null) {
            return null;
        }
        Vb.c();
        throw null;
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        if (obj instanceof InterfaceC0219uc) {
            return this.f1603a.getValue().a((InterfaceC0219uc) obj);
        }
        throw new IllegalArgumentException("LazyField now only used for MessageSet, and the value of MessageSet must be an instance of MessageLite");
    }
}
