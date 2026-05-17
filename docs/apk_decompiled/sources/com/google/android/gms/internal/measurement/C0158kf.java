package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.kf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0158kf implements InterfaceC0165lf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1741a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1742b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1743c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1744d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1745e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1746f;
    private static final AbstractC0217ua<Long> g;
    private static final AbstractC0217ua<Boolean> h;
    private static final AbstractC0217ua<Boolean> i;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1741a = aa.a("measurement.service.audience.scoped_filters_v27", false);
        f1742b = aa.a("measurement.service.audience.session_scoped_user_engagement", false);
        f1743c = aa.a("measurement.client.audience.scoped_engagement_removal_when_session_expired", true);
        f1744d = aa.a("measurement.service.audience.scoped_engagement_removal_when_session_expired", true);
        f1745e = aa.a("measurement.service.audience.session_scoped_event_aggregates", false);
        f1746f = aa.a("measurement.service.audience.use_bundle_timestamp_for_property_filters", false);
        g = aa.a("measurement.id.scoped_audience_filters", 0L);
        h = aa.a("measurement.service.audience.not_prepend_timestamps_for_sequence_session_scoped_filters", false);
        i = aa.a("measurement.service.audience.remove_disabled_session_scoped_user_engagement", false);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0165lf
    public final boolean b() {
        return f1744d.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0165lf
    public final boolean h() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0165lf
    public final boolean i() {
        return h.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0165lf
    public final boolean j() {
        return i.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0165lf
    public final boolean k() {
        return f1745e.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0165lf
    public final boolean l() {
        return f1746f.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0165lf
    public final boolean m() {
        return f1741a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0165lf
    public final boolean x() {
        return f1742b.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0165lf
    public final boolean y() {
        return f1743c.c().booleanValue();
    }
}
