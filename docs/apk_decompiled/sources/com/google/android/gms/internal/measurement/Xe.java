package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Xe implements Ue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0217ua<Boolean> f1604a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0217ua<Double> f1605b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1606c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final AbstractC0217ua<Long> f1607d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final AbstractC0217ua<String> f1608e;

    static {
        Aa aa = new Aa(C0223va.a("com.google.android.gms.measurement"));
        f1604a = aa.a("measurement.test.boolean_flag", false);
        f1605b = aa.a("measurement.test.double_flag", -3.0d);
        f1606c = aa.a("measurement.test.int_flag", -2L);
        f1607d = aa.a("measurement.test.long_flag", -1L);
        f1608e = aa.a("measurement.test.string_flag", "---");
    }

    @Override // com.google.android.gms.internal.measurement.Ue
    public final String b() {
        return f1608e.c();
    }

    @Override // com.google.android.gms.internal.measurement.Ue
    public final boolean h() {
        return f1604a.c().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ue
    public final double m() {
        return f1605b.c().doubleValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ue
    public final long x() {
        return f1606c.c().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.Ue
    public final long y() {
        return f1607d.c().longValue();
    }
}
