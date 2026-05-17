package com.google.android.gms.measurement.internal;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.DeadObjectException;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.RemoteException;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.internal.AbstractC0065c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ed implements ServiceConnection, AbstractC0065c.a, AbstractC0065c.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private volatile boolean f1951a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private volatile C0370xb f1952b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ C0318md f1953c;

    protected Ed(C0318md c0318md) {
        this.f1953c = c0318md;
    }

    static /* synthetic */ boolean a(Ed ed, boolean z) {
        ed.f1951a = false;
        return false;
    }

    public final void a() {
        if (this.f1952b != null && (this.f1952b.isConnected() || this.f1952b.b())) {
            this.f1952b.a();
        }
        this.f1952b = null;
    }

    public final void a(Intent intent) {
        this.f1953c.h();
        Context contextE = this.f1953c.e();
        com.google.android.gms.common.stats.a aVarA = com.google.android.gms.common.stats.a.a();
        synchronized (this) {
            if (this.f1951a) {
                this.f1953c.d().B().a("Connection attempt already in progress");
                return;
            }
            this.f1953c.d().B().a("Using local app measurement service");
            this.f1951a = true;
            aVarA.a(contextE, intent, this.f1953c.f2335c, 129);
        }
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c.b
    public final void a(ConnectionResult connectionResult) {
        com.google.android.gms.common.internal.r.a("MeasurementServiceConnection.onConnectionFailed");
        C0365wb c0365wbQ = this.f1953c.f2438a.q();
        if (c0365wbQ != null) {
            c0365wbQ.w().a("Service connection failed", connectionResult);
        }
        synchronized (this) {
            this.f1951a = false;
            this.f1952b = null;
        }
        this.f1953c.c().a(new Hd(this));
    }

    public final void b() {
        this.f1953c.h();
        Context contextE = this.f1953c.e();
        synchronized (this) {
            if (this.f1951a) {
                this.f1953c.d().B().a("Connection attempt already in progress");
                return;
            }
            if (this.f1952b != null && (this.f1952b.b() || this.f1952b.isConnected())) {
                this.f1953c.d().B().a("Already awaiting connection attempt");
                return;
            }
            this.f1952b = new C0370xb(contextE, Looper.getMainLooper(), this, this);
            this.f1953c.d().B().a("Connecting to remote service");
            this.f1951a = true;
            this.f1952b.h();
        }
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c.a
    public final void c(int i) {
        com.google.android.gms.common.internal.r.a("MeasurementServiceConnection.onConnectionSuspended");
        this.f1953c.d().A().a("Service connection suspended");
        this.f1953c.c().a(new Id(this));
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c.a
    public final void c(Bundle bundle) {
        com.google.android.gms.common.internal.r.a("MeasurementServiceConnection.onConnected");
        synchronized (this) {
            try {
                this.f1953c.c().a(new Fd(this, this.f1952b.r()));
            } catch (DeadObjectException | IllegalStateException unused) {
                this.f1952b = null;
                this.f1951a = false;
            }
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        com.google.android.gms.common.internal.r.a("MeasurementServiceConnection.onServiceConnected");
        synchronized (this) {
            if (iBinder == null) {
                this.f1951a = false;
                this.f1953c.d().t().a("Service connected with null binder");
                return;
            }
            InterfaceC0326ob c0336qb = null;
            try {
                String interfaceDescriptor = iBinder.getInterfaceDescriptor();
                if ("com.google.android.gms.measurement.internal.IMeasurementService".equals(interfaceDescriptor)) {
                    if (iBinder != null) {
                        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.measurement.internal.IMeasurementService");
                        c0336qb = iInterfaceQueryLocalInterface instanceof InterfaceC0326ob ? (InterfaceC0326ob) iInterfaceQueryLocalInterface : new C0336qb(iBinder);
                    }
                    this.f1953c.d().B().a("Bound to IMeasurementService interface");
                } else {
                    this.f1953c.d().t().a("Got binder with a wrong descriptor", interfaceDescriptor);
                }
            } catch (RemoteException unused) {
                this.f1953c.d().t().a("Service connect failed to get IMeasurementService");
            }
            if (c0336qb == null) {
                this.f1951a = false;
                try {
                    com.google.android.gms.common.stats.a.a().a(this.f1953c.e(), this.f1953c.f2335c);
                } catch (IllegalArgumentException unused2) {
                }
            } else {
                this.f1953c.c().a(new Dd(this, c0336qb));
            }
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        com.google.android.gms.common.internal.r.a("MeasurementServiceConnection.onServiceDisconnected");
        this.f1953c.d().A().a("Service disconnected");
        this.f1953c.c().a(new Gd(this, componentName));
    }
}
