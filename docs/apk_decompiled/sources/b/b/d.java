package b.b;

import java.lang.reflect.Array;
import java.util.Collection;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class d<E> implements Collection<E>, Set<E> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int[] f712a = new int[0];

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Object[] f713b = new Object[0];

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static Object[] f714c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static int f715d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static Object[] f716e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static int f717f;
    private int[] g;
    Object[] h;
    int i;
    private g<E, E> j;

    public d() {
        this(0);
    }

    public d(int i) {
        if (i == 0) {
            this.g = f712a;
            this.h = f713b;
        } else {
            g(i);
        }
        this.i = 0;
    }

    private int a(Object obj, int i) {
        int i2 = this.i;
        if (i2 == 0) {
            return -1;
        }
        int iA = e.a(this.g, i2, i);
        if (iA < 0 || obj.equals(this.h[iA])) {
            return iA;
        }
        int i3 = iA + 1;
        while (i3 < i2 && this.g[i3] == i) {
            if (obj.equals(this.h[i3])) {
                return i3;
            }
            i3++;
        }
        for (int i4 = iA - 1; i4 >= 0 && this.g[i4] == i; i4--) {
            if (obj.equals(this.h[i4])) {
                return i4;
            }
        }
        return i3 ^ (-1);
    }

    private g<E, E> a() {
        if (this.j == null) {
            this.j = new c(this);
        }
        return this.j;
    }

    private static void a(int[] iArr, Object[] objArr, int i) {
        if (iArr.length == 8) {
            synchronized (d.class) {
                if (f717f < 10) {
                    objArr[0] = f716e;
                    objArr[1] = iArr;
                    for (int i2 = i - 1; i2 >= 2; i2--) {
                        objArr[i2] = null;
                    }
                    f716e = objArr;
                    f717f++;
                }
            }
            return;
        }
        if (iArr.length == 4) {
            synchronized (d.class) {
                if (f715d < 10) {
                    objArr[0] = f714c;
                    objArr[1] = iArr;
                    for (int i3 = i - 1; i3 >= 2; i3--) {
                        objArr[i3] = null;
                    }
                    f714c = objArr;
                    f715d++;
                }
            }
        }
    }

    private int b() {
        int i = this.i;
        if (i == 0) {
            return -1;
        }
        int iA = e.a(this.g, i, 0);
        if (iA < 0 || this.h[iA] == null) {
            return iA;
        }
        int i2 = iA + 1;
        while (i2 < i && this.g[i2] == 0) {
            if (this.h[i2] == null) {
                return i2;
            }
            i2++;
        }
        for (int i3 = iA - 1; i3 >= 0 && this.g[i3] == 0; i3--) {
            if (this.h[i3] == null) {
                return i3;
            }
        }
        return i2 ^ (-1);
    }

    private void g(int i) {
        if (i == 8) {
            synchronized (d.class) {
                if (f716e != null) {
                    Object[] objArr = f716e;
                    this.h = objArr;
                    f716e = (Object[]) objArr[0];
                    this.g = (int[]) objArr[1];
                    objArr[1] = null;
                    objArr[0] = null;
                    f717f--;
                    return;
                }
            }
        } else if (i == 4) {
            synchronized (d.class) {
                if (f714c != null) {
                    Object[] objArr2 = f714c;
                    this.h = objArr2;
                    f714c = (Object[]) objArr2[0];
                    this.g = (int[]) objArr2[1];
                    objArr2[1] = null;
                    objArr2[0] = null;
                    f715d--;
                    return;
                }
            }
        }
        this.g = new int[i];
        this.h = new Object[i];
    }

    @Override // java.util.Collection, java.util.Set
    public boolean add(E e2) {
        int i;
        int iA;
        if (e2 == null) {
            iA = b();
            i = 0;
        } else {
            int iHashCode = e2.hashCode();
            i = iHashCode;
            iA = a(e2, iHashCode);
        }
        if (iA >= 0) {
            return false;
        }
        int i2 = iA ^ (-1);
        int i3 = this.i;
        if (i3 >= this.g.length) {
            int i4 = 4;
            if (i3 >= 8) {
                i4 = (i3 >> 1) + i3;
            } else if (i3 >= 4) {
                i4 = 8;
            }
            int[] iArr = this.g;
            Object[] objArr = this.h;
            g(i4);
            int[] iArr2 = this.g;
            if (iArr2.length > 0) {
                System.arraycopy(iArr, 0, iArr2, 0, iArr.length);
                System.arraycopy(objArr, 0, this.h, 0, objArr.length);
            }
            a(iArr, objArr, this.i);
        }
        int i5 = this.i;
        if (i2 < i5) {
            int[] iArr3 = this.g;
            int i6 = i2 + 1;
            System.arraycopy(iArr3, i2, iArr3, i6, i5 - i2);
            Object[] objArr2 = this.h;
            System.arraycopy(objArr2, i2, objArr2, i6, this.i - i2);
        }
        this.g[i2] = i;
        this.h[i2] = e2;
        this.i++;
        return true;
    }

    @Override // java.util.Collection, java.util.Set
    public boolean addAll(Collection<? extends E> collection) {
        d(this.i + collection.size());
        Iterator<? extends E> it = collection.iterator();
        boolean zAdd = false;
        while (it.hasNext()) {
            zAdd |= add(it.next());
        }
        return zAdd;
    }

    @Override // java.util.Collection, java.util.Set
    public void clear() {
        int i = this.i;
        if (i != 0) {
            a(this.g, this.h, i);
            this.g = f712a;
            this.h = f713b;
            this.i = 0;
        }
    }

    @Override // java.util.Collection, java.util.Set
    public boolean contains(Object obj) {
        return indexOf(obj) >= 0;
    }

    @Override // java.util.Collection, java.util.Set
    public boolean containsAll(Collection<?> collection) {
        Iterator<?> it = collection.iterator();
        while (it.hasNext()) {
            if (!contains(it.next())) {
                return false;
            }
        }
        return true;
    }

    public void d(int i) {
        int[] iArr = this.g;
        if (iArr.length < i) {
            Object[] objArr = this.h;
            g(i);
            int i2 = this.i;
            if (i2 > 0) {
                System.arraycopy(iArr, 0, this.g, 0, i2);
                System.arraycopy(objArr, 0, this.h, 0, this.i);
            }
            a(iArr, objArr, this.i);
        }
    }

    public E e(int i) {
        Object[] objArr = this.h;
        E e2 = (E) objArr[i];
        int i2 = this.i;
        if (i2 <= 1) {
            a(this.g, objArr, i2);
            this.g = f712a;
            this.h = f713b;
            this.i = 0;
        } else {
            int[] iArr = this.g;
            if (iArr.length <= 8 || i2 >= iArr.length / 3) {
                this.i--;
                int i3 = this.i;
                if (i < i3) {
                    int[] iArr2 = this.g;
                    int i4 = i + 1;
                    System.arraycopy(iArr2, i4, iArr2, i, i3 - i);
                    Object[] objArr2 = this.h;
                    System.arraycopy(objArr2, i4, objArr2, i, this.i - i);
                }
                this.h[this.i] = null;
            } else {
                int i5 = i2 > 8 ? i2 + (i2 >> 1) : 8;
                int[] iArr3 = this.g;
                Object[] objArr3 = this.h;
                g(i5);
                this.i--;
                if (i > 0) {
                    System.arraycopy(iArr3, 0, this.g, 0, i);
                    System.arraycopy(objArr3, 0, this.h, 0, i);
                }
                int i6 = this.i;
                if (i < i6) {
                    int i7 = i + 1;
                    System.arraycopy(iArr3, i7, this.g, i, i6 - i);
                    System.arraycopy(objArr3, i7, this.h, i, this.i - i);
                }
            }
        }
        return e2;
    }

    @Override // java.util.Collection, java.util.Set
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof Set) {
            Set set = (Set) obj;
            if (size() != set.size()) {
                return false;
            }
            for (int i = 0; i < this.i; i++) {
                try {
                    if (!set.contains(f(i))) {
                        return false;
                    }
                } catch (ClassCastException | NullPointerException unused) {
                }
            }
            return true;
        }
        return false;
    }

    public E f(int i) {
        return (E) this.h[i];
    }

    @Override // java.util.Collection, java.util.Set
    public int hashCode() {
        int[] iArr = this.g;
        int i = this.i;
        int i2 = 0;
        for (int i3 = 0; i3 < i; i3++) {
            i2 += iArr[i3];
        }
        return i2;
    }

    public int indexOf(Object obj) {
        return obj == null ? b() : a(obj, obj.hashCode());
    }

    @Override // java.util.Collection, java.util.Set
    public boolean isEmpty() {
        return this.i <= 0;
    }

    @Override // java.util.Collection, java.lang.Iterable, java.util.Set
    public Iterator<E> iterator() {
        return a().e().iterator();
    }

    @Override // java.util.Collection, java.util.Set
    public boolean remove(Object obj) {
        int iIndexOf = indexOf(obj);
        if (iIndexOf < 0) {
            return false;
        }
        e(iIndexOf);
        return true;
    }

    @Override // java.util.Collection, java.util.Set
    public boolean removeAll(Collection<?> collection) {
        Iterator<?> it = collection.iterator();
        boolean zRemove = false;
        while (it.hasNext()) {
            zRemove |= remove(it.next());
        }
        return zRemove;
    }

    @Override // java.util.Collection, java.util.Set
    public boolean retainAll(Collection<?> collection) {
        boolean z = false;
        for (int i = this.i - 1; i >= 0; i--) {
            if (!collection.contains(this.h[i])) {
                e(i);
                z = true;
            }
        }
        return z;
    }

    @Override // java.util.Collection, java.util.Set
    public int size() {
        return this.i;
    }

    @Override // java.util.Collection, java.util.Set
    public Object[] toArray() {
        int i = this.i;
        Object[] objArr = new Object[i];
        System.arraycopy(this.h, 0, objArr, 0, i);
        return objArr;
    }

    @Override // java.util.Collection, java.util.Set
    public <T> T[] toArray(T[] tArr) {
        if (tArr.length < this.i) {
            tArr = (T[]) ((Object[]) Array.newInstance(tArr.getClass().getComponentType(), this.i));
        }
        System.arraycopy(this.h, 0, tArr, 0, this.i);
        int length = tArr.length;
        int i = this.i;
        if (length > i) {
            tArr[i] = null;
        }
        return tArr;
    }

    public String toString() {
        if (isEmpty()) {
            return "{}";
        }
        StringBuilder sb = new StringBuilder(this.i * 14);
        sb.append('{');
        for (int i = 0; i < this.i; i++) {
            if (i > 0) {
                sb.append(", ");
            }
            E eF = f(i);
            if (eF != this) {
                sb.append(eF);
            } else {
                sb.append("(this Set)");
            }
        }
        sb.append('}');
        return sb.toString();
    }
}
