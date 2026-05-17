package com.google.android.gms.common.util;

import android.content.Context;
import android.os.DropBoxManager;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String[] f1352a = {"android.", "com.android.", "dalvik.", "java.", "javax."};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static DropBoxManager f1353b = null;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static boolean f1354c = false;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static int f1355d = -1;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static int f1356e = 0;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static int f1357f = 0;

    public static boolean a(Context context, Throwable th) {
        return a(context, th, 536870912);
    }

    private static boolean a(Context context, Throwable th, int i) {
        try {
            com.google.android.gms.common.internal.r.a(context);
            com.google.android.gms.common.internal.r.a(th);
            return false;
        } catch (Exception e2) {
            Log.e("CrashUtils", "Error adding exception to DropBox!", e2);
            return false;
        }
    }
}
