package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.os.RemoteException;
import com.google.android.gms.internal.measurement.Ef;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.yd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class RunnableC0377yd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ String f2478a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f2479b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ zzm f2480c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ Ef f2481d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ C0318md f2482e;

    RunnableC0377yd(C0318md c0318md, String str, String str2, zzm zzmVar, Ef ef) {
        this.f2482e = c0318md;
        this.f2478a = str;
        this.f2479b = str2;
        this.f2480c = zzmVar;
        this.f2481d = ef;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ArrayList<Bundle> arrayList = new ArrayList<>();
        try {
            try {
                InterfaceC0326ob interfaceC0326ob = this.f2482e.f2336d;
                if (interfaceC0326ob == null) {
                    this.f2482e.d().t().a("Failed to get conditional properties", this.f2478a, this.f2479b);
                } else {
                    arrayList = le.b(interfaceC0326ob.a(this.f2478a, this.f2479b, this.f2480c));
                    this.f2482e.J();
                }
            } catch (RemoteException e2) {
                this.f2482e.d().t().a("Failed to get conditional properties", this.f2478a, this.f2479b, e2);
            }
        } finally {
            this.f2482e.k().a(this.f2481d, arrayList);
        }
    }
}
