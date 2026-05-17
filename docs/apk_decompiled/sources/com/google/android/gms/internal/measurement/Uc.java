package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.Map;

/* JADX INFO: Add missing generic type declarations: [V, K] */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Uc<K, V> implements Iterator<Map.Entry<K, V>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f1581a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f1582b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Iterator<Map.Entry<K, V>> f1583c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ Mc f1584d;

    private Uc(Mc mc) {
        this.f1584d = mc;
        this.f1581a = -1;
    }

    /* synthetic */ Uc(Mc mc, Lc lc) {
        this(mc);
    }

    private final Iterator<Map.Entry<K, V>> h() {
        if (this.f1583c == null) {
            this.f1583c = this.f1584d.f1515c.entrySet().iterator();
        }
        return this.f1583c;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f1581a + 1 < this.f1584d.f1514b.size() || (!this.f1584d.f1515c.isEmpty() && h().hasNext());
    }

    @Override // java.util.Iterator
    public final /* synthetic */ Object next() {
        this.f1582b = true;
        int i = this.f1581a + 1;
        this.f1581a = i;
        return i < this.f1584d.f1514b.size() ? (Map.Entry<K, V>) this.f1584d.f1514b.get(this.f1581a) : h().next();
    }

    @Override // java.util.Iterator
    public final void remove() {
        if (!this.f1582b) {
            throw new IllegalStateException("remove() was called before next()");
        }
        this.f1582b = false;
        this.f1584d.f();
        if (this.f1581a >= this.f1584d.f1514b.size()) {
            h().remove();
            return;
        }
        Mc mc = this.f1584d;
        int i = this.f1581a;
        this.f1581a = i - 1;
        mc.c(i);
    }
}
