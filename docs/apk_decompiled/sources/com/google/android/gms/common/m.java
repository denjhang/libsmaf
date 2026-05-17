package com.google.android.gms.common;

import android.content.Context;
import android.os.RemoteException;
import android.os.StrictMode;
import android.util.Log;
import com.google.android.gms.common.internal.O;
import com.google.android.gms.common.internal.P;
import com.google.android.gms.dynamite.DynamiteModule;
import java.util.concurrent.Callable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile O f1290a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Object f1291b = new Object();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static Context f1292c;

    static v a(String str, o oVar, boolean z, boolean z2) {
        StrictMode.ThreadPolicy threadPolicyAllowThreadDiskReads = StrictMode.allowThreadDiskReads();
        try {
            return b(str, oVar, z, z2);
        } finally {
            StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
        }
    }

    static synchronized void a(Context context) {
        if (f1292c != null) {
            Log.w("GoogleCertificates", "GoogleCertificates has been initialized already");
        } else if (context != null) {
            f1292c = context.getApplicationContext();
        }
    }

    private static v b(final String str, final o oVar, final boolean z, boolean z2) {
        try {
            if (f1290a == null) {
                com.google.android.gms.common.internal.r.a(f1292c);
                synchronized (f1291b) {
                    if (f1290a == null) {
                        f1290a = P.a(DynamiteModule.a(f1292c, DynamiteModule.k, "com.google.android.gms.googlecertificates").a("com.google.android.gms.common.GoogleCertificatesImpl"));
                    }
                }
            }
            com.google.android.gms.common.internal.r.a(f1292c);
            try {
                return f1290a.a(new zzk(str, oVar, z, z2), c.a.a.a.c.b.a(f1292c.getPackageManager())) ? v.b() : v.a((Callable<String>) new Callable(z, str, oVar) { // from class: com.google.android.gms.common.n

                    /* JADX INFO: renamed from: a, reason: collision with root package name */
                    private final boolean f1293a;

                    /* JADX INFO: renamed from: b, reason: collision with root package name */
                    private final String f1294b;

                    /* JADX INFO: renamed from: c, reason: collision with root package name */
                    private final o f1295c;

                    {
                        this.f1293a = z;
                        this.f1294b = str;
                        this.f1295c = oVar;
                    }

                    @Override // java.util.concurrent.Callable
                    public final Object call() {
                        boolean z3 = this.f1293a;
                        String str2 = this.f1294b;
                        o oVar2 = this.f1295c;
                        return v.a(str2, oVar2, z3, !z3 && m.b(str2, oVar2, true, false).f1370b);
                    }
                });
            } catch (RemoteException e2) {
                Log.e("GoogleCertificates", "Failed to get Google certificates from remote", e2);
                return v.a("module call", e2);
            }
        } catch (DynamiteModule.a e3) {
            Log.e("GoogleCertificates", "Failed to get Google certificates from remote", e3);
            String strValueOf = String.valueOf(e3.getMessage());
            return v.a(strValueOf.length() != 0 ? "module init: ".concat(strValueOf) : new String("module init: "), e3);
        }
    }
}
