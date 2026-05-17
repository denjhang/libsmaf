package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import java.util.Arrays;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.bd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0094bd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final C0094bd f1648a = new C0094bd(0, new int[0], new Object[0], false);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f1649b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int[] f1650c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Object[] f1651d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f1652e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private boolean f1653f;

    private C0094bd() {
        this(0, new int[8], new Object[8], true);
    }

    private C0094bd(int i, int[] iArr, Object[] objArr, boolean z) {
        this.f1652e = -1;
        this.f1649b = i;
        this.f1650c = iArr;
        this.f1651d = objArr;
        this.f1653f = z;
    }

    public static C0094bd a() {
        return f1648a;
    }

    static C0094bd a(C0094bd c0094bd, C0094bd c0094bd2) {
        int i = c0094bd.f1649b + c0094bd2.f1649b;
        int[] iArrCopyOf = Arrays.copyOf(c0094bd.f1650c, i);
        System.arraycopy(c0094bd2.f1650c, 0, iArrCopyOf, c0094bd.f1649b, c0094bd2.f1649b);
        Object[] objArrCopyOf = Arrays.copyOf(c0094bd.f1651d, i);
        System.arraycopy(c0094bd2.f1651d, 0, objArrCopyOf, c0094bd.f1649b, c0094bd2.f1649b);
        return new C0094bd(i, iArrCopyOf, objArrCopyOf, true);
    }

    private static void a(int i, Object obj, InterfaceC0226vd interfaceC0226vd) {
        int i2 = i >>> 3;
        int i3 = i & 7;
        if (i3 == 0) {
            interfaceC0226vd.c(i2, ((Long) obj).longValue());
            return;
        }
        if (i3 == 1) {
            interfaceC0226vd.d(i2, ((Long) obj).longValue());
            return;
        }
        if (i3 == 2) {
            interfaceC0226vd.a(i2, (AbstractC0099cb) obj);
            return;
        }
        if (i3 != 3) {
            if (i3 != 5) {
                throw new RuntimeException(Ub.d());
            }
            interfaceC0226vd.e(i2, ((Integer) obj).intValue());
        } else if (interfaceC0226vd.h() == Jb.e.l) {
            interfaceC0226vd.a(i2);
            ((C0094bd) obj).b(interfaceC0226vd);
            interfaceC0226vd.b(i2);
        } else {
            interfaceC0226vd.b(i2);
            ((C0094bd) obj).b(interfaceC0226vd);
            interfaceC0226vd.a(i2);
        }
    }

    static C0094bd b() {
        return new C0094bd();
    }

    final void a(int i, Object obj) {
        if (!this.f1653f) {
            throw new UnsupportedOperationException();
        }
        int i2 = this.f1649b;
        if (i2 == this.f1650c.length) {
            int i3 = this.f1649b + (i2 < 4 ? 8 : i2 >> 1);
            this.f1650c = Arrays.copyOf(this.f1650c, i3);
            this.f1651d = Arrays.copyOf(this.f1651d, i3);
        }
        int[] iArr = this.f1650c;
        int i4 = this.f1649b;
        iArr[i4] = i;
        this.f1651d[i4] = obj;
        this.f1649b = i4 + 1;
    }

    final void a(InterfaceC0226vd interfaceC0226vd) {
        if (interfaceC0226vd.h() == Jb.e.m) {
            for (int i = this.f1649b - 1; i >= 0; i--) {
                interfaceC0226vd.a(this.f1650c[i] >>> 3, this.f1651d[i]);
            }
            return;
        }
        for (int i2 = 0; i2 < this.f1649b; i2++) {
            interfaceC0226vd.a(this.f1650c[i2] >>> 3, this.f1651d[i2]);
        }
    }

    final void a(StringBuilder sb, int i) {
        for (int i2 = 0; i2 < this.f1649b; i2++) {
            C0225vc.a(sb, i, String.valueOf(this.f1650c[i2] >>> 3), this.f1651d[i2]);
        }
    }

    public final void b(InterfaceC0226vd interfaceC0226vd) {
        if (this.f1649b == 0) {
            return;
        }
        if (interfaceC0226vd.h() == Jb.e.l) {
            for (int i = 0; i < this.f1649b; i++) {
                a(this.f1650c[i], this.f1651d[i], interfaceC0226vd);
            }
            return;
        }
        for (int i2 = this.f1649b - 1; i2 >= 0; i2--) {
            a(this.f1650c[i2], this.f1651d[i2], interfaceC0226vd);
        }
    }

    public final void c() {
        this.f1653f = false;
    }

    public final int d() {
        int i = this.f1652e;
        if (i != -1) {
            return i;
        }
        int iD = 0;
        for (int i2 = 0; i2 < this.f1649b; i2++) {
            iD += AbstractC0212tb.d(this.f1650c[i2] >>> 3, (AbstractC0099cb) this.f1651d[i2]);
        }
        this.f1652e = iD;
        return iD;
    }

    public final int e() {
        int iE;
        int i = this.f1652e;
        if (i != -1) {
            return i;
        }
        int i2 = 0;
        for (int i3 = 0; i3 < this.f1649b; i3++) {
            int i4 = this.f1650c[i3];
            int i5 = i4 >>> 3;
            int i6 = i4 & 7;
            if (i6 == 0) {
                iE = AbstractC0212tb.e(i5, ((Long) this.f1651d[i3]).longValue());
            } else if (i6 == 1) {
                iE = AbstractC0212tb.g(i5, ((Long) this.f1651d[i3]).longValue());
            } else if (i6 == 2) {
                iE = AbstractC0212tb.c(i5, (AbstractC0099cb) this.f1651d[i3]);
            } else if (i6 == 3) {
                iE = (AbstractC0212tb.e(i5) << 1) + ((C0094bd) this.f1651d[i3]).e();
            } else {
                if (i6 != 5) {
                    throw new IllegalStateException(Ub.d());
                }
                iE = AbstractC0212tb.i(i5, ((Integer) this.f1651d[i3]).intValue());
            }
            i2 += iE;
        }
        this.f1652e = i2;
        return i2;
    }

    public final boolean equals(Object obj) {
        boolean z;
        boolean z2;
        if (this == obj) {
            return true;
        }
        if (obj == null || !(obj instanceof C0094bd)) {
            return false;
        }
        C0094bd c0094bd = (C0094bd) obj;
        int i = this.f1649b;
        if (i == c0094bd.f1649b) {
            int[] iArr = this.f1650c;
            int[] iArr2 = c0094bd.f1650c;
            int i2 = 0;
            while (true) {
                if (i2 >= i) {
                    z = true;
                    break;
                }
                if (iArr[i2] != iArr2[i2]) {
                    z = false;
                    break;
                }
                i2++;
            }
            if (z) {
                Object[] objArr = this.f1651d;
                Object[] objArr2 = c0094bd.f1651d;
                int i3 = this.f1649b;
                int i4 = 0;
                while (true) {
                    if (i4 >= i3) {
                        z2 = true;
                        break;
                    }
                    if (!objArr[i4].equals(objArr2[i4])) {
                        z2 = false;
                        break;
                    }
                    i4++;
                }
                if (z2) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        int i = this.f1649b;
        int i2 = (i + 527) * 31;
        int[] iArr = this.f1650c;
        int iHashCode = 17;
        int i3 = 17;
        for (int i4 = 0; i4 < i; i4++) {
            i3 = (i3 * 31) + iArr[i4];
        }
        int i5 = (i2 + i3) * 31;
        Object[] objArr = this.f1651d;
        int i6 = this.f1649b;
        for (int i7 = 0; i7 < i6; i7++) {
            iHashCode = (iHashCode * 31) + objArr[i7].hashCode();
        }
        return i5 + iHashCode;
    }
}
