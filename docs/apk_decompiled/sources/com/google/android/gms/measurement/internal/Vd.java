package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.text.TextUtils;
import com.google.android.gms.internal.measurement.C0123fe;
import com.google.android.gms.internal.measurement.C0203re;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Vd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final AbstractC0284g f2127a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ Nd f2128b;

    Vd(Nd nd) {
        this.f2128b = nd;
        this.f2127a = new Yd(this, this.f2128b.f2438a);
    }

    final void a(long j) {
        this.f2128b.h();
        if (this.f2128b.f2438a.h()) {
            if (this.f2128b.m().e(this.f2128b.q().B(), C0324o.ca)) {
                this.f2128b.l().z.a(false);
            }
            if (this.f2128b.m().n(this.f2128b.q().B())) {
                a(this.f2128b.g().a(), false);
                return;
            }
            this.f2127a.c();
            if (this.f2128b.l().a(this.f2128b.g().a())) {
                this.f2128b.l().s.a(true);
                this.f2128b.l().x.a(0L);
            }
            if (this.f2128b.l().s.a()) {
                this.f2127a.a(Math.max(0L, this.f2128b.l().q.a() - this.f2128b.l().x.a()));
            }
        }
    }

    final void a(long j, boolean z) {
        this.f2128b.h();
        this.f2128b.C();
        if (this.f2128b.l().a(j)) {
            this.f2128b.l().s.a(true);
            this.f2128b.l().x.a(0L);
        }
        if (z && this.f2128b.m().o(this.f2128b.q().B())) {
            this.f2128b.l().w.a(j);
        }
        if (this.f2128b.l().s.a()) {
            b(j, z);
        }
    }

    final void b(long j, boolean z) {
        this.f2128b.h();
        if (C0203re.a() && this.f2128b.m().e(this.f2128b.q().B(), C0324o.ga)) {
            if (!this.f2128b.f2438a.h()) {
                return;
            } else {
                this.f2128b.l().w.a(j);
            }
        }
        this.f2128b.d().B().a("Session started, time", Long.valueOf(this.f2128b.g().b()));
        Long lValueOf = this.f2128b.m().l(this.f2128b.q().B()) ? Long.valueOf(j / 1000) : null;
        this.f2128b.p().a("auto", "_sid", lValueOf, j);
        this.f2128b.l().s.a(false);
        Bundle bundle = new Bundle();
        if (this.f2128b.m().l(this.f2128b.q().B())) {
            bundle.putLong("_sid", lValueOf.longValue());
        }
        if (this.f2128b.m().a(C0324o.Pa) && z) {
            bundle.putLong("_aib", 1L);
        }
        this.f2128b.p().a("auto", "_s", j, bundle);
        if (C0123fe.a() && this.f2128b.m().a(C0324o.Xa)) {
            String strA = this.f2128b.l().C.a();
            if (!TextUtils.isEmpty(strA)) {
                Bundle bundle2 = new Bundle();
                bundle2.putString("_ffr", strA);
                this.f2128b.p().a("auto", "_ssr", j, bundle2);
            }
        }
        if (C0203re.a() && this.f2128b.m().e(this.f2128b.q().B(), C0324o.ga)) {
            return;
        }
        this.f2128b.l().w.a(j);
    }
}
