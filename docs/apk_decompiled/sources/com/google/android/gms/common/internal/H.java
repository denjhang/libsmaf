package com.google.android.gms.common.internal;

import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import com.google.android.gms.common.internal.AbstractC0071i;
import java.util.HashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class H extends AbstractC0071i implements Handler.Callback {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Context f1204d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Handler f1205e;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final HashMap<AbstractC0071i.a, I> f1203c = new HashMap<>();

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final com.google.android.gms.common.stats.a f1206f = com.google.android.gms.common.stats.a.a();
    private final long g = 5000;
    private final long h = 300000;

    H(Context context) {
        this.f1204d = context.getApplicationContext();
        this.f1205e = new c.a.a.a.d.c.d(context.getMainLooper(), this);
    }

    @Override // com.google.android.gms.common.internal.AbstractC0071i
    protected final boolean a(AbstractC0071i.a aVar, ServiceConnection serviceConnection, String str) {
        boolean zD;
        r.a(serviceConnection, "ServiceConnection must not be null");
        synchronized (this.f1203c) {
            I i = this.f1203c.get(aVar);
            if (i == null) {
                i = new I(this, aVar);
                i.a(serviceConnection, str);
                i.a(str);
                this.f1203c.put(aVar, i);
            } else {
                this.f1205e.removeMessages(0, aVar);
                if (i.a(serviceConnection)) {
                    String strValueOf = String.valueOf(aVar);
                    StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 81);
                    sb.append("Trying to bind a GmsServiceConnection that was already connected before.  config=");
                    sb.append(strValueOf);
                    throw new IllegalStateException(sb.toString());
                }
                i.a(serviceConnection, str);
                int iC = i.c();
                if (iC == 1) {
                    serviceConnection.onServiceConnected(i.b(), i.a());
                } else if (iC == 2) {
                    i.a(str);
                }
            }
            zD = i.d();
        }
        return zD;
    }

    @Override // com.google.android.gms.common.internal.AbstractC0071i
    protected final void b(AbstractC0071i.a aVar, ServiceConnection serviceConnection, String str) {
        r.a(serviceConnection, "ServiceConnection must not be null");
        synchronized (this.f1203c) {
            I i = this.f1203c.get(aVar);
            if (i == null) {
                String strValueOf = String.valueOf(aVar);
                StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 50);
                sb.append("Nonexistent connection status for service config: ");
                sb.append(strValueOf);
                throw new IllegalStateException(sb.toString());
            }
            if (!i.a(serviceConnection)) {
                String strValueOf2 = String.valueOf(aVar);
                StringBuilder sb2 = new StringBuilder(String.valueOf(strValueOf2).length() + 76);
                sb2.append("Trying to unbind a GmsServiceConnection  that was not bound before.  config=");
                sb2.append(strValueOf2);
                throw new IllegalStateException(sb2.toString());
            }
            i.b(serviceConnection, str);
            if (i.e()) {
                this.f1205e.sendMessageDelayed(this.f1205e.obtainMessage(0, aVar), this.g);
            }
        }
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        int i = message.what;
        if (i == 0) {
            synchronized (this.f1203c) {
                AbstractC0071i.a aVar = (AbstractC0071i.a) message.obj;
                I i2 = this.f1203c.get(aVar);
                if (i2 != null && i2.e()) {
                    if (i2.d()) {
                        i2.b("GmsClientSupervisor");
                    }
                    this.f1203c.remove(aVar);
                }
            }
            return true;
        }
        if (i != 1) {
            return false;
        }
        synchronized (this.f1203c) {
            AbstractC0071i.a aVar2 = (AbstractC0071i.a) message.obj;
            I i3 = this.f1203c.get(aVar2);
            if (i3 != null && i3.c() == 3) {
                String strValueOf = String.valueOf(aVar2);
                StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 47);
                sb.append("Timeout waiting for ServiceConnection callback ");
                sb.append(strValueOf);
                Log.e("GmsClientSupervisor", sb.toString(), new Exception());
                ComponentName componentNameB = i3.b();
                if (componentNameB == null) {
                    componentNameB = aVar2.a();
                }
                if (componentNameB == null) {
                    componentNameB = new ComponentName(aVar2.b(), "unknown");
                }
                i3.onServiceDisconnected(componentNameB);
            }
        }
        return true;
    }
}
