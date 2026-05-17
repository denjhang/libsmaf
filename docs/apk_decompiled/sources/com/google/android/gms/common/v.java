package com.google.android.gms.common;

import android.util.Log;
import java.util.concurrent.Callable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final v f1369a = new v(true, null, null);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final boolean f1370b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f1371c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Throwable f1372d;

    v(boolean z, String str, Throwable th) {
        this.f1370b = z;
        this.f1371c = str;
        this.f1372d = th;
    }

    static v a(String str) {
        return new v(false, str, null);
    }

    static v a(String str, Throwable th) {
        return new v(false, str, th);
    }

    static v a(Callable<String> callable) {
        return new x(callable);
    }

    static String a(String str, o oVar, boolean z, boolean z2) {
        return String.format("%s: pkg=%s, sha1=%s, atk=%s, ver=%s", z2 ? "debug cert rejected" : "not whitelisted", str, com.google.android.gms.common.util.j.a(com.google.android.gms.common.util.a.a("SHA-1").digest(oVar.e())), Boolean.valueOf(z), "12451009.false");
    }

    static v b() {
        return f1369a;
    }

    String a() {
        return this.f1371c;
    }

    final void c() {
        if (this.f1370b || !Log.isLoggable("GoogleCertificatesRslt", 3)) {
            return;
        }
        if (this.f1372d != null) {
            Log.d("GoogleCertificatesRslt", a(), this.f1372d);
        } else {
            Log.d("GoogleCertificatesRslt", a());
        }
    }
}
