package com.google.android.gms.auth.api.signin.internal;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.common.internal.r;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;
import org.json.JSONException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Lock f998a = new ReentrantLock();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static b f999b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Lock f1000c = new ReentrantLock();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final SharedPreferences f1001d;

    private b(Context context) {
        this.f1001d = context.getSharedPreferences("com.google.android.gms.signin", 0);
    }

    private final GoogleSignInAccount a(String str) {
        String strB;
        if (!TextUtils.isEmpty(str) && (strB = b(a("googleSignInAccount", str))) != null) {
            try {
                return GoogleSignInAccount.a(strB);
            } catch (JSONException unused) {
            }
        }
        return null;
    }

    public static b a(Context context) {
        r.a(context);
        f998a.lock();
        try {
            if (f999b == null) {
                f999b = new b(context.getApplicationContext());
            }
            return f999b;
        } finally {
            f998a.unlock();
        }
    }

    private static String a(String str, String str2) {
        StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 1 + String.valueOf(str2).length());
        sb.append(str);
        sb.append(":");
        sb.append(str2);
        return sb.toString();
    }

    private final String b(String str) {
        this.f1000c.lock();
        try {
            return this.f1001d.getString(str, null);
        } finally {
            this.f1000c.unlock();
        }
    }

    public GoogleSignInAccount a() {
        return a(b("defaultGoogleSignInAccount"));
    }
}
