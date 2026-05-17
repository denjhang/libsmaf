package com.google.android.gms.internal.measurement;

import java.util.AbstractList;
import java.util.Arrays;
import java.util.Collection;
import java.util.RandomAccess;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ic, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0142ic extends Xa<Long> implements Sb, Fc, RandomAccess {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final C0142ic f1724b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private long[] f1725c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f1726d;

    static {
        C0142ic c0142ic = new C0142ic(new long[0], 0);
        f1724b = c0142ic;
        c0142ic.i();
    }

    C0142ic() {
        this(new long[10], 0);
    }

    private C0142ic(long[] jArr, int i) {
        this.f1725c = jArr;
        this.f1726d = i;
    }

    public static C0142ic b() {
        return f1724b;
    }

    private final void d(int i) {
        if (i < 0 || i >= this.f1726d) {
            throw new IndexOutOfBoundsException(e(i));
        }
    }

    private final String e(int i) {
        int i2 = this.f1726d;
        StringBuilder sb = new StringBuilder(35);
        sb.append("Index:");
        sb.append(i);
        sb.append(", Size:");
        sb.append(i2);
        return sb.toString();
    }

    @Override // com.google.android.gms.internal.measurement.Sb
    public final void a(long j) {
        a();
        int i = this.f1726d;
        long[] jArr = this.f1725c;
        if (i == jArr.length) {
            long[] jArr2 = new long[((i * 3) / 2) + 1];
            System.arraycopy(jArr, 0, jArr2, 0, i);
            this.f1725c = jArr2;
        }
        long[] jArr3 = this.f1725c;
        int i2 = this.f1726d;
        this.f1726d = i2 + 1;
        jArr3[i2] = j;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ void add(int i, Object obj) {
        int i2;
        long jLongValue = ((Long) obj).longValue();
        a();
        if (i < 0 || i > (i2 = this.f1726d)) {
            throw new IndexOutOfBoundsException(e(i));
        }
        long[] jArr = this.f1725c;
        if (i2 < jArr.length) {
            System.arraycopy(jArr, i, jArr, i + 1, i2 - i);
        } else {
            long[] jArr2 = new long[((i2 * 3) / 2) + 1];
            System.arraycopy(jArr, 0, jArr2, 0, i);
            System.arraycopy(this.f1725c, i, jArr2, i + 1, this.f1726d - i);
            this.f1725c = jArr2;
        }
        this.f1725c[i] = jLongValue;
        this.f1726d++;
        ((AbstractList) this).modCount++;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final /* synthetic */ boolean add(Object obj) {
        a(((Long) obj).longValue());
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean addAll(Collection<? extends Long> collection) {
        a();
        Lb.a(collection);
        if (!(collection instanceof C0142ic)) {
            return super.addAll(collection);
        }
        C0142ic c0142ic = (C0142ic) collection;
        int i = c0142ic.f1726d;
        if (i == 0) {
            return false;
        }
        int i2 = this.f1726d;
        if (Integer.MAX_VALUE - i2 < i) {
            throw new OutOfMemoryError();
        }
        int i3 = i2 + i;
        long[] jArr = this.f1725c;
        if (i3 > jArr.length) {
            this.f1725c = Arrays.copyOf(jArr, i3);
        }
        System.arraycopy(c0142ic.f1725c, 0, this.f1725c, this.f1726d, c0142ic.f1726d);
        this.f1726d = i3;
        ((AbstractList) this).modCount++;
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Sb
    public final long b(int i) {
        d(i);
        return this.f1725c[i];
    }

    @Override // com.google.android.gms.internal.measurement.Rb
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public final Sb a(int i) {
        if (i >= this.f1726d) {
            return new C0142ic(Arrays.copyOf(this.f1725c, i), this.f1726d);
        }
        throw new IllegalArgumentException();
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C0142ic)) {
            return super.equals(obj);
        }
        C0142ic c0142ic = (C0142ic) obj;
        if (this.f1726d != c0142ic.f1726d) {
            return false;
        }
        long[] jArr = c0142ic.f1725c;
        for (int i = 0; i < this.f1726d; i++) {
            if (this.f1725c[i] != jArr[i]) {
                return false;
            }
        }
        return true;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object get(int i) {
        return Long.valueOf(b(i));
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractList, java.util.Collection, java.util.List
    public final int hashCode() {
        int iA = 1;
        for (int i = 0; i < this.f1726d; i++) {
            iA = (iA * 31) + Lb.a(this.f1725c[i]);
        }
        return iA;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object remove(int i) {
        a();
        d(i);
        long[] jArr = this.f1725c;
        long j = jArr[i];
        if (i < this.f1726d - 1) {
            System.arraycopy(jArr, i + 1, jArr, i, (r3 - i) - 1);
        }
        this.f1726d--;
        ((AbstractList) this).modCount++;
        return Long.valueOf(j);
    }

    @Override // com.google.android.gms.internal.measurement.Xa, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean remove(Object obj) {
        a();
        for (int i = 0; i < this.f1726d; i++) {
            if (obj.equals(Long.valueOf(this.f1725c[i]))) {
                long[] jArr = this.f1725c;
                System.arraycopy(jArr, i + 1, jArr, i, (this.f1726d - i) - 1);
                this.f1726d--;
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
        long[] jArr = this.f1725c;
        System.arraycopy(jArr, i2, jArr, i, this.f1726d - i2);
        this.f1726d -= i2 - i;
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final /* synthetic */ Object set(int i, Object obj) {
        long jLongValue = ((Long) obj).longValue();
        a();
        d(i);
        long[] jArr = this.f1725c;
        long j = jArr[i];
        jArr[i] = jLongValue;
        return Long.valueOf(j);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f1726d;
    }
}
