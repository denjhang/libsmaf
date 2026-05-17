package com.google.android.gms.common;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static h f1159a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Context f1160b;

    private h(Context context) {
        this.f1160b = context.getApplicationContext();
    }

    public static h a(Context context) {
        com.google.android.gms.common.internal.r.a(context);
        synchronized (h.class) {
            if (f1159a == null) {
                m.a(context);
                f1159a = new h(context);
            }
        }
        return f1159a;
    }

    private static o a(PackageInfo packageInfo, o... oVarArr) {
        Signature[] signatureArr = packageInfo.signatures;
        if (signatureArr == null) {
            return null;
        }
        if (signatureArr.length != 1) {
            Log.w("GoogleSignatureVerifier", "Package has more than one signature.");
            return null;
        }
        p pVar = new p(signatureArr[0].toByteArray());
        for (int i = 0; i < oVarArr.length; i++) {
            if (oVarArr[i].equals(pVar)) {
                return oVarArr[i];
            }
        }
        return null;
    }

    private final v a(String str, int i) {
        try {
            PackageInfo packageInfoA = com.google.android.gms.common.a.c.a(this.f1160b).a(str, 64, i);
            boolean zD = g.d(this.f1160b);
            if (packageInfoA == null) {
                return v.a("null pkg");
            }
            if (packageInfoA.signatures.length != 1) {
                return v.a("single cert required");
            }
            p pVar = new p(packageInfoA.signatures[0].toByteArray());
            String str2 = packageInfoA.packageName;
            v vVarA = m.a(str2, pVar, zD, false);
            return (!vVarA.f1370b || packageInfoA.applicationInfo == null || (packageInfoA.applicationInfo.flags & 2) == 0 || !m.a(str2, pVar, false, true).f1370b) ? vVarA : v.a("debuggable release cert app rejected");
        } catch (PackageManager.NameNotFoundException unused) {
            String strValueOf = String.valueOf(str);
            return v.a(strValueOf.length() != 0 ? "no pkg ".concat(strValueOf) : new String("no pkg "));
        }
    }

    public static boolean a(PackageInfo packageInfo, boolean z) {
        if (packageInfo != null && packageInfo.signatures != null) {
            if ((z ? a(packageInfo, r.f1300a) : a(packageInfo, r.f1300a[0])) != null) {
                return true;
            }
        }
        return false;
    }

    public boolean a(int i) {
        v vVarA;
        String[] strArrA = com.google.android.gms.common.a.c.a(this.f1160b).a(i);
        if (strArrA == null || strArrA.length == 0) {
            vVarA = v.a("no pkgs");
        } else {
            vVarA = null;
            for (String str : strArrA) {
                vVarA = a(str, i);
                if (vVarA.f1370b) {
                    break;
                }
            }
        }
        vVarA.c();
        return vVarA.f1370b;
    }

    public boolean a(PackageInfo packageInfo) {
        if (packageInfo == null) {
            return false;
        }
        if (a(packageInfo, false)) {
            return true;
        }
        if (a(packageInfo, true)) {
            if (g.d(this.f1160b)) {
                return true;
            }
            Log.w("GoogleSignatureVerifier", "Test-keys aren't accepted on this build.");
        }
        return false;
    }
}
