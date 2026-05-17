package com.google.android.gms.measurement.internal;

import android.content.Context;
import com.google.android.gms.internal.measurement.C0119fa;
import com.google.android.gms.internal.measurement.C0223va;
import com.google.android.gms.internal.measurement.Ce;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import org.apache.http.HttpStatus;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.o, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0324o {
    public static C0331pb<Long> A;
    public static C0331pb<Boolean> Aa;
    public static C0331pb<Long> B;
    public static C0331pb<Boolean> Ba;
    public static C0331pb<Long> C;
    public static C0331pb<Boolean> Ca;
    public static C0331pb<Long> D;
    public static C0331pb<Boolean> Da;
    public static C0331pb<Long> E;
    private static C0331pb<Boolean> Ea;
    public static C0331pb<Long> F;
    public static C0331pb<Boolean> Fa;
    public static C0331pb<Long> G;
    public static C0331pb<Boolean> Ga;
    public static C0331pb<Long> H;
    public static C0331pb<Boolean> Ha;
    public static C0331pb<Long> I;
    public static C0331pb<Boolean> Ia;
    public static C0331pb<Integer> J;
    public static C0331pb<Boolean> Ja;
    public static C0331pb<Long> K;
    public static C0331pb<Boolean> Ka;
    public static C0331pb<Integer> L;
    public static C0331pb<Boolean> La;
    public static C0331pb<Integer> M;
    public static C0331pb<Boolean> Ma;
    public static C0331pb<Long> N;
    public static C0331pb<Boolean> Na;
    public static C0331pb<Boolean> O;
    public static C0331pb<Boolean> Oa;
    public static C0331pb<String> P;
    public static C0331pb<Boolean> Pa;
    public static C0331pb<Long> Q;
    public static C0331pb<Boolean> Qa;
    public static C0331pb<Integer> R;
    public static C0331pb<Boolean> Ra;
    public static C0331pb<Double> S;
    public static C0331pb<Boolean> Sa;
    public static C0331pb<Integer> T;
    public static C0331pb<Boolean> Ta;
    public static C0331pb<Boolean> U;
    public static C0331pb<Boolean> Ua;
    public static C0331pb<Boolean> V;
    public static C0331pb<Boolean> Va;
    public static C0331pb<Boolean> W;
    private static C0331pb<Boolean> Wa;
    public static C0331pb<Boolean> X;
    public static C0331pb<Boolean> Xa;
    public static C0331pb<Boolean> Y;
    public static C0331pb<Boolean> Z;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static ye f2353a;
    public static C0331pb<Boolean> aa;
    public static C0331pb<Boolean> ba;
    public static C0331pb<Boolean> ca;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static volatile _b f2356d;
    public static C0331pb<Boolean> da;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static Boolean f2357e;
    public static C0331pb<Boolean> ea;
    public static C0331pb<Boolean> fa;
    public static C0331pb<Boolean> ga;
    public static C0331pb<Boolean> ha;
    public static C0331pb<Boolean> ia;
    public static C0331pb<Boolean> ja;
    public static C0331pb<Boolean> ka;
    public static C0331pb<Boolean> la;
    public static C0331pb<Boolean> ma;
    public static C0331pb<Boolean> na;
    public static C0331pb<Boolean> oa;
    public static C0331pb<Boolean> pa;
    public static C0331pb<Boolean> qa;
    public static C0331pb<Boolean> ra;
    public static C0331pb<Boolean> sa;
    public static C0331pb<Boolean> ta;
    public static C0331pb<Integer> u;
    public static C0331pb<Boolean> ua;
    public static C0331pb<Integer> v;
    public static C0331pb<Boolean> va;
    public static C0331pb<Integer> w;
    public static C0331pb<Boolean> wa;
    public static C0331pb<String> x;
    public static C0331pb<Boolean> xa;
    public static C0331pb<Long> y;
    public static C0331pb<Boolean> ya;
    public static C0331pb<Long> z;
    public static C0331pb<Boolean> za;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static List<C0331pb<?>> f2354b = Collections.synchronizedList(new ArrayList());

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static Set<C0331pb<?>> f2355c = Collections.synchronizedSet(new HashSet());

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public static C0331pb<Boolean> f2358f = a("measurement.log_androidId_enabled", false, false, r.f2388a);
    public static C0331pb<Boolean> g = a("measurement.upload_dsid_enabled", false, false, C0334q.f2381a);
    public static C0331pb<String> h = a("measurement.log_tag", "FA", "FA-SVC", E.f1949a);
    public static C0331pb<Long> i = a("measurement.ad_id_cache_time", 10000L, 10000L, N.f2041a);
    public static C0331pb<Long> j = a("measurement.monitoring.sample_period_millis", 86400000L, 86400000L, C0265ca.f2200a);
    public static C0331pb<Long> k = a("measurement.config.cache_time", 86400000L, 3600000L, C0310la.f2318a);
    public static C0331pb<String> l = a("measurement.config.url_scheme", "https", "https", C0374ya.f2471a);
    public static C0331pb<String> m = a("measurement.config.url_authority", "app-measurement.com", "app-measurement.com", Ia.f1991a);
    public static C0331pb<Integer> n = a("measurement.upload.max_bundles", 100, 100, Va.f2121a);
    public static C0331pb<Integer> o = a("measurement.upload.max_batch_size", 65536, 65536, C0276eb.f2225a);
    public static C0331pb<Integer> p = a("measurement.upload.max_bundle_size", 65536, 65536, C0348t.f2412a);
    public static C0331pb<Integer> q = a("measurement.upload.max_events_per_bundle", 1000, 1000, C0343s.f2395a);
    public static C0331pb<Integer> r = a("measurement.upload.max_events_per_day", 100000, 100000, C0358v.f2435a);
    public static C0331pb<Integer> s = a("measurement.upload.max_error_events_per_day", 1000, 1000, C0353u.f2427a);
    public static C0331pb<Integer> t = a("measurement.upload.max_public_events_per_day", 50000, 50000, C0368x.f2456a);

    static {
        Integer numValueOf = Integer.valueOf(HttpStatus.SC_INTERNAL_SERVER_ERROR);
        u = a("measurement.upload.max_conversions_per_day", numValueOf, numValueOf, C0363w.f2444a);
        v = a("measurement.upload.max_realtime_events_per_day", 10, 10, A.f1901a);
        w = a("measurement.store.max_stored_events_per_app", 100000, 100000, C0373y.f2470a);
        x = a("measurement.upload.url", "https://app-measurement.com/a", "https://app-measurement.com/a", C.f1925a);
        y = a("measurement.upload.backoff_period", 43200000L, 43200000L, B.f1916a);
        z = a("measurement.upload.window_interval", 3600000L, 3600000L, D.f1941a);
        A = a("measurement.upload.interval", 3600000L, 3600000L, G.f1965a);
        B = a("measurement.upload.realtime_upload_interval", 10000L, 10000L, F.f1954a);
        C = a("measurement.upload.debug_upload_interval", 1000L, 1000L, I.f1990a);
        D = a("measurement.upload.minimum_delay", 500L, 500L, H.f1979a);
        E = a("measurement.alarm_manager.minimum_interval", 60000L, 60000L, K.f2009a);
        F = a("measurement.upload.stale_data_deletion_interval", 86400000L, 86400000L, J.f1998a);
        G = a("measurement.upload.refresh_blacklisted_config_interval", 604800000L, 604800000L, M.f2029a);
        H = a("measurement.upload.initial_upload_delay_time", 15000L, 15000L, L.f2018a);
        I = a("measurement.upload.retry_time", 1800000L, 1800000L, O.f2057a);
        J = a("measurement.upload.retry_count", 6, 6, Q.f2078a);
        K = a("measurement.upload.max_queue_time", 2419200000L, 2419200000L, P.f2066a);
        L = a("measurement.lifetimevalue.max_currency_tracked", 4, 4, T.f2099a);
        Integer numValueOf2 = Integer.valueOf(HttpStatus.SC_OK);
        M = a("measurement.audience.filter_result_max_count", numValueOf2, numValueOf2, S.f2090a);
        N = a("measurement.service_client.idle_disconnect_millis", 5000L, 5000L, V.f2120a);
        O = a("measurement.test.boolean_flag", false, false, U.f2113a);
        P = a("measurement.test.string_flag", "---", "---", X.f2134a);
        Q = a("measurement.test.long_flag", -1L, -1L, W.f2129a);
        R = a("measurement.test.int_flag", -2, -2, Z.f2152a);
        Double dValueOf = Double.valueOf(-3.0d);
        S = a("measurement.test.double_flag", dValueOf, dValueOf, Y.f2143a);
        T = a("measurement.experiment.max_ids", 50, 50, C0253aa.f2176a);
        U = a("measurement.validation.internal_limits_internal_event_params", false, false, C0275ea.f2224a);
        V = a("measurement.reset_analytics.persist_time", true, true, C0270da.f2213a);
        W = a("measurement.sampling.time_zone_offset_enabled", false, false, C0285ga.f2255a);
        X = a("measurement.referrer.enable_logging_install_referrer_cmp_from_apk", false, false, C0280fa.f2245a);
        Y = a("measurement.client.sessions.session_id_enabled", true, true, C0295ia.f2277a);
        Z = a("measurement.service.sessions.session_number_enabled", true, true, C0290ha.f2263a);
        aa = a("measurement.client.sessions.immediate_start_enabled_foreground", true, true, C0305ka.f2304a);
        ba = a("measurement.client.sessions.background_sessions_enabled", true, true, C0300ja.f2289a);
        ca = a("measurement.client.sessions.remove_expired_session_properties_enabled", true, true, C0315ma.f2331a);
        da = a("measurement.service.sessions.session_number_backfill_enabled", true, true, C0325oa.f2359a);
        ea = a("measurement.service.sessions.remove_disabled_session_number", true, true, C0320na.f2344a);
        fa = a("measurement.client.sessions.start_session_before_view_screen", true, true, C0335qa.f2382a);
        ga = a("measurement.client.sessions.check_on_startup", true, true, C0330pa.f2367a);
        ha = a("measurement.collection.firebase_global_collection_flag_enabled", true, true, C0344sa.f2396a);
        ia = a("measurement.collection.efficient_engagement_reporting_enabled", false, false, C0339ra.f2389a);
        ja = a("measurement.collection.redundant_engagement_removal_enabled", false, false, C0354ua.f2428a);
        ka = a("measurement.personalized_ads_signals_collection_enabled", true, true, C0349ta.f2413a);
        la = a("measurement.personalized_ads_property_translation_enabled", true, true, C0364wa.f2445a);
        ma = a("measurement.collection.init_params_control_enabled", true, true, C0359va.f2436a);
        na = a("measurement.upload.disable_is_uploader", true, true, C0369xa.f2457a);
        oa = a("measurement.experiment.enable_experiment_reporting", true, true, Aa.f1902a);
        pa = a("measurement.collection.log_event_and_bundle_v2", true, true, C0379za.f2487a);
        qa = a("measurement.quality.checksum", false, false, null);
        ra = a("measurement.module.collection.conditionally_omit_admob_app_id", true, true, Da.f1942a);
        sa = a("measurement.sdk.dynamite.use_dynamite2", false, false, Ba.f1917a);
        ta = a("measurement.sdk.dynamite.allow_remote_dynamite", false, false, Fa.f1955a);
        ua = a("measurement.sdk.collection.validate_param_names_alphabetical", false, false, Ea.f1950a);
        va = a("measurement.collection.event_safelist", true, true, Ha.f1980a);
        wa = a("measurement.service.audience.scoped_filters_v27", false, false, Ga.f1966a);
        xa = a("measurement.service.audience.session_scoped_event_aggregates", false, false, Ja.f1999a);
        ya = a("measurement.service.audience.session_scoped_user_engagement", false, false, La.f2019a);
        za = a("measurement.service.audience.scoped_engagement_removal_when_session_expired", true, true, Ka.f2010a);
        Aa = a("measurement.client.audience.scoped_engagement_removal_when_session_expired", true, true, Na.f2042a);
        Ba = a("measurement.service.audience.remove_disabled_session_scoped_user_engagement", false, false, Ma.f2030a);
        Ca = a("measurement.service.audience.use_bundle_timestamp_for_property_filters", false, false, Pa.f2067a);
        Da = a("measurement.service.audience.not_prepend_timestamps_for_sequence_session_scoped_filters", false, false, Oa.f2058a);
        Ea = a("measurement.service.audience.invalidate_config_cache_after_app_unisntall", false, false, Ra.f2085a);
        Fa = a("measurement.sdk.collection.retrieve_deeplink_from_bow_2", true, true, Qa.f2079a);
        Ga = a("measurement.app_launch.event_ordering_fix", false, false, Ta.f2100a);
        Ha = a("measurement.sdk.collection.last_deep_link_referrer", false, false, Sa.f2091a);
        Ia = a("measurement.sdk.collection.last_deep_link_referrer_campaign", false, false, Ua.f2114a);
        Ja = a("measurement.sdk.collection.last_gclid_from_referrer", false, false, Xa.f2135a);
        Ka = a("measurement.sdk.collection.worker_thread_referrer", true, true, Wa.f2130a);
        La = a("measurement.upload.file_lock_state_check", false, false, Za.f2153a);
        Ma = a("measurement.sampling.calculate_bundle_timestamp_before_sampling", true, true, Ya.f2144a);
        Na = a("measurement.ga.ga_app_id", false, Boolean.valueOf(Ce.a()), C0254ab.f2177a);
        Oa = a("measurement.lifecycle.app_backgrounded_tracking", false, false, _a.f2158a);
        Pa = a("measurement.lifecycle.app_in_background_parameter", false, false, C0271db.f2214a);
        Qa = a("measurement.integration.disable_firebase_instance_id", false, false, C0260bb.f2185a);
        Ra = a("measurement.lifecycle.app_backgrounded_engagement", false, false, C0281fb.f2246a);
        Sa = a("measurement.service.fix_gmp_version", false, false, C0291hb.f2264a);
        Ta = a("measurement.collection.service.update_with_analytics_fix", false, false, C0286gb.f2256a);
        Ua = a("measurement.service.disable_install_state_reporting", false, false, C0301jb.f2290a);
        Va = a("measurement.service.use_appinfo_modified", false, false, C0296ib.f2278a);
        Wa = a("measurement.upload.dsid_reflection_failure_logging", true, true, C0311lb.f2319a);
        Xa = a("measurement.client.firebase_feature_rollout.v1.enable", true, true, C0306kb.f2305a);
    }

    private static boolean Ta() {
        if (f2353a != null) {
        }
        return false;
    }

    private static <V> C0331pb<V> a(String str, V v2, V v3, InterfaceC0316mb<V> interfaceC0316mb) {
        C0331pb<V> c0331pb = new C0331pb<>(str, v2, v3, interfaceC0316mb);
        f2354b.add(c0331pb);
        return c0331pb;
    }

    public static Map<String, String> a(Context context) {
        C0119fa c0119faA = C0119fa.a(context.getContentResolver(), C0223va.a("com.google.android.gms.measurement"));
        return c0119faA == null ? Collections.emptyMap() : c0119faA.a();
    }

    static void a(_b _bVar) {
        f2356d = _bVar;
    }

    static void a(ye yeVar) {
        f2353a = yeVar;
    }

    static void a(Exception exc) {
        if (f2356d == null) {
            return;
        }
        Context contextE = f2356d.e();
        if (f2357e == null) {
            f2357e = Boolean.valueOf(com.google.android.gms.common.d.a().a(contextE, 12451000) == 0);
        }
        if (f2357e.booleanValue()) {
            f2356d.d().t().a("Got Exception on PhenotypeFlag.get on Play device", exc);
        }
    }

    static final /* synthetic */ String sa() {
        return Ta() ? com.google.android.gms.internal.measurement.Md.D() : com.google.android.gms.internal.measurement.Md.o();
    }
}
