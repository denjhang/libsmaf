package com.google.firebase.iid;

import android.content.BroadcastReceiver;
import android.content.Intent;
import android.util.Log;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class F {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final Intent f2613a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final BroadcastReceiver.PendingResult f2614b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f2615c = false;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final ScheduledFuture<?> f2616d;

    F(final Intent intent, BroadcastReceiver.PendingResult pendingResult, ScheduledExecutorService scheduledExecutorService) {
        this.f2613a = intent;
        this.f2614b = pendingResult;
        this.f2616d = scheduledExecutorService.schedule(new Runnable(this, intent) { // from class: com.google.firebase.iid.E

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final F f2611a;

            /* JADX INFO: renamed from: b, reason: collision with root package name */
            private final Intent f2612b;

            {
                this.f2611a = this;
                this.f2612b = intent;
            }

            @Override // java.lang.Runnable
            public final void run() {
                F f2 = this.f2611a;
                String action = this.f2612b.getAction();
                StringBuilder sb = new StringBuilder(String.valueOf(action).length() + 61);
                sb.append("Service took too long to process intent: ");
                sb.append(action);
                sb.append(" App may get closed.");
                Log.w("EnhancedIntentService", sb.toString());
                f2.a();
            }
        }, 9000L, TimeUnit.MILLISECONDS);
    }

    final synchronized void a() {
        if (!this.f2615c) {
            this.f2614b.finish();
            this.f2616d.cancel(false);
            this.f2615c = true;
        }
    }
}
