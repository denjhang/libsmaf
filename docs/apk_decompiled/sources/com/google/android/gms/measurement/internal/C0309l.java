package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.text.TextUtils;
import java.util.Iterator;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.l, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0309l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f2312a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final String f2313b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f2314c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final long f2315d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final long f2316e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final zzam f2317f;

    C0309l(_b _bVar, String str, String str2, String str3, long j, long j2, Bundle bundle) {
        zzam zzamVar;
        com.google.android.gms.common.internal.r.b(str2);
        com.google.android.gms.common.internal.r.b(str3);
        this.f2312a = str2;
        this.f2313b = str3;
        this.f2314c = TextUtils.isEmpty(str) ? null : str;
        this.f2315d = j;
        this.f2316e = j2;
        long j3 = this.f2316e;
        if (j3 != 0 && j3 > this.f2315d) {
            _bVar.d().w().a("Event created with reverse previous/current timestamps. appId", C0365wb.a(str2));
        }
        if (bundle == null || bundle.isEmpty()) {
            zzamVar = new zzam(new Bundle());
        } else {
            Bundle bundle2 = new Bundle(bundle);
            Iterator<String> it = bundle2.keySet().iterator();
            while (it.hasNext()) {
                String next = it.next();
                if (next == null) {
                    _bVar.d().t().a("Param name can't be null");
                } else {
                    Object objA = _bVar.v().a(next, bundle2.get(next));
                    if (objA == null) {
                        _bVar.d().w().a("Param value can't be null", _bVar.w().b(next));
                    } else {
                        _bVar.v().a(bundle2, next, objA);
                    }
                }
                it.remove();
            }
            zzamVar = new zzam(bundle2);
        }
        this.f2317f = zzamVar;
    }

    private C0309l(_b _bVar, String str, String str2, String str3, long j, long j2, zzam zzamVar) {
        com.google.android.gms.common.internal.r.b(str2);
        com.google.android.gms.common.internal.r.b(str3);
        com.google.android.gms.common.internal.r.a(zzamVar);
        this.f2312a = str2;
        this.f2313b = str3;
        this.f2314c = TextUtils.isEmpty(str) ? null : str;
        this.f2315d = j;
        this.f2316e = j2;
        long j3 = this.f2316e;
        if (j3 != 0 && j3 > this.f2315d) {
            _bVar.d().w().a("Event created with reverse previous/current timestamps. appId, name", C0365wb.a(str2), C0365wb.a(str3));
        }
        this.f2317f = zzamVar;
    }

    final C0309l a(_b _bVar, long j) {
        return new C0309l(_bVar, this.f2314c, this.f2312a, this.f2313b, this.f2315d, j, this.f2317f);
    }

    public final String toString() {
        String str = this.f2312a;
        String str2 = this.f2313b;
        String strValueOf = String.valueOf(this.f2317f);
        StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 33 + String.valueOf(str2).length() + String.valueOf(strValueOf).length());
        sb.append("Event{appId='");
        sb.append(str);
        sb.append("', name='");
        sb.append(str2);
        sb.append("', params=");
        sb.append(strValueOf);
        sb.append('}');
        return sb.toString();
    }
}
