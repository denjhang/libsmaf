package com.google.android.gms.measurement;

import android.annotation.TargetApi;
import android.app.job.JobParameters;
import android.app.job.JobService;
import android.content.Intent;
import com.google.android.gms.measurement.internal.Kd;
import com.google.android.gms.measurement.internal.Od;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@TargetApi(24)
public final class AppMeasurementJobService extends JobService implements Od {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Kd<AppMeasurementJobService> f1897a;

    private final Kd<AppMeasurementJobService> a() {
        if (this.f1897a == null) {
            this.f1897a = new Kd<>(this);
        }
        return this.f1897a;
    }

    @Override // com.google.android.gms.measurement.internal.Od
    @TargetApi(24)
    public final void a(JobParameters jobParameters, boolean z) {
        jobFinished(jobParameters, false);
    }

    @Override // com.google.android.gms.measurement.internal.Od
    public final void a(Intent intent) {
    }

    @Override // com.google.android.gms.measurement.internal.Od
    public final boolean a(int i) {
        throw new UnsupportedOperationException();
    }

    @Override // android.app.Service
    public final void onCreate() {
        super.onCreate();
        a().a();
    }

    @Override // android.app.Service
    public final void onDestroy() {
        a().b();
        super.onDestroy();
    }

    @Override // android.app.Service
    public final void onRebind(Intent intent) {
        a().c(intent);
    }

    @Override // android.app.job.JobService
    public final boolean onStartJob(JobParameters jobParameters) {
        return a().a(jobParameters);
    }

    @Override // android.app.job.JobService
    public final boolean onStopJob(JobParameters jobParameters) {
        return false;
    }

    @Override // android.app.Service
    public final boolean onUnbind(Intent intent) {
        return a().b(intent);
    }
}
