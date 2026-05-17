package com.google.android.gms.common.api.internal;

import com.google.android.gms.common.ConnectionResult;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class F {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final b.b.b<E<?>, ConnectionResult> f1057a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final b.b.b<E<?>, String> f1058b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final c.a.a.a.f.h<Map<E<?>, String>> f1059c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f1060d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private boolean f1061e;

    public final Set<E<?>> a() {
        return this.f1057a.keySet();
    }

    public final void a(E<?> e2, ConnectionResult connectionResult, String str) {
        this.f1057a.put(e2, connectionResult);
        this.f1058b.put(e2, str);
        this.f1060d--;
        if (!connectionResult.e()) {
            this.f1061e = true;
        }
        if (this.f1060d == 0) {
            if (!this.f1061e) {
                this.f1059c.a(this.f1058b);
            } else {
                this.f1059c.a(new com.google.android.gms.common.api.c(this.f1057a));
            }
        }
    }
}
