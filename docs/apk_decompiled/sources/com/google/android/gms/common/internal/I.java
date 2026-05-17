package com.google.android.gms.common.internal;

import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.IBinder;
import com.google.android.gms.common.internal.AbstractC0071i;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class I implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Set<ServiceConnection> f1207a = new HashSet();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f1208b = 2;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f1209c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private IBinder f1210d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final AbstractC0071i.a f1211e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private ComponentName f1212f;
    private final /* synthetic */ H g;

    public I(H h, AbstractC0071i.a aVar) {
        this.g = h;
        this.f1211e = aVar;
    }

    public final IBinder a() {
        return this.f1210d;
    }

    public final void a(ServiceConnection serviceConnection, String str) {
        com.google.android.gms.common.stats.a unused = this.g.f1206f;
        Context unused2 = this.g.f1204d;
        this.f1211e.a(this.g.f1204d);
        this.f1207a.add(serviceConnection);
    }

    public final void a(String str) {
        this.f1208b = 3;
        this.f1209c = this.g.f1206f.a(this.g.f1204d, str, this.f1211e.a(this.g.f1204d), this, this.f1211e.c());
        if (this.f1209c) {
            this.g.f1205e.sendMessageDelayed(this.g.f1205e.obtainMessage(1, this.f1211e), this.g.h);
        } else {
            this.f1208b = 2;
            try {
                this.g.f1206f.a(this.g.f1204d, this);
            } catch (IllegalArgumentException unused) {
            }
        }
    }

    public final boolean a(ServiceConnection serviceConnection) {
        return this.f1207a.contains(serviceConnection);
    }

    public final ComponentName b() {
        return this.f1212f;
    }

    public final void b(ServiceConnection serviceConnection, String str) {
        com.google.android.gms.common.stats.a unused = this.g.f1206f;
        Context unused2 = this.g.f1204d;
        this.f1207a.remove(serviceConnection);
    }

    public final void b(String str) {
        this.g.f1205e.removeMessages(1, this.f1211e);
        this.g.f1206f.a(this.g.f1204d, this);
        this.f1209c = false;
        this.f1208b = 2;
    }

    public final int c() {
        return this.f1208b;
    }

    public final boolean d() {
        return this.f1209c;
    }

    public final boolean e() {
        return this.f1207a.isEmpty();
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.g.f1203c) {
            this.g.f1205e.removeMessages(1, this.f1211e);
            this.f1210d = iBinder;
            this.f1212f = componentName;
            Iterator<ServiceConnection> it = this.f1207a.iterator();
            while (it.hasNext()) {
                it.next().onServiceConnected(componentName, iBinder);
            }
            this.f1208b = 1;
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        synchronized (this.g.f1203c) {
            this.g.f1205e.removeMessages(1, this.f1211e);
            this.f1210d = null;
            this.f1212f = componentName;
            Iterator<ServiceConnection> it = this.f1207a.iterator();
            while (it.hasNext()) {
                it.next().onServiceDisconnected(componentName);
            }
            this.f1208b = 2;
        }
    }
}
