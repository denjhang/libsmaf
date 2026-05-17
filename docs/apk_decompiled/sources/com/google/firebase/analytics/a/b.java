package com.google.firebase.analytics.a;

import android.content.Context;
import android.os.Bundle;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.measurement.AppMeasurement;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f2544a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final AppMeasurement f2545b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final Map<String, Object> f2546c;

    private b(AppMeasurement appMeasurement) {
        r.a(appMeasurement);
        this.f2545b = appMeasurement;
        this.f2546c = new ConcurrentHashMap();
    }

    public static a a(c.a.b.d dVar, Context context, c.a.b.a.d dVar2) {
        r.a(dVar);
        r.a(context);
        r.a(dVar2);
        r.a(context.getApplicationContext());
        if (f2544a == null) {
            synchronized (b.class) {
                if (f2544a == null) {
                    Bundle bundle = new Bundle(1);
                    if (dVar.h()) {
                        dVar2.a(c.a.b.a.class, d.f2548a, c.f2547a);
                        bundle.putBoolean("dataCollectionDefaultEnabled", dVar.g());
                    }
                    f2544a = new b(AppMeasurement.a(context, bundle));
                }
            }
        }
        return f2544a;
    }

    static final /* synthetic */ void a(c.a.b.a.a aVar) {
        boolean z = ((c.a.b.a) aVar.a()).f898a;
        synchronized (b.class) {
            ((b) f2544a).f2545b.a(z);
        }
    }
}
