package com.google.android.gms.internal.measurement;

import java.util.AbstractList;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.RandomAccess;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.bc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0093bc extends Xa<String> implements InterfaceC0086ac, RandomAccess {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final C0093bc f1645b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final InterfaceC0086ac f1646c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final List<Object> f1647d;

    static {
        C0093bc c0093bc = new C0093bc();
        f1645b = c0093bc;
        c0093bc.i();
        f1646c = f1645b;
    }

    public C0093bc() {
        this(10);
    }

    public C0093bc(int i) {
        this((ArrayList<Object>) new ArrayList(i));
    }

    private C0093bc(ArrayList<Object> arrayList) {
        this.f1647d = arrayList;
    }

    private static String a(Object obj) {
        return obj instanceof String ? (String) obj : obj instanceof AbstractC0099cb ? ((AbstractC0099cb) obj).m() : Lb.b((byte[]) obj);
    }

    @Override // com.google.android.gms.internal.measurement.Rb
    public final /* synthetic */ Rb a(int i) {
        if (i < size()) {
            throw new IllegalArgumentException();
        }
        ArrayList arrayList = new ArrayList(i);
        arrayList.addAll(this.f1647d);
        return new C0093bc((ArrayList<Object>) arrayList);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0086ac
    public final void a(AbstractC0099cb abstractC0099cb) {
        a();
        this.f1647d.add(abstractC0099cb);
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ void add(int i, Object obj) {
        a();
        this.f1647d.add(i, (String) obj);
        ((AbstractList) this).modCount++;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.List
    public final boolean addAll(int i, Collection<? extends String> collection) {
        a();
        if (collection instanceof InterfaceC0086ac) {
            collection = ((InterfaceC0086ac) collection).m();
        }
        boolean zAddAll = this.f1647d.addAll(i, collection);
        ((AbstractList) this).modCount++;
        return zAddAll;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection<? extends String> collection) {
        return addAll(size(), collection);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0086ac
    public final Object b(int i) {
        return this.f1647d.get(i);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        a();
        this.f1647d.clear();
        ((AbstractList) this).modCount++;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final /* bridge */ /* synthetic */ boolean equals(Object obj) {
        return super.equals(obj);
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object get(int i) {
        Object obj = this.f1647d.get(i);
        if (obj instanceof String) {
            return (String) obj;
        }
        if (obj instanceof AbstractC0099cb) {
            AbstractC0099cb abstractC0099cb = (AbstractC0099cb) obj;
            String strM = abstractC0099cb.m();
            if (abstractC0099cb.a()) {
                this.f1647d.set(i, strM);
            }
            return strM;
        }
        byte[] bArr = (byte[]) obj;
        String strB = Lb.b(bArr);
        if (Lb.a(bArr)) {
            this.f1647d.set(i, strB);
        }
        return strB;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, com.google.android.gms.internal.measurement.Rb
    public final /* bridge */ /* synthetic */ boolean h() {
        return super.h();
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final /* bridge */ /* synthetic */ int hashCode() {
        return super.hashCode();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0086ac
    public final InterfaceC0086ac j() {
        return h() ? new C0108dd(this) : this;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0086ac
    public final List<?> m() {
        return Collections.unmodifiableList(this.f1647d);
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object remove(int i) {
        a();
        Object objRemove = this.f1647d.remove(i);
        ((AbstractList) this).modCount++;
        return a(objRemove);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* bridge */ /* synthetic */ boolean remove(Object obj) {
        return super.remove(obj);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* bridge */ /* synthetic */ boolean removeAll(Collection collection) {
        return super.removeAll(collection);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* bridge */ /* synthetic */ boolean retainAll(Collection collection) {
        return super.retainAll(collection);
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object set(int i, Object obj) {
        a();
        return a(this.f1647d.set(i, (String) obj));
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1647d.size();
    }
}
