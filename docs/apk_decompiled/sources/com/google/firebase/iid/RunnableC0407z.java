package com.google.firebase.iid;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.PowerManager;
import android.util.Log;
import java.io.IOException;

/* JADX INFO: renamed from: com.google.firebase.iid.z, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0407z implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final long f2719a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final PowerManager.WakeLock f2720b = ((PowerManager) a().getSystemService("power")).newWakeLock(1, "fiid-sync");

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final FirebaseInstanceId f2721c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final B f2722d;

    RunnableC0407z(FirebaseInstanceId firebaseInstanceId, C0398p c0398p, B b2, long j) {
        this.f2721c = firebaseInstanceId;
        this.f2722d = b2;
        this.f2719a = j;
        this.f2720b.setReferenceCounted(false);
    }

    private final boolean c() {
        A aD = this.f2721c.d();
        if (!this.f2721c.j() && !this.f2721c.a(aD)) {
            return true;
        }
        try {
            String strE = this.f2721c.e();
            if (strE == null) {
                Log.e("FirebaseInstanceId", "Token retrieval failed: null");
                return false;
            }
            if (Log.isLoggable("FirebaseInstanceId", 3)) {
                Log.d("FirebaseInstanceId", "Token successfully retrieved");
            }
            if (aD == null || (aD != null && !strE.equals(aD.f2601b))) {
                Intent intent = new Intent("com.google.firebase.messaging.NEW_TOKEN");
                intent.putExtra("token", strE);
                Context contextA = a();
                Intent intent2 = new Intent(contextA, (Class<?>) FirebaseInstanceIdReceiver.class);
                intent2.setAction("com.google.firebase.MESSAGING_EVENT");
                intent2.putExtra("wrapped_intent", intent);
                contextA.sendBroadcast(intent2);
            }
            return true;
        } catch (IOException | SecurityException e2) {
            String strValueOf = String.valueOf(e2.getMessage());
            Log.e("FirebaseInstanceId", strValueOf.length() != 0 ? "Token retrieval failed: ".concat(strValueOf) : new String("Token retrieval failed: "));
            return false;
        }
    }

    final Context a() {
        return this.f2721c.c().b();
    }

    final boolean b() {
        ConnectivityManager connectivityManager = (ConnectivityManager) a().getSystemService("connectivity");
        NetworkInfo activeNetworkInfo = connectivityManager != null ? connectivityManager.getActiveNetworkInfo() : null;
        return activeNetworkInfo != null && activeNetworkInfo.isConnected();
    }

    @Override // java.lang.Runnable
    @SuppressLint({"Wakelock"})
    public final void run() {
        boolean zA;
        try {
            if (C0406y.a().a(a())) {
                this.f2720b.acquire();
            }
            this.f2721c.a(true);
            if (!this.f2721c.h()) {
                this.f2721c.a(false);
                if (zA) {
                    return;
                } else {
                    return;
                }
            }
            if (C0406y.a().b(a()) && !b()) {
                new D(this).a();
                if (C0406y.a().a(a())) {
                    this.f2720b.release();
                    return;
                }
                return;
            }
            if (c() && this.f2722d.a(this.f2721c)) {
                this.f2721c.a(false);
            } else {
                this.f2721c.a(this.f2719a);
            }
            if (C0406y.a().a(a())) {
                this.f2720b.release();
            }
        } finally {
            if (C0406y.a().a(a())) {
                this.f2720b.release();
            }
        }
    }
}
