package com.google.android.gms.common.util;

import android.annotation.TargetApi;
import android.content.Context;
import android.os.Build;
import org.apache.http.conn.params.ConnManagerParams;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Boolean f1359a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static Boolean f1360b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static Boolean f1361c;

    public static boolean a() {
        return "user".equals(Build.TYPE);
    }

    @TargetApi(21)
    public static boolean a(Context context) {
        if (f1360b == null) {
            f1360b = Boolean.valueOf(n.g() && context.getPackageManager().hasSystemFeature("cn.google"));
        }
        return f1360b.booleanValue();
    }

    @TargetApi(ConnManagerParams.DEFAULT_MAX_TOTAL_CONNECTIONS)
    public static boolean b(Context context) {
        if (f1359a == null) {
            f1359a = Boolean.valueOf(n.f() && context.getPackageManager().hasSystemFeature("android.hardware.type.watch"));
        }
        return f1359a.booleanValue();
    }

    @TargetApi(26)
    public static boolean c(Context context) {
        if (!b(context)) {
            return false;
        }
        if (n.h()) {
            return a(context) && !n.i();
        }
        return true;
    }

    public static boolean d(Context context) {
        if (f1361c == null) {
            f1361c = Boolean.valueOf(context.getPackageManager().hasSystemFeature("android.hardware.type.iot") || context.getPackageManager().hasSystemFeature("android.hardware.type.embedded"));
        }
        return f1361c.booleanValue();
    }
}
