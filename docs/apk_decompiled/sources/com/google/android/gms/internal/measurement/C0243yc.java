package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.yc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0243yc<T> implements Ic<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final InterfaceC0219uc f1873a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Zc<?, ?> f1874b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final boolean f1875c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final AbstractC0242yb<?> f1876d;

    private C0243yc(Zc<?, ?> zc, AbstractC0242yb<?> abstractC0242yb, InterfaceC0219uc interfaceC0219uc) {
        this.f1874b = zc;
        this.f1875c = abstractC0242yb.a(interfaceC0219uc);
        this.f1876d = abstractC0242yb;
        this.f1873a = interfaceC0219uc;
    }

    static <T> C0243yc<T> a(Zc<?, ?> zc, AbstractC0242yb<?> abstractC0242yb, InterfaceC0219uc interfaceC0219uc) {
        return new C0243yc<>(zc, abstractC0242yb, interfaceC0219uc);
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final int a(T t) {
        int iHashCode = this.f1874b.a(t).hashCode();
        return this.f1875c ? (iHashCode * 53) + this.f1876d.a(t).hashCode() : iHashCode;
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final void a(T t, InterfaceC0226vd interfaceC0226vd) {
        Iterator itD = this.f1876d.a(t).d();
        if (itD.hasNext()) {
            ((Db) ((Map.Entry) itD.next()).getKey()).x();
            throw null;
        }
        Zc<?, ?> zc = this.f1874b;
        zc.b(zc.a(t), interfaceC0226vd);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0094  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0099 A[EDGE_INSN: B:57:0x0099->B:34:0x0099 BREAK  A[LOOP:1: B:18:0x0053->B:62:0x0053], SYNTHETIC] */
    @Override // com.google.android.gms.internal.measurement.Ic
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(T r10, byte[] r11, int r12, int r13, com.google.android.gms.internal.measurement.C0092bb r14) throws com.google.android.gms.internal.measurement.Ub {
        /*
            r9 = this;
            r0 = r10
            com.google.android.gms.internal.measurement.Jb r0 = (com.google.android.gms.internal.measurement.Jb) r0
            com.google.android.gms.internal.measurement.bd r1 = r0.zzb
            com.google.android.gms.internal.measurement.bd r2 = com.google.android.gms.internal.measurement.C0094bd.a()
            if (r1 != r2) goto L11
            com.google.android.gms.internal.measurement.bd r1 = com.google.android.gms.internal.measurement.C0094bd.b()
            r0.zzb = r1
        L11:
            com.google.android.gms.internal.measurement.Jb$d r10 = (com.google.android.gms.internal.measurement.Jb.d) r10
            r10.o()
            r10 = 0
            r0 = r10
        L18:
            if (r12 >= r13) goto La4
            int r4 = com.google.android.gms.internal.measurement.Za.a(r11, r12, r14)
            int r2 = r14.f1641a
            r12 = 11
            r3 = 2
            if (r2 == r12) goto L51
            r12 = r2 & 7
            if (r12 != r3) goto L4c
            com.google.android.gms.internal.measurement.yb<?> r12 = r9.f1876d
            com.google.android.gms.internal.measurement.wb r0 = r14.f1644d
            com.google.android.gms.internal.measurement.uc r3 = r9.f1873a
            int r5 = r2 >>> 3
            java.lang.Object r12 = r12.a(r0, r3, r5)
            r0 = r12
            com.google.android.gms.internal.measurement.Jb$f r0 = (com.google.android.gms.internal.measurement.Jb.f) r0
            if (r0 != 0) goto L43
            r3 = r11
            r5 = r13
            r6 = r1
            r7 = r14
            int r12 = com.google.android.gms.internal.measurement.Za.a(r2, r3, r4, r5, r6, r7)
            goto L18
        L43:
            com.google.android.gms.internal.measurement.Dc.a()
            java.lang.NoSuchMethodError r10 = new java.lang.NoSuchMethodError
            r10.<init>()
            throw r10
        L4c:
            int r12 = com.google.android.gms.internal.measurement.Za.a(r2, r11, r4, r13, r14)
            goto L18
        L51:
            r12 = 0
            r2 = r10
        L53:
            if (r4 >= r13) goto L99
            int r4 = com.google.android.gms.internal.measurement.Za.a(r11, r4, r14)
            int r5 = r14.f1641a
            int r6 = r5 >>> 3
            r7 = r5 & 7
            if (r6 == r3) goto L7b
            r8 = 3
            if (r6 == r8) goto L65
            goto L90
        L65:
            if (r0 != 0) goto L72
            if (r7 != r3) goto L90
            int r4 = com.google.android.gms.internal.measurement.Za.e(r11, r4, r14)
            java.lang.Object r2 = r14.f1643c
            com.google.android.gms.internal.measurement.cb r2 = (com.google.android.gms.internal.measurement.AbstractC0099cb) r2
            goto L53
        L72:
            com.google.android.gms.internal.measurement.Dc.a()
            java.lang.NoSuchMethodError r10 = new java.lang.NoSuchMethodError
            r10.<init>()
            throw r10
        L7b:
            if (r7 != 0) goto L90
            int r4 = com.google.android.gms.internal.measurement.Za.a(r11, r4, r14)
            int r12 = r14.f1641a
            com.google.android.gms.internal.measurement.yb<?> r0 = r9.f1876d
            com.google.android.gms.internal.measurement.wb r5 = r14.f1644d
            com.google.android.gms.internal.measurement.uc r6 = r9.f1873a
            java.lang.Object r0 = r0.a(r5, r6, r12)
            com.google.android.gms.internal.measurement.Jb$f r0 = (com.google.android.gms.internal.measurement.Jb.f) r0
            goto L53
        L90:
            r6 = 12
            if (r5 == r6) goto L99
            int r4 = com.google.android.gms.internal.measurement.Za.a(r5, r11, r4, r13, r14)
            goto L53
        L99:
            if (r2 == 0) goto La1
            int r12 = r12 << 3
            r12 = r12 | r3
            r1.a(r12, r2)
        La1:
            r12 = r4
            goto L18
        La4:
            if (r12 != r13) goto La7
            return
        La7:
            com.google.android.gms.internal.measurement.Ub r10 = com.google.android.gms.internal.measurement.Ub.e()
            goto Lad
        Lac:
            throw r10
        Lad:
            goto Lac
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0243yc.a(java.lang.Object, byte[], int, int, com.google.android.gms.internal.measurement.bb):void");
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final boolean a(T t, T t2) {
        if (!this.f1874b.a(t).equals(this.f1874b.a(t2))) {
            return false;
        }
        if (this.f1875c) {
            return this.f1876d.a(t).equals(this.f1876d.a(t2));
        }
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final void b(T t, T t2) {
        Jc.a(this.f1874b, t, t2);
        if (this.f1875c) {
            Jc.a(this.f1876d, t, t2);
        }
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final boolean b(T t) {
        return this.f1876d.a(t).f();
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final void c(T t) {
        this.f1874b.b(t);
        this.f1876d.c(t);
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final int d(T t) {
        Zc<?, ?> zc = this.f1874b;
        int iC = zc.c(zc.a(t)) + 0;
        return this.f1875c ? iC + this.f1876d.a(t).g() : iC;
    }

    @Override // com.google.android.gms.internal.measurement.Ic
    public final T h() {
        return (T) this.f1873a.d().a();
    }
}
