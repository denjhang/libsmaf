package com.google.android.gms.measurement.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class we extends xe {
    private com.google.android.gms.internal.measurement.D g;
    private final /* synthetic */ qe h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    we(qe qeVar, String str, int i, com.google.android.gms.internal.measurement.D d2) {
        super(str, i);
        this.h = qeVar;
        this.g = d2;
    }

    @Override // com.google.android.gms.measurement.internal.xe
    final int a() {
        return this.g.p();
    }

    final boolean a(Long l, com.google.android.gms.internal.measurement.Z z, boolean z2) {
        C0375yb c0375ybW;
        String strC;
        String str;
        Boolean boolA;
        boolean zD = this.h.m().d(this.f2464a, C0324o.wa);
        boolean zD2 = this.h.m().d(this.f2464a, C0324o.Ca);
        boolean zS = this.g.s();
        boolean zT = this.g.t();
        boolean z3 = zD && this.g.v();
        boolean z4 = zS || zT || z3;
        Boolean boolA2 = null;
        boolA2 = null;
        if (z2 && !z4) {
            this.h.d().B().a("Property filter already evaluated true and it is not associated with an enhanced audience. audience ID, filter ID", Integer.valueOf(this.f2465b), this.g.o() ? Integer.valueOf(this.g.p()) : null);
            return true;
        }
        com.google.android.gms.internal.measurement.B bR = this.g.r();
        boolean zT2 = bR.t();
        if (z.t()) {
            if (bR.q()) {
                boolA = xe.a(z.u(), bR.r());
                boolA2 = xe.a(boolA, zT2);
            } else {
                c0375ybW = this.h.d().w();
                strC = this.h.j().c(z.q());
                str = "No number filter for long property. property";
                c0375ybW.a(str, strC);
            }
        } else if (!z.v()) {
            if (z.r()) {
                if (bR.o()) {
                    boolA = xe.a(z.s(), bR.p(), this.h.d());
                } else if (!bR.q()) {
                    c0375ybW = this.h.d().w();
                    strC = this.h.j().c(z.q());
                    str = "No string or number filter defined. property";
                } else if (ie.a(z.s())) {
                    boolA = xe.a(z.s(), bR.r());
                } else {
                    this.h.d().w().a("Invalid user property value for Numeric number filter. property, value", this.h.j().c(z.q()), z.s());
                }
                boolA2 = xe.a(boolA, zT2);
            } else {
                c0375ybW = this.h.d().w();
                strC = this.h.j().c(z.q());
                str = "User property has no value, property";
            }
            c0375ybW.a(str, strC);
        } else if (bR.q()) {
            boolA = xe.a(z.w(), bR.r());
            boolA2 = xe.a(boolA, zT2);
        } else {
            c0375ybW = this.h.d().w();
            strC = this.h.j().c(z.q());
            str = "No number filter for double property. property";
            c0375ybW.a(str, strC);
        }
        this.h.d().B().a("Property filter result", boolA2 == null ? "null" : boolA2);
        if (boolA2 == null) {
            return false;
        }
        this.f2466c = true;
        if (zD && z3 && !boolA2.booleanValue()) {
            return true;
        }
        if (!z2 || this.g.s()) {
            this.f2467d = boolA2;
        }
        if (boolA2.booleanValue() && z4 && z.o()) {
            long jP = z.p();
            if (zD2 && l != null) {
                jP = l.longValue();
            }
            if (zT) {
                this.f2469f = Long.valueOf(jP);
            } else {
                this.f2468e = Long.valueOf(jP);
            }
        }
        return true;
    }
}
