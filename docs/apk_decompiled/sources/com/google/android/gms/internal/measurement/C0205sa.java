package com.google.android.gms.internal.measurement;

import android.content.Context;
import android.content.pm.ProviderInfo;
import android.net.Uri;
import android.util.Log;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.sa, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0205sa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile Ha<Boolean> f1806a = Ha.c();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Object f1807b = new Object();

    private static boolean a(Context context) {
        return (context.getPackageManager().getApplicationInfo("com.google.android.gms", 0).flags & 129) != 0;
    }

    public static boolean a(Context context, Uri uri) {
        ProviderInfo providerInfoResolveContentProvider;
        String authority = uri.getAuthority();
        boolean z = false;
        if (!"com.google.android.gms.phenotype".equals(authority)) {
            StringBuilder sb = new StringBuilder(String.valueOf(authority).length() + 91);
            sb.append(authority);
            sb.append(" is an unsupported authority. Only com.google.android.gms.phenotype authority is supported.");
            Log.e("PhenotypeClientHelper", sb.toString());
            return false;
        }
        if (!f1806a.a()) {
            synchronized (f1807b) {
                if (f1806a.a()) {
                    return f1806a.b().booleanValue();
                }
                if (("com.google.android.gms".equals(context.getPackageName()) || ((providerInfoResolveContentProvider = context.getPackageManager().resolveContentProvider("com.google.android.gms.phenotype", 0)) != null && "com.google.android.gms".equals(providerInfoResolveContentProvider.packageName))) && a(context)) {
                    z = true;
                }
                f1806a = Ha.a(Boolean.valueOf(z));
            }
        }
        return f1806a.b().booleanValue();
    }
}
