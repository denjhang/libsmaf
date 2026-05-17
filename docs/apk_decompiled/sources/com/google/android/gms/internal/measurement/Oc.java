package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: Add missing generic type declarations: [V, K] */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Oc<K, V> implements Iterator<Map.Entry<K, V>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f1543a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Iterator<Map.Entry<K, V>> f1544b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ Mc f1545c;

    private Oc(Mc mc) {
        this.f1545c = mc;
        this.f1543a = this.f1545c.f1514b.size();
    }

    /* synthetic */ Oc(Mc mc, Lc lc) {
        this(mc);
    }

    private final Iterator<Map.Entry<K, V>> h() {
        if (this.f1544b == null) {
            this.f1544b = this.f1545c.f1518f.entrySet().iterator();
        }
        return this.f1544b;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        int i = this.f1543a;
        return (i > 0 && i <= this.f1545c.f1514b.size()) || h().hasNext();
    }

    @Override // java.util.Iterator
    public final /* synthetic */ Object next() {
        Map.Entry<K, V> next;
        if (h().hasNext()) {
            next = h().next();
        } else {
            List list = this.f1545c.f1514b;
            int i = this.f1543a - 1;
            this.f1543a = i;
            next = (Map.Entry<K, V>) list.get(i);
        }
        return next;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }
}
