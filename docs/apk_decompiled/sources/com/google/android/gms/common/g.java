package com.google.android.gms.common;

import android.annotation.TargetApi;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageInstaller;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.UserManager;
import android.util.Log;
import com.google.android.gms.common.internal.S;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    @Deprecated
    public static final int f1154a = 12451000;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static boolean f1155b = false;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static boolean f1156c = false;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    static final AtomicBoolean f1157d = new AtomicBoolean();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final AtomicBoolean f1158e = new AtomicBoolean();

    @Deprecated
    public static int a(Context context) {
        try {
            return context.getPackageManager().getPackageInfo("com.google.android.gms", 0).versionCode;
        } catch (PackageManager.NameNotFoundException unused) {
            Log.w("GooglePlayServicesUtil", "Google Play services is missing.");
            return 0;
        }
    }

    @Deprecated
    public static int a(Context context, int i) {
        try {
            context.getResources().getString(i.common_google_play_services_unknown_issue);
        } catch (Throwable unused) {
            Log.e("GooglePlayServicesUtil", "The Google Play services resources were not found. Check your project configuration to ensure that the resources are included.");
        }
        if (!"com.google.android.gms".equals(context.getPackageName()) && !f1158e.get()) {
            int iB = S.b(context);
            if (iB == 0) {
                throw new IllegalStateException("A required meta-data tag in your app's AndroidManifest.xml does not exist.  You must have the following declaration within the <application> element:     <meta-data android:name=\"com.google.android.gms.version\" android:value=\"@integer/google_play_services_version\" />");
            }
            int i2 = f1154a;
            if (iB != i2) {
                StringBuilder sb = new StringBuilder(320);
                sb.append("The meta-data tag in your app's AndroidManifest.xml does not have the right value.  Expected ");
                sb.append(i2);
                sb.append(" but found ");
                sb.append(iB);
                sb.append(".  You must have the following declaration within the <application> element:     <meta-data android:name=\"com.google.android.gms.version\" android:value=\"@integer/google_play_services_version\" />");
                throw new IllegalStateException(sb.toString());
            }
        }
        return a(context, (com.google.android.gms.common.util.i.c(context) || com.google.android.gms.common.util.i.d(context)) ? false : true, i);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0038  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static int a(android.content.Context r8, boolean r9, int r10) {
        /*
            java.lang.String r0 = "com.google.android.gms"
            r1 = 1
            r2 = 0
            if (r10 < 0) goto L8
            r3 = 1
            goto L9
        L8:
            r3 = 0
        L9:
            com.google.android.gms.common.internal.r.a(r3)
            android.content.pm.PackageManager r3 = r8.getPackageManager()
            r4 = 0
            r5 = 9
            java.lang.String r6 = "GooglePlayServicesUtil"
            if (r9 == 0) goto L26
            java.lang.String r4 = "com.android.vending"
            r7 = 8256(0x2040, float:1.1569E-41)
            android.content.pm.PackageInfo r4 = r3.getPackageInfo(r4, r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L20
            goto L26
        L20:
            java.lang.String r8 = "Google Play Store is missing."
        L22:
            android.util.Log.w(r6, r8)
            return r5
        L26:
            r7 = 64
            android.content.pm.PackageInfo r7 = r3.getPackageInfo(r0, r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L96
            com.google.android.gms.common.h.a(r8)
            boolean r8 = com.google.android.gms.common.h.a(r7, r1)
            if (r8 != 0) goto L38
            java.lang.String r8 = "Google Play services signature invalid."
            goto L22
        L38:
            if (r9 == 0) goto L51
            boolean r8 = com.google.android.gms.common.h.a(r4, r1)
            if (r8 == 0) goto L4e
            android.content.pm.Signature[] r8 = r4.signatures
            r8 = r8[r2]
            android.content.pm.Signature[] r9 = r7.signatures
            r9 = r9[r2]
            boolean r8 = r8.equals(r9)
            if (r8 != 0) goto L51
        L4e:
            java.lang.String r8 = "Google Play Store signature invalid."
            goto L22
        L51:
            int r8 = r7.versionCode
            int r8 = com.google.android.gms.common.util.r.a(r8)
            int r9 = com.google.android.gms.common.util.r.a(r10)
            if (r8 >= r9) goto L7f
            int r8 = r7.versionCode
            r9 = 77
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r9)
            java.lang.String r9 = "Google Play services out of date.  Requires "
            r0.append(r9)
            r0.append(r10)
            java.lang.String r9 = " but found "
            r0.append(r9)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            android.util.Log.w(r6, r8)
            r8 = 2
            return r8
        L7f:
            android.content.pm.ApplicationInfo r8 = r7.applicationInfo
            if (r8 != 0) goto L8f
            android.content.pm.ApplicationInfo r8 = r3.getApplicationInfo(r0, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L88
            goto L8f
        L88:
            r8 = move-exception
            java.lang.String r9 = "Google Play services missing when getting application info."
            android.util.Log.wtf(r6, r9, r8)
            return r1
        L8f:
            boolean r8 = r8.enabled
            if (r8 != 0) goto L95
            r8 = 3
            return r8
        L95:
            return r2
        L96:
            java.lang.String r8 = "Google Play services is missing."
            android.util.Log.w(r6, r8)
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.common.g.a(android.content.Context, boolean, int):int");
    }

    @Deprecated
    public static String a(int i) {
        return ConnectionResult.a(i);
    }

    @TargetApi(19)
    @Deprecated
    public static boolean a(Context context, int i, String str) {
        return com.google.android.gms.common.util.q.a(context, i, str);
    }

    @TargetApi(21)
    static boolean a(Context context, String str) {
        ApplicationInfo applicationInfo;
        boolean zEquals = str.equals("com.google.android.gms");
        if (com.google.android.gms.common.util.n.g()) {
            try {
                Iterator<PackageInstaller.SessionInfo> it = context.getPackageManager().getPackageInstaller().getAllSessions().iterator();
                while (it.hasNext()) {
                    if (str.equals(it.next().getAppPackageName())) {
                        return true;
                    }
                }
            } catch (Exception unused) {
                return false;
            }
        }
        try {
            applicationInfo = context.getPackageManager().getApplicationInfo(str, 8192);
        } catch (PackageManager.NameNotFoundException unused2) {
        }
        return zEquals ? applicationInfo.enabled : applicationInfo.enabled && !e(context);
    }

    public static Context b(Context context) {
        try {
            return context.createPackageContext("com.google.android.gms", 3);
        } catch (PackageManager.NameNotFoundException unused) {
            return null;
        }
    }

    @Deprecated
    public static boolean b(int i) {
        return i == 1 || i == 2 || i == 3 || i == 9;
    }

    @Deprecated
    public static boolean b(Context context, int i) {
        if (i == 18) {
            return true;
        }
        if (i == 1) {
            return a(context, "com.google.android.gms");
        }
        return false;
    }

    public static Resources c(Context context) {
        try {
            return context.getPackageManager().getResourcesForApplication("com.google.android.gms");
        } catch (PackageManager.NameNotFoundException unused) {
            return null;
        }
    }

    public static boolean d(Context context) {
        try {
            if (!f1156c) {
                try {
                    PackageInfo packageInfoB = com.google.android.gms.common.a.c.a(context).b("com.google.android.gms", 64);
                    h.a(context);
                    if (packageInfoB == null || h.a(packageInfoB, false) || !h.a(packageInfoB, true)) {
                        f1155b = false;
                    } else {
                        f1155b = true;
                    }
                } catch (PackageManager.NameNotFoundException e2) {
                    Log.w("GooglePlayServicesUtil", "Cannot find Google Play services package name.", e2);
                }
            }
            return f1155b || !com.google.android.gms.common.util.i.a();
        } finally {
            f1156c = true;
        }
    }

    @TargetApi(18)
    public static boolean e(Context context) {
        Bundle applicationRestrictions;
        return com.google.android.gms.common.util.n.d() && (applicationRestrictions = ((UserManager) context.getSystemService("user")).getApplicationRestrictions(context.getPackageName())) != null && "true".equals(applicationRestrictions.getString("restricted_profile"));
    }
}
