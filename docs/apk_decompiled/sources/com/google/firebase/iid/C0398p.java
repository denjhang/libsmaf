package com.google.firebase.iid;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.util.Base64;
import android.util.Log;
import java.security.KeyPair;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.List;

/* JADX INFO: renamed from: com.google.firebase.iid.p, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0398p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f2692a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private String f2693b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f2694c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f2695d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f2696e = 0;

    public C0398p(Context context) {
        this.f2692a = context;
    }

    private final PackageInfo a(String str) {
        try {
            return this.f2692a.getPackageManager().getPackageInfo(str, 0);
        } catch (PackageManager.NameNotFoundException e2) {
            String strValueOf = String.valueOf(e2);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 23);
            sb.append("Failed to find package ");
            sb.append(strValueOf);
            Log.w("FirebaseInstanceId", sb.toString());
            return null;
        }
    }

    public static String a(c.a.b.d dVar) {
        String strB = dVar.e().b();
        if (strB != null) {
            return strB;
        }
        String strA = dVar.e().a();
        if (!strA.startsWith("1:")) {
            return strA;
        }
        String[] strArrSplit = strA.split(":");
        if (strArrSplit.length < 2) {
            return null;
        }
        String str = strArrSplit[1];
        if (str.isEmpty()) {
            return null;
        }
        return str;
    }

    public static String a(KeyPair keyPair) {
        try {
            byte[] bArrDigest = MessageDigest.getInstance("SHA1").digest(keyPair.getPublic().getEncoded());
            bArrDigest[0] = (byte) ((bArrDigest[0] & 15) + 112);
            return Base64.encodeToString(bArrDigest, 0, 8, 11);
        } catch (NoSuchAlgorithmException unused) {
            Log.w("FirebaseInstanceId", "Unexpected error, device missing required algorithms");
            return null;
        }
    }

    private final synchronized void e() {
        PackageInfo packageInfoA = a(this.f2692a.getPackageName());
        if (packageInfoA != null) {
            this.f2693b = Integer.toString(packageInfoA.versionCode);
            this.f2694c = packageInfoA.versionName;
        }
    }

    public final synchronized int a() {
        if (this.f2696e != 0) {
            return this.f2696e;
        }
        PackageManager packageManager = this.f2692a.getPackageManager();
        if (packageManager.checkPermission("com.google.android.c2dm.permission.SEND", "com.google.android.gms") == -1) {
            Log.e("FirebaseInstanceId", "Google Play services missing or without correct permission.");
            return 0;
        }
        if (!com.google.android.gms.common.util.n.i()) {
            Intent intent = new Intent("com.google.android.c2dm.intent.REGISTER");
            intent.setPackage("com.google.android.gms");
            List<ResolveInfo> listQueryIntentServices = packageManager.queryIntentServices(intent, 0);
            if (listQueryIntentServices != null && listQueryIntentServices.size() > 0) {
                this.f2696e = 1;
                return this.f2696e;
            }
        }
        Intent intent2 = new Intent("com.google.iid.TOKEN_REQUEST");
        intent2.setPackage("com.google.android.gms");
        List<ResolveInfo> listQueryBroadcastReceivers = packageManager.queryBroadcastReceivers(intent2, 0);
        if (listQueryBroadcastReceivers != null && listQueryBroadcastReceivers.size() > 0) {
            this.f2696e = 2;
            return this.f2696e;
        }
        Log.w("FirebaseInstanceId", "Failed to resolve IID implementation package, falling back");
        if (com.google.android.gms.common.util.n.i()) {
            this.f2696e = 2;
        } else {
            this.f2696e = 1;
        }
        return this.f2696e;
    }

    public final synchronized String b() {
        if (this.f2693b == null) {
            e();
        }
        return this.f2693b;
    }

    public final synchronized String c() {
        if (this.f2694c == null) {
            e();
        }
        return this.f2694c;
    }

    public final synchronized int d() {
        PackageInfo packageInfoA;
        if (this.f2695d == 0 && (packageInfoA = a("com.google.android.gms")) != null) {
            this.f2695d = packageInfoA.versionCode;
        }
        return this.f2695d;
    }
}
