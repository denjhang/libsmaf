package com.google.android.gms.common.a;

import android.content.Context;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static c f1019a = new c();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private b f1020b = null;

    public static b a(Context context) {
        return f1019a.b(context);
    }

    private final synchronized b b(Context context) {
        if (this.f1020b == null) {
            if (context.getApplicationContext() != null) {
                context = context.getApplicationContext();
            }
            this.f1020b = new b(context);
        }
        return this.f1020b;
    }
}
