package com.google.android.gms.internal.measurement;

import android.content.Context;
import android.net.Uri;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Aa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f1390a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final Uri f1391b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final String f1392c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final String f1393d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final boolean f1394e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final boolean f1395f;
    final boolean g;
    final boolean h;
    final Ea<Context, Boolean> i;

    public Aa(Uri uri) {
        this(null, uri, "", "", false, false, false, false, null);
    }

    private Aa(String str, Uri uri, String str2, String str3, boolean z, boolean z2, boolean z3, boolean z4, Ea<Context, Boolean> ea) {
        this.f1390a = null;
        this.f1391b = uri;
        this.f1392c = str2;
        this.f1393d = str3;
        this.f1394e = false;
        this.f1395f = false;
        this.g = false;
        this.h = false;
        this.i = null;
    }

    public final AbstractC0217ua<Double> a(String str, double d2) {
        return AbstractC0217ua.b(this, str, -3.0d);
    }

    public final AbstractC0217ua<Long> a(String str, long j) {
        return AbstractC0217ua.b(this, str, j);
    }

    public final AbstractC0217ua<String> a(String str, String str2) {
        return AbstractC0217ua.b(this, str, str2);
    }

    public final AbstractC0217ua<Boolean> a(String str, boolean z) {
        return AbstractC0217ua.b(this, str, z);
    }
}
