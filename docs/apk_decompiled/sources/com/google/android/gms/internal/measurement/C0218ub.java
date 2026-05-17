package com.google.android.gms.internal.measurement;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.Collection;
import java.util.RandomAccess;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ub, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0218ub extends Xa<Double> implements Rb<Double>, Fc, RandomAccess {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final C0218ub f1835b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private double[] f1836c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f1837d;

    static {
        C0218ub c0218ub = new C0218ub(new double[0], 0);
        f1835b = c0218ub;
        c0218ub.i();
    }

    C0218ub() {
        this(new double[10], 0);
    }

    private C0218ub(double[] dArr, int i) {
        this.f1836c = dArr;
        this.f1837d = i;
    }

    private final void b(int i) {
        if (i < 0 || i >= this.f1837d) {
            throw new IndexOutOfBoundsException(c(i));
        }
    }

    private final String c(int i) {
        int i2 = this.f1837d;
        StringBuilder sb = new StringBuilder(35);
        sb.append("Index:");
        sb.append(i);
        sb.append(", Size:");
        sb.append(i2);
        return sb.toString();
    }

    @Override // com.google.android.gms.internal.measurement.Rb
    public final /* synthetic */ Rb<Double> a(int i) {
        if (i >= this.f1837d) {
            return new C0218ub(Arrays.copyOf(this.f1836c, i), this.f1837d);
        }
        throw new IllegalArgumentException();
    }

    public final void a(double d2) {
        a();
        int i = this.f1837d;
        double[] dArr = this.f1836c;
        if (i == dArr.length) {
            double[] dArr2 = new double[((i * 3) / 2) + 1];
            System.arraycopy(dArr, 0, dArr2, 0, i);
            this.f1836c = dArr2;
        }
        double[] dArr3 = this.f1836c;
        int i2 = this.f1837d;
        this.f1837d = i2 + 1;
        dArr3[i2] = d2;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ void add(int i, Object obj) {
        int i2;
        double dDoubleValue = ((Double) obj).doubleValue();
        a();
        if (i < 0 || i > (i2 = this.f1837d)) {
            throw new IndexOutOfBoundsException(c(i));
        }
        double[] dArr = this.f1836c;
        if (i2 < dArr.length) {
            System.arraycopy(dArr, i, dArr, i + 1, i2 - i);
        } else {
            double[] dArr2 = new double[((i2 * 3) / 2) + 1];
            System.arraycopy(dArr, 0, dArr2, 0, i);
            System.arraycopy(this.f1836c, i, dArr2, i + 1, this.f1837d - i);
            this.f1836c = dArr2;
        }
        this.f1836c[i] = dDoubleValue;
        this.f1837d++;
        ((AbstractList) this).modCount++;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* synthetic */ boolean add(Object obj) {
        a(((Double) obj).doubleValue());
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection<? extends Double> collection) {
        a();
        Lb.a(collection);
        if (!(collection instanceof C0218ub)) {
            return super.addAll(collection);
        }
        C0218ub c0218ub = (C0218ub) collection;
        int i = c0218ub.f1837d;
        if (i == 0) {
            return false;
        }
        int i2 = this.f1837d;
        if (Integer.MAX_VALUE - i2 < i) {
            throw new OutOfMemoryError();
        }
        int i3 = i2 + i;
        double[] dArr = this.f1836c;
        if (i3 > dArr.length) {
            this.f1836c = Arrays.copyOf(dArr, i3);
        }
        System.arraycopy(c0218ub.f1836c, 0, this.f1836c, this.f1837d, c0218ub.f1837d);
        this.f1837d = i3;
        ((AbstractList) this).modCount++;
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C0218ub)) {
            return super.equals(obj);
        }
        C0218ub c0218ub = (C0218ub) obj;
        if (this.f1837d != c0218ub.f1837d) {
            return false;
        }
        double[] dArr = c0218ub.f1836c;
        for (int i = 0; i < this.f1837d; i++) {
            if (Double.doubleToLongBits(this.f1836c[i]) != Double.doubleToLongBits(dArr[i])) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object get(int i) {
        b(i);
        return Double.valueOf(this.f1836c[i]);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        int iA = 1;
        for (int i = 0; i < this.f1837d; i++) {
            iA = (iA * 31) + Lb.a(Double.doubleToLongBits(this.f1836c[i]));
        }
        return iA;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object remove(int i) {
        a();
        b(i);
        double[] dArr = this.f1836c;
        double d2 = dArr[i];
        if (i < this.f1837d - 1) {
            System.arraycopy(dArr, i + 1, dArr, i, (r3 - i) - 1);
        }
        this.f1837d--;
        ((AbstractList) this).modCount++;
        return Double.valueOf(d2);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean remove(Object obj) {
        a();
        for (int i = 0; i < this.f1837d; i++) {
            if (obj.equals(Double.valueOf(this.f1836c[i]))) {
                double[] dArr = this.f1836c;
                System.arraycopy(dArr, i + 1, dArr, i, (this.f1837d - i) - 1);
                this.f1837d--;
                ((AbstractList) this).modCount++;
                return true;
            }
        }
        return false;
    }

    @Override // java.util.AbstractList
    protected final void removeRange(int i, int i2) {
        a();
        if (i2 < i) {
            throw new IndexOutOfBoundsException("toIndex < fromIndex");
        }
        double[] dArr = this.f1836c;
        System.arraycopy(dArr, i2, dArr, i, this.f1837d - i2);
        this.f1837d -= i2 - i;
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object set(int i, Object obj) {
        double dDoubleValue = ((Double) obj).doubleValue();
        a();
        b(i);
        double[] dArr = this.f1836c;
        double d2 = dArr[i];
        dArr[i] = dDoubleValue;
        return Double.valueOf(d2);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1837d;
    }
}
