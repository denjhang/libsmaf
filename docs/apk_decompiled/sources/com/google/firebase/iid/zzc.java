package com.google.firebase.iid;

import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.util.Log;
import androidx.legacy.content.WakefulBroadcastReceiver;
import java.util.concurrent.ExecutorService;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class zzc extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final ExecutorService f2723a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Binder f2724b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Object f2725c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f2726d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f2727e;

    public zzc() {
        c.a.a.a.d.d.b bVarA = c.a.a.a.d.d.a.a();
        String strValueOf = String.valueOf(zzc.class.getSimpleName());
        this.f2723a = bVarA.a(new com.google.android.gms.common.util.a.a(strValueOf.length() != 0 ? "Firebase-".concat(strValueOf) : new String("Firebase-")), c.a.a.a.d.d.f.f834a);
        this.f2725c = new Object();
        this.f2727e = 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void d(Intent intent) {
        if (intent != null) {
            WakefulBroadcastReceiver.a(intent);
        }
        synchronized (this.f2725c) {
            this.f2727e--;
            if (this.f2727e == 0) {
                stopSelfResult(this.f2726d);
            }
        }
    }

    protected Intent a(Intent intent) {
        return intent;
    }

    public boolean b(Intent intent) {
        return false;
    }

    public abstract void c(Intent intent);

    @Override // android.app.Service
    public final synchronized IBinder onBind(Intent intent) {
        if (Log.isLoggable("EnhancedIntentService", 3)) {
            Log.d("EnhancedIntentService", "Service received bind request");
        }
        if (this.f2724b == null) {
            this.f2724b = new H(this);
        }
        return this.f2724b;
    }

    @Override // android.app.Service
    public final int onStartCommand(Intent intent, int i, int i2) {
        synchronized (this.f2725c) {
            this.f2726d = i2;
            this.f2727e++;
        }
        Intent intentA = a(intent);
        if (intentA == null) {
            d(intent);
            return 2;
        }
        if (b(intentA)) {
            d(intent);
            return 2;
        }
        this.f2723a.execute(new C(this, intentA, intent));
        return 3;
    }
}
