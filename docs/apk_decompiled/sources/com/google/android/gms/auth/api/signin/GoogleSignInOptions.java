package com.google.android.gms.auth.api.signin;

import android.accounts.Account;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.auth.api.signin.internal.GoogleSignInOptionsExtensionParcelable;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.api.a;
import com.google.android.gms.common.internal.ReflectedParcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class GoogleSignInOptions extends AbstractSafeParcelable implements a.d.e, ReflectedParcelable {
    public static final Parcelable.Creator<GoogleSignInOptions> CREATOR;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Scope f981a = new Scope("profile");

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static final Scope f982b = new Scope("email");

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public static final Scope f983c = new Scope("openid");

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public static final Scope f984d = new Scope("https://www.googleapis.com/auth/games_lite");

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public static final Scope f985e = new Scope("https://www.googleapis.com/auth/games");

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public static final GoogleSignInOptions f986f;
    public static final GoogleSignInOptions g;
    private static Comparator<Scope> h;
    private final int i;
    private final ArrayList<Scope> j;
    private Account k;
    private boolean l;
    private final boolean m;
    private final boolean n;
    private String o;
    private String p;
    private ArrayList<GoogleSignInOptionsExtensionParcelable> q;
    private Map<Integer, GoogleSignInOptionsExtensionParcelable> r;

    public static final class a {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private boolean f988b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private boolean f989c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private boolean f990d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private String f991e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private Account f992f;
        private String g;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Set<Scope> f987a = new HashSet();
        private Map<Integer, GoogleSignInOptionsExtensionParcelable> h = new HashMap();

        public final a a(Scope scope, Scope... scopeArr) {
            this.f987a.add(scope);
            this.f987a.addAll(Arrays.asList(scopeArr));
            return this;
        }

        public final GoogleSignInOptions a() {
            if (this.f987a.contains(GoogleSignInOptions.f985e) && this.f987a.contains(GoogleSignInOptions.f984d)) {
                this.f987a.remove(GoogleSignInOptions.f984d);
            }
            if (this.f990d && (this.f992f == null || !this.f987a.isEmpty())) {
                b();
            }
            return new GoogleSignInOptions(3, new ArrayList(this.f987a), this.f992f, this.f990d, this.f988b, this.f989c, this.f991e, this.g, this.h, null);
        }

        public final a b() {
            this.f987a.add(GoogleSignInOptions.f983c);
            return this;
        }

        public final a c() {
            this.f987a.add(GoogleSignInOptions.f981a);
            return this;
        }
    }

    static {
        a aVarB = new a().b();
        aVarB.c();
        f986f = aVarB.a();
        a aVar = new a();
        aVar.a(f984d, new Scope[0]);
        g = aVar.a();
        CREATOR = new c();
        h = new b();
    }

    GoogleSignInOptions(int i, ArrayList<Scope> arrayList, Account account, boolean z, boolean z2, boolean z3, String str, String str2, ArrayList<GoogleSignInOptionsExtensionParcelable> arrayList2) {
        this(i, arrayList, account, z, z2, z3, str, str2, a(arrayList2));
    }

    private GoogleSignInOptions(int i, ArrayList<Scope> arrayList, Account account, boolean z, boolean z2, boolean z3, String str, String str2, Map<Integer, GoogleSignInOptionsExtensionParcelable> map) {
        this.i = i;
        this.j = arrayList;
        this.k = account;
        this.l = z;
        this.m = z2;
        this.n = z3;
        this.o = str;
        this.p = str2;
        this.q = new ArrayList<>(map.values());
        this.r = map;
    }

    /* synthetic */ GoogleSignInOptions(int i, ArrayList arrayList, Account account, boolean z, boolean z2, boolean z3, String str, String str2, Map map, b bVar) {
        this(3, (ArrayList<Scope>) arrayList, account, z, z2, z3, str, str2, (Map<Integer, GoogleSignInOptionsExtensionParcelable>) map);
    }

    private static Map<Integer, GoogleSignInOptionsExtensionParcelable> a(List<GoogleSignInOptionsExtensionParcelable> list) {
        HashMap map = new HashMap();
        if (list == null) {
            return map;
        }
        for (GoogleSignInOptionsExtensionParcelable googleSignInOptionsExtensionParcelable : list) {
            map.put(Integer.valueOf(googleSignInOptionsExtensionParcelable.a()), googleSignInOptionsExtensionParcelable);
        }
        return map;
    }

    public Account a() {
        return this.k;
    }

    public ArrayList<GoogleSignInOptionsExtensionParcelable> b() {
        return this.q;
    }

    public ArrayList<Scope> c() {
        return new ArrayList<>(this.j);
    }

    public String d() {
        return this.o;
    }

    public boolean e() {
        return this.n;
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0054 A[Catch: ClassCastException -> 0x0085, TryCatch #0 {ClassCastException -> 0x0085, blocks: (B:5:0x0004, B:7:0x000e, B:10:0x0018, B:12:0x0028, B:15:0x0035, B:17:0x0039, B:22:0x004c, B:24:0x0054, B:29:0x006b, B:31:0x0073, B:33:0x007b, B:27:0x005f, B:20:0x0040), top: B:39:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x005f A[Catch: ClassCastException -> 0x0085, TryCatch #0 {ClassCastException -> 0x0085, blocks: (B:5:0x0004, B:7:0x000e, B:10:0x0018, B:12:0x0028, B:15:0x0035, B:17:0x0039, B:22:0x004c, B:24:0x0054, B:29:0x006b, B:31:0x0073, B:33:0x007b, B:27:0x005f, B:20:0x0040), top: B:39:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0083 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean equals(java.lang.Object r4) {
        /*
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            com.google.android.gms.auth.api.signin.GoogleSignInOptions r4 = (com.google.android.gms.auth.api.signin.GoogleSignInOptions) r4     // Catch: java.lang.ClassCastException -> L85
            java.util.ArrayList<com.google.android.gms.auth.api.signin.internal.GoogleSignInOptionsExtensionParcelable> r1 = r3.q     // Catch: java.lang.ClassCastException -> L85
            int r1 = r1.size()     // Catch: java.lang.ClassCastException -> L85
            if (r1 > 0) goto L85
            java.util.ArrayList<com.google.android.gms.auth.api.signin.internal.GoogleSignInOptionsExtensionParcelable> r1 = r4.q     // Catch: java.lang.ClassCastException -> L85
            int r1 = r1.size()     // Catch: java.lang.ClassCastException -> L85
            if (r1 <= 0) goto L18
            goto L85
        L18:
            java.util.ArrayList<com.google.android.gms.common.api.Scope> r1 = r3.j     // Catch: java.lang.ClassCastException -> L85
            int r1 = r1.size()     // Catch: java.lang.ClassCastException -> L85
            java.util.ArrayList r2 = r4.c()     // Catch: java.lang.ClassCastException -> L85
            int r2 = r2.size()     // Catch: java.lang.ClassCastException -> L85
            if (r1 != r2) goto L85
            java.util.ArrayList<com.google.android.gms.common.api.Scope> r1 = r3.j     // Catch: java.lang.ClassCastException -> L85
            java.util.ArrayList r2 = r4.c()     // Catch: java.lang.ClassCastException -> L85
            boolean r1 = r1.containsAll(r2)     // Catch: java.lang.ClassCastException -> L85
            if (r1 != 0) goto L35
            goto L85
        L35:
            android.accounts.Account r1 = r3.k     // Catch: java.lang.ClassCastException -> L85
            if (r1 != 0) goto L40
            android.accounts.Account r1 = r4.a()     // Catch: java.lang.ClassCastException -> L85
            if (r1 != 0) goto L85
            goto L4c
        L40:
            android.accounts.Account r1 = r3.k     // Catch: java.lang.ClassCastException -> L85
            android.accounts.Account r2 = r4.a()     // Catch: java.lang.ClassCastException -> L85
            boolean r1 = r1.equals(r2)     // Catch: java.lang.ClassCastException -> L85
            if (r1 == 0) goto L85
        L4c:
            java.lang.String r1 = r3.o     // Catch: java.lang.ClassCastException -> L85
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.ClassCastException -> L85
            if (r1 == 0) goto L5f
            java.lang.String r1 = r4.d()     // Catch: java.lang.ClassCastException -> L85
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.ClassCastException -> L85
            if (r1 == 0) goto L85
            goto L6b
        L5f:
            java.lang.String r1 = r3.o     // Catch: java.lang.ClassCastException -> L85
            java.lang.String r2 = r4.d()     // Catch: java.lang.ClassCastException -> L85
            boolean r1 = r1.equals(r2)     // Catch: java.lang.ClassCastException -> L85
            if (r1 == 0) goto L85
        L6b:
            boolean r1 = r3.n     // Catch: java.lang.ClassCastException -> L85
            boolean r2 = r4.e()     // Catch: java.lang.ClassCastException -> L85
            if (r1 != r2) goto L85
            boolean r1 = r3.l     // Catch: java.lang.ClassCastException -> L85
            boolean r2 = r4.f()     // Catch: java.lang.ClassCastException -> L85
            if (r1 != r2) goto L85
            boolean r1 = r3.m     // Catch: java.lang.ClassCastException -> L85
            boolean r4 = r4.g()     // Catch: java.lang.ClassCastException -> L85
            if (r1 != r4) goto L85
            r4 = 1
            return r4
        L85:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.auth.api.signin.GoogleSignInOptions.equals(java.lang.Object):boolean");
    }

    public boolean f() {
        return this.l;
    }

    public boolean g() {
        return this.m;
    }

    public int hashCode() {
        ArrayList arrayList = new ArrayList();
        ArrayList<Scope> arrayList2 = this.j;
        int size = arrayList2.size();
        int i = 0;
        while (i < size) {
            Scope scope = arrayList2.get(i);
            i++;
            arrayList.add(scope.a());
        }
        Collections.sort(arrayList);
        com.google.android.gms.auth.api.signin.internal.a aVar = new com.google.android.gms.auth.api.signin.internal.a();
        aVar.a(arrayList);
        aVar.a(this.k);
        aVar.a(this.o);
        aVar.a(this.n);
        aVar.a(this.l);
        aVar.a(this.m);
        return aVar.a();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.i);
        com.google.android.gms.common.internal.safeparcel.b.b(parcel, 2, c(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable) a(), i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, f());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, g());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, e());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 7, d(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 8, this.p, false);
        com.google.android.gms.common.internal.safeparcel.b.b(parcel, 9, b(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
