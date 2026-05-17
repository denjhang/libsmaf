package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import java.util.List;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.vb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0224vb implements InterfaceC0226vd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final AbstractC0212tb f1845a;

    private C0224vb(AbstractC0212tb abstractC0212tb) {
        Lb.a(abstractC0212tb, "output");
        this.f1845a = abstractC0212tb;
        this.f1845a.f1819c = this;
    }

    public static C0224vb a(AbstractC0212tb abstractC0212tb) {
        C0224vb c0224vb = abstractC0212tb.f1819c;
        return c0224vb != null ? c0224vb : new C0224vb(abstractC0212tb);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i) {
        this.f1845a.a(i, 3);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, double d2) {
        this.f1845a.a(i, d2);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, float f2) {
        this.f1845a.a(i, f2);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, int i2) {
        this.f1845a.b(i, i2);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, long j) {
        this.f1845a.c(i, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, AbstractC0099cb abstractC0099cb) {
        this.f1845a.a(i, abstractC0099cb);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, Object obj) {
        if (obj instanceof AbstractC0099cb) {
            this.f1845a.b(i, (AbstractC0099cb) obj);
        } else {
            this.f1845a.a(i, (InterfaceC0219uc) obj);
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, Object obj, Ic ic) {
        this.f1845a.a(i, (InterfaceC0219uc) obj, ic);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, String str) {
        this.f1845a.a(i, str);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, List<AbstractC0099cb> list) {
        for (int i2 = 0; i2 < list.size(); i2++) {
            this.f1845a.a(i, list.get(i2));
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, List<?> list, Ic ic) {
        for (int i2 = 0; i2 < list.size(); i2++) {
            b(i, list.get(i2), ic);
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, List<Boolean> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.a(i, list.get(i2).booleanValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iB = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iB += AbstractC0212tb.b(list.get(i3).booleanValue());
        }
        this.f1845a.b(iB);
        while (i2 < list.size()) {
            this.f1845a.a(list.get(i2).booleanValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void a(int i, boolean z) {
        this.f1845a.a(i, z);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void b(int i) {
        this.f1845a.a(i, 4);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void b(int i, int i2) {
        this.f1845a.b(i, i2);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void b(int i, long j) {
        this.f1845a.a(i, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void b(int i, Object obj, Ic ic) {
        AbstractC0212tb abstractC0212tb = this.f1845a;
        abstractC0212tb.a(i, 3);
        ic.a((InterfaceC0219uc) obj, abstractC0212tb.f1819c);
        abstractC0212tb.a(i, 4);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void b(int i, List<String> list) {
        int i2 = 0;
        if (!(list instanceof InterfaceC0086ac)) {
            while (i2 < list.size()) {
                this.f1845a.a(i, list.get(i2));
                i2++;
            }
            return;
        }
        InterfaceC0086ac interfaceC0086ac = (InterfaceC0086ac) list;
        while (i2 < list.size()) {
            Object objB = interfaceC0086ac.b(i2);
            if (objB instanceof String) {
                this.f1845a.a(i, (String) objB);
            } else {
                this.f1845a.a(i, (AbstractC0099cb) objB);
            }
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void b(int i, List<?> list, Ic ic) {
        for (int i2 = 0; i2 < list.size(); i2++) {
            a(i, list.get(i2), ic);
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void b(int i, List<Integer> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.b(i, list.get(i2).intValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iF = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iF += AbstractC0212tb.f(list.get(i3).intValue());
        }
        this.f1845a.b(iF);
        while (i2 < list.size()) {
            this.f1845a.a(list.get(i2).intValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void c(int i, int i2) {
        this.f1845a.e(i, i2);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void c(int i, long j) {
        this.f1845a.a(i, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void c(int i, List<Integer> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.b(i, list.get(i2).intValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iK = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iK += AbstractC0212tb.k(list.get(i3).intValue());
        }
        this.f1845a.b(iK);
        while (i2 < list.size()) {
            this.f1845a.a(list.get(i2).intValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void d(int i, int i2) {
        this.f1845a.d(i, i2);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void d(int i, long j) {
        this.f1845a.c(i, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void d(int i, List<Long> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.a(i, list.get(i2).longValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iD = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iD += AbstractC0212tb.d(list.get(i3).longValue());
        }
        this.f1845a.b(iD);
        while (i2 < list.size()) {
            this.f1845a.a(list.get(i2).longValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void e(int i, int i2) {
        this.f1845a.e(i, i2);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void e(int i, long j) {
        this.f1845a.b(i, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void e(int i, List<Long> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.c(i, list.get(i2).longValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iH = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iH += AbstractC0212tb.h(list.get(i3).longValue());
        }
        this.f1845a.b(iH);
        while (i2 < list.size()) {
            this.f1845a.c(list.get(i2).longValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void f(int i, int i2) {
        this.f1845a.c(i, i2);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void f(int i, List<Integer> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.e(i, list.get(i2).intValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int i3 = 0;
        for (int i4 = 0; i4 < list.size(); i4++) {
            i3 += AbstractC0212tb.i(list.get(i4).intValue());
        }
        this.f1845a.b(i3);
        while (i2 < list.size()) {
            this.f1845a.d(list.get(i2).intValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void g(int i, List<Integer> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.c(i, list.get(i2).intValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iG = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iG += AbstractC0212tb.g(list.get(i3).intValue());
        }
        this.f1845a.b(iG);
        while (i2 < list.size()) {
            this.f1845a.b(list.get(i2).intValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final int h() {
        return Jb.e.l;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void h(int i, List<Integer> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.e(i, list.get(i2).intValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iJ = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iJ += AbstractC0212tb.j(list.get(i3).intValue());
        }
        this.f1845a.b(iJ);
        while (i2 < list.size()) {
            this.f1845a.d(list.get(i2).intValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void i(int i, List<Long> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.c(i, list.get(i2).longValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iG = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iG += AbstractC0212tb.g(list.get(i3).longValue());
        }
        this.f1845a.b(iG);
        while (i2 < list.size()) {
            this.f1845a.c(list.get(i2).longValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void j(int i, List<Long> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.b(i, list.get(i2).longValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iF = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iF += AbstractC0212tb.f(list.get(i3).longValue());
        }
        this.f1845a.b(iF);
        while (i2 < list.size()) {
            this.f1845a.b(list.get(i2).longValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void k(int i, List<Long> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.a(i, list.get(i2).longValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iE = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iE += AbstractC0212tb.e(list.get(i3).longValue());
        }
        this.f1845a.b(iE);
        while (i2 < list.size()) {
            this.f1845a.a(list.get(i2).longValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void l(int i, List<Integer> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.d(i, list.get(i2).intValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iH = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iH += AbstractC0212tb.h(list.get(i3).intValue());
        }
        this.f1845a.b(iH);
        while (i2 < list.size()) {
            this.f1845a.c(list.get(i2).intValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void m(int i, List<Double> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.a(i, list.get(i2).doubleValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iB = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iB += AbstractC0212tb.b(list.get(i3).doubleValue());
        }
        this.f1845a.b(iB);
        while (i2 < list.size()) {
            this.f1845a.a(list.get(i2).doubleValue());
            i2++;
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0226vd
    public final void n(int i, List<Float> list, boolean z) {
        int i2 = 0;
        if (!z) {
            while (i2 < list.size()) {
                this.f1845a.a(i, list.get(i2).floatValue());
                i2++;
            }
            return;
        }
        this.f1845a.a(i, 2);
        int iB = 0;
        for (int i3 = 0; i3 < list.size(); i3++) {
            iB += AbstractC0212tb.b(list.get(i3).floatValue());
        }
        this.f1845a.b(iB);
        while (i2 < list.size()) {
            this.f1845a.a(list.get(i2).floatValue());
            i2++;
        }
    }
}
