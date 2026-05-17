package com.google.android.gms.common.api.internal;

import android.content.Context;
import android.content.res.Resources;
import android.text.TextUtils;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.internal.C0082u;
import com.google.android.gms.common.internal.S;

/* JADX INFO: renamed from: com.google.android.gms.common.api.internal.c, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Deprecated
public final class C0056c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f1087a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static C0056c f1088b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f1089c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Status f1090d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final boolean f1091e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final boolean f1092f;

    C0056c(Context context) {
        Resources resources = context.getResources();
        int identifier = resources.getIdentifier("google_app_measurement_enable", "integer", resources.getResourcePackageName(com.google.android.gms.common.i.common_google_play_services_unknown_issue));
        if (identifier != 0) {
            z = resources.getInteger(identifier) != 0;
            this.f1092f = !z;
        } else {
            this.f1092f = false;
        }
        this.f1091e = z;
        String strA = S.a(context);
        strA = strA == null ? new C0082u(context).a("google_app_id") : strA;
        if (TextUtils.isEmpty(strA)) {
            this.f1090d = new Status(10, "Missing google app id value from from string resources with name google_app_id.");
            this.f1089c = null;
        } else {
            this.f1089c = strA;
            this.f1090d = Status.f1024a;
        }
    }

    public static Status a(Context context) {
        Status status;
        com.google.android.gms.common.internal.r.a(context, "Context must not be null.");
        synchronized (f1087a) {
            if (f1088b == null) {
                f1088b = new C0056c(context);
            }
            status = f1088b.f1090d;
        }
        return status;
    }

    private static C0056c a(String str) {
        C0056c c0056c;
        synchronized (f1087a) {
            if (f1088b == null) {
                StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 34);
                sb.append("Initialize must be called before ");
                sb.append(str);
                sb.append(".");
                throw new IllegalStateException(sb.toString());
            }
            c0056c = f1088b;
        }
        return c0056c;
    }

    public static String a() {
        return a("getGoogleAppId").f1089c;
    }

    public static boolean b() {
        return a("isMeasurementExplicitlyDisabled").f1092f;
    }
}
