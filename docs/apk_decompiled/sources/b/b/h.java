package b.b;

import java.util.ConcurrentModificationException;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class h<K, V> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static Object[] f736a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static int f737b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    static Object[] f738c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    static int f739d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    int[] f740e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    Object[] f741f;
    int g;

    public h() {
        this.f740e = e.f718a;
        this.f741f = e.f720c;
        this.g = 0;
    }

    public h(int i) {
        if (i == 0) {
            this.f740e = e.f718a;
            this.f741f = e.f720c;
        } else {
            e(i);
        }
        this.g = 0;
    }

    private static int a(int[] iArr, int i, int i2) {
        try {
            return e.a(iArr, i, i2);
        } catch (ArrayIndexOutOfBoundsException unused) {
            throw new ConcurrentModificationException();
        }
    }

    private static void a(int[] iArr, Object[] objArr, int i) {
        if (iArr.length == 8) {
            synchronized (b.class) {
                if (f739d < 10) {
                    objArr[0] = f738c;
                    objArr[1] = iArr;
                    for (int i2 = (i << 1) - 1; i2 >= 2; i2--) {
                        objArr[i2] = null;
                    }
                    f738c = objArr;
                    f739d++;
                }
            }
            return;
        }
        if (iArr.length == 4) {
            synchronized (b.class) {
                if (f737b < 10) {
                    objArr[0] = f736a;
                    objArr[1] = iArr;
                    for (int i3 = (i << 1) - 1; i3 >= 2; i3--) {
                        objArr[i3] = null;
                    }
                    f736a = objArr;
                    f737b++;
                }
            }
        }
    }

    private void e(int i) {
        if (i == 8) {
            synchronized (b.class) {
                if (f738c != null) {
                    Object[] objArr = f738c;
                    this.f741f = objArr;
                    f738c = (Object[]) objArr[0];
                    this.f740e = (int[]) objArr[1];
                    objArr[1] = null;
                    objArr[0] = null;
                    f739d--;
                    return;
                }
            }
        } else if (i == 4) {
            synchronized (b.class) {
                if (f736a != null) {
                    Object[] objArr2 = f736a;
                    this.f741f = objArr2;
                    f736a = (Object[]) objArr2[0];
                    this.f740e = (int[]) objArr2[1];
                    objArr2[1] = null;
                    objArr2[0] = null;
                    f737b--;
                    return;
                }
            }
        }
        this.f740e = new int[i];
        this.f741f = new Object[i << 1];
    }

    int a() {
        int i = this.g;
        if (i == 0) {
            return -1;
        }
        int iA = a(this.f740e, i, 0);
        if (iA < 0 || this.f741f[iA << 1] == null) {
            return iA;
        }
        int i2 = iA + 1;
        while (i2 < i && this.f740e[i2] == 0) {
            if (this.f741f[i2 << 1] == null) {
                return i2;
            }
            i2++;
        }
        for (int i3 = iA - 1; i3 >= 0 && this.f740e[i3] == 0; i3--) {
            if (this.f741f[i3 << 1] == null) {
                return i3;
            }
        }
        return i2 ^ (-1);
    }

    public int a(Object obj) {
        return obj == null ? a() : a(obj, obj.hashCode());
    }

    int a(Object obj, int i) {
        int i2 = this.g;
        if (i2 == 0) {
            return -1;
        }
        int iA = a(this.f740e, i2, i);
        if (iA < 0 || obj.equals(this.f741f[iA << 1])) {
            return iA;
        }
        int i3 = iA + 1;
        while (i3 < i2 && this.f740e[i3] == i) {
            if (obj.equals(this.f741f[i3 << 1])) {
                return i3;
            }
            i3++;
        }
        for (int i4 = iA - 1; i4 >= 0 && this.f740e[i4] == i; i4--) {
            if (obj.equals(this.f741f[i4 << 1])) {
                return i4;
            }
        }
        return i3 ^ (-1);
    }

    public V a(int i, V v) {
        int i2 = (i << 1) + 1;
        Object[] objArr = this.f741f;
        V v2 = (V) objArr[i2];
        objArr[i2] = v;
        return v2;
    }

    public void a(int i) {
        int i2 = this.g;
        int[] iArr = this.f740e;
        if (iArr.length < i) {
            Object[] objArr = this.f741f;
            e(i);
            if (this.g > 0) {
                System.arraycopy(iArr, 0, this.f740e, 0, i2);
                System.arraycopy(objArr, 0, this.f741f, 0, i2 << 1);
            }
            a(iArr, objArr, i2);
        }
        if (this.g != i2) {
            throw new ConcurrentModificationException();
        }
    }

    int b(Object obj) {
        int i = this.g * 2;
        Object[] objArr = this.f741f;
        if (obj == null) {
            for (int i2 = 1; i2 < i; i2 += 2) {
                if (objArr[i2] == null) {
                    return i2 >> 1;
                }
            }
            return -1;
        }
        for (int i3 = 1; i3 < i; i3 += 2) {
            if (obj.equals(objArr[i3])) {
                return i3 >> 1;
            }
        }
        return -1;
    }

    public K b(int i) {
        return (K) this.f741f[i << 1];
    }

    public V c(int i) {
        int i2;
        Object[] objArr = this.f741f;
        int i3 = i << 1;
        V v = (V) objArr[i3 + 1];
        int i4 = this.g;
        if (i4 <= 1) {
            a(this.f740e, objArr, i4);
            this.f740e = e.f718a;
            this.f741f = e.f720c;
            i2 = 0;
        } else {
            i2 = i4 - 1;
            int[] iArr = this.f740e;
            if (iArr.length <= 8 || i4 >= iArr.length / 3) {
                if (i < i2) {
                    int[] iArr2 = this.f740e;
                    int i5 = i + 1;
                    int i6 = i2 - i;
                    System.arraycopy(iArr2, i5, iArr2, i, i6);
                    Object[] objArr2 = this.f741f;
                    System.arraycopy(objArr2, i5 << 1, objArr2, i3, i6 << 1);
                }
                Object[] objArr3 = this.f741f;
                int i7 = i2 << 1;
                objArr3[i7] = null;
                objArr3[i7 + 1] = null;
            } else {
                int i8 = i4 > 8 ? i4 + (i4 >> 1) : 8;
                int[] iArr3 = this.f740e;
                Object[] objArr4 = this.f741f;
                e(i8);
                if (i4 != this.g) {
                    throw new ConcurrentModificationException();
                }
                if (i > 0) {
                    System.arraycopy(iArr3, 0, this.f740e, 0, i);
                    System.arraycopy(objArr4, 0, this.f741f, 0, i3);
                }
                if (i < i2) {
                    int i9 = i + 1;
                    int i10 = i2 - i;
                    System.arraycopy(iArr3, i9, this.f740e, i, i10);
                    System.arraycopy(objArr4, i9 << 1, this.f741f, i3, i10 << 1);
                }
            }
        }
        if (i4 != this.g) {
            throw new ConcurrentModificationException();
        }
        this.g = i2;
        return v;
    }

    public void clear() {
        int i = this.g;
        if (i > 0) {
            int[] iArr = this.f740e;
            Object[] objArr = this.f741f;
            this.f740e = e.f718a;
            this.f741f = e.f720c;
            this.g = 0;
            a(iArr, objArr, i);
        }
        if (this.g > 0) {
            throw new ConcurrentModificationException();
        }
    }

    public boolean containsKey(Object obj) {
        return a(obj) >= 0;
    }

    public boolean containsValue(Object obj) {
        return b(obj) >= 0;
    }

    public V d(int i) {
        return (V) this.f741f[(i << 1) + 1];
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof h) {
            h hVar = (h) obj;
            if (size() != hVar.size()) {
                return false;
            }
            for (int i = 0; i < this.g; i++) {
                try {
                    K kB = b(i);
                    V vD = d(i);
                    Object obj2 = hVar.get(kB);
                    if (vD == null) {
                        if (obj2 != null || !hVar.containsKey(kB)) {
                            return false;
                        }
                    } else if (!vD.equals(obj2)) {
                        return false;
                    }
                } catch (ClassCastException | NullPointerException unused) {
                    return false;
                }
            }
            return true;
        }
        if (obj instanceof Map) {
            Map map = (Map) obj;
            if (size() != map.size()) {
                return false;
            }
            for (int i2 = 0; i2 < this.g; i2++) {
                try {
                    K kB2 = b(i2);
                    V vD2 = d(i2);
                    Object obj3 = map.get(kB2);
                    if (vD2 == null) {
                        if (obj3 != null || !map.containsKey(kB2)) {
                            return false;
                        }
                    } else if (!vD2.equals(obj3)) {
                        return false;
                    }
                } catch (ClassCastException | NullPointerException unused2) {
                }
            }
            return true;
        }
        return false;
    }

    public V get(Object obj) {
        int iA = a(obj);
        if (iA >= 0) {
            return (V) this.f741f[(iA << 1) + 1];
        }
        return null;
    }

    public int hashCode() {
        int[] iArr = this.f740e;
        Object[] objArr = this.f741f;
        int i = this.g;
        int i2 = 0;
        int iHashCode = 0;
        int i3 = 1;
        while (i2 < i) {
            Object obj = objArr[i3];
            iHashCode += (obj == null ? 0 : obj.hashCode()) ^ iArr[i2];
            i2++;
            i3 += 2;
        }
        return iHashCode;
    }

    public boolean isEmpty() {
        return this.g <= 0;
    }

    public V put(K k, V v) {
        int i;
        int iA;
        int i2 = this.g;
        if (k == null) {
            iA = a();
            i = 0;
        } else {
            int iHashCode = k.hashCode();
            i = iHashCode;
            iA = a(k, iHashCode);
        }
        if (iA >= 0) {
            int i3 = (iA << 1) + 1;
            Object[] objArr = this.f741f;
            V v2 = (V) objArr[i3];
            objArr[i3] = v;
            return v2;
        }
        int i4 = iA ^ (-1);
        if (i2 >= this.f740e.length) {
            int i5 = 4;
            if (i2 >= 8) {
                i5 = (i2 >> 1) + i2;
            } else if (i2 >= 4) {
                i5 = 8;
            }
            int[] iArr = this.f740e;
            Object[] objArr2 = this.f741f;
            e(i5);
            if (i2 != this.g) {
                throw new ConcurrentModificationException();
            }
            int[] iArr2 = this.f740e;
            if (iArr2.length > 0) {
                System.arraycopy(iArr, 0, iArr2, 0, iArr.length);
                System.arraycopy(objArr2, 0, this.f741f, 0, objArr2.length);
            }
            a(iArr, objArr2, i2);
        }
        if (i4 < i2) {
            int[] iArr3 = this.f740e;
            int i6 = i4 + 1;
            System.arraycopy(iArr3, i4, iArr3, i6, i2 - i4);
            Object[] objArr3 = this.f741f;
            System.arraycopy(objArr3, i4 << 1, objArr3, i6 << 1, (this.g - i4) << 1);
        }
        int i7 = this.g;
        if (i2 == i7) {
            int[] iArr4 = this.f740e;
            if (i4 < iArr4.length) {
                iArr4[i4] = i;
                Object[] objArr4 = this.f741f;
                int i8 = i4 << 1;
                objArr4[i8] = k;
                objArr4[i8 + 1] = v;
                this.g = i7 + 1;
                return null;
            }
        }
        throw new ConcurrentModificationException();
    }

    public V remove(Object obj) {
        int iA = a(obj);
        if (iA >= 0) {
            return c(iA);
        }
        return null;
    }

    public int size() {
        return this.g;
    }

    public String toString() {
        if (isEmpty()) {
            return "{}";
        }
        StringBuilder sb = new StringBuilder(this.g * 28);
        sb.append('{');
        for (int i = 0; i < this.g; i++) {
            if (i > 0) {
                sb.append(", ");
            }
            K kB = b(i);
            if (kB != this) {
                sb.append(kB);
            } else {
                sb.append("(this Map)");
            }
            sb.append('=');
            V vD = d(i);
            if (vD != this) {
                sb.append(vD);
            } else {
                sb.append("(this Map)");
            }
        }
        sb.append('}');
        return sb.toString();
    }
}
