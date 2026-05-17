package com.google.android.gms.auth.api.signin;

import android.accounts.Account;
import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.internal.ReflectedParcelable;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.util.e;
import com.google.android.gms.common.util.h;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class GoogleSignInAccount extends AbstractSafeParcelable implements ReflectedParcelable {
    public static final Parcelable.Creator<GoogleSignInAccount> CREATOR = new a();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static e f975a = h.d();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f976b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f977c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private String f978d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private String f979e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private String f980f;
    private Uri g;
    private String h;
    private long i;
    private String j;
    private List<Scope> k;
    private String l;
    private String m;
    private Set<Scope> n = new HashSet();

    GoogleSignInAccount(int i, String str, String str2, String str3, String str4, Uri uri, String str5, long j, String str6, List<Scope> list, String str7, String str8) {
        this.f976b = i;
        this.f977c = str;
        this.f978d = str2;
        this.f979e = str3;
        this.f980f = str4;
        this.g = uri;
        this.h = str5;
        this.i = j;
        this.j = str6;
        this.k = list;
        this.l = str7;
        this.m = str8;
    }

    public static GoogleSignInAccount a(String str) throws JSONException {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        JSONObject jSONObject = new JSONObject(str);
        String strOptString = jSONObject.optString("photoUrl", null);
        Uri uri = !TextUtils.isEmpty(strOptString) ? Uri.parse(strOptString) : null;
        long j = Long.parseLong(jSONObject.getString("expirationTime"));
        HashSet hashSet = new HashSet();
        JSONArray jSONArray = jSONObject.getJSONArray("grantedScopes");
        int length = jSONArray.length();
        for (int i = 0; i < length; i++) {
            hashSet.add(new Scope(jSONArray.getString(i)));
        }
        GoogleSignInAccount googleSignInAccountA = a(jSONObject.optString("id"), jSONObject.optString("tokenId", null), jSONObject.optString("email", null), jSONObject.optString("displayName", null), jSONObject.optString("givenName", null), jSONObject.optString("familyName", null), uri, Long.valueOf(j), jSONObject.getString("obfuscatedIdentifier"), hashSet);
        googleSignInAccountA.h = jSONObject.optString("serverAuthCode", null);
        return googleSignInAccountA;
    }

    private static GoogleSignInAccount a(String str, String str2, String str3, String str4, String str5, String str6, Uri uri, Long l, String str7, Set<Scope> set) {
        long jLongValue = (l == null ? Long.valueOf(f975a.a() / 1000) : l).longValue();
        r.b(str7);
        r.a(set);
        return new GoogleSignInAccount(3, str, str2, str3, str4, uri, null, jLongValue, str7, new ArrayList(set), str5, str6);
    }

    public Account a() {
        String str = this.f979e;
        if (str == null) {
            return null;
        }
        return new Account(str, "com.google");
    }

    public String b() {
        return this.f980f;
    }

    public String c() {
        return this.f979e;
    }

    public String d() {
        return this.m;
    }

    public String e() {
        return this.l;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof GoogleSignInAccount)) {
            return false;
        }
        GoogleSignInAccount googleSignInAccount = (GoogleSignInAccount) obj;
        return googleSignInAccount.j.equals(this.j) && googleSignInAccount.l().equals(l());
    }

    public String f() {
        return this.f977c;
    }

    public String g() {
        return this.f978d;
    }

    public int hashCode() {
        return ((this.j.hashCode() + 527) * 31) + l().hashCode();
    }

    public Uri k() {
        return this.g;
    }

    public Set<Scope> l() {
        HashSet hashSet = new HashSet(this.k);
        hashSet.addAll(this.n);
        return hashSet;
    }

    public String n() {
        return this.h;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f976b);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, f(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, g(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, c(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, b(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, (Parcelable) k(), i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 7, n(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 8, this.i);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 9, this.j, false);
        com.google.android.gms.common.internal.safeparcel.b.b(parcel, 10, this.k, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 11, e(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 12, d(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
