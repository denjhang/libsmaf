package com.google.android.gms.measurement;

import android.app.Service;
import android.app.job.JobParameters;
import android.content.Intent;
import android.os.IBinder;
import androidx.legacy.content.WakefulBroadcastReceiver;
import com.google.android.gms.measurement.internal.Kd;
import com.google.android.gms.measurement.internal.Od;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class AppMeasurementService extends Service implements Od {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Kd<AppMeasurementService> f1899a;

    private final Kd<AppMeasurementService> a() {
        if (this.f1899a == null) {
            this.f1899a = new Kd<>(this);
        }
        return this.f1899a;
    }

    @Override // com.google.android.gms.measurement.internal.Od
    public final void a(JobParameters jobParameters, boolean z) {
        throw new UnsupportedOperationException();
    }

    @Override // com.google.android.gms.measurement.internal.Od
    public final void a(Intent intent) {
        WakefulBroadcastReceiver.a(intent);
    }

    @Override // com.google.android.gms.measurement.internal.Od
    public final boolean a(int i) {
        return stopSelfResult(i);
    }

    @Override // android.app.Service
    public final IBinder onBind(Intent intent) {
        return a().a(intent);
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

    @Override // android.app.Service
    public final int onStartCommand(Intent intent, int i, int i2) {
        return a().a(intent, i, i2);
    }

    @Override // android.app.Service
    public final boolean onUnbind(Intent intent) {
        return a().b(intent);
    }
}
