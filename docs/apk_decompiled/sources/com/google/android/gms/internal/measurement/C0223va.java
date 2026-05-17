package com.google.android.gms.internal.measurement;

import android.net.Uri;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.va, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0223va {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final b.b.b<String, Uri> f1844a = new b.b.b<>();

    public static synchronized Uri a(String str) {
        Uri uri;
        uri = f1844a.get(str);
        if (uri == null) {
            String strValueOf = String.valueOf(Uri.encode(str));
            uri = Uri.parse(strValueOf.length() != 0 ? "content://com.google.android.gms.phenotype/".concat(strValueOf) : new String("content://com.google.android.gms.phenotype/"));
            f1844a.put(str, uri);
        }
        return uri;
    }
}
