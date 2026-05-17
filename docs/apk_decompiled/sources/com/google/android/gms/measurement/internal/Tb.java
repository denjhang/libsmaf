package com.google.android.gms.measurement.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.os.Bundle;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Tb implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ _b f2101a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ long f2102b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ Bundle f2103c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ Context f2104d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ C0365wb f2105e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ BroadcastReceiver.PendingResult f2106f;

    Tb(Rb rb, _b _bVar, long j, Bundle bundle, Context context, C0365wb c0365wb, BroadcastReceiver.PendingResult pendingResult) {
        this.f2101a = _bVar;
        this.f2102b = j;
        this.f2103c = bundle;
        this.f2104d = context;
        this.f2105e = c0365wb;
        this.f2106f = pendingResult;
    }

    @Override // java.lang.Runnable
    public final void run() {
        long jA = this.f2101a.p().k.a();
        long j = this.f2102b;
        if (jA > 0 && (j >= jA || j <= 0)) {
            j = jA - 1;
        }
        if (j > 0) {
            this.f2103c.putLong("click_timestamp", j);
        }
        this.f2103c.putString("_cis", "referrer broadcast");
        _b.a(this.f2104d, (com.google.android.gms.internal.measurement.zzv) null).u().a("auto", "_cmp", this.f2103c);
        this.f2105e.B().a("Install campaign recorded");
        BroadcastReceiver.PendingResult pendingResult = this.f2106f;
        if (pendingResult != null) {
            pendingResult.finish();
        }
    }
}
