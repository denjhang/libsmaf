package com.google.android.gms.measurement.internal;

import android.annotation.TargetApi;
import android.app.job.JobParameters;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import com.google.android.gms.measurement.internal.Od;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Kd<T extends Context & Od> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final T f2017a;

    public Kd(T t) {
        com.google.android.gms.common.internal.r.a(t);
        this.f2017a = t;
    }

    private final void a(Runnable runnable) {
        ee eeVarA = ee.a(this.f2017a);
        eeVarA.c().a(new Ld(this, eeVarA, runnable));
    }

    private final C0365wb c() {
        return _b.a(this.f2017a, (com.google.android.gms.internal.measurement.zzv) null).d();
    }

    public final int a(final Intent intent, int i, final int i2) {
        _b _bVarA = _b.a(this.f2017a, (com.google.android.gms.internal.measurement.zzv) null);
        final C0365wb c0365wbD = _bVarA.d();
        if (intent == null) {
            c0365wbD.w().a("AppMeasurementService started with null intent");
            return 2;
        }
        String action = intent.getAction();
        _bVarA.f();
        c0365wbD.B().a("Local AppMeasurementService called. startId, action", Integer.valueOf(i2), action);
        if ("com.google.android.gms.measurement.UPLOAD".equals(action)) {
            a(new Runnable(this, i2, c0365wbD, intent) { // from class: com.google.android.gms.measurement.internal.Jd

                /* JADX INFO: renamed from: a, reason: collision with root package name */
                private final Kd f2005a;

                /* JADX INFO: renamed from: b, reason: collision with root package name */
                private final int f2006b;

                /* JADX INFO: renamed from: c, reason: collision with root package name */
                private final C0365wb f2007c;

                /* JADX INFO: renamed from: d, reason: collision with root package name */
                private final Intent f2008d;

                {
                    this.f2005a = this;
                    this.f2006b = i2;
                    this.f2007c = c0365wbD;
                    this.f2008d = intent;
                }

                @Override // java.lang.Runnable
                public final void run() {
                    this.f2005a.a(this.f2006b, this.f2007c, this.f2008d);
                }
            });
        }
        return 2;
    }

    public final IBinder a(Intent intent) {
        if (intent == null) {
            c().t().a("onBind called with null intent");
            return null;
        }
        String action = intent.getAction();
        if ("com.google.android.gms.measurement.START".equals(action)) {
            return new BinderC0282fc(ee.a(this.f2017a));
        }
        c().w().a("onBind received unknown action", action);
        return null;
    }

    public final void a() {
        _b _bVarA = _b.a(this.f2017a, (com.google.android.gms.internal.measurement.zzv) null);
        C0365wb c0365wbD = _bVarA.d();
        _bVarA.f();
        c0365wbD.B().a("Local AppMeasurementService is starting up");
    }

    final /* synthetic */ void a(int i, C0365wb c0365wb, Intent intent) {
        if (this.f2017a.a(i)) {
            c0365wb.B().a("Local AppMeasurementService processed last upload request. StartId", Integer.valueOf(i));
            c().B().a("Completed wakeful intent.");
            this.f2017a.a(intent);
        }
    }

    final /* synthetic */ void a(C0365wb c0365wb, JobParameters jobParameters) {
        c0365wb.B().a("AppMeasurementJobService processed last upload request.");
        this.f2017a.a(jobParameters, false);
    }

    @TargetApi(24)
    public final boolean a(final JobParameters jobParameters) {
        _b _bVarA = _b.a(this.f2017a, (com.google.android.gms.internal.measurement.zzv) null);
        final C0365wb c0365wbD = _bVarA.d();
        String string = jobParameters.getExtras().getString("action");
        _bVarA.f();
        c0365wbD.B().a("Local AppMeasurementJobService called. action", string);
        if (!"com.google.android.gms.measurement.UPLOAD".equals(string)) {
            return true;
        }
        a(new Runnable(this, c0365wbD, jobParameters) { // from class: com.google.android.gms.measurement.internal.Md

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final Kd f2038a;

            /* JADX INFO: renamed from: b, reason: collision with root package name */
            private final C0365wb f2039b;

            /* JADX INFO: renamed from: c, reason: collision with root package name */
            private final JobParameters f2040c;

            {
                this.f2038a = this;
                this.f2039b = c0365wbD;
                this.f2040c = jobParameters;
            }

            @Override // java.lang.Runnable
            public final void run() {
                this.f2038a.a(this.f2039b, this.f2040c);
            }
        });
        return true;
    }

    public final void b() {
        _b _bVarA = _b.a(this.f2017a, (com.google.android.gms.internal.measurement.zzv) null);
        C0365wb c0365wbD = _bVarA.d();
        _bVarA.f();
        c0365wbD.B().a("Local AppMeasurementService is shutting down");
    }

    public final boolean b(Intent intent) {
        if (intent == null) {
            c().t().a("onUnbind called with null intent");
            return true;
        }
        c().B().a("onUnbind called for intent. action", intent.getAction());
        return true;
    }

    public final void c(Intent intent) {
        if (intent == null) {
            c().t().a("onRebind called with null intent");
        } else {
            c().B().a("onRebind called. action", intent.getAction());
        }
    }
}
