package com.google.android.gms.measurement.internal;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.zb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0380zb implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ int f2488a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2489b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ Object f2490c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ Object f2491d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Object f2492e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ C0365wb f2493f;

    RunnableC0380zb(C0365wb c0365wb, int i, String str, Object obj, Object obj2, Object obj3) {
        this.f2493f = c0365wb;
        this.f2488a = i;
        this.f2489b = str;
        this.f2490c = obj;
        this.f2491d = obj2;
        this.f2492e = obj3;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C0365wb c0365wb;
        char c2;
        Kb kbP = this.f2493f.f2438a.p();
        if (!kbP.s()) {
            this.f2493f.a(6, "Persisted config not initialized. Not logging error/warn");
            return;
        }
        if (this.f2493f.f2446c == 0) {
            if (this.f2493f.m().p()) {
                c0365wb = this.f2493f;
                c0365wb.f();
                c2 = 'C';
            } else {
                c0365wb = this.f2493f;
                c0365wb.f();
                c2 = 'c';
            }
            c0365wb.f2446c = c2;
        }
        if (this.f2493f.f2447d < 0) {
            C0365wb c0365wb2 = this.f2493f;
            c0365wb2.f2447d = c0365wb2.m().o();
        }
        char cCharAt = "01VDIWEA?".charAt(this.f2488a);
        char c3 = this.f2493f.f2446c;
        long j = this.f2493f.f2447d;
        String strA = C0365wb.a(true, this.f2489b, this.f2490c, this.f2491d, this.f2492e);
        StringBuilder sb = new StringBuilder(String.valueOf(strA).length() + 24);
        sb.append("2");
        sb.append(cCharAt);
        sb.append(c3);
        sb.append(j);
        sb.append(":");
        sb.append(strA);
        String string = sb.toString();
        if (string.length() > 1024) {
            string = this.f2489b.substring(0, jp.co.acrodea.runtime.drm.h.CLIENT_AUTOGEN_KEYBIT);
        }
        kbP.f2013e.a(string, 1L);
    }
}
