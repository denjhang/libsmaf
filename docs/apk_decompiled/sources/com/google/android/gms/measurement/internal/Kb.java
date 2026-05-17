package com.google.android.gms.measurement.internal;

import android.content.SharedPreferences;
import android.os.Build;
import android.text.TextUtils;
import android.util.Pair;
import c.a.a.a.a.a.a;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.util.Locale;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Kb extends AbstractC0356uc {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    static final Pair<String, Long> f2011c = new Pair<>("", 0L);
    public Mb A;
    public Lb B;
    public final Nb C;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private SharedPreferences f2012d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public Ob f2013e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public final Lb f2014f;
    public final Lb g;
    public final Lb h;
    public final Lb i;
    public final Lb j;
    public final Lb k;
    public final Lb l;
    public final Nb m;
    private String n;
    private boolean o;
    private long p;
    public final Lb q;
    public final Lb r;
    public final Mb s;
    public final Nb t;
    public final Mb u;
    public final Mb v;
    public final Lb w;
    public final Lb x;
    public boolean y;
    public Mb z;

    Kb(_b _bVar) {
        super(_bVar);
        this.f2014f = new Lb(this, "last_upload", 0L);
        this.g = new Lb(this, "last_upload_attempt", 0L);
        this.h = new Lb(this, "backoff", 0L);
        this.i = new Lb(this, "last_delete_stale", 0L);
        this.q = new Lb(this, "time_before_start", 10000L);
        this.r = new Lb(this, "session_timeout", 1800000L);
        this.s = new Mb(this, "start_new_session", true);
        this.w = new Lb(this, "last_pause_time", 0L);
        this.x = new Lb(this, "time_active", 0L);
        this.t = new Nb(this, "non_personalized_ads", null);
        this.u = new Mb(this, "use_dynamite_api", false);
        this.v = new Mb(this, "allow_remote_dynamite", false);
        this.j = new Lb(this, "midnight_offset", 0L);
        this.k = new Lb(this, "first_open_time", 0L);
        this.l = new Lb(this, "app_install_time", 0L);
        this.m = new Nb(this, "app_instance_id", null);
        this.z = new Mb(this, "app_backgrounded", false);
        this.A = new Mb(this, "deep_link_retrieval_complete", false);
        this.B = new Lb(this, "deep_link_retrieval_attempts", 0L);
        this.C = new Nb(this, "firebase_feature_rollouts", null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final SharedPreferences B() {
        h();
        o();
        return this.f2012d;
    }

    final boolean A() {
        return this.f2012d.contains("deferred_analytics_collection");
    }

    final Pair<String, Boolean> a(String str) {
        h();
        long jB = g().b();
        String str2 = this.n;
        if (str2 != null && jB < this.p) {
            return new Pair<>(str2, Boolean.valueOf(this.o));
        }
        this.p = jB + m().a(str, C0324o.i);
        c.a.a.a.a.a.a.a(true);
        try {
            a.C0016a c0016aA = c.a.a.a.a.a.a.a(e());
            if (c0016aA != null) {
                this.n = c0016aA.a();
                this.o = c0016aA.b();
            }
            if (this.n == null) {
                this.n = "";
            }
        } catch (Exception e2) {
            d().A().a("Unable to get advertising id", e2);
            this.n = "";
        }
        c.a.a.a.a.a.a.a(false);
        return new Pair<>(this.n, Boolean.valueOf(this.o));
    }

    final void a(boolean z) {
        h();
        d().B().a("Setting useService", Boolean.valueOf(z));
        SharedPreferences.Editor editorEdit = B().edit();
        editorEdit.putBoolean("use_service", z);
        editorEdit.apply();
    }

    final boolean a(long j) {
        return j - this.r.a() > this.w.a();
    }

    final String b(String str) {
        h();
        String str2 = (String) a(str).first;
        MessageDigest messageDigestV = le.v();
        if (messageDigestV == null) {
            return null;
        }
        return String.format(Locale.US, "%032X", new BigInteger(1, messageDigestV.digest(str2.getBytes())));
    }

    final void b(boolean z) {
        h();
        d().B().a("Setting measurementEnabled", Boolean.valueOf(z));
        SharedPreferences.Editor editorEdit = B().edit();
        editorEdit.putBoolean("measurement_enabled", z);
        editorEdit.apply();
    }

    final void c(String str) {
        h();
        SharedPreferences.Editor editorEdit = B().edit();
        editorEdit.putString("gmp_app_id", str);
        editorEdit.apply();
    }

    final boolean c(boolean z) {
        h();
        return B().getBoolean("measurement_enabled", z);
    }

    final void d(String str) {
        h();
        SharedPreferences.Editor editorEdit = B().edit();
        editorEdit.putString("admob_app_id", str);
        editorEdit.apply();
    }

    final void d(boolean z) {
        h();
        d().B().a("Updating deferred analytics collection", Boolean.valueOf(z));
        SharedPreferences.Editor editorEdit = B().edit();
        editorEdit.putBoolean("deferred_analytics_collection", z);
        editorEdit.apply();
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0356uc
    protected final void n() {
        this.f2012d = e().getSharedPreferences("com.google.android.gms.measurement.prefs", 0);
        this.y = this.f2012d.getBoolean("has_been_opened", false);
        if (!this.y) {
            SharedPreferences.Editor editorEdit = this.f2012d.edit();
            editorEdit.putBoolean("has_been_opened", true);
            editorEdit.apply();
        }
        this.f2013e = new Ob(this, "health_monitor", Math.max(0L, C0324o.j.a(null).longValue()));
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0356uc
    protected final boolean r() {
        return true;
    }

    final String t() {
        h();
        return B().getString("gmp_app_id", null);
    }

    final String u() {
        h();
        return B().getString("admob_app_id", null);
    }

    final Boolean v() {
        h();
        if (B().contains("use_service")) {
            return Boolean.valueOf(B().getBoolean("use_service", false));
        }
        return null;
    }

    final void w() {
        h();
        d().B().a("Clearing collection preferences.");
        if (m().a(C0324o.ma)) {
            Boolean boolX = x();
            SharedPreferences.Editor editorEdit = B().edit();
            editorEdit.clear();
            editorEdit.apply();
            if (boolX != null) {
                b(boolX.booleanValue());
                return;
            }
            return;
        }
        boolean zContains = B().contains("measurement_enabled");
        boolean zC = zContains ? c(true) : true;
        SharedPreferences.Editor editorEdit2 = B().edit();
        editorEdit2.clear();
        editorEdit2.apply();
        if (zContains) {
            b(zC);
        }
    }

    final Boolean x() {
        h();
        if (B().contains("measurement_enabled")) {
            return Boolean.valueOf(B().getBoolean("measurement_enabled", true));
        }
        return null;
    }

    protected final String y() {
        h();
        String string = B().getString("previous_os_version", null);
        i().o();
        String str = Build.VERSION.RELEASE;
        if (!TextUtils.isEmpty(str) && !str.equals(string)) {
            SharedPreferences.Editor editorEdit = B().edit();
            editorEdit.putString("previous_os_version", str);
            editorEdit.apply();
        }
        return string;
    }

    final boolean z() {
        h();
        return B().getBoolean("deferred_analytics_collection", false);
    }
}
