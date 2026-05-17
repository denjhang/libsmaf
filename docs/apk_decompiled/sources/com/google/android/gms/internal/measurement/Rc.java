package com.google.android.gms.internal.measurement;

import java.util.Map;

/* JADX INFO: Add missing generic type declarations: [V, K] */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Rc<K, V> implements Comparable<Rc>, Map.Entry<K, V> {

    /* JADX INFO: Incorrect field signature: TK; */
    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Comparable f1566a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private V f1567b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ Mc f1568c;

    /* JADX WARN: Multi-variable type inference failed */
    Rc(Mc mc, K k, V v) {
        this.f1568c = mc;
        this.f1566a = k;
        this.f1567b = v;
    }

    Rc(Mc mc, Map.Entry<K, V> entry) {
        this(mc, (Comparable) entry.getKey(), entry.getValue());
    }

    private static boolean a(Object obj, Object obj2) {
        return obj == null ? obj2 == null : obj.equals(obj2);
    }

    @Override // java.lang.Comparable
    public final /* synthetic */ int compareTo(Rc rc) {
        return ((Comparable) getKey()).compareTo((Comparable) rc.getKey());
    }

    @Override // java.util.Map.Entry
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof Map.Entry)) {
            return false;
        }
        Map.Entry entry = (Map.Entry) obj;
        return a(this.f1566a, entry.getKey()) && a(this.f1567b, entry.getValue());
    }

    @Override // java.util.Map.Entry
    public final /* synthetic */ Object getKey() {
        return this.f1566a;
    }

    @Override // java.util.Map.Entry
    public final V getValue() {
        return this.f1567b;
    }

    @Override // java.util.Map.Entry
    public final int hashCode() {
        Comparable comparable = this.f1566a;
        int iHashCode = comparable == null ? 0 : comparable.hashCode();
        V v = this.f1567b;
        return iHashCode ^ (v != null ? v.hashCode() : 0);
    }

    @Override // java.util.Map.Entry
    public final V setValue(V v) {
        this.f1568c.f();
        V v2 = this.f1567b;
        this.f1567b = v;
        return v2;
    }

    public final String toString() {
        String strValueOf = String.valueOf(this.f1566a);
        String strValueOf2 = String.valueOf(this.f1567b);
        StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 1 + String.valueOf(strValueOf2).length());
        sb.append(strValueOf);
        sb.append("=");
        sb.append(strValueOf2);
        return sb.toString();
    }
}
