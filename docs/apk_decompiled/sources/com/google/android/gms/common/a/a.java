package com.google.android.gms.common.a;

import android.content.Context;
import com.google.android.gms.common.util.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Context f1016a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static Boolean f1017b;

    public static synchronized boolean a(Context context) {
        boolean zValueOf;
        Context applicationContext = context.getApplicationContext();
        if (f1016a != null && f1017b != null && f1016a == applicationContext) {
            return f1017b.booleanValue();
        }
        f1017b = null;
        if (!n.i()) {
            try {
                context.getClassLoader().loadClass("com.google.android.instantapps.supervisor.InstantAppsRuntime");
                f1017b = true;
            } catch (ClassNotFoundException unused) {
                zValueOf = false;
                f1017b = zValueOf;
            }
            f1016a = applicationContext;
            return f1017b.booleanValue();
        }
        zValueOf = Boolean.valueOf(applicationContext.getPackageManager().isInstantApp());
        f1017b = zValueOf;
        f1016a = applicationContext;
        return f1017b.booleanValue();
    }
}
