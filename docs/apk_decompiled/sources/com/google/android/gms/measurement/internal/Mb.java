package com.google.android.gms.measurement.internal;

import android.content.SharedPreferences;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Mb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f2031a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final boolean f2032b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f2033c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f2034d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Kb f2035e;

    public Mb(Kb kb, String str, boolean z) {
        this.f2035e = kb;
        com.google.android.gms.common.internal.r.b(str);
        this.f2031a = str;
        this.f2032b = z;
    }

    public final void a(boolean z) {
        SharedPreferences.Editor editorEdit = this.f2035e.B().edit();
        editorEdit.putBoolean(this.f2031a, z);
        editorEdit.apply();
        this.f2034d = z;
    }

    public final boolean a() {
        if (!this.f2033c) {
            this.f2033c = true;
            this.f2034d = this.f2035e.B().getBoolean(this.f2031a, this.f2032b);
        }
        return this.f2034d;
    }
}
