package com.google.android.gms.measurement.internal;

import com.google.android.gms.internal.measurement.Cif;
import com.google.android.gms.internal.measurement.O;
import com.google.android.gms.internal.measurement.P;
import com.google.android.gms.internal.measurement.X;
import com.google.android.gms.internal.measurement.Y;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class se {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2406a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private com.google.android.gms.internal.measurement.O f2407b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private BitSet f2408c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private BitSet f2409d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Map<Integer, Long> f2410e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Map<Integer, List<Long>> f2411f;
    private final /* synthetic */ qe g;

    private se(qe qeVar, String str) {
        this.g = qeVar;
        this.f2406a = str;
        O.a aVarV = com.google.android.gms.internal.measurement.O.v();
        aVarV.a(true);
        this.f2407b = (com.google.android.gms.internal.measurement.O) aVarV.j();
        this.f2408c = new BitSet();
        this.f2409d = new BitSet();
        this.f2410e = new b.b.b();
        this.f2411f = new b.b.b();
    }

    /* synthetic */ se(qe qeVar, String str, te teVar) {
        this(qeVar, str);
    }

    private final List<com.google.android.gms.internal.measurement.P> a() {
        Map<Integer, Long> map = this.f2410e;
        if (map == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList(map.size());
        Iterator<Integer> it = this.f2410e.keySet().iterator();
        while (it.hasNext()) {
            int iIntValue = it.next().intValue();
            P.a aVarS = com.google.android.gms.internal.measurement.P.s();
            aVarS.a(iIntValue);
            aVarS.a(this.f2410e.get(Integer.valueOf(iIntValue)).longValue());
            arrayList.add((com.google.android.gms.internal.measurement.P) aVarS.j());
        }
        return arrayList;
    }

    private static List<com.google.android.gms.internal.measurement.Y> a(List<com.google.android.gms.internal.measurement.Y> list, List<com.google.android.gms.internal.measurement.Y> list2, List<Integer> list3) {
        if (list.isEmpty()) {
            return list2;
        }
        ArrayList arrayList = new ArrayList(list2);
        b.b.b bVar = new b.b.b();
        for (com.google.android.gms.internal.measurement.Y y : list) {
            if (y.o() && y.r() > 0) {
                bVar.put(Integer.valueOf(y.p()), Long.valueOf(y.b(y.r() - 1)));
            }
        }
        for (int i = 0; i < arrayList.size(); i++) {
            com.google.android.gms.internal.measurement.Y y2 = (com.google.android.gms.internal.measurement.Y) arrayList.get(i);
            Long l = (Long) bVar.remove(y2.o() ? Integer.valueOf(y2.p()) : null);
            if (l != null && (list3 == null || !list3.contains(Integer.valueOf(y2.p())))) {
                ArrayList arrayList2 = new ArrayList();
                if (l.longValue() < y2.b(0)) {
                    arrayList2.add(l);
                }
                arrayList2.addAll(y2.q());
                Y.a aVarK = y2.k();
                aVarK.k();
                aVarK.a(arrayList2);
                arrayList.set(i, (com.google.android.gms.internal.measurement.Y) aVarK.j());
            }
        }
        for (Integer num : bVar.keySet()) {
            Y.a aVarS = com.google.android.gms.internal.measurement.Y.s();
            aVarS.a(num.intValue());
            aVarS.a(((Long) bVar.get(num)).longValue());
            arrayList.add((com.google.android.gms.internal.measurement.Y) aVarS.j());
        }
        return arrayList;
    }

    final com.google.android.gms.internal.measurement.O a(int i, boolean z, List<Integer> list) {
        List<com.google.android.gms.internal.measurement.Y> listA;
        com.google.android.gms.internal.measurement.O o = this.f2407b;
        O.a aVarV = o == null ? com.google.android.gms.internal.measurement.O.v() : o.k();
        aVarV.a(i);
        X.a aVarW = com.google.android.gms.internal.measurement.X.w();
        aVarW.b(ie.a(this.f2408c));
        aVarW.a(ie.a(this.f2409d));
        aVarW.c(a());
        Map<Integer, List<Long>> map = this.f2411f;
        if (map == null) {
            listA = Collections.emptyList();
        } else {
            ArrayList arrayList = new ArrayList(map.size());
            for (Integer num : this.f2411f.keySet()) {
                Y.a aVarS = com.google.android.gms.internal.measurement.Y.s();
                aVarS.a(num.intValue());
                List<Long> list2 = this.f2411f.get(num);
                if (list2 != null) {
                    Collections.sort(list2);
                    Iterator<Long> it = list2.iterator();
                    while (it.hasNext()) {
                        aVarS.a(it.next().longValue());
                    }
                }
                arrayList.add((com.google.android.gms.internal.measurement.Y) aVarS.j());
            }
            listA = arrayList;
        }
        if (aVarV.k() && (!Cif.a() || !this.g.m().d(this.f2406a, C0324o.Da) || !z)) {
            listA = a(aVarV.l().u(), listA, list);
        }
        aVarW.d(listA);
        aVarV.a(aVarW);
        return (com.google.android.gms.internal.measurement.O) aVarV.j();
    }

    final void a(com.google.android.gms.internal.measurement.X x, BitSet bitSet, BitSet bitSet2, Map<Integer, Long> map) {
        this.f2408c = bitSet;
        this.f2409d = bitSet2;
        this.f2410e = map;
        X.a aVarW = com.google.android.gms.internal.measurement.X.w();
        aVarW.b(ie.a(bitSet));
        aVarW.a(ie.a(bitSet2));
        aVarW.c(a());
        O.a aVarV = com.google.android.gms.internal.measurement.O.v();
        aVarV.a(false);
        aVarV.a(x);
        aVarV.a(aVarW);
        this.f2407b = (com.google.android.gms.internal.measurement.O) aVarV.j();
    }

    final void a(xe xeVar) {
        int iA = xeVar.a();
        Boolean bool = xeVar.f2466c;
        if (bool != null) {
            this.f2409d.set(iA, bool.booleanValue());
        }
        Boolean bool2 = xeVar.f2467d;
        if (bool2 != null) {
            this.f2408c.set(iA, bool2.booleanValue());
        }
        if (xeVar.f2468e != null) {
            Long l = this.f2410e.get(Integer.valueOf(iA));
            long jLongValue = xeVar.f2468e.longValue() / 1000;
            if (l == null || jLongValue > l.longValue()) {
                this.f2410e.put(Integer.valueOf(iA), Long.valueOf(jLongValue));
            }
        }
        if (xeVar.f2469f != null) {
            List<Long> arrayList = this.f2411f.get(Integer.valueOf(iA));
            if (arrayList == null) {
                arrayList = new ArrayList<>();
                this.f2411f.put(Integer.valueOf(iA), arrayList);
            }
            arrayList.add(Long.valueOf(xeVar.f2469f.longValue() / 1000));
        }
    }
}
