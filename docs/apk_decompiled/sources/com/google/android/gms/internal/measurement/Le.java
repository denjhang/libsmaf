package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Le implements Ie {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1505a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1506b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1507c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1508d;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1505a = aa.a("measurement.sdk.collection.last_deep_link_referrer", false);
        f1506b = aa.a("measurement.sdk.collection.last_deep_link_referrer_campaign", false);
        f1507c = aa.a("measurement.sdk.collection.last_gclid_from_referrer", false);
        f1508d = aa.a("measurement.sdk.collection.worker_thread_referrer", true);
    }

    @Override // com.google.android.gms.internal.measurement.Ie
    public final boolean b() {
        return f1508d.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ie
    public final boolean h() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Ie
    public final boolean m() {
        return f1505a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ie
    public final boolean x() {
        return f1506b.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ie
    public final boolean y() {
        return f1507c.c().booleanValue();
    }
}
