package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.os.RemoteException;
import com.google.android.gms.internal.measurement.Ef;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ad implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f1904a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f1905b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ boolean f1906c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ zzm f1907d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ Ef f1908e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ C0318md f1909f;

    Ad(C0318md c0318md, String str, String str2, boolean z, zzm zzmVar, Ef ef) {
        this.f1909f = c0318md;
        this.f1904a = str;
        this.f1905b = str2;
        this.f1906c = z;
        this.f1907d = zzmVar;
        this.f1908e = ef;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Bundle bundle = new Bundle();
        try {
            try {
                InterfaceC0326ob interfaceC0326ob = this.f1909f.f2336d;
                if (interfaceC0326ob == null) {
                    this.f1909f.d().t().a("Failed to get user properties", this.f1904a, this.f1905b);
                } else {
                    bundle = le.a(interfaceC0326ob.a(this.f1904a, this.f1905b, this.f1906c, this.f1907d));
                    this.f1909f.J();
                }
            } catch (RemoteException e2) {
                this.f1909f.d().t().a("Failed to get user properties", this.f1904a, e2);
            }
        } finally {
            this.f1909f.k().a(this.f1908e, bundle);
        }
    }
}
