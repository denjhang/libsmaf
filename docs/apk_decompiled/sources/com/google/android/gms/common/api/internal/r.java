package com.google.android.gms.common.api.internal;

import android.util.Log;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.api.internal.C0055b;
import java.util.Collections;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class r implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ ConnectionResult f1105a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ C0055b.c f1106b;

    r(C0055b.c cVar, ConnectionResult connectionResult) {
        this.f1106b = cVar;
        this.f1105a = connectionResult;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (!this.f1105a.e()) {
            ((C0055b.a) C0055b.this.m.get(this.f1106b.f1082b)).a(this.f1105a);
            return;
        }
        C0055b.c.a(this.f1106b, true);
        if (this.f1106b.f1081a.g()) {
            this.f1106b.a();
            return;
        }
        try {
            this.f1106b.f1081a.a(null, Collections.emptySet());
        } catch (SecurityException e2) {
            Log.e("GoogleApiManager", "Failed to get service from broker. ", e2);
            ((C0055b.a) C0055b.this.m.get(this.f1106b.f1082b)).a(new ConnectionResult(10));
        }
    }
}
