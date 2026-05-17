package com.google.firebase.analytics;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import androidx.annotation.Keep;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.internal.measurement.Mf;
import com.google.android.gms.internal.measurement.zzv;
import com.google.android.gms.measurement.internal.Zc;
import com.google.android.gms.measurement.internal._b;
import com.google.android.gms.measurement.internal.ye;
import com.google.firebase.iid.FirebaseInstanceId;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class FirebaseAnalytics {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile FirebaseAnalytics f2538a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final _b f2539b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Mf f2540c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final boolean f2541d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Object f2542e;

    private FirebaseAnalytics(Mf mf) {
        r.a(mf);
        this.f2539b = null;
        this.f2540c = mf;
        this.f2541d = true;
        this.f2542e = new Object();
    }

    private FirebaseAnalytics(_b _bVar) {
        r.a(_bVar);
        this.f2539b = _bVar;
        this.f2540c = null;
        this.f2541d = false;
        this.f2542e = new Object();
    }

    @Keep
    public static FirebaseAnalytics getInstance(Context context) {
        if (f2538a == null) {
            synchronized (FirebaseAnalytics.class) {
                if (f2538a == null) {
                    f2538a = Mf.b(context) ? new FirebaseAnalytics(Mf.a(context)) : new FirebaseAnalytics(_b.a(context, (zzv) null));
                }
            }
        }
        return f2538a;
    }

    @Keep
    public static Zc getScionFrontendApiImplementation(Context context, Bundle bundle) {
        Mf mfA;
        if (Mf.b(context) && (mfA = Mf.a(context, (String) null, (String) null, (String) null, bundle)) != null) {
            return new a(mfA);
        }
        return null;
    }

    public final void a(String str, Bundle bundle) {
        if (this.f2541d) {
            this.f2540c.a(str, bundle);
        } else {
            this.f2539b.u().a("app", str, bundle, true);
        }
    }

    @Keep
    public final String getFirebaseInstanceId() {
        return FirebaseInstanceId.b().a();
    }

    @Keep
    public final void setCurrentScreen(Activity activity, String str, String str2) {
        if (this.f2541d) {
            this.f2540c.a(activity, str, str2);
        } else if (ye.a()) {
            this.f2539b.D().a(activity, str, str2);
        } else {
            this.f2539b.d().w().a("setCurrentScreen must be called from the main thread");
        }
    }
}
