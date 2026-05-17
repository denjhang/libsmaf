package com.google.android.gms.measurement.internal;

import android.content.SharedPreferences;
import android.util.Pair;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ob {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f2059a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f2060b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f2061c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final long f2062d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Kb f2063e;

    private Ob(Kb kb, String str, long j) {
        this.f2063e = kb;
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.a(j > 0);
        this.f2059a = String.valueOf(str).concat(":start");
        this.f2060b = String.valueOf(str).concat(":count");
        this.f2061c = String.valueOf(str).concat(":value");
        this.f2062d = j;
    }

    private final void b() {
        this.f2063e.h();
        long jA = this.f2063e.g().a();
        SharedPreferences.Editor editorEdit = this.f2063e.B().edit();
        editorEdit.remove(this.f2060b);
        editorEdit.remove(this.f2061c);
        editorEdit.putLong(this.f2059a, jA);
        editorEdit.apply();
    }

    private final long c() {
        return this.f2063e.B().getLong(this.f2059a, 0L);
    }

    public final Pair<String, Long> a() {
        long jAbs;
        this.f2063e.h();
        this.f2063e.h();
        long jC = c();
        if (jC == 0) {
            b();
            jAbs = 0;
        } else {
            jAbs = Math.abs(jC - this.f2063e.g().a());
        }
        long j = this.f2062d;
        if (jAbs < j) {
            return null;
        }
        if (jAbs > (j << 1)) {
            b();
            return null;
        }
        String string = this.f2063e.B().getString(this.f2061c, null);
        long j2 = this.f2063e.B().getLong(this.f2060b, 0L);
        b();
        return (string == null || j2 <= 0) ? Kb.f2011c : new Pair<>(string, Long.valueOf(j2));
    }

    public final void a(String str, long j) {
        this.f2063e.h();
        if (c() == 0) {
            b();
        }
        if (str == null) {
            str = "";
        }
        long j2 = this.f2063e.B().getLong(this.f2060b, 0L);
        if (j2 <= 0) {
            SharedPreferences.Editor editorEdit = this.f2063e.B().edit();
            editorEdit.putString(this.f2061c, str);
            editorEdit.putLong(this.f2060b, 1L);
            editorEdit.apply();
            return;
        }
        long j3 = j2 + 1;
        boolean z = (this.f2063e.k().u().nextLong() & Long.MAX_VALUE) < Long.MAX_VALUE / j3;
        SharedPreferences.Editor editorEdit2 = this.f2063e.B().edit();
        if (z) {
            editorEdit2.putString(this.f2061c, str);
        }
        editorEdit2.putLong(this.f2060b, j3);
        editorEdit2.apply();
    }
}
