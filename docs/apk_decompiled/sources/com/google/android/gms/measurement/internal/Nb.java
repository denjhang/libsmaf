package com.google.android.gms.measurement.internal;

import android.content.SharedPreferences;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Nb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f2043a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f2044b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f2045c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private String f2046d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Kb f2047e;

    public Nb(Kb kb, String str, String str2) {
        this.f2047e = kb;
        com.google.android.gms.common.internal.r.b(str);
        this.f2043a = str;
        this.f2044b = null;
    }

    public final String a() {
        if (!this.f2045c) {
            this.f2045c = true;
            this.f2046d = this.f2047e.B().getString(this.f2043a, null);
        }
        return this.f2046d;
    }

    public final void a(String str) {
        if (le.d(str, this.f2046d)) {
            return;
        }
        SharedPreferences.Editor editorEdit = this.f2047e.B().edit();
        editorEdit.putString(this.f2043a, str);
        editorEdit.apply();
        this.f2046d = str;
    }
}
