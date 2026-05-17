package com.google.android.gms.measurement.internal;

import android.content.SharedPreferences;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Lb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f2020a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final long f2021b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f2022c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private long f2023d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Kb f2024e;

    public Lb(Kb kb, String str, long j) {
        this.f2024e = kb;
        com.google.android.gms.common.internal.r.b(str);
        this.f2020a = str;
        this.f2021b = j;
    }

    public final long a() {
        if (!this.f2022c) {
            this.f2022c = true;
            this.f2023d = this.f2024e.B().getLong(this.f2020a, this.f2021b);
        }
        return this.f2023d;
    }

    public final void a(long j) {
        SharedPreferences.Editor editorEdit = this.f2024e.B().edit();
        editorEdit.putLong(this.f2020a, j);
        editorEdit.apply();
        this.f2023d = j;
    }
}
