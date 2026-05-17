package com.google.android.gms.internal.measurement;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.Collection;
import java.util.RandomAccess;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ab, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0085ab extends Xa<Boolean> implements Rb<Boolean>, Fc, RandomAccess {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final C0085ab f1629b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean[] f1630c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f1631d;

    static {
        C0085ab c0085ab = new C0085ab(new boolean[0], 0);
        f1629b = c0085ab;
        c0085ab.i();
    }

    C0085ab() {
        this(new boolean[10], 0);
    }

    private C0085ab(boolean[] zArr, int i) {
        this.f1630c = zArr;
        this.f1631d = i;
    }

    private final void b(int i) {
        if (i < 0 || i >= this.f1631d) {
            throw new IndexOutOfBoundsException(c(i));
        }
    }

    private final String c(int i) {
        int i2 = this.f1631d;
        StringBuilder sb = new StringBuilder(35);
        sb.append("Index:");
        sb.append(i);
        sb.append(", Size:");
        sb.append(i2);
        return sb.toString();
    }

    @Override // com.google.android.gms.internal.measurement.Rb
    public final /* synthetic */ Rb<Boolean> a(int i) {
        if (i >= this.f1631d) {
            return new C0085ab(Arrays.copyOf(this.f1630c, i), this.f1631d);
        }
        throw new IllegalArgumentException();
    }

    public final void a(boolean z) {
        a();
        int i = this.f1631d;
        boolean[] zArr = this.f1630c;
        if (i == zArr.length) {
            boolean[] zArr2 = new boolean[((i * 3) / 2) + 1];
            System.arraycopy(zArr, 0, zArr2, 0, i);
            this.f1630c = zArr2;
        }
        boolean[] zArr3 = this.f1630c;
        int i2 = this.f1631d;
        this.f1631d = i2 + 1;
        zArr3[i2] = z;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ void add(int i, Object obj) {
        int i2;
        boolean zBooleanValue = ((Boolean) obj).booleanValue();
        a();
        if (i < 0 || i > (i2 = this.f1631d)) {
            throw new IndexOutOfBoundsException(c(i));
        }
        boolean[] zArr = this.f1630c;
        if (i2 < zArr.length) {
            System.arraycopy(zArr, i, zArr, i + 1, i2 - i);
        } else {
            boolean[] zArr2 = new boolean[((i2 * 3) / 2) + 1];
            System.arraycopy(zArr, 0, zArr2, 0, i);
            System.arraycopy(this.f1630c, i, zArr2, i + 1, this.f1631d - i);
            this.f1630c = zArr2;
        }
        this.f1630c[i] = zBooleanValue;
        this.f1631d++;
        ((AbstractList) this).modCount++;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* synthetic */ boolean add(Object obj) {
        a(((Boolean) obj).booleanValue());
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection<? extends Boolean> collection) {
        a();
        Lb.a(collection);
        if (!(collection instanceof C0085ab)) {
            return super.addAll(collection);
        }
        C0085ab c0085ab = (C0085ab) collection;
        int i = c0085ab.f1631d;
        if (i == 0) {
            return false;
        }
        int i2 = this.f1631d;
        if (Integer.MAX_VALUE - i2 < i) {
            throw new OutOfMemoryError();
        }
        int i3 = i2 + i;
        boolean[] zArr = this.f1630c;
        if (i3 > zArr.length) {
            this.f1630c = Arrays.copyOf(zArr, i3);
        }
        System.arraycopy(c0085ab.f1630c, 0, this.f1630c, this.f1631d, c0085ab.f1631d);
        this.f1631d = i3;
        ((AbstractList) this).modCount++;
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C0085ab)) {
            return super.equals(obj);
        }
        C0085ab c0085ab = (C0085ab) obj;
        if (this.f1631d != c0085ab.f1631d) {
            return false;
        }
        boolean[] zArr = c0085ab.f1630c;
        for (int i = 0; i < this.f1631d; i++) {
            if (this.f1630c[i] != zArr[i]) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object get(int i) {
        b(i);
        return Boolean.valueOf(this.f1630c[i]);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        int iA = 1;
        for (int i = 0; i < this.f1631d; i++) {
            iA = (iA * 31) + Lb.a(this.f1630c[i]);
        }
        return iA;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object remove(int i) {
        a();
        b(i);
        boolean[] zArr = this.f1630c;
        boolean z = zArr[i];
        if (i < this.f1631d - 1) {
            System.arraycopy(zArr, i + 1, zArr, i, (r2 - i) - 1);
        }
        this.f1631d--;
        ((AbstractList) this).modCount++;
        return Boolean.valueOf(z);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean remove(Object obj) {
        a();
        for (int i = 0; i < this.f1631d; i++) {
            if (obj.equals(Boolean.valueOf(this.f1630c[i]))) {
                boolean[] zArr = this.f1630c;
                System.arraycopy(zArr, i + 1, zArr, i, (this.f1631d - i) - 1);
                this.f1631d--;
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
        boolean[] zArr = this.f1630c;
        System.arraycopy(zArr, i2, zArr, i, this.f1631d - i2);
        this.f1631d -= i2 - i;
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object set(int i, Object obj) {
        boolean zBooleanValue = ((Boolean) obj).booleanValue();
        a();
        b(i);
        boolean[] zArr = this.f1630c;
        boolean z = zArr[i];
        zArr[i] = zBooleanValue;
        return Boolean.valueOf(z);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1631d;
    }
}
