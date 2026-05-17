package com.google.android.gms.internal.measurement;

import java.util.AbstractList;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.RandomAccess;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.dd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0108dd extends AbstractList<String> implements InterfaceC0086ac, RandomAccess {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final InterfaceC0086ac f1670a;

    public C0108dd(InterfaceC0086ac interfaceC0086ac) {
        this.f1670a = interfaceC0086ac;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0086ac
    public final void a(AbstractC0099cb abstractC0099cb) {
        throw new UnsupportedOperationException();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0086ac
    public final Object b(int i) {
        return this.f1670a.b(i);
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object get(int i) {
        return (String) this.f1670a.get(i);
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator<String> iterator() {
        return new C0122fd(this);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0086ac
    public final InterfaceC0086ac j() {
        return this;
    }

    @Override // java.util.AbstractList, java.util.List
    public final ListIterator<String> listIterator(int i) {
        return new C0101cd(this, i);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0086ac
    public final List<?> m() {
        return this.f1670a.m();
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1670a.size();
    }
}
