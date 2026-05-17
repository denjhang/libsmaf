package com.google.android.gms.measurement.internal;

import android.annotation.TargetApi;
import android.app.Activity;
import android.app.Application;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import com.google.android.gms.internal.measurement.C0203re;
import com.google.android.gms.internal.measurement.Je;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@TargetApi(14)
final class Xc implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Gc f2140a;

    private Xc(Gc gc) {
        this.f2140a = gc;
    }

    /* synthetic */ Xc(Gc gc, Ic ic) {
        this(gc);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(boolean z, Uri uri, String str, String str2) {
        Bundle bundleA;
        Bundle bundleA2;
        try {
            if (this.f2140a.m().a(C0324o.Ha) || this.f2140a.m().a(C0324o.Ja) || this.f2140a.m().a(C0324o.Ia)) {
                le leVarK = this.f2140a.k();
                if (!TextUtils.isEmpty(str2)) {
                    if (str2.contains("gclid") || str2.contains("utm_campaign") || str2.contains("utm_source") || str2.contains("utm_medium")) {
                        String strValueOf = String.valueOf(str2);
                        bundleA = leVarK.a(Uri.parse(strValueOf.length() != 0 ? "https://google.com/search?".concat(strValueOf) : new String("https://google.com/search?")));
                        if (bundleA != null) {
                            bundleA.putString("_cis", "referrer");
                        }
                    } else {
                        leVarK.d().A().a("Activity created with data 'referrer' without required params");
                    }
                }
                bundleA = null;
            } else {
                bundleA = null;
            }
            boolean z2 = false;
            if (z) {
                bundleA2 = this.f2140a.k().a(uri);
                if (bundleA2 != null) {
                    bundleA2.putString("_cis", "intent");
                    if (this.f2140a.m().a(C0324o.Ha) && !bundleA2.containsKey("gclid") && bundleA != null && bundleA.containsKey("gclid")) {
                        bundleA2.putString("_cer", String.format("gclid=%s", bundleA.getString("gclid")));
                    }
                    this.f2140a.a(str, "_cmp", bundleA2);
                }
            } else {
                bundleA2 = null;
            }
            if (this.f2140a.m().a(C0324o.Ja) && !this.f2140a.m().a(C0324o.Ia) && bundleA != null && bundleA.containsKey("gclid") && (bundleA2 == null || !bundleA2.containsKey("gclid"))) {
                this.f2140a.a("auto", "_lgclid", (Object) bundleA.getString("gclid"), true);
            }
            if (TextUtils.isEmpty(str2)) {
                return;
            }
            this.f2140a.d().A().a("Activity created with referrer", str2);
            if (this.f2140a.m().a(C0324o.Ia)) {
                if (bundleA != null) {
                    this.f2140a.a(str, "_cmp", bundleA);
                } else {
                    this.f2140a.d().A().a("Referrer does not contain valid parameters", str2);
                }
                this.f2140a.a("auto", "_ldl", (Object) null, true);
                return;
            }
            if (str2.contains("gclid") && (str2.contains("utm_campaign") || str2.contains("utm_source") || str2.contains("utm_medium") || str2.contains("utm_term") || str2.contains("utm_content"))) {
                z2 = true;
            }
            if (!z2) {
                this.f2140a.d().A().a("Activity created with data 'referrer' without required params");
            } else {
                if (TextUtils.isEmpty(str2)) {
                    return;
                }
                this.f2140a.a("auto", "_ldl", (Object) str2, true);
            }
        } catch (Exception e2) {
            this.f2140a.d().t().a("Throwable caught in handleReferrerForOnActivityCreated", e2);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        Uri data;
        try {
            try {
                this.f2140a.d().B().a("onActivityCreated");
                Intent intent = activity.getIntent();
                if (intent != null && (data = intent.getData()) != null && data.isHierarchical()) {
                    this.f2140a.k();
                    String str = le.a(intent) ? "gs" : "auto";
                    String queryParameter = data.getQueryParameter("referrer");
                    boolean z = bundle == null;
                    if (Je.a() && C0324o.Ka.a(null).booleanValue()) {
                        this.f2140a.c().a(new _c(this, z, data, str, queryParameter));
                    } else {
                        a(z, data, str, queryParameter);
                    }
                }
            } catch (Exception e2) {
                this.f2140a.d().t().a("Throwable caught in onActivityCreated", e2);
            }
        } finally {
            this.f2140a.s().a(activity, bundle);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        this.f2140a.s().c(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        this.f2140a.s().b(activity);
        Nd ndU = this.f2140a.u();
        ndU.c().a(new Pd(ndU, ndU.g().b()));
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        if (C0203re.a() && C0324o.fa.a(null).booleanValue()) {
            this.f2140a.u().B();
            this.f2140a.s().a(activity);
        } else {
            this.f2140a.s().a(activity);
            this.f2140a.u().B();
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        this.f2140a.s().b(activity, bundle);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
    }
}
