package com.google.android.gms.internal.measurement;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.Collection;
import java.util.RandomAccess;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Mb extends Xa<Integer> implements Pb, Fc, RandomAccess {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Mb f1510b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int[] f1511c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f1512d;

    static {
        Mb mb = new Mb(new int[0], 0);
        f1510b = mb;
        mb.i();
    }

    Mb() {
        this(new int[10], 0);
    }

    private Mb(int[] iArr, int i) {
        this.f1511c = iArr;
        this.f1512d = i;
    }

    public static Mb b() {
        return f1510b;
    }

    private final void e(int i) {
        if (i < 0 || i >= this.f1512d) {
            throw new IndexOutOfBoundsException(f(i));
        }
    }

    private final String f(int i) {
        int i2 = this.f1512d;
        StringBuilder sb = new StringBuilder(35);
        sb.append("Index:");
        sb.append(i);
        sb.append(", Size:");
        sb.append(i2);
        return sb.toString();
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ void add(int i, Object obj) {
        int i2;
        int iIntValue = ((Integer) obj).intValue();
        a();
        if (i < 0 || i > (i2 = this.f1512d)) {
            throw new IndexOutOfBoundsException(f(i));
        }
        int[] iArr = this.f1511c;
        if (i2 < iArr.length) {
            System.arraycopy(iArr, i, iArr, i + 1, i2 - i);
        } else {
            int[] iArr2 = new int[((i2 * 3) / 2) + 1];
            System.arraycopy(iArr, 0, iArr2, 0, i);
            System.arraycopy(this.f1511c, i, iArr2, i + 1, this.f1512d - i);
            this.f1511c = iArr2;
        }
        this.f1511c[i] = iIntValue;
        this.f1512d++;
        ((AbstractList) this).modCount++;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* synthetic */ boolean add(Object obj) {
        d(((Integer) obj).intValue());
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection<? extends Integer> collection) {
        a();
        Lb.a(collection);
        if (!(collection instanceof Mb)) {
            return super.addAll(collection);
        }
        Mb mb = (Mb) collection;
        int i = mb.f1512d;
        if (i == 0) {
            return false;
        }
        int i2 = this.f1512d;
        if (Integer.MAX_VALUE - i2 < i) {
            throw new OutOfMemoryError();
        }
        int i3 = i2 + i;
        int[] iArr = this.f1511c;
        if (i3 > iArr.length) {
            this.f1511c = Arrays.copyOf(iArr, i3);
        }
        System.arraycopy(mb.f1511c, 0, this.f1511c, this.f1512d, mb.f1512d);
        this.f1512d = i3;
        ((AbstractList) this).modCount++;
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Rb
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final Pb a(int i) {
        if (i >= this.f1512d) {
            return new Mb(Arrays.copyOf(this.f1511c, i), this.f1512d);
        }
        throw new IllegalArgumentException();
    }

    public final int c(int i) {
        e(i);
        return this.f1511c[i];
    }

    public final void d(int i) {
        a();
        int i2 = this.f1512d;
        int[] iArr = this.f1511c;
        if (i2 == iArr.length) {
            int[] iArr2 = new int[((i2 * 3) / 2) + 1];
            System.arraycopy(iArr, 0, iArr2, 0, i2);
            this.f1511c = iArr2;
        }
        int[] iArr3 = this.f1511c;
        int i3 = this.f1512d;
        this.f1512d = i3 + 1;
        iArr3[i3] = i;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Mb)) {
            return super.equals(obj);
        }
        Mb mb = (Mb) obj;
        if (this.f1512d != mb.f1512d) {
            return false;
        }
        int[] iArr = mb.f1511c;
        for (int i = 0; i < this.f1512d; i++) {
            if (this.f1511c[i] != iArr[i]) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object get(int i) {
        return Integer.valueOf(c(i));
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        int i = 1;
        for (int i2 = 0; i2 < this.f1512d; i2++) {
            i = (i * 31) + this.f1511c[i2];
        }
        return i;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object remove(int i) {
        a();
        e(i);
        int[] iArr = this.f1511c;
        int i2 = iArr[i];
        if (i < this.f1512d - 1) {
            System.arraycopy(iArr, i + 1, iArr, i, (r2 - i) - 1);
        }
        this.f1512d--;
        ((AbstractList) this).modCount++;
        return Integer.valueOf(i2);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean remove(Object obj) {
        a();
        for (int i = 0; i < this.f1512d; i++) {
            if (obj.equals(Integer.valueOf(this.f1511c[i]))) {
                int[] iArr = this.f1511c;
                System.arraycopy(iArr, i + 1, iArr, i, (this.f1512d - i) - 1);
                this.f1512d--;
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
        int[] iArr = this.f1511c;
        System.arraycopy(iArr, i2, iArr, i, this.f1512d - i2);
        this.f1512d -= i2 - i;
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object set(int i, Object obj) {
        int iIntValue = ((Integer) obj).intValue();
        a();
        e(i);
        int[] iArr = this.f1511c;
        int i2 = iArr[i];
        iArr[i] = iIntValue;
        return Integer.valueOf(i2);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1512d;
    }
}
