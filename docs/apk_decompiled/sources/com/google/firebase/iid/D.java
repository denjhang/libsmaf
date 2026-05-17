package com.google.firebase.iid;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class D extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private RunnableC0407z f2610a;

    public D(RunnableC0407z runnableC0407z) {
        this.f2610a = runnableC0407z;
    }

    public final void a() {
        if (FirebaseInstanceId.f()) {
            Log.d("FirebaseInstanceId", "Connectivity change received registered");
        }
        this.f2610a.a().registerReceiver(this, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        RunnableC0407z runnableC0407z = this.f2610a;
        if (runnableC0407z != null && runnableC0407z.b()) {
            if (FirebaseInstanceId.f()) {
                Log.d("FirebaseInstanceId", "Connectivity changed. Starting background sync.");
            }
            FirebaseInstanceId.a(this.f2610a, 0L);
            this.f2610a.a().unregisterReceiver(this);
            this.f2610a = null;
        }
    }
}
