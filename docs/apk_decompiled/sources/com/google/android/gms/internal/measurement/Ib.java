package com.google.android.gms.internal.measurement;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.Collection;
import java.util.RandomAccess;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ib extends Xa<Float> implements Rb<Float>, Fc, RandomAccess {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Ib f1471b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private float[] f1472c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f1473d;

    static {
        Ib ib = new Ib(new float[0], 0);
        f1471b = ib;
        ib.i();
    }

    Ib() {
        this(new float[10], 0);
    }

    private Ib(float[] fArr, int i) {
        this.f1472c = fArr;
        this.f1473d = i;
    }

    private final void b(int i) {
        if (i < 0 || i >= this.f1473d) {
            throw new IndexOutOfBoundsException(c(i));
        }
    }

    private final String c(int i) {
        int i2 = this.f1473d;
        StringBuilder sb = new StringBuilder(35);
        sb.append("Index:");
        sb.append(i);
        sb.append(", Size:");
        sb.append(i2);
        return sb.toString();
    }

    @Override // com.google.android.gms.internal.measurement.Rb
    public final /* synthetic */ Rb<Float> a(int i) {
        if (i >= this.f1473d) {
            return new Ib(Arrays.copyOf(this.f1472c, i), this.f1473d);
        }
        throw new IllegalArgumentException();
    }

    public final void a(float f2) {
        a();
        int i = this.f1473d;
        float[] fArr = this.f1472c;
        if (i == fArr.length) {
            float[] fArr2 = new float[((i * 3) / 2) + 1];
            System.arraycopy(fArr, 0, fArr2, 0, i);
            this.f1472c = fArr2;
        }
        float[] fArr3 = this.f1472c;
        int i2 = this.f1473d;
        this.f1473d = i2 + 1;
        fArr3[i2] = f2;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ void add(int i, Object obj) {
        int i2;
        float fFloatValue = ((Float) obj).floatValue();
        a();
        if (i < 0 || i > (i2 = this.f1473d)) {
            throw new IndexOutOfBoundsException(c(i));
        }
        float[] fArr = this.f1472c;
        if (i2 < fArr.length) {
            System.arraycopy(fArr, i, fArr, i + 1, i2 - i);
        } else {
            float[] fArr2 = new float[((i2 * 3) / 2) + 1];
            System.arraycopy(fArr, 0, fArr2, 0, i);
            System.arraycopy(this.f1472c, i, fArr2, i + 1, this.f1473d - i);
            this.f1472c = fArr2;
        }
        this.f1472c[i] = fFloatValue;
        this.f1473d++;
        ((AbstractList) this).modCount++;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* synthetic */ boolean add(Object obj) {
        a(((Float) obj).floatValue());
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection<? extends Float> collection) {
        a();
        Lb.a(collection);
        if (!(collection instanceof Ib)) {
            return super.addAll(collection);
        }
        Ib ib = (Ib) collection;
        int i = ib.f1473d;
        if (i == 0) {
            return false;
        }
        int i2 = this.f1473d;
        if (Integer.MAX_VALUE - i2 < i) {
            throw new OutOfMemoryError();
        }
        int i3 = i2 + i;
        float[] fArr = this.f1472c;
        if (i3 > fArr.length) {
            this.f1472c = Arrays.copyOf(fArr, i3);
        }
        System.arraycopy(ib.f1472c, 0, this.f1472c, this.f1473d, ib.f1473d);
        this.f1473d = i3;
        ((AbstractList) this).modCount++;
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Ib)) {
            return super.equals(obj);
        }
        Ib ib = (Ib) obj;
        if (this.f1473d != ib.f1473d) {
            return false;
        }
        float[] fArr = ib.f1472c;
        for (int i = 0; i < this.f1473d; i++) {
            if (Float.floatToIntBits(this.f1472c[i]) != Float.floatToIntBits(fArr[i])) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object get(int i) {
        b(i);
        return Float.valueOf(this.f1472c[i]);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        int iFloatToIntBits = 1;
        for (int i = 0; i < this.f1473d; i++) {
            iFloatToIntBits = (iFloatToIntBits * 31) + Float.floatToIntBits(this.f1472c[i]);
        }
        return iFloatToIntBits;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object remove(int i) {
        a();
        b(i);
        float[] fArr = this.f1472c;
        float f2 = fArr[i];
        if (i < this.f1473d - 1) {
            System.arraycopy(fArr, i + 1, fArr, i, (r2 - i) - 1);
        }
        this.f1473d--;
        ((AbstractList) this).modCount++;
        return Float.valueOf(f2);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean remove(Object obj) {
        a();
        for (int i = 0; i < this.f1473d; i++) {
            if (obj.equals(Float.valueOf(this.f1472c[i]))) {
                float[] fArr = this.f1472c;
                System.arraycopy(fArr, i + 1, fArr, i, (this.f1473d - i) - 1);
                this.f1473d--;
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
        float[] fArr = this.f1472c;
        System.arraycopy(fArr, i2, fArr, i, this.f1473d - i2);
        this.f1473d -= i2 - i;
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object set(int i, Object obj) {
        float fFloatValue = ((Float) obj).floatValue();
        a();
        b(i);
        float[] fArr = this.f1472c;
        float f2 = fArr[i];
        fArr[i] = fFloatValue;
        return Float.valueOf(f2);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1473d;
    }
}
