package com.google.android.gms.common.internal;

import android.accounts.Account;
import android.view.View;
import com.google.android.gms.common.api.Scope;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.d, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0066d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Account f1254a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Set<Scope> f1255b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Set<Scope> f1256c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Map<com.google.android.gms.common.api.a<?>, b> f1257d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final int f1258e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final View f1259f;
    private final String g;
    private final String h;
    private final c.a.a.a.e.a i;
    private final boolean j;
    private Integer k;

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.d$a */
    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Account f1260a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private b.b.d<Scope> f1261b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private Map<com.google.android.gms.common.api.a<?>, b> f1262c;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private View f1264e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private String f1265f;
        private String g;
        private boolean i;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private int f1263d = 0;
        private c.a.a.a.e.a h = c.a.a.a.e.a.f843a;

        public final a a(Account account) {
            this.f1260a = account;
            return this;
        }

        public final a a(String str) {
            this.g = str;
            return this;
        }

        public final a a(Collection<Scope> collection) {
            if (this.f1261b == null) {
                this.f1261b = new b.b.d<>();
            }
            this.f1261b.addAll(collection);
            return this;
        }

        public final C0066d a() {
            return new C0066d(this.f1260a, this.f1261b, this.f1262c, this.f1263d, this.f1264e, this.f1265f, this.g, this.h, this.i);
        }

        public final a b(String str) {
            this.f1265f = str;
            return this;
        }
    }

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.d$b */
    public static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final Set<Scope> f1266a;
    }

    public C0066d(Account account, Set<Scope> set, Map<com.google.android.gms.common.api.a<?>, b> map, int i, View view, String str, String str2, c.a.a.a.e.a aVar, boolean z) {
        this.f1254a = account;
        this.f1255b = set == null ? Collections.EMPTY_SET : Collections.unmodifiableSet(set);
        this.f1257d = map == null ? Collections.EMPTY_MAP : map;
        this.f1259f = view;
        this.f1258e = i;
        this.g = str;
        this.h = str2;
        this.i = aVar;
        this.j = z;
        HashSet hashSet = new HashSet(this.f1255b);
        Iterator<b> it = this.f1257d.values().iterator();
        while (it.hasNext()) {
            hashSet.addAll(it.next().f1266a);
        }
        this.f1256c = Collections.unmodifiableSet(hashSet);
    }

    public final Account a() {
        return this.f1254a;
    }

    public final void a(Integer num) {
        this.k = num;
    }

    public final Account b() {
        Account account = this.f1254a;
        return account != null ? account : new Account("<<default account>>", "com.google");
    }

    public final Set<Scope> c() {
        return this.f1256c;
    }

    public final Integer d() {
        return this.k;
    }

    public final String e() {
        return this.h;
    }

    public final String f() {
        return this.g;
    }

    public final Set<Scope> g() {
        return this.f1255b;
    }

    public final c.a.a.a.e.a h() {
        return this.i;
    }
}
