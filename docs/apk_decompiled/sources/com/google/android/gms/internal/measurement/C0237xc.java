package com.google.android.gms.internal.measurement;

import java.lang.reflect.Field;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.LangUtils;
import sun.misc.Unsafe;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.xc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0237xc<T> implements Ic<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int[] f1863a = new int[0];

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Unsafe f1864b = C0115ed.c();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int[] f1865c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Object[] f1866d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final int f1867e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final int f1868f;
    private final InterfaceC0219uc g;
    private final boolean h;
    private final boolean i;
    private final boolean j;
    private final boolean k;
    private final int[] l;
    private final int m;
    private final int n;
    private final Ac o;
    private final AbstractC0107dc p;
    private final Zc<?, ?> q;
    private final AbstractC0242yb<?> r;
    private final InterfaceC0176nc s;

    private C0237xc(int[] iArr, Object[] objArr, int i, int i2, InterfaceC0219uc interfaceC0219uc, boolean z, boolean z2, int[] iArr2, int i3, int i4, Ac ac, AbstractC0107dc abstractC0107dc, Zc<?, ?> zc, AbstractC0242yb<?> abstractC0242yb, InterfaceC0176nc interfaceC0176nc) {
        this.f1865c = iArr;
        this.f1866d = objArr;
        this.f1867e = i;
        this.f1868f = i2;
        this.i = interfaceC0219uc instanceof Jb;
        this.j = z;
        this.h = abstractC0242yb != null && abstractC0242yb.a(interfaceC0219uc);
        this.k = false;
        this.l = iArr2;
        this.m = i3;
        this.n = i4;
        this.o = ac;
        this.p = abstractC0107dc;
        this.q = zc;
        this.r = abstractC0242yb;
        this.g = interfaceC0219uc;
        this.s = interfaceC0176nc;
    }

    private final int a(int i, int i2) {
        if (i < this.f1867e || i > this.f1868f) {
            return -1;
        }
        return b(i, i2);
    }

    private static <UT, UB> int a(Zc<UT, UB> zc, T t) {
        return zc.d(zc.a(t));
    }

    private final int a(T t, byte[] bArr, int i, int i2, int i3, int i4, int i5, int i6, int i7, long j, int i8, C0092bb c0092bb) throws Ub {
        Object objValueOf;
        Object objValueOf2;
        int iB;
        long jA;
        int iA;
        Object objValueOf3;
        Unsafe unsafe = f1864b;
        long j2 = this.f1865c[i8 + 2] & 1048575;
        switch (i7) {
            case 51:
                if (i5 != 1) {
                    return i;
                }
                objValueOf = Double.valueOf(Za.c(bArr, i));
                unsafe.putObject(t, j, objValueOf);
                iB = i + 8;
                unsafe.putInt(t, j2, i4);
                return iB;
            case 52:
                if (i5 != 5) {
                    return i;
                }
                objValueOf2 = Float.valueOf(Za.d(bArr, i));
                unsafe.putObject(t, j, objValueOf2);
                iB = i + 4;
                unsafe.putInt(t, j2, i4);
                return iB;
            case 53:
            case 54:
                if (i5 != 0) {
                    return i;
                }
                iB = Za.b(bArr, i, c0092bb);
                jA = c0092bb.f1642b;
                objValueOf3 = Long.valueOf(jA);
                unsafe.putObject(t, j, objValueOf3);
                unsafe.putInt(t, j2, i4);
                return iB;
            case 55:
            case 62:
                if (i5 != 0) {
                    return i;
                }
                iB = Za.a(bArr, i, c0092bb);
                iA = c0092bb.f1641a;
                objValueOf3 = Integer.valueOf(iA);
                unsafe.putObject(t, j, objValueOf3);
                unsafe.putInt(t, j2, i4);
                return iB;
            case 56:
            case 65:
                if (i5 != 1) {
                    return i;
                }
                objValueOf = Long.valueOf(Za.b(bArr, i));
                unsafe.putObject(t, j, objValueOf);
                iB = i + 8;
                unsafe.putInt(t, j2, i4);
                return iB;
            case 57:
            case 64:
                if (i5 != 5) {
                    return i;
                }
                objValueOf2 = Integer.valueOf(Za.a(bArr, i));
                unsafe.putObject(t, j, objValueOf2);
                iB = i + 4;
                unsafe.putInt(t, j2, i4);
                return iB;
            case 58:
                if (i5 != 0) {
                    return i;
                }
                iB = Za.b(bArr, i, c0092bb);
                objValueOf3 = Boolean.valueOf(c0092bb.f1642b != 0);
                unsafe.putObject(t, j, objValueOf3);
                unsafe.putInt(t, j2, i4);
                return iB;
            case 59:
                if (i5 != 2) {
                    return i;
                }
                iB = Za.a(bArr, i, c0092bb);
                int i9 = c0092bb.f1641a;
                if (i9 == 0) {
                    objValueOf3 = "";
                    unsafe.putObject(t, j, objValueOf3);
                    unsafe.putInt(t, j2, i4);
                    return iB;
                }
                if ((i6 & 536870912) != 0 && !C0136hd.a(bArr, iB, iB + i9)) {
                    throw Ub.f();
                }
                unsafe.putObject(t, j, new String(bArr, iB, i9, Lb.f1500a));
                iB += i9;
                unsafe.putInt(t, j2, i4);
                return iB;
            case 60:
                if (i5 != 2) {
                    return i;
                }
                iB = Za.a(a(i8), bArr, i, i2, c0092bb);
                Object object = unsafe.getInt(t, j2) == i4 ? unsafe.getObject(t, j) : null;
                objValueOf3 = object == null ? c0092bb.f1643c : Lb.a(object, c0092bb.f1643c);
                unsafe.putObject(t, j, objValueOf3);
                unsafe.putInt(t, j2, i4);
                return iB;
            case 61:
                if (i5 != 2) {
                    return i;
                }
                iB = Za.e(bArr, i, c0092bb);
                unsafe.putObject(t, j, objValueOf3);
                unsafe.putInt(t, j2, i4);
                return iB;
            case 63:
                if (i5 != 0) {
                    return i;
                }
                int iA2 = Za.a(bArr, i, c0092bb);
                int i10 = c0092bb.f1641a;
                Qb qbC = c(i8);
                if (qbC != null && !qbC.a(i10)) {
                    e(t).a(i3, Long.valueOf(i10));
                    return iA2;
                }
                unsafe.putObject(t, j, Integer.valueOf(i10));
                iB = iA2;
                unsafe.putInt(t, j2, i4);
                return iB;
            case 66:
                if (i5 != 0) {
                    return i;
                }
                iB = Za.a(bArr, i, c0092bb);
                iA = AbstractC0182ob.a(c0092bb.f1641a);
                objValueOf3 = Integer.valueOf(iA);
                unsafe.putObject(t, j, objValueOf3);
                unsafe.putInt(t, j2, i4);
                return iB;
            case 67:
                if (i5 != 0) {
                    return i;
                }
                iB = Za.b(bArr, i, c0092bb);
                jA = AbstractC0182ob.a(c0092bb.f1642b);
                objValueOf3 = Long.valueOf(jA);
                unsafe.putObject(t, j, objValueOf3);
                unsafe.putInt(t, j2, i4);
                return iB;
            case 68:
                if (i5 != 3) {
                    return i;
                }
                iB = Za.a(a(i8), bArr, i, i2, (i3 & (-8)) | 4, c0092bb);
                Object object2 = unsafe.getInt(t, j2) == i4 ? unsafe.getObject(t, j) : null;
                objValueOf3 = object2 == null ? c0092bb.f1643c : Lb.a(object2, c0092bb.f1643c);
                unsafe.putObject(t, j, objValueOf3);
                unsafe.putInt(t, j2, i4);
                return iB;
            default:
                return i;
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:150:0x0272, code lost:
    
        if (r30.f1642b != 0) goto L151;
     */
    /* JADX WARN: Code restructure failed: missing block: B:151:0x0274, code lost:
    
        r6 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:152:0x0276, code lost:
    
        r6 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:153:0x0277, code lost:
    
        r11.a(r6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:154:0x027a, code lost:
    
        if (r4 >= r20) goto L275;
     */
    /* JADX WARN: Code restructure failed: missing block: B:155:0x027c, code lost:
    
        r6 = com.google.android.gms.internal.measurement.Za.a(r18, r4, r30);
     */
    /* JADX WARN: Code restructure failed: missing block: B:156:0x0282, code lost:
    
        if (r21 != r30.f1641a) goto L276;
     */
    /* JADX WARN: Code restructure failed: missing block: B:157:0x0284, code lost:
    
        r4 = com.google.android.gms.internal.measurement.Za.b(r18, r6, r30);
     */
    /* JADX WARN: Code restructure failed: missing block: B:158:0x028c, code lost:
    
        if (r30.f1642b == 0) goto L152;
     */
    /* JADX WARN: Code restructure failed: missing block: B:241:0x0150, code lost:
    
        r11.add(com.google.android.gms.internal.measurement.AbstractC0099cb.a(r18, r1, r4));
        r1 = r1 + r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:244:0x0277, code lost:
    
        r6 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:310:?, code lost:
    
        return r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:311:?, code lost:
    
        return r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x0140, code lost:
    
        if (r4 == 0) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x0142, code lost:
    
        r11.add(com.google.android.gms.internal.measurement.AbstractC0099cb.f1658a);
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x0148, code lost:
    
        r11.add(com.google.android.gms.internal.measurement.AbstractC0099cb.a(r18, r1, r4));
        r1 = r1 + r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:69:0x0150, code lost:
    
        if (r1 >= r20) goto L255;
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x0152, code lost:
    
        r4 = com.google.android.gms.internal.measurement.Za.a(r18, r1, r30);
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x0158, code lost:
    
        if (r21 != r30.f1641a) goto L256;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x015a, code lost:
    
        r1 = com.google.android.gms.internal.measurement.Za.a(r18, r4, r30);
        r4 = r30.f1641a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x0160, code lost:
    
        if (r4 < 0) goto L257;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x0164, code lost:
    
        if (r4 > (r18.length - r1)) goto L258;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x0166, code lost:
    
        if (r4 != 0) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:79:0x016d, code lost:
    
        throw com.google.android.gms.internal.measurement.Ub.a();
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x0172, code lost:
    
        throw com.google.android.gms.internal.measurement.Ub.b();
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:118:0x0207  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x01bf  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:102:0x01cf -> B:94:0x01ae). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:122:0x0217 -> B:112:0x01ee). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:158:0x028c -> B:151:0x0274). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:76:0x0166 -> B:67:0x0142). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final int a(T r17, byte[] r18, int r19, int r20, int r21, int r22, int r23, int r24, long r25, int r27, long r28, com.google.android.gms.internal.measurement.C0092bb r30) throws com.google.android.gms.internal.measurement.Ub {
        /*
            Method dump skipped, instruction units count: 1058
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.a(java.lang.Object, byte[], int, int, int, int, int, int, long, int, long, com.google.android.gms.internal.measurement.bb):int");
    }

    private final <K, V> int a(T t, byte[] bArr, int i, int i2, int i3, long j, C0092bb c0092bb) {
        Unsafe unsafe = f1864b;
        Object objB = b(i3);
        Object object = unsafe.getObject(t, j);
        if (this.s.c(object)) {
            Object objF = this.s.f(objB);
            this.s.a(objF, object);
            unsafe.putObject(t, j, objF);
        }
        this.s.e(objB);
        throw null;
    }

    private final Ic a(int i) {
        int i2 = (i / 3) << 1;
        Ic ic = (Ic) this.f1866d[i2];
        if (ic != null) {
            return ic;
        }
        Ic<T> icA = Dc.a().a((Class) this.f1866d[i2 + 1]);
        this.f1866d[i2] = icA;
        return icA;
    }

    /* JADX WARN: Removed duplicated region for block: B:186:0x03c9  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static <T> com.google.android.gms.internal.measurement.C0237xc<T> a(java.lang.Class<T> r35, com.google.android.gms.internal.measurement.InterfaceC0207sc r36, com.google.android.gms.internal.measurement.Ac r37, com.google.android.gms.internal.measurement.AbstractC0107dc r38, com.google.android.gms.internal.measurement.Zc<?, ?> r39, com.google.android.gms.internal.measurement.AbstractC0242yb<?> r40, com.google.android.gms.internal.measurement.InterfaceC0176nc r41) {
        /*
            Method dump skipped, instruction units count: 1101
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.a(java.lang.Class, com.google.android.gms.internal.measurement.sc, com.google.android.gms.internal.measurement.Ac, com.google.android.gms.internal.measurement.dc, com.google.android.gms.internal.measurement.Zc, com.google.android.gms.internal.measurement.yb, com.google.android.gms.internal.measurement.nc):com.google.android.gms.internal.measurement.xc");
    }

    private final <K, V, UT, UB> UB a(int i, int i2, Map<K, V> map, Qb qb, UB ub, Zc<UT, UB> zc) {
        this.s.e(b(i));
        throw null;
    }

    private final <UT, UB> UB a(Object obj, int i, UB ub, Zc<UT, UB> zc) {
        Qb qbC;
        int i2 = this.f1865c[i];
        Object objF = C0115ed.f(obj, d(i) & 1048575);
        if (objF == null || (qbC = c(i)) == null) {
            return ub;
        }
        a(i, i2, this.s.a(objF), qbC, ub, zc);
        throw null;
    }

    private static Field a(Class<?> cls, String str) {
        try {
            return cls.getDeclaredField(str);
        } catch (NoSuchFieldException unused) {
            Field[] declaredFields = cls.getDeclaredFields();
            for (Field field : declaredFields) {
                if (str.equals(field.getName())) {
                    return field;
                }
            }
            String name = cls.getName();
            String string = Arrays.toString(declaredFields);
            StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 40 + String.valueOf(name).length() + String.valueOf(string).length());
            sb.append("Field ");
            sb.append(str);
            sb.append(" for ");
            sb.append(name);
            sb.append(" not found. Known fields are ");
            sb.append(string);
            throw new RuntimeException(sb.toString());
        }
    }

    private static List<?> a(Object obj, long j) {
        return (List) C0115ed.f(obj, j);
    }

    private static void a(int i, Object obj, InterfaceC0226vd interfaceC0226vd) {
        if (obj instanceof String) {
            interfaceC0226vd.a(i, (String) obj);
        } else {
            interfaceC0226vd.a(i, (AbstractC0099cb) obj);
        }
    }

    private static <UT, UB> void a(Zc<UT, UB> zc, T t, InterfaceC0226vd interfaceC0226vd) {
        zc.a(zc.a(t), interfaceC0226vd);
    }

    private final <K, V> void a(InterfaceC0226vd interfaceC0226vd, int i, Object obj, int i2) {
        if (obj == null) {
            return;
        }
        this.s.e(b(i2));
        throw null;
    }

    private final void a(T t, T t2, int i) {
        long jD = d(i) & 1048575;
        if (a((Object) t2, i)) {
            Object objF = C0115ed.f(t, jD);
            Object objF2 = C0115ed.f(t2, jD);
            if (objF != null && objF2 != null) {
                C0115ed.a(t, jD, Lb.a(objF, objF2));
                b((Object) t, i);
            } else if (objF2 != null) {
                C0115ed.a(t, jD, objF2);
                b((Object) t, i);
            }
        }
    }

    private final boolean a(T t, int i) {
        if (!this.j) {
            int iE = e(i);
            return (C0115ed.a(t, (long) (iE & 1048575)) & (1 << (iE >>> 20))) != 0;
        }
        int iD = d(i);
        long j = iD & 1048575;
        switch ((iD & 267386880) >>> 20) {
            case 0:
                return C0115ed.e(t, j) != 0.0d;
            case 1:
                return C0115ed.d(t, j) != 0.0f;
            case 2:
                return C0115ed.b(t, j) != 0;
            case 3:
                return C0115ed.b(t, j) != 0;
            case 4:
                return C0115ed.a(t, j) != 0;
            case 5:
                return C0115ed.b(t, j) != 0;
            case 6:
                return C0115ed.a(t, j) != 0;
            case 7:
                return C0115ed.c(t, j);
            case 8:
                Object objF = C0115ed.f(t, j);
                if (objF instanceof String) {
                    return !((String) objF).isEmpty();
                }
                if (objF instanceof AbstractC0099cb) {
                    return !AbstractC0099cb.f1658a.equals(objF);
                }
                throw new IllegalArgumentException();
            case 9:
                return C0115ed.f(t, j) != null;
            case 10:
                return !AbstractC0099cb.f1658a.equals(C0115ed.f(t, j));
            case 11:
                return C0115ed.a(t, j) != 0;
            case 12:
                return C0115ed.a(t, j) != 0;
            case HTTP.CR /* 13 */:
                return C0115ed.a(t, j) != 0;
            case 14:
                return C0115ed.b(t, j) != 0;
            case 15:
                return C0115ed.a(t, j) != 0;
            case 16:
                return C0115ed.b(t, j) != 0;
            case LangUtils.HASH_SEED /* 17 */:
                return C0115ed.f(t, j) != null;
            default:
                throw new IllegalArgumentException();
        }
    }

    private final boolean a(T t, int i, int i2) {
        return C0115ed.a(t, (long) (e(i2) & 1048575)) == i;
    }

    private final boolean a(T t, int i, int i2, int i3) {
        return this.j ? a((Object) t, i) : (i2 & i3) != 0;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static boolean a(Object obj, int i, Ic ic) {
        return ic.b(C0115ed.f(obj, i & 1048575));
    }

    private static <T> double b(T t, long j) {
        return ((Double) C0115ed.f(t, j)).doubleValue();
    }

    private final int b(int i, int i2) {
        int length = (this.f1865c.length / 3) - 1;
        while (i2 <= length) {
            int i3 = (length + i2) >>> 1;
            int i4 = i3 * 3;
            int i5 = this.f1865c[i4];
            if (i == i5) {
                return i4;
            }
            if (i < i5) {
                length = i3 - 1;
            } else {
                i2 = i3 + 1;
            }
        }
        return -1;
    }

    private final Object b(int i) {
        return this.f1866d[(i / 3) << 1];
    }

    private final void b(T t, int i) {
        if (this.j) {
            return;
        }
        int iE = e(i);
        long j = iE & 1048575;
        C0115ed.a((Object) t, j, C0115ed.a(t, j) | (1 << (iE >>> 20)));
    }

    private final void b(T t, int i, int i2) {
        C0115ed.a((Object) t, e(i2) & 1048575, i);
    }

    /* JADX WARN: Removed duplicated region for block: B:113:0x0326  */
    /* JADX WARN: Removed duplicated region for block: B:140:0x0385  */
    /* JADX WARN: Removed duplicated region for block: B:143:0x0394  */
    /* JADX WARN: Removed duplicated region for block: B:146:0x03a5  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final void b(T r18, com.google.android.gms.internal.measurement.InterfaceC0226vd r19) {
        /*
            Method dump skipped, instruction units count: 1208
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.b(java.lang.Object, com.google.android.gms.internal.measurement.vd):void");
    }

    private final void b(T t, T t2, int i) {
        int iD = d(i);
        int i2 = this.f1865c[i];
        long j = iD & 1048575;
        if (a(t2, i2, i)) {
            Object objF = C0115ed.f(t, j);
            Object objF2 = C0115ed.f(t2, j);
            if (objF != null && objF2 != null) {
                C0115ed.a(t, j, Lb.a(objF, objF2));
                b(t, i2, i);
            } else if (objF2 != null) {
                C0115ed.a(t, j, objF2);
                b(t, i2, i);
            }
        }
    }

    private static <T> float c(T t, long j) {
        return ((Float) C0115ed.f(t, j)).floatValue();
    }

    private final Qb c(int i) {
        return (Qb) this.f1866d[((i / 3) << 1) + 1];
    }

    private final boolean c(T t, T t2, int i) {
        return a((Object) t, i) == a((Object) t2, i);
    }

    private final int d(int i) {
        return this.f1865c[i + 1];
    }

    private static <T> int d(T t, long j) {
        return ((Integer) C0115ed.f(t, j)).intValue();
    }

    private final int e(int i) {
        return this.f1865c[i + 2];
    }

    private static <T> long e(T t, long j) {
        return ((Long) C0115ed.f(t, j)).longValue();
    }

    private static C0094bd e(Object obj) {
        Jb jb = (Jb) obj;
        C0094bd c0094bd = jb.zzb;
        if (c0094bd != C0094bd.a()) {
            return c0094bd;
        }
        C0094bd c0094bdB = C0094bd.b();
        jb.zzb = c0094bdB;
        return c0094bdB;
    }

    private final int f(int i) {
        if (i < this.f1867e || i > this.f1868f) {
            return -1;
        }
        return b(i, 0);
    }

    private static <T> boolean f(T t, long j) {
        return ((Boolean) C0115ed.f(t, j)).booleanValue();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:68:0x00e2 A[PHI: r3
  0x00e2: PHI (r3v13 java.lang.Object) = (r3v11 java.lang.Object), (r3v14 java.lang.Object) binds: [B:67:0x00e0, B:62:0x00ce] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // com.google.android.gms.internal.measurement.Ic
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final int a(T r9) {
        /*
            Method dump skipped, instruction units count: 476
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.a(java.lang.Object):int");
    }

    /*  JADX ERROR: Type inference failed with stack overflow
        jadx.core.utils.exceptions.JadxOverflowException
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.visit(TypeInferenceVisitor.java:77)
        */
    final int a(T r31, byte[] r32, int r33, int r34, int r35, com.google.android.gms.internal.measurement.C0092bb r36) throws com.google.android.gms.internal.measurement.Ub {
        /*
            Method dump skipped, instruction units count: 1254
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.a(java.lang.Object, byte[], int, int, int, com.google.android.gms.internal.measurement.bb):int");
    }

    /* JADX WARN: Removed duplicated region for block: B:106:0x032a  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x03a5  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x03b8  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x03cd  */
    /* JADX WARN: Removed duplicated region for block: B:186:0x048c  */
    /* JADX WARN: Removed duplicated region for block: B:283:0x0783  */
    /* JADX WARN: Removed duplicated region for block: B:310:0x07fe  */
    /* JADX WARN: Removed duplicated region for block: B:313:0x0811  */
    /* JADX WARN: Removed duplicated region for block: B:316:0x0826  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0032  */
    @Override // com.google.android.gms.internal.measurement.Ic
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(T r13, com.google.android.gms.internal.measurement.InterfaceC0226vd r14) {
        /*
            Method dump skipped, instruction units count: 2538
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.a(java.lang.Object, com.google.android.gms.internal.measurement.vd):void");
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:104:0x0211, code lost:
    
        if (r0 == r15) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:105:0x0213, code lost:
    
        r2 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0090, code lost:
    
        if (r6 == 0) goto L63;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x0107, code lost:
    
        if (r6 == 0) goto L63;
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x0109, code lost:
    
        r0 = com.google.android.gms.internal.measurement.Za.a(r12, r8, r11);
        r1 = r11.f1641a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x01c7, code lost:
    
        if (r0 == r15) goto L105;
     */
    /* JADX WARN: Failed to find 'out' block for switch in B:20:0x0061. Please report as an issue. */
    @Override // com.google.android.gms.internal.measurement.Ic
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(T r28, byte[] r29, int r30, int r31, com.google.android.gms.internal.measurement.C0092bb r32) throws com.google.android.gms.internal.measurement.Ub {
        /*
            Method dump skipped, instruction units count: 632
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.a(java.lang.Object, byte[], int, int, com.google.android.gms.internal.measurement.bb):void");
    }

    /* JADX WARN: Removed duplicated region for block: B:103:0x01b2  */
    @Override // com.google.android.gms.internal.measurement.Ic
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean a(T r10, T r11) {
        /*
            Method dump skipped, instruction units count: 626
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.a(java.lang.Object, java.lang.Object):boolean");
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0031  */
    @Override // com.google.android.gms.internal.measurement.Ic
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void b(T r7, T r8) {
        /*
            Method dump skipped, instruction units count: 412
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.b(java.lang.Object, java.lang.Object):void");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0099  */
    @Override // com.google.android.gms.internal.measurement.Ic
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean b(T r14) {
        /*
            Method dump skipped, instruction units count: 236
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.b(java.lang.Object):boolean");
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final void c(T t) {
        int i;
        int i2 = this.m;
        while (true) {
            i = this.n;
            if (i2 >= i) {
                break;
            }
            long jD = d(this.l[i2]) & 1048575;
            Object objF = C0115ed.f(t, jD);
            if (objF != null) {
                this.s.b(objF);
                C0115ed.a(t, jD, objF);
            }
            i2++;
        }
        int length = this.l.length;
        while (i < length) {
            this.p.a(t, this.l[i]);
            i++;
        }
        this.q.b(t);
        if (this.h) {
            this.r.c(t);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:249:0x0417, code lost:
    
        if (a(r20, r15, r3) != false) goto L394;
     */
    /* JADX WARN: Code restructure failed: missing block: B:258:0x0437, code lost:
    
        if (a(r20, r15, r3) != false) goto L405;
     */
    /* JADX WARN: Code restructure failed: missing block: B:261:0x043f, code lost:
    
        if (a(r20, r15, r3) != false) goto L408;
     */
    /* JADX WARN: Code restructure failed: missing block: B:270:0x045f, code lost:
    
        if (a(r20, r15, r3) != false) goto L419;
     */
    /* JADX WARN: Code restructure failed: missing block: B:273:0x0467, code lost:
    
        if (a(r20, r15, r3) != false) goto L423;
     */
    /* JADX WARN: Code restructure failed: missing block: B:281:0x047f, code lost:
    
        if (a(r20, r15, r3) != false) goto L432;
     */
    /* JADX WARN: Code restructure failed: missing block: B:284:0x0487, code lost:
    
        if (a(r20, r15, r3) != false) goto L435;
     */
    /* JADX WARN: Code restructure failed: missing block: B:393:0x06b1, code lost:
    
        if ((r12 & r18) != 0) goto L394;
     */
    /* JADX WARN: Code restructure failed: missing block: B:394:0x06b3, code lost:
    
        r4 = com.google.android.gms.internal.measurement.AbstractC0212tb.c(r15, (com.google.android.gms.internal.measurement.InterfaceC0219uc) r2.getObject(r20, r9), a(r3));
     */
    /* JADX WARN: Code restructure failed: missing block: B:404:0x06de, code lost:
    
        if ((r12 & r18) != 0) goto L405;
     */
    /* JADX WARN: Code restructure failed: missing block: B:405:0x06e0, code lost:
    
        r4 = com.google.android.gms.internal.measurement.AbstractC0212tb.h(r15, 0L);
     */
    /* JADX WARN: Code restructure failed: missing block: B:407:0x06e9, code lost:
    
        if ((r12 & r18) != 0) goto L408;
     */
    /* JADX WARN: Code restructure failed: missing block: B:408:0x06eb, code lost:
    
        r9 = com.google.android.gms.internal.measurement.AbstractC0212tb.j(r15, 0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:418:0x070d, code lost:
    
        if ((r12 & r18) != 0) goto L419;
     */
    /* JADX WARN: Code restructure failed: missing block: B:419:0x070f, code lost:
    
        r4 = r2.getObject(r20, r9);
     */
    /* JADX WARN: Code restructure failed: missing block: B:422:0x071c, code lost:
    
        if ((r12 & r18) != 0) goto L423;
     */
    /* JADX WARN: Code restructure failed: missing block: B:423:0x071e, code lost:
    
        r4 = com.google.android.gms.internal.measurement.Jc.a(r15, r2.getObject(r20, r9), a(r3));
     */
    /* JADX WARN: Code restructure failed: missing block: B:431:0x0743, code lost:
    
        if ((r12 & r18) != 0) goto L432;
     */
    /* JADX WARN: Code restructure failed: missing block: B:432:0x0745, code lost:
    
        r4 = com.google.android.gms.internal.measurement.AbstractC0212tb.b(r15, true);
     */
    /* JADX WARN: Code restructure failed: missing block: B:434:0x074d, code lost:
    
        if ((r12 & r18) != 0) goto L435;
     */
    /* JADX WARN: Code restructure failed: missing block: B:435:0x074f, code lost:
    
        r9 = com.google.android.gms.internal.measurement.AbstractC0212tb.i(r15, 0);
     */
    /* JADX WARN: Removed duplicated region for block: B:142:0x020d A[PHI: r5
  0x020d: PHI (r5v81 int) = 
  (r5v44 int)
  (r5v47 int)
  (r5v50 int)
  (r5v53 int)
  (r5v56 int)
  (r5v59 int)
  (r5v62 int)
  (r5v65 int)
  (r5v68 int)
  (r5v71 int)
  (r5v74 int)
  (r5v77 int)
  (r5v80 int)
  (r5v85 int)
 binds: [B:141:0x020b, B:136:0x01fa, B:131:0x01e9, B:126:0x01d8, B:121:0x01c7, B:116:0x01b6, B:111:0x01a5, B:106:0x0193, B:101:0x0181, B:96:0x016f, B:91:0x015d, B:86:0x014b, B:81:0x0139, B:76:0x0127] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:186:0x030a A[PHI: r5
  0x030a: PHI (r5v104 java.lang.Object) = (r5v22 java.lang.Object), (r5v102 java.lang.Object), (r5v106 java.lang.Object) binds: [B:193:0x0331, B:45:0x00ab, B:185:0x0306] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:195:0x0334 A[PHI: r5
  0x0334: PHI (r5v100 java.lang.Object) = (r5v22 java.lang.Object), (r5v102 java.lang.Object) binds: [B:193:0x0331, B:45:0x00ab] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:375:0x05f8 A[PHI: r4
  0x05f8: PHI (r4v111 int) = 
  (r4v74 int)
  (r4v77 int)
  (r4v80 int)
  (r4v83 int)
  (r4v86 int)
  (r4v89 int)
  (r4v92 int)
  (r4v95 int)
  (r4v98 int)
  (r4v101 int)
  (r4v104 int)
  (r4v107 int)
  (r4v110 int)
  (r4v115 int)
 binds: [B:374:0x05f6, B:369:0x05e5, B:364:0x05d4, B:359:0x05c3, B:354:0x05b2, B:349:0x05a1, B:344:0x0590, B:339:0x057e, B:334:0x056c, B:329:0x055a, B:324:0x0548, B:319:0x0536, B:314:0x0524, B:309:0x0512] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:420:0x0713 A[PHI: r4
  0x0713: PHI (r4v146 java.lang.Object) = (r4v20 java.lang.Object), (r4v142 java.lang.Object), (r4v149 java.lang.Object) binds: [B:427:0x0736, B:278:0x0477, B:419:0x070f] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:429:0x0739 A[PHI: r4
  0x0739: PHI (r4v138 java.lang.Object) = (r4v20 java.lang.Object), (r4v142 java.lang.Object) binds: [B:427:0x0736, B:278:0x0477] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // com.google.android.gms.internal.measurement.Ic
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final int d(T r20) {
        /*
            Method dump skipped, instruction units count: 2346
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0237xc.d(java.lang.Object):int");
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final T h() {
        return (T) this.o.a(this.g);
    }
}
