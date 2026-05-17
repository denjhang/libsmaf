package com.google.android.gms.internal.measurement;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.gc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0128gc extends AbstractC0107dc {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final Class<?> f1711c = Collections.unmodifiableList(Collections.emptyList()).getClass();

    private C0128gc() {
        super();
    }

    private static <L> List<L> a(Object obj, long j, int i) {
        List<L> listA;
        Object obj2;
        List<L> listB = b(obj, j);
        if (!listB.isEmpty()) {
            if (f1711c.isAssignableFrom(listB.getClass())) {
                ArrayList arrayList = new ArrayList(listB.size() + i);
                arrayList.addAll(listB);
                obj2 = arrayList;
            } else if (listB instanceof C0108dd) {
                C0093bc c0093bc = new C0093bc(listB.size() + i);
                c0093bc.addAll((C0108dd) listB);
                obj2 = c0093bc;
            } else {
                if (!(listB instanceof Fc) || !(listB instanceof Rb)) {
                    return listB;
                }
                Rb rb = (Rb) listB;
                if (rb.h()) {
                    return listB;
                }
                listA = rb.a(listB.size() + i);
            }
            C0115ed.a(obj, j, obj2);
            return (List<L>) obj2;
        }
        listA = listB instanceof InterfaceC0086ac ? new C0093bc(i) : ((listB instanceof Fc) && (listB instanceof Rb)) ? ((Rb) listB).a(i) : new ArrayList<>(i);
        C0115ed.a(obj, j, listA);
        return listA;
    }

    private static <E> List<E> b(Object obj, long j) {
        return (List) C0115ed.f(obj, j);
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0107dc
    final void a(Object obj, long j) {
        Object objUnmodifiableList;
        List list = (List) C0115ed.f(obj, j);
        if (list instanceof InterfaceC0086ac) {
            objUnmodifiableList = ((InterfaceC0086ac) list).j();
        } else {
            if (f1711c.isAssignableFrom(list.getClass())) {
                return;
            }
            if ((list instanceof Fc) && (list instanceof Rb)) {
                Rb rb = (Rb) list;
                if (rb.h()) {
                    rb.i();
                    return;
                }
                return;
            }
            objUnmodifiableList = Collections.unmodifiableList(list);
        }
        C0115ed.a(obj, j, objUnmodifiableList);
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0107dc
    final <E> void a(Object obj, Object obj2, long j) {
        List listB = b(obj2, j);
        List listA = a(obj, j, listB.size());
        int size = listA.size();
        int size2 = listB.size();
        if (size > 0 && size2 > 0) {
            listA.addAll(listB);
        }
        if (size > 0) {
            listB = listA;
        }
        C0115ed.a(obj, j, listB);
    }
}
