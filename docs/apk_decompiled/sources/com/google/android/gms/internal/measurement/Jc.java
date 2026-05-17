package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.List;
import java.util.RandomAccess;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Jc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Class<?> f1486a = d();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Zc<?, ?> f1487b = a(false);

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final Zc<?, ?> f1488c = a(true);

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final Zc<?, ?> f1489d = new C0087ad();

    static int a(int i, Object obj, Ic ic) {
        return obj instanceof Zb ? AbstractC0212tb.a(i, (Zb) obj) : AbstractC0212tb.b(i, (InterfaceC0219uc) obj, ic);
    }

    static int a(int i, List<?> list) {
        int size = list.size();
        int i2 = 0;
        if (size == 0) {
            return 0;
        }
        int iE = AbstractC0212tb.e(i) * size;
        if (list instanceof InterfaceC0086ac) {
            InterfaceC0086ac interfaceC0086ac = (InterfaceC0086ac) list;
            while (i2 < size) {
                Object objB = interfaceC0086ac.b(i2);
                iE += objB instanceof AbstractC0099cb ? AbstractC0212tb.a((AbstractC0099cb) objB) : AbstractC0212tb.a((String) objB);
                i2++;
            }
        } else {
            while (i2 < size) {
                Object obj = list.get(i2);
                iE += obj instanceof AbstractC0099cb ? AbstractC0212tb.a((AbstractC0099cb) obj) : AbstractC0212tb.a((String) obj);
                i2++;
            }
        }
        return iE;
    }

    static int a(int i, List<?> list, Ic ic) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int iE = AbstractC0212tb.e(i) * size;
        for (int i2 = 0; i2 < size; i2++) {
            Object obj = list.get(i2);
            iE += obj instanceof Zb ? AbstractC0212tb.a((Zb) obj) : AbstractC0212tb.a((InterfaceC0219uc) obj, ic);
        }
        return iE;
    }

    static int a(int i, List<Long> list, boolean z) {
        if (list.size() == 0) {
            return 0;
        }
        return a(list) + (list.size() * AbstractC0212tb.e(i));
    }

    static int a(List<Long> list) {
        int iD;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof C0142ic) {
            C0142ic c0142ic = (C0142ic) list;
            iD = 0;
            while (i < size) {
                iD += AbstractC0212tb.d(c0142ic.b(i));
                i++;
            }
        } else {
            iD = 0;
            while (i < size) {
                iD += AbstractC0212tb.d(list.get(i).longValue());
                i++;
            }
        }
        return iD;
    }

    public static Zc<?, ?> a() {
        return f1487b;
    }

    private static Zc<?, ?> a(boolean z) {
        try {
            Class<?> clsE = e();
            if (clsE == null) {
                return null;
            }
            return (Zc) clsE.getConstructor(Boolean.TYPE).newInstance(Boolean.valueOf(z));
        } catch (Throwable unused) {
            return null;
        }
    }

    static <UT, UB> UB a(int i, int i2, UB ub, Zc<UT, UB> zc) {
        if (ub == null) {
            ub = zc.a();
        }
        zc.a(ub, i, i2);
        return ub;
    }

    static <UT, UB> UB a(int i, List<Integer> list, Qb qb, UB ub, Zc<UT, UB> zc) {
        UB ub2;
        int iIntValue;
        if (qb == null) {
            return ub;
        }
        if (list instanceof RandomAccess) {
            int size = list.size();
            ub2 = ub;
            int i2 = 0;
            for (int i3 = 0; i3 < size; i3++) {
                int iIntValue2 = list.get(i3).intValue();
                if (qb.a(iIntValue2)) {
                    if (i3 != i2) {
                        list.set(i2, Integer.valueOf(iIntValue2));
                    }
                    i2++;
                } else {
                    ub2 = (UB) a(i, iIntValue2, ub2, zc);
                }
            }
            if (i2 != size) {
                list.subList(i2, size).clear();
            }
        } else {
            Iterator<Integer> it = list.iterator();
            loop1: while (true) {
                ub2 = ub;
                while (it.hasNext()) {
                    iIntValue = it.next().intValue();
                    if (!qb.a(iIntValue)) {
                        break;
                    }
                }
                ub = (UB) a(i, iIntValue, ub2, zc);
                it.remove();
            }
        }
        return ub2;
    }

    public static void a(int i, List<String> list, InterfaceC0226vd interfaceC0226vd) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.b(i, list);
    }

    public static void a(int i, List<?> list, InterfaceC0226vd interfaceC0226vd, Ic ic) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.b(i, list, ic);
    }

    public static void a(int i, List<Double> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.m(i, list, z);
    }

    static <T, UT, UB> void a(Zc<UT, UB> zc, T t, T t2) {
        zc.a(t, zc.c(zc.a(t), zc.a(t2)));
    }

    static <T> void a(InterfaceC0176nc interfaceC0176nc, T t, T t2, long j) {
        C0115ed.a(t, j, interfaceC0176nc.a(C0115ed.f(t, j), C0115ed.f(t2, j)));
    }

    static <T, FT extends Db<FT>> void a(AbstractC0242yb<FT> abstractC0242yb, T t, T t2) {
        Bb<T> bbA = abstractC0242yb.a(t2);
        if (bbA.f1401b.isEmpty()) {
            return;
        }
        abstractC0242yb.b(t).a(bbA);
    }

    public static void a(Class<?> cls) {
        Class<?> cls2;
        if (!Jb.class.isAssignableFrom(cls) && (cls2 = f1486a) != null && !cls2.isAssignableFrom(cls)) {
            throw new IllegalArgumentException("Message classes must extend GeneratedMessage or GeneratedMessageLite");
        }
    }

    static boolean a(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }

    static int b(int i, List<AbstractC0099cb> list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int iE = size * AbstractC0212tb.e(i);
        for (int i2 = 0; i2 < list.size(); i2++) {
            iE += AbstractC0212tb.a(list.get(i2));
        }
        return iE;
    }

    static int b(int i, List<InterfaceC0219uc> list, Ic ic) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int iC = 0;
        for (int i2 = 0; i2 < size; i2++) {
            iC += AbstractC0212tb.c(i, list.get(i2), ic);
        }
        return iC;
    }

    static int b(int i, List<Long> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return b(list) + (size * AbstractC0212tb.e(i));
    }

    static int b(List<Long> list) {
        int iE;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof C0142ic) {
            C0142ic c0142ic = (C0142ic) list;
            iE = 0;
            while (i < size) {
                iE += AbstractC0212tb.e(c0142ic.b(i));
                i++;
            }
        } else {
            iE = 0;
            while (i < size) {
                iE += AbstractC0212tb.e(list.get(i).longValue());
                i++;
            }
        }
        return iE;
    }

    public static Zc<?, ?> b() {
        return f1488c;
    }

    public static void b(int i, List<AbstractC0099cb> list, InterfaceC0226vd interfaceC0226vd) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.a(i, list);
    }

    public static void b(int i, List<?> list, InterfaceC0226vd interfaceC0226vd, Ic ic) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.a(i, list, ic);
    }

    public static void b(int i, List<Float> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.n(i, list, z);
    }

    static int c(int i, List<Long> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return c(list) + (size * AbstractC0212tb.e(i));
    }

    static int c(List<Long> list) {
        int iF;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof C0142ic) {
            C0142ic c0142ic = (C0142ic) list;
            iF = 0;
            while (i < size) {
                iF += AbstractC0212tb.f(c0142ic.b(i));
                i++;
            }
        } else {
            iF = 0;
            while (i < size) {
                iF += AbstractC0212tb.f(list.get(i).longValue());
                i++;
            }
        }
        return iF;
    }

    public static Zc<?, ?> c() {
        return f1489d;
    }

    public static void c(int i, List<Long> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.d(i, list, z);
    }

    static int d(int i, List<Integer> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return d(list) + (size * AbstractC0212tb.e(i));
    }

    static int d(List<Integer> list) {
        int iK;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof Mb) {
            Mb mb = (Mb) list;
            iK = 0;
            while (i < size) {
                iK += AbstractC0212tb.k(mb.c(i));
                i++;
            }
        } else {
            iK = 0;
            while (i < size) {
                iK += AbstractC0212tb.k(list.get(i).intValue());
                i++;
            }
        }
        return iK;
    }

    private static Class<?> d() {
        try {
            return Class.forName("com.google.protobuf.GeneratedMessage");
        } catch (Throwable unused) {
            return null;
        }
    }

    public static void d(int i, List<Long> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.k(i, list, z);
    }

    static int e(int i, List<Integer> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return e(list) + (size * AbstractC0212tb.e(i));
    }

    static int e(List<Integer> list) {
        int iF;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof Mb) {
            Mb mb = (Mb) list;
            iF = 0;
            while (i < size) {
                iF += AbstractC0212tb.f(mb.c(i));
                i++;
            }
        } else {
            iF = 0;
            while (i < size) {
                iF += AbstractC0212tb.f(list.get(i).intValue());
                i++;
            }
        }
        return iF;
    }

    private static Class<?> e() {
        try {
            return Class.forName("com.google.protobuf.UnknownFieldSetSchema");
        } catch (Throwable unused) {
            return null;
        }
    }

    public static void e(int i, List<Long> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.j(i, list, z);
    }

    static int f(int i, List<Integer> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return f(list) + (size * AbstractC0212tb.e(i));
    }

    static int f(List<Integer> list) {
        int iG;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof Mb) {
            Mb mb = (Mb) list;
            iG = 0;
            while (i < size) {
                iG += AbstractC0212tb.g(mb.c(i));
                i++;
            }
        } else {
            iG = 0;
            while (i < size) {
                iG += AbstractC0212tb.g(list.get(i).intValue());
                i++;
            }
        }
        return iG;
    }

    public static void f(int i, List<Long> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.i(i, list, z);
    }

    static int g(int i, List<Integer> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return g(list) + (size * AbstractC0212tb.e(i));
    }

    static int g(List<Integer> list) {
        int iH;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof Mb) {
            Mb mb = (Mb) list;
            iH = 0;
            while (i < size) {
                iH += AbstractC0212tb.h(mb.c(i));
                i++;
            }
        } else {
            iH = 0;
            while (i < size) {
                iH += AbstractC0212tb.h(list.get(i).intValue());
                i++;
            }
        }
        return iH;
    }

    public static void g(int i, List<Long> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.e(i, list, z);
    }

    static int h(int i, List<?> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return size * AbstractC0212tb.i(i, 0);
    }

    static int h(List<?> list) {
        return list.size() << 2;
    }

    public static void h(int i, List<Integer> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.b(i, list, z);
    }

    static int i(int i, List<?> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return size * AbstractC0212tb.g(i, 0L);
    }

    static int i(List<?> list) {
        return list.size() << 3;
    }

    public static void i(int i, List<Integer> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.g(i, list, z);
    }

    static int j(int i, List<?> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return size * AbstractC0212tb.b(i, true);
    }

    static int j(List<?> list) {
        return list.size();
    }

    public static void j(int i, List<Integer> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.l(i, list, z);
    }

    public static void k(int i, List<Integer> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.f(i, list, z);
    }

    public static void l(int i, List<Integer> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.h(i, list, z);
    }

    public static void m(int i, List<Integer> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.c(i, list, z);
    }

    public static void n(int i, List<Boolean> list, InterfaceC0226vd interfaceC0226vd, boolean z) {
        if (list == null || list.isEmpty()) {
            return;
        }
        interfaceC0226vd.a(i, list, z);
    }
}
