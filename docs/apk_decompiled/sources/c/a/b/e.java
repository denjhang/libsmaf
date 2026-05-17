package c.a.b;

import android.content.Context;
import android.text.TextUtils;
import com.google.android.gms.common.internal.C0079q;
import com.google.android.gms.common.internal.C0082u;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.common.util.p;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f924a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f925b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f926c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final String f927d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final String f928e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final String f929f;
    private final String g;

    private e(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        r.b(!p.a(str), "ApplicationId must be set.");
        this.f925b = str;
        this.f924a = str2;
        this.f926c = str3;
        this.f927d = str4;
        this.f928e = str5;
        this.f929f = str6;
        this.g = str7;
    }

    public static e a(Context context) {
        C0082u c0082u = new C0082u(context);
        String strA = c0082u.a("google_app_id");
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        return new e(strA, c0082u.a("google_api_key"), c0082u.a("firebase_database_url"), c0082u.a("ga_trackingId"), c0082u.a("gcm_defaultSenderId"), c0082u.a("google_storage_bucket"), c0082u.a("project_id"));
    }

    public String a() {
        return this.f925b;
    }

    public String b() {
        return this.f928e;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return C0079q.a(this.f925b, eVar.f925b) && C0079q.a(this.f924a, eVar.f924a) && C0079q.a(this.f926c, eVar.f926c) && C0079q.a(this.f927d, eVar.f927d) && C0079q.a(this.f928e, eVar.f928e) && C0079q.a(this.f929f, eVar.f929f) && C0079q.a(this.g, eVar.g);
    }

    public int hashCode() {
        return C0079q.a(this.f925b, this.f924a, this.f926c, this.f927d, this.f928e, this.f929f, this.g);
    }

    public String toString() {
        C0079q.a aVarA = C0079q.a(this);
        aVarA.a("applicationId", this.f925b);
        aVarA.a("apiKey", this.f924a);
        aVarA.a("databaseUrl", this.f926c);
        aVarA.a("gcmSenderId", this.f928e);
        aVarA.a("storageBucket", this.f929f);
        aVarA.a("projectId", this.g);
        return aVarA.toString();
    }
}
