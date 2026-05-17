package androidx.fragment.app;

import android.graphics.Rect;
import android.os.Build;
import android.util.SparseArray;
import android.view.View;
import android.view.ViewGroup;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class C {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int[] f284a = {0, 3, 0, 1, 5, 4, 7, 6, 9, 8};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final L f285b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final L f286c;

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public Fragment f287a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public boolean f288b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public C0037a f289c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public Fragment f290d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        public boolean f291e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        public C0037a f292f;

        a() {
        }
    }

    static {
        f285b = Build.VERSION.SDK_INT >= 21 ? new H() : null;
        f286c = a();
    }

    static View a(b.b.b<String, View> bVar, a aVar, Object obj, boolean z) {
        ArrayList<String> arrayList;
        C0037a c0037a = aVar.f289c;
        if (obj == null || bVar == null || (arrayList = c0037a.r) == null || arrayList.isEmpty()) {
            return null;
        }
        return bVar.get((z ? c0037a.r : c0037a.s).get(0));
    }

    private static a a(a aVar, SparseArray<a> sparseArray, int i) {
        if (aVar != null) {
            return aVar;
        }
        a aVar2 = new a();
        sparseArray.put(i, aVar2);
        return aVar2;
    }

    private static L a() {
        try {
            return (L) Class.forName("androidx.transition.FragmentTransitionSupport").getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }

    private static L a(Fragment fragment, Fragment fragment2) {
        ArrayList arrayList = new ArrayList();
        if (fragment != null) {
            Object objM = fragment.m();
            if (objM != null) {
                arrayList.add(objM);
            }
            Object objU = fragment.u();
            if (objU != null) {
                arrayList.add(objU);
            }
            Object objW = fragment.w();
            if (objW != null) {
                arrayList.add(objW);
            }
        }
        if (fragment2 != null) {
            Object objK = fragment2.k();
            if (objK != null) {
                arrayList.add(objK);
            }
            Object objS = fragment2.s();
            if (objS != null) {
                arrayList.add(objS);
            }
            Object objV = fragment2.v();
            if (objV != null) {
                arrayList.add(objV);
            }
        }
        if (arrayList.isEmpty()) {
            return null;
        }
        L l = f285b;
        if (l != null && a(l, arrayList)) {
            return f285b;
        }
        L l2 = f286c;
        if (l2 != null && a(l2, arrayList)) {
            return f286c;
        }
        if (f285b == null && f286c == null) {
            return null;
        }
        throw new IllegalArgumentException("Invalid Transition types");
    }

    private static b.b.b<String, String> a(int i, ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2, int i2, int i3) {
        ArrayList<String> arrayList3;
        ArrayList<String> arrayList4;
        b.b.b<String, String> bVar = new b.b.b<>();
        for (int i4 = i3 - 1; i4 >= i2; i4--) {
            C0037a c0037a = arrayList.get(i4);
            if (c0037a.b(i)) {
                boolean zBooleanValue = arrayList2.get(i4).booleanValue();
                ArrayList<String> arrayList5 = c0037a.r;
                if (arrayList5 != null) {
                    int size = arrayList5.size();
                    if (zBooleanValue) {
                        arrayList3 = c0037a.r;
                        arrayList4 = c0037a.s;
                    } else {
                        ArrayList<String> arrayList6 = c0037a.r;
                        arrayList3 = c0037a.s;
                        arrayList4 = arrayList6;
                    }
                    for (int i5 = 0; i5 < size; i5++) {
                        String str = arrayList4.get(i5);
                        String str2 = arrayList3.get(i5);
                        String strRemove = bVar.remove(str2);
                        if (strRemove != null) {
                            bVar.put(str, strRemove);
                        } else {
                            bVar.put(str, str2);
                        }
                    }
                }
            }
        }
        return bVar;
    }

    static b.b.b<String, View> a(L l, b.b.b<String, String> bVar, Object obj, a aVar) {
        androidx.core.app.i iVarL;
        ArrayList<String> arrayList;
        String strA;
        Fragment fragment = aVar.f287a;
        View viewY = fragment.y();
        if (bVar.isEmpty() || obj == null || viewY == null) {
            bVar.clear();
            return null;
        }
        b.b.b<String, View> bVar2 = new b.b.b<>();
        l.a((Map<String, View>) bVar2, viewY);
        C0037a c0037a = aVar.f289c;
        if (aVar.f288b) {
            iVarL = fragment.n();
            arrayList = c0037a.r;
        } else {
            iVarL = fragment.l();
            arrayList = c0037a.s;
        }
        if (arrayList != null) {
            bVar2.a((Collection<?>) arrayList);
            bVar2.a((Collection<?>) bVar.values());
        }
        if (iVarL != null) {
            iVarL.a(arrayList, bVar2);
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                String str = arrayList.get(size);
                View view = bVar2.get(str);
                if (view == null) {
                    String strA2 = a(bVar, str);
                    if (strA2 != null) {
                        bVar.remove(strA2);
                    }
                } else if (!str.equals(b.d.d.n.f(view)) && (strA = a(bVar, str)) != null) {
                    bVar.put(strA, b.d.d.n.f(view));
                }
            }
        } else {
            a(bVar, bVar2);
        }
        return bVar2;
    }

    private static Object a(L l, ViewGroup viewGroup, View view, b.b.b<String, String> bVar, a aVar, ArrayList<View> arrayList, ArrayList<View> arrayList2, Object obj, Object obj2) {
        Object objA;
        b.b.b<String, String> bVar2;
        Object obj3;
        Rect rect;
        Fragment fragment = aVar.f287a;
        Fragment fragment2 = aVar.f290d;
        if (fragment == null || fragment2 == null) {
            return null;
        }
        boolean z = aVar.f288b;
        if (bVar.isEmpty()) {
            bVar2 = bVar;
            objA = null;
        } else {
            objA = a(l, fragment, fragment2, z);
            bVar2 = bVar;
        }
        b.b.b<String, View> bVarB = b(l, bVar2, objA, aVar);
        if (bVar.isEmpty()) {
            obj3 = null;
        } else {
            arrayList.addAll(bVarB.values());
            obj3 = objA;
        }
        if (obj == null && obj2 == null && obj3 == null) {
            return null;
        }
        a(fragment, fragment2, z, bVarB, true);
        if (obj3 != null) {
            rect = new Rect();
            l.b(obj3, view, arrayList);
            a(l, obj3, obj2, bVarB, aVar.f291e, aVar.f292f);
            if (obj != null) {
                l.a(obj, rect);
            }
        } else {
            rect = null;
        }
        M.a(viewGroup, new B(l, bVar, obj3, aVar, arrayList2, view, fragment, fragment2, z, arrayList, obj, rect));
        return obj3;
    }

    private static Object a(L l, Fragment fragment, Fragment fragment2, boolean z) {
        if (fragment == null || fragment2 == null) {
            return null;
        }
        return l.c(l.b(z ? fragment2.w() : fragment.v()));
    }

    private static Object a(L l, Fragment fragment, boolean z) {
        if (fragment == null) {
            return null;
        }
        return l.b(z ? fragment.s() : fragment.k());
    }

    private static Object a(L l, Object obj, Object obj2, Object obj3, Fragment fragment, boolean z) {
        return (obj == null || obj2 == null || fragment == null) ? true : z ? fragment.f() : fragment.e() ? l.b(obj2, obj, obj3) : l.a(obj2, obj, obj3);
    }

    private static String a(b.b.b<String, String> bVar, String str) {
        int size = bVar.size();
        for (int i = 0; i < size; i++) {
            if (str.equals(bVar.d(i))) {
                return bVar.b(i);
            }
        }
        return null;
    }

    static ArrayList<View> a(L l, Object obj, Fragment fragment, ArrayList<View> arrayList, View view) {
        if (obj == null) {
            return null;
        }
        ArrayList<View> arrayList2 = new ArrayList<>();
        View viewY = fragment.y();
        if (viewY != null) {
            l.a(arrayList2, viewY);
        }
        if (arrayList != null) {
            arrayList2.removeAll(arrayList);
        }
        if (arrayList2.isEmpty()) {
            return arrayList2;
        }
        arrayList2.add(view);
        l.a(obj, arrayList2);
        return arrayList2;
    }

    static void a(Fragment fragment, Fragment fragment2, boolean z, b.b.b<String, View> bVar, boolean z2) {
        androidx.core.app.i iVarL = z ? fragment2.l() : fragment.l();
        if (iVarL != null) {
            ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = new ArrayList();
            int size = bVar == null ? 0 : bVar.size();
            for (int i = 0; i < size; i++) {
                arrayList2.add(bVar.b(i));
                arrayList.add(bVar.d(i));
            }
            if (z2) {
                iVarL.b(arrayList2, arrayList, null);
            } else {
                iVarL.a(arrayList2, arrayList, null);
            }
        }
    }

    private static void a(L l, ViewGroup viewGroup, Fragment fragment, View view, ArrayList<View> arrayList, Object obj, ArrayList<View> arrayList2, Object obj2, ArrayList<View> arrayList3) {
        M.a(viewGroup, new z(obj, l, view, fragment, arrayList, arrayList2, arrayList3, obj2));
    }

    private static void a(L l, Object obj, Fragment fragment, ArrayList<View> arrayList) {
        if (fragment != null && obj != null && fragment.m && fragment.C && fragment.Q) {
            fragment.f(true);
            l.a(obj, fragment.y(), arrayList);
            M.a(fragment.J, new y(arrayList));
        }
    }

    private static void a(L l, Object obj, Object obj2, b.b.b<String, View> bVar, boolean z, C0037a c0037a) {
        ArrayList<String> arrayList = c0037a.r;
        if (arrayList == null || arrayList.isEmpty()) {
            return;
        }
        View view = bVar.get((z ? c0037a.s : c0037a.r).get(0));
        l.c(obj, view);
        if (obj2 != null) {
            l.c(obj2, view);
        }
    }

    public static void a(C0037a c0037a, SparseArray<a> sparseArray, boolean z) {
        int size = c0037a.f365b.size();
        for (int i = 0; i < size; i++) {
            a(c0037a, c0037a.f365b.get(i), sparseArray, false, z);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:56:0x0076  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0078  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0089  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x008c  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0094  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0096  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static void a(androidx.fragment.app.C0037a r16, androidx.fragment.app.C0037a.C0009a r17, android.util.SparseArray<androidx.fragment.app.C.a> r18, boolean r19, boolean r20) {
        /*
            Method dump skipped, instruction units count: 242
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.fragment.app.C.a(androidx.fragment.app.a, androidx.fragment.app.a$a, android.util.SparseArray, boolean, boolean):void");
    }

    private static void a(s sVar, int i, a aVar, View view, b.b.b<String, String> bVar) {
        Fragment fragment;
        Fragment fragment2;
        L lA;
        Object obj;
        ViewGroup viewGroup = sVar.t.a() ? (ViewGroup) sVar.t.a(i) : null;
        if (viewGroup == null || (lA = a((fragment2 = aVar.f290d), (fragment = aVar.f287a))) == null) {
            return;
        }
        boolean z = aVar.f288b;
        boolean z2 = aVar.f291e;
        Object objA = a(lA, fragment, z);
        Object objB = b(lA, fragment2, z2);
        ArrayList arrayList = new ArrayList();
        ArrayList<View> arrayList2 = new ArrayList<>();
        Object objA2 = a(lA, viewGroup, view, bVar, aVar, (ArrayList<View>) arrayList, arrayList2, objA, objB);
        if (objA == null && objA2 == null) {
            obj = objB;
            if (obj == null) {
                return;
            }
        } else {
            obj = objB;
        }
        ArrayList<View> arrayListA = a(lA, obj, fragment2, (ArrayList<View>) arrayList, view);
        Object obj2 = (arrayListA == null || arrayListA.isEmpty()) ? null : obj;
        lA.a(objA, view);
        Object objA3 = a(lA, objA, obj2, objA2, fragment, aVar.f288b);
        if (objA3 != null) {
            ArrayList<View> arrayList3 = new ArrayList<>();
            lA.a(objA3, objA, arrayList3, obj2, arrayListA, objA2, arrayList2);
            a(lA, viewGroup, fragment, view, arrayList2, objA, arrayList3, obj2, arrayListA);
            lA.a((View) viewGroup, arrayList2, (Map<String, String>) bVar);
            lA.a(viewGroup, objA3);
            lA.a(viewGroup, arrayList2, (Map<String, String>) bVar);
        }
    }

    static void a(s sVar, ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2, int i, int i2, boolean z) {
        if (sVar.r < 1) {
            return;
        }
        SparseArray sparseArray = new SparseArray();
        for (int i3 = i; i3 < i2; i3++) {
            C0037a c0037a = arrayList.get(i3);
            if (arrayList2.get(i3).booleanValue()) {
                b(c0037a, (SparseArray<a>) sparseArray, z);
            } else {
                a(c0037a, (SparseArray<a>) sparseArray, z);
            }
        }
        if (sparseArray.size() != 0) {
            View view = new View(sVar.s.c());
            int size = sparseArray.size();
            for (int i4 = 0; i4 < size; i4++) {
                int iKeyAt = sparseArray.keyAt(i4);
                b.b.b<String, String> bVarA = a(iKeyAt, arrayList, arrayList2, i, i2);
                a aVar = (a) sparseArray.valueAt(i4);
                if (z) {
                    b(sVar, iKeyAt, aVar, view, bVarA);
                } else {
                    a(sVar, iKeyAt, aVar, view, bVarA);
                }
            }
        }
    }

    private static void a(b.b.b<String, String> bVar, b.b.b<String, View> bVar2) {
        for (int size = bVar.size() - 1; size >= 0; size--) {
            if (!bVar2.containsKey(bVar.d(size))) {
                bVar.c(size);
            }
        }
    }

    static void a(ArrayList<View> arrayList, int i) {
        if (arrayList == null) {
            return;
        }
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            arrayList.get(size).setVisibility(i);
        }
    }

    private static void a(ArrayList<View> arrayList, b.b.b<String, View> bVar, Collection<String> collection) {
        for (int size = bVar.size() - 1; size >= 0; size--) {
            View viewD = bVar.d(size);
            if (collection.contains(b.d.d.n.f(viewD))) {
                arrayList.add(viewD);
            }
        }
    }

    private static boolean a(L l, List<Object> list) {
        int size = list.size();
        for (int i = 0; i < size; i++) {
            if (!l.a(list.get(i))) {
                return false;
            }
        }
        return true;
    }

    private static b.b.b<String, View> b(L l, b.b.b<String, String> bVar, Object obj, a aVar) {
        androidx.core.app.i iVarN;
        ArrayList<String> arrayList;
        if (bVar.isEmpty() || obj == null) {
            bVar.clear();
            return null;
        }
        Fragment fragment = aVar.f290d;
        b.b.b<String, View> bVar2 = new b.b.b<>();
        l.a((Map<String, View>) bVar2, fragment.y());
        C0037a c0037a = aVar.f292f;
        if (aVar.f291e) {
            iVarN = fragment.l();
            arrayList = c0037a.s;
        } else {
            iVarN = fragment.n();
            arrayList = c0037a.r;
        }
        bVar2.a((Collection<?>) arrayList);
        if (iVarN != null) {
            iVarN.a(arrayList, bVar2);
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                String str = arrayList.get(size);
                View view = bVar2.get(str);
                if (view == null) {
                    bVar.remove(str);
                } else if (!str.equals(b.d.d.n.f(view))) {
                    bVar.put(b.d.d.n.f(view), bVar.remove(str));
                }
            }
        } else {
            bVar.a((Collection<?>) bVar2.keySet());
        }
        return bVar2;
    }

    private static Object b(L l, ViewGroup viewGroup, View view, b.b.b<String, String> bVar, a aVar, ArrayList<View> arrayList, ArrayList<View> arrayList2, Object obj, Object obj2) {
        Object obj3;
        View view2;
        Rect rect;
        Fragment fragment = aVar.f287a;
        Fragment fragment2 = aVar.f290d;
        if (fragment != null) {
            fragment.y().setVisibility(0);
        }
        if (fragment == null || fragment2 == null) {
            return null;
        }
        boolean z = aVar.f288b;
        Object objA = bVar.isEmpty() ? null : a(l, fragment, fragment2, z);
        b.b.b<String, View> bVarB = b(l, bVar, objA, aVar);
        b.b.b<String, View> bVarA = a(l, bVar, objA, aVar);
        if (bVar.isEmpty()) {
            if (bVarB != null) {
                bVarB.clear();
            }
            if (bVarA != null) {
                bVarA.clear();
            }
            obj3 = null;
        } else {
            a(arrayList, bVarB, bVar.keySet());
            a(arrayList2, bVarA, bVar.values());
            obj3 = objA;
        }
        if (obj == null && obj2 == null && obj3 == null) {
            return null;
        }
        a(fragment, fragment2, z, bVarB, true);
        if (obj3 != null) {
            arrayList2.add(view);
            l.b(obj3, view, arrayList);
            a(l, obj3, obj2, bVarB, aVar.f291e, aVar.f292f);
            Rect rect2 = new Rect();
            View viewA = a(bVarA, aVar, obj, z);
            if (viewA != null) {
                l.a(obj, rect2);
            }
            rect = rect2;
            view2 = viewA;
        } else {
            view2 = null;
            rect = null;
        }
        M.a(viewGroup, new A(fragment, fragment2, z, bVarA, view2, l, rect));
        return obj3;
    }

    private static Object b(L l, Fragment fragment, boolean z) {
        if (fragment == null) {
            return null;
        }
        return l.b(z ? fragment.u() : fragment.m());
    }

    public static void b(C0037a c0037a, SparseArray<a> sparseArray, boolean z) {
        if (c0037a.f364a.t.a()) {
            for (int size = c0037a.f365b.size() - 1; size >= 0; size--) {
                a(c0037a, c0037a.f365b.get(size), sparseArray, true, z);
            }
        }
    }

    private static void b(s sVar, int i, a aVar, View view, b.b.b<String, String> bVar) {
        Fragment fragment;
        Fragment fragment2;
        L lA;
        Object obj;
        ViewGroup viewGroup = sVar.t.a() ? (ViewGroup) sVar.t.a(i) : null;
        if (viewGroup == null || (lA = a((fragment2 = aVar.f290d), (fragment = aVar.f287a))) == null) {
            return;
        }
        boolean z = aVar.f288b;
        boolean z2 = aVar.f291e;
        ArrayList<View> arrayList = new ArrayList<>();
        ArrayList<View> arrayList2 = new ArrayList<>();
        Object objA = a(lA, fragment, z);
        Object objB = b(lA, fragment2, z2);
        Object objB2 = b(lA, viewGroup, view, bVar, aVar, arrayList2, arrayList, objA, objB);
        if (objA == null && objB2 == null) {
            obj = objB;
            if (obj == null) {
                return;
            }
        } else {
            obj = objB;
        }
        ArrayList<View> arrayListA = a(lA, obj, fragment2, arrayList2, view);
        ArrayList<View> arrayListA2 = a(lA, objA, fragment, arrayList, view);
        a(arrayListA2, 4);
        Object objA2 = a(lA, objA, obj, objB2, fragment, z);
        if (objA2 != null) {
            a(lA, obj, fragment2, arrayListA);
            ArrayList<String> arrayListA3 = lA.a(arrayList);
            lA.a(objA2, objA, arrayListA2, obj, arrayListA, objB2, arrayList);
            lA.a(viewGroup, objA2);
            lA.a(viewGroup, arrayList2, arrayList, arrayListA3, bVar);
            a(arrayListA2, 0);
            lA.b(objB2, arrayList2, arrayList);
        }
    }
}
