package com.google.firebase.iid;

import android.os.Binder;
import android.os.Process;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class H extends Binder {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final zzc f2631a;

    H(zzc zzcVar) {
        this.f2631a = zzcVar;
    }

    public final void a(F f2) {
        if (Binder.getCallingUid() != Process.myUid()) {
            throw new SecurityException("Binding only allowed within app");
        }
        if (Log.isLoggable("EnhancedIntentService", 3)) {
            Log.d("EnhancedIntentService", "service received new intent via bind strategy");
        }
        if (this.f2631a.b(f2.f2613a)) {
            f2.a();
            return;
        }
        if (Log.isLoggable("EnhancedIntentService", 3)) {
            Log.d("EnhancedIntentService", "intent being queued for bg execution");
        }
        this.f2631a.f2723a.execute(new G(this, f2));
    }
}
