package com.google.android.gms.measurement.internal;

import android.content.ComponentName;
import android.content.Context;
import android.os.RemoteException;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.internal.measurement.Ef;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.md, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0318md extends AbstractC0266cb {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Ed f2335c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private InterfaceC0326ob f2336d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private volatile Boolean f2337e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final AbstractC0284g f2338f;
    private final Xd g;
    private final List<Runnable> h;
    private final AbstractC0284g i;

    protected C0318md(_b _bVar) {
        super(_bVar);
        this.h = new ArrayList();
        this.g = new Xd(_bVar.g());
        this.f2335c = new Ed(this);
        this.f2338f = new C0313ld(this, _bVar);
        this.i = new C0362vd(this, _bVar);
    }

    private final boolean I() {
        f();
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void J() {
        h();
        this.g.a();
        this.f2338f.a(C0324o.N.a(null).longValue());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void K() {
        h();
        if (B()) {
            d().B().a("Inactivity, disconnecting from the service");
            H();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void L() {
        h();
        d().B().a("Processing queued up service tasks", Integer.valueOf(this.h.size()));
        Iterator<Runnable> it = this.h.iterator();
        while (it.hasNext()) {
            try {
                it.next().run();
            } catch (Exception e2) {
                d().t().a("Task exception while flushing queue", e2);
            }
        }
        this.h.clear();
        this.i.c();
    }

    static /* synthetic */ InterfaceC0326ob a(C0318md c0318md, InterfaceC0326ob interfaceC0326ob) {
        c0318md.f2336d = null;
        return null;
    }

    private final zzm a(boolean z) {
        f();
        return q().a(z ? d().C() : null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(ComponentName componentName) {
        h();
        if (this.f2336d != null) {
            this.f2336d = null;
            d().B().a("Disconnected from device MeasurementService", componentName);
            h();
            F();
        }
    }

    private final void a(Runnable runnable) {
        h();
        if (B()) {
            runnable.run();
        } else {
            if (this.h.size() >= 1000) {
                d().t().a("Discarding data. Max runnable queue size reached");
                return;
            }
            this.h.add(runnable);
            this.i.a(60000L);
            F();
        }
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0266cb
    protected final boolean A() {
        return false;
    }

    public final boolean B() {
        h();
        x();
        return this.f2336d != null;
    }

    protected final void C() {
        h();
        x();
        a(new RunnableC0357ud(this, a(true)));
    }

    protected final void D() {
        h();
        a();
        x();
        zzm zzmVarA = a(false);
        if (I()) {
            t().B();
        }
        a(new RunnableC0333pd(this, zzmVarA));
    }

    protected final void E() {
        h();
        x();
        zzm zzmVarA = a(true);
        boolean zA = m().a(C0324o.Ga);
        if (zA) {
            t().C();
        }
        a(new RunnableC0338qd(this, zzmVarA, zA));
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x00ed  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0107  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final void F() {
        /*
            Method dump skipped, instruction units count: 385
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.C0318md.F():void");
    }

    final Boolean G() {
        return this.f2337e;
    }

    public final void H() {
        h();
        x();
        this.f2335c.a();
        try {
            com.google.android.gms.common.stats.a.a().a(e(), this.f2335c);
        } catch (IllegalArgumentException | IllegalStateException unused) {
        }
        this.f2336d = null;
    }

    @Override // com.google.android.gms.measurement.internal.Db, com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void a() {
        super.a();
    }

    public final void a(Ef ef) {
        h();
        x();
        a(new RunnableC0342rd(this, a(false), ef));
    }

    public final void a(Ef ef, zzan zzanVar, String str) {
        h();
        x();
        if (k().a(12451000) == 0) {
            a(new RunnableC0347sd(this, zzanVar, str, ef));
        } else {
            d().w().a("Not bundling data. Service unavailable or out of date");
            k().a(ef, new byte[0]);
        }
    }

    protected final void a(Ef ef, String str, String str2) {
        h();
        x();
        a(new RunnableC0377yd(this, str, str2, a(false), ef));
    }

    protected final void a(Ef ef, String str, String str2, boolean z) {
        h();
        x();
        a(new Ad(this, str, str2, z, a(false), ef));
    }

    protected final void a(C0298id c0298id) {
        h();
        x();
        a(new RunnableC0352td(this, c0298id));
    }

    protected final void a(InterfaceC0326ob interfaceC0326ob) {
        h();
        com.google.android.gms.common.internal.r.a(interfaceC0326ob);
        this.f2336d = interfaceC0326ob;
        J();
        L();
    }

    final void a(InterfaceC0326ob interfaceC0326ob, AbstractSafeParcelable abstractSafeParcelable, zzm zzmVar) {
        int size;
        C0375yb c0375ybT;
        String str;
        List<AbstractSafeParcelable> listA;
        h();
        a();
        x();
        boolean zI = I();
        int i = 0;
        int i2 = 100;
        while (i < 1001 && i2 == 100) {
            ArrayList arrayList = new ArrayList();
            if (!zI || (listA = t().a(100)) == null) {
                size = 0;
            } else {
                arrayList.addAll(listA);
                size = listA.size();
            }
            if (abstractSafeParcelable != null && size < 100) {
                arrayList.add(abstractSafeParcelable);
            }
            int size2 = arrayList.size();
            int i3 = 0;
            while (i3 < size2) {
                Object obj = arrayList.get(i3);
                i3++;
                AbstractSafeParcelable abstractSafeParcelable2 = (AbstractSafeParcelable) obj;
                if (abstractSafeParcelable2 instanceof zzan) {
                    try {
                        interfaceC0326ob.a((zzan) abstractSafeParcelable2, zzmVar);
                    } catch (RemoteException e2) {
                        e = e2;
                        c0375ybT = d().t();
                        str = "Failed to send event to the service";
                        c0375ybT.a(str, e);
                    }
                } else if (abstractSafeParcelable2 instanceof zzkj) {
                    try {
                        interfaceC0326ob.a((zzkj) abstractSafeParcelable2, zzmVar);
                    } catch (RemoteException e3) {
                        e = e3;
                        c0375ybT = d().t();
                        str = "Failed to send attribute to the service";
                        c0375ybT.a(str, e);
                    }
                } else if (abstractSafeParcelable2 instanceof zzv) {
                    try {
                        interfaceC0326ob.a((zzv) abstractSafeParcelable2, zzmVar);
                    } catch (RemoteException e4) {
                        e = e4;
                        c0375ybT = d().t();
                        str = "Failed to send conditional property to the service";
                        c0375ybT.a(str, e);
                    }
                } else {
                    d().t().a("Discarding data. Unrecognized parcel type.");
                }
            }
            i++;
            i2 = size;
        }
    }

    protected final void a(zzan zzanVar, String str) {
        com.google.android.gms.common.internal.r.a(zzanVar);
        h();
        x();
        boolean zI = I();
        a(new RunnableC0372xd(this, zI, zI && t().a(zzanVar), zzanVar, a(true), str));
    }

    protected final void a(zzkj zzkjVar) {
        h();
        x();
        a(new RunnableC0323nd(this, I() && t().a(zzkjVar), zzkjVar, a(true)));
    }

    protected final void a(zzv zzvVar) {
        com.google.android.gms.common.internal.r.a(zzvVar);
        h();
        x();
        f();
        a(new RunnableC0367wd(this, true, t().a(zzvVar), new zzv(zzvVar), a(true), zzvVar));
    }

    public final void a(AtomicReference<String> atomicReference) {
        h();
        x();
        a(new RunnableC0328od(this, atomicReference, a(false)));
    }

    protected final void a(AtomicReference<List<zzv>> atomicReference, String str, String str2, String str3) {
        h();
        x();
        a(new RunnableC0382zd(this, atomicReference, str, str2, str3, a(false)));
    }

    protected final void a(AtomicReference<List<zzkj>> atomicReference, String str, String str2, String str3, boolean z) {
        h();
        x();
        a(new Cd(this, atomicReference, str, str2, str3, z, a(false)));
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ C0365wb d() {
        return super.d();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Context e() {
        return super.e();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ ye f() {
        return super.f();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ com.google.android.gms.common.util.e g() {
        return super.g();
    }

    @Override // com.google.android.gms.measurement.internal.Db, com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void h() {
        super.h();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0294i i() {
        return super.i();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0355ub j() {
        return super.j();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ le k() {
        return super.k();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ Kb l() {
        return super.l();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ ze m() {
        return super.m();
    }

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ Gc p() {
        return super.p();
    }

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ C0350tb q() {
        return super.q();
    }

    @Override // com.google.android.gms.measurement.internal.Db
    public final /* bridge */ /* synthetic */ C0345sb t() {
        return super.t();
    }
}
