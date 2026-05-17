package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class _b<K> implements Iterator<Map.Entry<K, Object>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Iterator<Map.Entry<K, Object>> f1622a;

    public _b(Iterator<Map.Entry<K, Object>> it) {
        this.f1622a = it;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f1622a.hasNext();
    }

    @Override // java.util.Iterator
    public final /* synthetic */ Object next() {
        Map.Entry<K, Object> next = this.f1622a.next();
        return next.getValue() instanceof Vb ? new Xb(next) : next;
    }

    @Override // java.util.Iterator
    public final void remove() {
        this.f1622a.remove();
    }
}
