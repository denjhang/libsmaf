package com.google.android.gms.internal.measurement;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.RandomAccess;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Hc<E> extends Xa<E> implements RandomAccess {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Hc<Object> f1466b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private E[] f1467c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f1468d;

    static {
        Hc<Object> hc = new Hc<>(new Object[0], 0);
        f1466b = hc;
        hc.i();
    }

    private Hc(E[] eArr, int i) {
        this.f1467c = eArr;
        this.f1468d = i;
    }

    public static <E> Hc<E> b() {
        return (Hc<E>) f1466b;
    }

    private final void b(int i) {
        if (i < 0 || i >= this.f1468d) {
            throw new IndexOutOfBoundsException(c(i));
        }
    }

    private final String c(int i) {
        int i2 = this.f1468d;
        StringBuilder sb = new StringBuilder(35);
        sb.append("Index:");
        sb.append(i);
        sb.append(", Size:");
        sb.append(i2);
        return sb.toString();
    }

    @Override // com.google.android.gms.internal.measurement.Rb
    public final /* synthetic */ Rb a(int i) {
        if (i >= this.f1468d) {
            return new Hc(Arrays.copyOf(this.f1467c, i), this.f1468d);
        }
        throw new IllegalArgumentException();
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i, E e2) {
        int i2;
        a();
        if (i < 0 || i > (i2 = this.f1468d)) {
            throw new IndexOutOfBoundsException(c(i));
        }
        E[] eArr = this.f1467c;
        if (i2 < eArr.length) {
            System.arraycopy(eArr, i, eArr, i + 1, i2 - i);
        } else {
            E[] eArr2 = (E[]) new Object[((i2 * 3) / 2) + 1];
            System.arraycopy(eArr, 0, eArr2, 0, i);
            System.arraycopy(this.f1467c, i, eArr2, i + 1, this.f1468d - i);
            this.f1467c = eArr2;
        }
        this.f1467c[i] = e2;
        this.f1468d++;
        ((AbstractList) this).modCount++;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean add(E e2) {
        a();
        int i = this.f1468d;
        E[] eArr = this.f1467c;
        if (i == eArr.length) {
            this.f1467c = (E[]) Arrays.copyOf(eArr, ((i * 3) / 2) + 1);
        }
        E[] eArr2 = this.f1467c;
        int i2 = this.f1468d;
        this.f1468d = i2 + 1;
        eArr2[i2] = e2;
        ((AbstractList) this).modCount++;
        return true;
    }

    @Override // java.util.AbstractList, java.util.List
    public final E get(int i) {
        b(i);
        return this.f1467c[i];
    }

    @Override // java.util.AbstractList, java.util.List
    public final E remove(int i) {
        a();
        b(i);
        E[] eArr = this.f1467c;
        E e2 = eArr[i];
        if (i < this.f1468d - 1) {
            System.arraycopy(eArr, i + 1, eArr, i, (r2 - i) - 1);
        }
        this.f1468d--;
        ((AbstractList) this).modCount++;
        return e2;
    }

    @Override // java.util.AbstractList, java.util.List
    public final E set(int i, E e2) {
        a();
        b(i);
        E[] eArr = this.f1467c;
        E e3 = eArr[i];
        eArr[i] = e2;
        ((AbstractList) this).modCount++;
        return e3;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1468d;
    }
}
