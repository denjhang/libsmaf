package com.google.android.gms.internal.measurement;

import java.lang.Comparable;
import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.SortedMap;
import java.util.TreeMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class Mc<K extends Comparable<K>, V> extends AbstractMap<K, V> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1513a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private List<Rc> f1514b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Map<K, V> f1515c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f1516d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private volatile Tc f1517e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Map<K, V> f1518f;
    private volatile Nc g;

    private Mc(int i) {
        this.f1513a = i;
        this.f1514b = Collections.emptyList();
        this.f1515c = Collections.emptyMap();
        this.f1518f = Collections.emptyMap();
    }

    /* synthetic */ Mc(int i, Lc lc) {
        this(i);
    }

    private final int a(K k) {
        int size = this.f1514b.size() - 1;
        if (size >= 0) {
            int iCompareTo = k.compareTo((Comparable) this.f1514b.get(size).getKey());
            if (iCompareTo > 0) {
                return -(size + 2);
            }
            if (iCompareTo == 0) {
                return size;
            }
        }
        int i = 0;
        while (i <= size) {
            int i2 = (i + size) / 2;
            int iCompareTo2 = k.compareTo((Comparable) this.f1514b.get(i2).getKey());
            if (iCompareTo2 < 0) {
                size = i2 - 1;
            } else {
                if (iCompareTo2 <= 0) {
                    return i2;
                }
                i = i2 + 1;
            }
        }
        return -(i + 1);
    }

    static <FieldDescriptorType extends Db<FieldDescriptorType>> Mc<FieldDescriptorType, Object> a(int i) {
        return new Lc(i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final V c(int i) {
        f();
        V v = (V) this.f1514b.remove(i).getValue();
        if (!this.f1515c.isEmpty()) {
            Iterator<Map.Entry<K, V>> it = g().entrySet().iterator();
            this.f1514b.add(new Rc(this, it.next()));
            it.remove();
        }
        return v;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void f() {
        if (this.f1516d) {
            throw new UnsupportedOperationException();
        }
    }

    private final SortedMap<K, V> g() {
        f();
        if (this.f1515c.isEmpty() && !(this.f1515c instanceof TreeMap)) {
            this.f1515c = new TreeMap();
            this.f1518f = ((TreeMap) this.f1515c).descendingMap();
        }
        return (SortedMap) this.f1515c;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // java.util.AbstractMap, java.util.Map
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final V put(K k, V v) {
        f();
        int iA = a(k);
        if (iA >= 0) {
            return (V) this.f1514b.get(iA).setValue(v);
        }
        f();
        if (this.f1514b.isEmpty() && !(this.f1514b instanceof ArrayList)) {
            this.f1514b = new ArrayList(this.f1513a);
        }
        int i = -(iA + 1);
        if (i >= this.f1513a) {
            return g().put(k, v);
        }
        int size = this.f1514b.size();
        int i2 = this.f1513a;
        if (size == i2) {
            Rc rcRemove = this.f1514b.remove(i2 - 1);
            g().put((Comparable) rcRemove.getKey(), rcRemove.getValue());
        }
        this.f1514b.add(i, new Rc(this, k, v));
        return null;
    }

    public void a() {
        if (this.f1516d) {
            return;
        }
        this.f1515c = this.f1515c.isEmpty() ? Collections.emptyMap() : Collections.unmodifiableMap(this.f1515c);
        this.f1518f = this.f1518f.isEmpty() ? Collections.emptyMap() : Collections.unmodifiableMap(this.f1518f);
        this.f1516d = true;
    }

    public final Map.Entry<K, V> b(int i) {
        return this.f1514b.get(i);
    }

    public final boolean b() {
        return this.f1516d;
    }

    public final int c() {
        return this.f1514b.size();
    }

    @Override // java.util.AbstractMap, java.util.Map
    public void clear() {
        f();
        if (!this.f1514b.isEmpty()) {
            this.f1514b.clear();
        }
        if (this.f1515c.isEmpty()) {
            return;
        }
        this.f1515c.clear();
    }

    @Override // java.util.AbstractMap, java.util.Map
    public boolean containsKey(Object obj) {
        Comparable comparable = (Comparable) obj;
        return a(comparable) >= 0 || this.f1515c.containsKey(comparable);
    }

    public final Iterable<Map.Entry<K, V>> d() {
        return this.f1515c.isEmpty() ? Qc.a() : this.f1515c.entrySet();
    }

    final Set<Map.Entry<K, V>> e() {
        if (this.g == null) {
            this.g = new Nc(this, null);
        }
        return this.g;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public Set<Map.Entry<K, V>> entrySet() {
        if (this.f1517e == null) {
            this.f1517e = new Tc(this, null);
        }
        return this.f1517e;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Mc)) {
            return super.equals(obj);
        }
        Mc mc = (Mc) obj;
        int size = size();
        if (size != mc.size()) {
            return false;
        }
        int iC = c();
        if (iC != mc.c()) {
            return entrySet().equals(mc.entrySet());
        }
        for (int i = 0; i < iC; i++) {
            if (!b(i).equals(mc.b(i))) {
                return false;
            }
        }
        if (iC != size) {
            return this.f1515c.equals(mc.f1515c);
        }
        return true;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public V get(Object obj) {
        Comparable comparable = (Comparable) obj;
        int iA = a(comparable);
        return iA >= 0 ? (V) this.f1514b.get(iA).getValue() : this.f1515c.get(comparable);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public int hashCode() {
        int iC = c();
        int iHashCode = 0;
        for (int i = 0; i < iC; i++) {
            iHashCode += this.f1514b.get(i).hashCode();
        }
        return this.f1515c.size() > 0 ? iHashCode + this.f1515c.hashCode() : iHashCode;
    }

    @Override // java.util.AbstractMap, java.util.Map
    public V remove(Object obj) {
        f();
        Comparable comparable = (Comparable) obj;
        int iA = a(comparable);
        if (iA >= 0) {
            return c(iA);
        }
        if (this.f1515c.isEmpty()) {
            return null;
        }
        return this.f1515c.remove(comparable);
    }

    @Override // java.util.AbstractMap, java.util.Map
    public int size() {
        return this.f1514b.size() + this.f1515c.size();
    }
}
