package com.google.android.gms.measurement.internal;

import android.annotation.TargetApi;
import android.app.AlarmManager;
import android.app.PendingIntent;
import android.app.job.JobInfo;
import android.app.job.JobScheduler;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.PersistableBundle;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class _d extends AbstractC0257ae {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final AlarmManager f2170d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final AbstractC0284g f2171e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Integer f2172f;

    protected _d(ee eeVar) {
        super(eeVar);
        this.f2170d = (AlarmManager) e().getSystemService("alarm");
        this.f2171e = new Zd(this, eeVar.t(), eeVar);
    }

    @TargetApi(24)
    private final void w() {
        JobScheduler jobScheduler = (JobScheduler) e().getSystemService("jobscheduler");
        int iX = x();
        d().B().a("Cancelling job. JobID", Integer.valueOf(iX));
        jobScheduler.cancel(iX);
    }

    private final int x() {
        if (this.f2172f == null) {
            String strValueOf = String.valueOf(e().getPackageName());
            this.f2172f = Integer.valueOf((strValueOf.length() != 0 ? "measurement".concat(strValueOf) : new String("measurement")).hashCode());
        }
        return this.f2172f.intValue();
    }

    private final PendingIntent y() {
        Context contextE = e();
        return PendingIntent.getBroadcast(contextE, 0, new Intent().setClassName(contextE, "com.google.android.gms.measurement.AppMeasurementReceiver").setAction("com.google.android.gms.measurement.UPLOAD"), 0);
    }

    public final void a(long j) {
        s();
        f();
        Context contextE = e();
        if (!Rb.a(contextE)) {
            d().A().a("Receiver not registered/enabled");
        }
        if (!le.a(contextE, false)) {
            d().A().a("Service not registered/enabled");
        }
        v();
        long jB = g().b() + j;
        if (j < Math.max(0L, C0324o.E.a(null).longValue()) && !this.f2171e.b()) {
            d().B().a("Scheduling upload with DelayedRunnable");
            this.f2171e.a(j);
        }
        f();
        if (Build.VERSION.SDK_INT < 24) {
            d().B().a("Scheduling upload with AlarmManager");
            this.f2170d.setInexactRepeating(2, jB, Math.max(C0324o.z.a(null).longValue(), j), y());
            return;
        }
        d().B().a("Scheduling upload with JobScheduler");
        Context contextE2 = e();
        ComponentName componentName = new ComponentName(contextE2, "com.google.android.gms.measurement.AppMeasurementJobService");
        int iX = x();
        PersistableBundle persistableBundle = new PersistableBundle();
        persistableBundle.putString("action", "com.google.android.gms.measurement.UPLOAD");
        JobInfo jobInfoBuild = new JobInfo.Builder(iX, componentName).setMinimumLatency(j).setOverrideDeadline(j << 1).setExtras(persistableBundle).build();
        d().B().a("Scheduling job. JobID", Integer.valueOf(iX));
        com.google.android.gms.internal.measurement.Ec.a(contextE2, jobInfoBuild, "com.google.android.gms", "UploadAlarm");
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

    @Override // com.google.android.gms.measurement.internal.C0361vc
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

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ ie o() {
        return super.o();
    }

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ C0269d p() {
        return super.p();
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0257ae
    protected final boolean u() {
        this.f2170d.cancel(y());
        if (Build.VERSION.SDK_INT < 24) {
            return false;
        }
        w();
        return false;
    }

    public final void v() {
        s();
        this.f2170d.cancel(y());
        this.f2171e.c();
        if (Build.VERSION.SDK_INT >= 24) {
            w();
        }
    }
}
