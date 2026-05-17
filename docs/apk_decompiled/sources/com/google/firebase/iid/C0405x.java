package com.google.firebase.iid;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import java.io.File;
import java.io.IOException;
import java.util.Map;

/* JADX INFO: renamed from: com.google.firebase.iid.x, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0405x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SharedPreferences f2710a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Context f2711b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final aa f2712c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Map<String, Z> f2713d;

    public C0405x(Context context) {
        this(context, new aa());
    }

    private C0405x(Context context, aa aaVar) {
        this.f2713d = new b.b.b();
        this.f2711b = context;
        this.f2710a = context.getSharedPreferences("com.google.android.gms.appid", 0);
        this.f2712c = aaVar;
        File file = new File(androidx.core.content.a.c(this.f2711b), "com.google.android.gms.appid-no-backup");
        if (file.exists()) {
            return;
        }
        try {
            if (!file.createNewFile() || c()) {
                return;
            }
            Log.i("FirebaseInstanceId", "App restored, clearing state");
            b();
            FirebaseInstanceId.b().g();
        } catch (IOException e2) {
            if (Log.isLoggable("FirebaseInstanceId", 3)) {
                String strValueOf = String.valueOf(e2.getMessage());
                Log.d("FirebaseInstanceId", strValueOf.length() != 0 ? "Error creating file in no backup dir: ".concat(strValueOf) : new String("Error creating file in no backup dir: "));
            }
        }
    }

    static String a(String str, String str2) {
        StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 3 + String.valueOf(str2).length());
        sb.append(str);
        sb.append("|S|");
        sb.append(str2);
        return sb.toString();
    }

    private static String b(String str, String str2, String str3) {
        StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 4 + String.valueOf(str2).length() + String.valueOf(str3).length());
        sb.append(str);
        sb.append("|T|");
        sb.append(str2);
        sb.append("|");
        sb.append(str3);
        return sb.toString();
    }

    private final synchronized boolean c() {
        return this.f2710a.getAll().isEmpty();
    }

    public final synchronized A a(String str, String str2, String str3) {
        return A.a(this.f2710a.getString(b(str, str2, str3), null));
    }

    public final synchronized String a() {
        return this.f2710a.getString("topic_operation_queue", "");
    }

    public final synchronized void a(String str) {
        this.f2710a.edit().putString("topic_operation_queue", str).apply();
    }

    public final synchronized void a(String str, String str2, String str3, String str4, String str5) {
        String strA = A.a(str4, str5, System.currentTimeMillis());
        if (strA == null) {
            return;
        }
        SharedPreferences.Editor editorEdit = this.f2710a.edit();
        editorEdit.putString(b(str, str2, str3), strA);
        editorEdit.commit();
    }

    public final synchronized Z b(String str) {
        Z zB;
        Z z = this.f2713d.get(str);
        if (z != null) {
            return z;
        }
        try {
            zB = this.f2712c.a(this.f2711b, str);
        } catch (C0386d unused) {
            Log.w("FirebaseInstanceId", "Stored data is corrupt, generating new identity");
            FirebaseInstanceId.b().g();
            zB = this.f2712c.b(this.f2711b, str);
        }
        this.f2713d.put(str, zB);
        return zB;
    }

    public final synchronized void b() {
        this.f2713d.clear();
        aa.a(this.f2711b);
        this.f2710a.edit().clear().commit();
    }

    public final synchronized void c(String str) {
        String strConcat = String.valueOf(str).concat("|T|");
        SharedPreferences.Editor editorEdit = this.f2710a.edit();
        for (String str2 : this.f2710a.getAll().keySet()) {
            if (str2.startsWith(strConcat)) {
                editorEdit.remove(str2);
            }
        }
        editorEdit.commit();
    }
}
