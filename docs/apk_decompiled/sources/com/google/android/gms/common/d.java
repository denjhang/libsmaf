package com.google.android.gms.common;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import com.google.android.gms.common.internal.J;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f1132a = g.f1154a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final d f1133b = new d();

    d() {
    }

    public static d a() {
        return f1133b;
    }

    private static String a(Context context, String str) {
        StringBuilder sb = new StringBuilder();
        sb.append("gcore_");
        sb.append(f1132a);
        sb.append("-");
        if (!TextUtils.isEmpty(str)) {
            sb.append(str);
        }
        sb.append("-");
        if (context != null) {
            sb.append(context.getPackageName());
        }
        sb.append("-");
        if (context != null) {
            try {
                sb.append(com.google.android.gms.common.a.c.a(context).b(context.getPackageName(), 0).versionCode);
            } catch (PackageManager.NameNotFoundException unused) {
            }
        }
        return sb.toString();
    }

    public int a(Context context) {
        return g.a(context);
    }

    public int a(Context context, int i) {
        int iA = g.a(context, i);
        if (g.b(context, iA)) {
            return 18;
        }
        return iA;
    }

    public PendingIntent a(Context context, int i, int i2) {
        return a(context, i, i2, null);
    }

    public PendingIntent a(Context context, int i, int i2, String str) {
        Intent intentA = a(context, i, str);
        if (intentA == null) {
            return null;
        }
        return PendingIntent.getActivity(context, i2, intentA, 134217728);
    }

    public Intent a(Context context, int i, String str) {
        if (i == 1 || i == 2) {
            return (context == null || !com.google.android.gms.common.util.i.c(context)) ? J.a("com.google.android.gms", a(context, str)) : J.a();
        }
        if (i != 3) {
            return null;
        }
        return J.a("com.google.android.gms");
    }

    public String a(int i) {
        return g.a(i);
    }

    public int b(Context context) {
        return a(context, f1132a);
    }

    public boolean b(int i) {
        return g.b(i);
    }
}
