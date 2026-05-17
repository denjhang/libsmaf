package com.google.firebase.iid;

import android.text.TextUtils;
import android.util.Log;
import java.util.concurrent.TimeUnit;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class A {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final long f2600a = TimeUnit.DAYS.toMillis(7);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final String f2601b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f2602c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final long f2603d;

    private A(String str, String str2, long j) {
        this.f2601b = str;
        this.f2602c = str2;
        this.f2603d = j;
    }

    static A a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        if (!str.startsWith("{")) {
            return new A(str, null, 0L);
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            return new A(jSONObject.getString("token"), jSONObject.getString("appVersion"), jSONObject.getLong("timestamp"));
        } catch (JSONException e2) {
            String strValueOf = String.valueOf(e2);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 23);
            sb.append("Failed to parse token: ");
            sb.append(strValueOf);
            Log.w("FirebaseInstanceId", sb.toString());
            return null;
        }
    }

    static String a(A a2) {
        if (a2 == null) {
            return null;
        }
        return a2.f2601b;
    }

    static String a(String str, String str2, long j) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("token", str);
            jSONObject.put("appVersion", str2);
            jSONObject.put("timestamp", j);
            return jSONObject.toString();
        } catch (JSONException e2) {
            String strValueOf = String.valueOf(e2);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 24);
            sb.append("Failed to encode token: ");
            sb.append(strValueOf);
            Log.w("FirebaseInstanceId", sb.toString());
            return null;
        }
    }

    final boolean b(String str) {
        return System.currentTimeMillis() > this.f2603d + f2600a || !str.equals(this.f2602c);
    }
}
