package com.google.android.gms.auth.api.signin.internal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f996a = 31;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f997b = 1;

    public int a() {
        return this.f997b;
    }

    public a a(Object obj) {
        this.f997b = (f996a * this.f997b) + (obj == null ? 0 : obj.hashCode());
        return this;
    }

    public final a a(boolean z) {
        this.f997b = (f996a * this.f997b) + (z ? 1 : 0);
        return this;
    }
}
