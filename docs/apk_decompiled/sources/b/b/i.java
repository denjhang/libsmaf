package b.b;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class i<E> implements Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f742a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f743b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int[] f744c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Object[] f745d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f746e;

    public i() {
        this(10);
    }

    public i(int i) {
        this.f743b = false;
        if (i == 0) {
            this.f744c = e.f718a;
            this.f745d = e.f720c;
        } else {
            int iB = e.b(i);
            this.f744c = new int[iB];
            this.f745d = new Object[iB];
        }
        this.f746e = 0;
    }

    private void d() {
        int i = this.f746e;
        int[] iArr = this.f744c;
        Object[] objArr = this.f745d;
        int i2 = 0;
        for (int i3 = 0; i3 < i; i3++) {
            Object obj = objArr[i3];
            if (obj != f742a) {
                if (i3 != i2) {
                    iArr[i2] = iArr[i3];
                    objArr[i2] = obj;
                    objArr[i3] = null;
                }
                i2++;
            }
        }
        this.f743b = false;
        this.f746e = i2;
    }

    public E a(int i, E e2) {
        int iA = e.a(this.f744c, this.f746e, i);
        if (iA >= 0) {
            Object[] objArr = this.f745d;
            if (objArr[iA] != f742a) {
                return (E) objArr[iA];
            }
        }
        return e2;
    }

    public void a(int i) {
        int iA = e.a(this.f744c, this.f746e, i);
        if (iA >= 0) {
            Object[] objArr = this.f745d;
            Object obj = objArr[iA];
            Object obj2 = f742a;
            if (obj != obj2) {
                objArr[iA] = obj2;
                this.f743b = true;
            }
        }
    }

    public E b(int i) {
        return a(i, null);
    }

    public void b() {
        int i = this.f746e;
        Object[] objArr = this.f745d;
        for (int i2 = 0; i2 < i; i2++) {
            objArr[i2] = null;
        }
        this.f746e = 0;
        this.f743b = false;
    }

    public void b(int i, E e2) {
        int iA = e.a(this.f744c, this.f746e, i);
        if (iA >= 0) {
            this.f745d[iA] = e2;
            return;
        }
        int iA2 = iA ^ (-1);
        if (iA2 < this.f746e) {
            Object[] objArr = this.f745d;
            if (objArr[iA2] == f742a) {
                this.f744c[iA2] = i;
                objArr[iA2] = e2;
                return;
            }
        }
        if (this.f743b && this.f746e >= this.f744c.length) {
            d();
            iA2 = e.a(this.f744c, this.f746e, i) ^ (-1);
        }
        int i2 = this.f746e;
        if (i2 >= this.f744c.length) {
            int iB = e.b(i2 + 1);
            int[] iArr = new int[iB];
            Object[] objArr2 = new Object[iB];
            int[] iArr2 = this.f744c;
            System.arraycopy(iArr2, 0, iArr, 0, iArr2.length);
            Object[] objArr3 = this.f745d;
            System.arraycopy(objArr3, 0, objArr2, 0, objArr3.length);
            this.f744c = iArr;
            this.f745d = objArr2;
        }
        int i3 = this.f746e;
        if (i3 - iA2 != 0) {
            int[] iArr3 = this.f744c;
            int i4 = iA2 + 1;
            System.arraycopy(iArr3, iA2, iArr3, i4, i3 - iA2);
            Object[] objArr4 = this.f745d;
            System.arraycopy(objArr4, iA2, objArr4, i4, this.f746e - iA2);
        }
        this.f744c[iA2] = i;
        this.f745d[iA2] = e2;
        this.f746e++;
    }

    public int c() {
        if (this.f743b) {
            d();
        }
        return this.f746e;
    }

    public int c(int i) {
        if (this.f743b) {
            d();
        }
        return this.f744c[i];
    }

    /* JADX INFO: renamed from: clone, reason: merged with bridge method [inline-methods] */
    public i<E> m0clone() {
        try {
            i<E> iVar = (i) super.clone();
            iVar.f744c = (int[]) this.f744c.clone();
            iVar.f745d = (Object[]) this.f745d.clone();
            return iVar;
        } catch (CloneNotSupportedException e2) {
            throw new AssertionError(e2);
        }
    }

    public void d(int i) {
        a(i);
    }

    public E e(int i) {
        if (this.f743b) {
            d();
        }
        return (E) this.f745d[i];
    }

    public String toString() {
        if (c() <= 0) {
            return "{}";
        }
        StringBuilder sb = new StringBuilder(this.f746e * 28);
        sb.append('{');
        for (int i = 0; i < this.f746e; i++) {
            if (i > 0) {
                sb.append(", ");
            }
            sb.append(c(i));
            sb.append('=');
            E e2 = e(i);
            if (e2 != this) {
                sb.append(e2);
            } else {
                sb.append("(this Map)");
            }
        }
        sb.append('}');
        return sb.toString();
    }
}
