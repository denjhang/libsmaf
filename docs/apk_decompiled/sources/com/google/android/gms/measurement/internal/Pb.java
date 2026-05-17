package com.google.android.gms.measurement.internal;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.google.android.gms.internal.measurement.AbstractBinderC0121fc;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Pb implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f2068a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ Qb f2069b;

    Pb(Qb qb, String str) {
        this.f2069b = qb;
        this.f2068a = str;
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        if (iBinder == null) {
            this.f2069b.f2080a.d().w().a("Install Referrer connection returned with null binder");
            return;
        }
        try {
            com.google.android.gms.internal.measurement.Ja jaA = AbstractBinderC0121fc.a(iBinder);
            if (jaA == null) {
                this.f2069b.f2080a.d().w().a("Install Referrer Service implementation was not found");
            } else {
                this.f2069b.f2080a.d().z().a("Install Referrer Service connected");
                this.f2069b.f2080a.c().a(new Sb(this, jaA, this));
            }
        } catch (Exception e2) {
            this.f2069b.f2080a.d().w().a("Exception occurred while calling Install Referrer API", e2);
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        this.f2069b.f2080a.d().z().a("Install Referrer Service disconnected");
    }
}
