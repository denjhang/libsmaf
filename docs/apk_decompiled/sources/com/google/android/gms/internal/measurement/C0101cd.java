package com.google.android.gms.internal.measurement;

import java.util.ListIterator;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.cd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0101cd implements ListIterator<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ListIterator<String> f1662a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ int f1663b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ C0108dd f1664c;

    C0101cd(C0108dd c0108dd, int i) {
        this.f1664c = c0108dd;
        this.f1663b = i;
        this.f1662a = this.f1664c.f1670a.listIterator(this.f1663b);
    }

    @Override // java.util.ListIterator
    public final /* synthetic */ void add(String str) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final boolean hasNext() {
        return this.f1662a.hasNext();
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f1662a.hasPrevious();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final /* synthetic */ Object next() {
        return this.f1662a.next();
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return this.f1662a.nextIndex();
    }

    @Override // java.util.ListIterator
    public final /* synthetic */ String previous() {
        return this.f1662a.previous();
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return this.f1662a.previousIndex();
    }

    @Override // java.util.ListIterator, java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.ListIterator
    public final /* synthetic */ void set(String str) {
        throw new UnsupportedOperationException();
    }
}
