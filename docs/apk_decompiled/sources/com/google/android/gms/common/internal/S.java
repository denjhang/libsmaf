package com.google.android.gms.common.internal;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class S {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Object f1228a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static boolean f1229b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static String f1230c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static int f1231d;

    public static String a(Context context) {
        c(context);
        return f1230c;
    }

    public static int b(Context context) {
        c(context);
        return f1231d;
    }

    private static void c(Context context) {
        synchronized (f1228a) {
            if (f1229b) {
                return;
            }
            f1229b = true;
            try {
                Bundle bundle = com.google.android.gms.common.a.c.a(context).a(context.getPackageName(), 128).metaData;
                if (bundle == null) {
                    return;
                }
                f1230c = bundle.getString("com.google.app.id");
                f1231d = bundle.getInt("com.google.android.gms.version");
            } catch (PackageManager.NameNotFoundException e2) {
                Log.wtf("MetadataValueReader", "This should never happen.", e2);
            }
        }
    }
}
