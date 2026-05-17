package com.google.android.gms.internal.measurement;

import android.content.Context;
import android.content.SharedPreferences;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Da implements InterfaceC0153ka {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Map<String, Da> f1425a = new b.b.b();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final SharedPreferences f1426b;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private volatile Map<String, ?> f1429e;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final SharedPreferences.OnSharedPreferenceChangeListener f1427c = new SharedPreferences.OnSharedPreferenceChangeListener(this) { // from class: com.google.android.gms.internal.measurement.Ca

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Da f1412a;

        {
            this.f1412a = this;
        }

        @Override // android.content.SharedPreferences.OnSharedPreferenceChangeListener
        public final void onSharedPreferenceChanged(SharedPreferences sharedPreferences, String str) {
            this.f1412a.a(sharedPreferences, str);
        }
    };

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Object f1428d = new Object();

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final List<InterfaceC0160la> f1430f = new ArrayList();

    private Da(SharedPreferences sharedPreferences) {
        this.f1426b = sharedPreferences;
        this.f1426b.registerOnSharedPreferenceChangeListener(this.f1427c);
    }

    static Da a(Context context, String str) {
        Da da;
        SharedPreferences sharedPreferences;
        if (!((!C0126ga.a() || str.startsWith("direct_boot:")) ? true : C0126ga.a(context))) {
            return null;
        }
        synchronized (Da.class) {
            da = f1425a.get(str);
            if (da == null) {
                if (str.startsWith("direct_boot:")) {
                    if (C0126ga.a()) {
                        context = context.createDeviceProtectedStorageContext();
                    }
                    sharedPreferences = context.getSharedPreferences(str.substring(12), 0);
                } else {
                    sharedPreferences = context.getSharedPreferences(str, 0);
                }
                da = new Da(sharedPreferences);
                f1425a.put(str, da);
            }
        }
        return da;
    }

    static synchronized void a() {
        for (Da da : f1425a.values()) {
            da.f1426b.unregisterOnSharedPreferenceChangeListener(da.f1427c);
        }
        f1425a.clear();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0153ka
    public final Object a(String str) {
        Map<String, ?> all = this.f1429e;
        if (all == null) {
            synchronized (this.f1428d) {
                all = this.f1429e;
                if (all == null) {
                    all = this.f1426b.getAll();
                    this.f1429e = all;
                }
            }
        }
        if (all != null) {
            return all.get(str);
        }
        return null;
    }

    final /* synthetic */ void a(SharedPreferences sharedPreferences, String str) {
        synchronized (this.f1428d) {
            this.f1429e = null;
            AbstractC0217ua.a();
        }
        synchronized (this) {
            Iterator<InterfaceC0160la> it = this.f1430f.iterator();
            while (it.hasNext()) {
                it.next().h();
            }
        }
    }
}
