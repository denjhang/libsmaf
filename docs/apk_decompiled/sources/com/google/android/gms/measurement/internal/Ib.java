package com.google.android.gms.measurement.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class Ib extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ee f1992a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f1993b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f1994c;

    Ib(ee eeVar) {
        com.google.android.gms.common.internal.r.a(eeVar);
        this.f1992a = eeVar;
    }

    public final void a() {
        this.f1992a.p();
        this.f1992a.c().h();
        if (this.f1993b) {
            return;
        }
        this.f1992a.e().registerReceiver(this, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
        this.f1994c = this.f1992a.i().v();
        this.f1992a.d().B().a("Registering connectivity change receiver. Network connected", Boolean.valueOf(this.f1994c));
        this.f1993b = true;
    }

    public final void b() {
        this.f1992a.p();
        this.f1992a.c().h();
        this.f1992a.c().h();
        if (this.f1993b) {
            this.f1992a.d().B().a("Unregistering connectivity change receiver");
            this.f1993b = false;
            this.f1994c = false;
            try {
                this.f1992a.e().unregisterReceiver(this);
            } catch (IllegalArgumentException e2) {
                this.f1992a.d().t().a("Failed to unregister the network broadcast receiver", e2);
            }
        }
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        this.f1992a.p();
        String action = intent.getAction();
        this.f1992a.d().B().a("NetworkBroadcastReceiver received action", action);
        if (!"android.net.conn.CONNECTIVITY_CHANGE".equals(action)) {
            this.f1992a.d().w().a("NetworkBroadcastReceiver received unknown action", action);
            return;
        }
        boolean zV = this.f1992a.i().v();
        if (this.f1994c != zV) {
            this.f1994c = zV;
            this.f1992a.c().a(new Hb(this, zV));
        }
    }
}
