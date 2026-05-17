package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Od implements Ld {
    private static final AbstractC0217ua<Long> A;
    private static final AbstractC0217ua<Long> B;
    private static final AbstractC0217ua<Long> C;
    private static final AbstractC0217ua<Long> D;
    private static final AbstractC0217ua<Long> E;
    private static final AbstractC0217ua<Long> F;
    private static final AbstractC0217ua<Long> G;
    private static final AbstractC0217ua<Long> H;
    private static final AbstractC0217ua<String> I;
    private static final AbstractC0217ua<Long> J;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1546a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1547b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AbstractC0217ua<String> f1548c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final AbstractC0217ua<String> f1549d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final AbstractC0217ua<String> f1550e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1551f;
    private static final AbstractC0217ua<Long> g;
    private static final AbstractC0217ua<Long> h;
    private static final AbstractC0217ua<Long> i;
    private static final AbstractC0217ua<Long> j;
    private static final AbstractC0217ua<Long> k;
    private static final AbstractC0217ua<Long> l;
    private static final AbstractC0217ua<Long> m;
    private static final AbstractC0217ua<Long> n;
    private static final AbstractC0217ua<Long> o;
    private static final AbstractC0217ua<Long> p;
    private static final AbstractC0217ua<Long> q;
    private static final AbstractC0217ua<String> r;
    private static final AbstractC0217ua<Long> s;
    private static final AbstractC0217ua<Long> t;
    private static final AbstractC0217ua<Long> u;
    private static final AbstractC0217ua<Long> v;
    private static final AbstractC0217ua<Long> w;
    private static final AbstractC0217ua<Long> x;
    private static final AbstractC0217ua<Long> y;
    private static final AbstractC0217ua<Long> z;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1546a = aa.a("measurement.ad_id_cache_time", 10000L);
        f1547b = aa.a("measurement.config.cache_time", 86400000L);
        f1548c = aa.a("measurement.log_tag", "FA");
        f1549d = aa.a("measurement.config.url_authority", "app-measurement.com");
        f1550e = aa.a("measurement.config.url_scheme", "https");
        f1551f = aa.a("measurement.upload.debug_upload_interval", 1000L);
        g = aa.a("measurement.lifetimevalue.max_currency_tracked", 4L);
        h = aa.a("measurement.store.max_stored_events_per_app", 100000L);
        i = aa.a("measurement.experiment.max_ids", 50L);
        j = aa.a("measurement.audience.filter_result_max_count", 200L);
        k = aa.a("measurement.alarm_manager.minimum_interval", 60000L);
        l = aa.a("measurement.upload.minimum_delay", 500L);
        m = aa.a("measurement.monitoring.sample_period_millis", 86400000L);
        n = aa.a("measurement.upload.realtime_upload_interval", 10000L);
        o = aa.a("measurement.upload.refresh_blacklisted_config_interval", 604800000L);
        p = aa.a("measurement.config.cache_time.service", 3600000L);
        q = aa.a("measurement.service_client.idle_disconnect_millis", 5000L);
        r = aa.a("measurement.log_tag.service", "FA-SVC");
        s = aa.a("measurement.upload.stale_data_deletion_interval", 86400000L);
        t = aa.a("measurement.upload.backoff_period", 43200000L);
        u = aa.a("measurement.upload.initial_upload_delay_time", 15000L);
        v = aa.a("measurement.upload.interval", 3600000L);
        w = aa.a("measurement.upload.max_bundle_size", 65536L);
        x = aa.a("measurement.upload.max_bundles", 100L);
        y = aa.a("measurement.upload.max_conversions_per_day", 500L);
        z = aa.a("measurement.upload.max_error_events_per_day", 1000L);
        A = aa.a("measurement.upload.max_events_per_bundle", 1000L);
        B = aa.a("measurement.upload.max_events_per_day", 100000L);
        C = aa.a("measurement.upload.max_public_events_per_day", 50000L);
        D = aa.a("measurement.upload.max_queue_time", 2419200000L);
        E = aa.a("measurement.upload.max_realtime_events_per_day", 10L);
        F = aa.a("measurement.upload.max_batch_size", 65536L);
        G = aa.a("measurement.upload.retry_count", 6L);
        H = aa.a("measurement.upload.retry_time", 1800000L);
        I = aa.a("measurement.upload.url", "https://app-measurement.com/a");
        J = aa.a("measurement.upload.window_interval", 3600000L);
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long A() {
        return C.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long B() {
        return v.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long C() {
        return D.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long D() {
        return J.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long E() {
        return j.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long F() {
        return A.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final String G() {
        return I.c();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long H() {
        return k.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long I() {
        return B.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long J() {
        return t.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long a() {
        return s.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final String b() {
        return f1550e.c();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long c() {
        return q.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final String d() {
        return r.c();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long e() {
        return n.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long f() {
        return u.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long g() {
        return m.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long h() {
        return f1546a.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long i() {
        return h.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long j() {
        return i.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long k() {
        return f1551f.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long l() {
        return g.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long m() {
        return f1547b.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long n() {
        return p.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long o() {
        return y.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long p() {
        return G.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long q() {
        return z.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long r() {
        return H.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long s() {
        return w.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long t() {
        return E.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long u() {
        return o.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long v() {
        return x.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long w() {
        return F.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final String x() {
        return f1548c.c();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final String y() {
        return f1549d.c();
    }

    @Override // com.google.android.gms.internal.measurement.Ld
    public final long z() {
        return l.c().longValue();
    }
}
