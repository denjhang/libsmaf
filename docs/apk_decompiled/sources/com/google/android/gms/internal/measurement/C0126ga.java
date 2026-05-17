package com.google.android.gms.internal.measurement;

import android.annotation.TargetApi;
import android.content.Context;
import android.os.Build;
import android.os.UserManager;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ga, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class C0126ga {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static UserManager f1708a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static volatile boolean f1709b = !a();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static boolean f1710c = false;

    private C0126ga() {
    }

    public static boolean a() {
        return Build.VERSION.SDK_INT >= 24;
    }

    public static boolean a(Context context) {
        return !a() || c(context);
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x002a, code lost:
    
        r4 = true;
     */
    @android.annotation.TargetApi(24)
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean b(android.content.Context r6) {
        /*
            r0 = 1
            r1 = 1
        L2:
            r2 = 2
            r3 = 0
            r4 = 0
            if (r1 > r2) goto L39
            android.os.UserManager r2 = com.google.android.gms.internal.measurement.C0126ga.f1708a
            if (r2 != 0) goto L15
            java.lang.Class<android.os.UserManager> r2 = android.os.UserManager.class
            java.lang.Object r2 = r6.getSystemService(r2)
            android.os.UserManager r2 = (android.os.UserManager) r2
            com.google.android.gms.internal.measurement.C0126ga.f1708a = r2
        L15:
            android.os.UserManager r2 = com.google.android.gms.internal.measurement.C0126ga.f1708a
            if (r2 != 0) goto L1a
            return r0
        L1a:
            boolean r5 = r2.isUserUnlocked()     // Catch: java.lang.NullPointerException -> L2c
            if (r5 != 0) goto L2a
            android.os.UserHandle r5 = android.os.Process.myUserHandle()     // Catch: java.lang.NullPointerException -> L2c
            boolean r6 = r2.isUserRunning(r5)     // Catch: java.lang.NullPointerException -> L2c
            if (r6 != 0) goto L39
        L2a:
            r4 = 1
            goto L39
        L2c:
            r2 = move-exception
            java.lang.String r4 = "DirectBootUtils"
            java.lang.String r5 = "Failed to check if user is unlocked."
            android.util.Log.w(r4, r5, r2)
            com.google.android.gms.internal.measurement.C0126ga.f1708a = r3
            int r1 = r1 + 1
            goto L2
        L39:
            if (r4 == 0) goto L3d
            com.google.android.gms.internal.measurement.C0126ga.f1708a = r3
        L3d:
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.C0126ga.b(android.content.Context):boolean");
    }

    @TargetApi(24)
    private static boolean c(Context context) {
        if (f1709b) {
            return true;
        }
        synchronized (C0126ga.class) {
            if (f1709b) {
                return true;
            }
            boolean zB = b(context);
            if (zB) {
                f1709b = zB;
            }
            return zB;
        }
    }
}
