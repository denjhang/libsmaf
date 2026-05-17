package com.google.android.gms.measurement;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.google.android.gms.measurement.internal.Rb;
import com.google.android.gms.measurement.internal.Wb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class AppMeasurementInstallReferrerReceiver extends BroadcastReceiver implements Wb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Rb f1896a;

    @Override // com.google.android.gms.measurement.internal.Wb
    public final BroadcastReceiver.PendingResult a() {
        return goAsync();
    }

    @Override // com.google.android.gms.measurement.internal.Wb
    public final void a(Context context, Intent intent) {
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        if (this.f1896a == null) {
            this.f1896a = new Rb(this);
        }
        this.f1896a.a(context, intent);
    }
}
