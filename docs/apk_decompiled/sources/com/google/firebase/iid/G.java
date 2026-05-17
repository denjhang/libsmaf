package com.google.firebase.iid;

import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class G implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ F f2629a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ H f2630b;

    G(H h, F f2) {
        this.f2630b = h;
        this.f2629a = f2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (Log.isLoggable("EnhancedIntentService", 3)) {
            Log.d("EnhancedIntentService", "bg processing of the intent starting now");
        }
        this.f2630b.f2631a.c(this.f2629a.f2613a);
        this.f2629a.a();
    }
}
