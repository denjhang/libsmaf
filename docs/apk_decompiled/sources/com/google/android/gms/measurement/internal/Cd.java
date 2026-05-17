package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import android.text.TextUtils;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Cd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ AtomicReference f1935a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ String f1936b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final /* synthetic */ String f1937c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final /* synthetic */ String f1938d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ boolean f1939e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ zzm f1940f;
    private final /* synthetic */ C0318md g;

    Cd(C0318md c0318md, AtomicReference atomicReference, String str, String str2, String str3, boolean z, zzm zzmVar) {
        this.g = c0318md;
        this.f1935a = atomicReference;
        this.f1936b = str;
        this.f1937c = str2;
        this.f1938d = str3;
        this.f1939e = z;
        this.f1940f = zzmVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        AtomicReference atomicReference;
        InterfaceC0326ob interfaceC0326ob;
        AtomicReference atomicReference2;
        List<zzkj> listA;
        synchronized (this.f1935a) {
            try {
                try {
                    interfaceC0326ob = this.g.f2336d;
                } catch (RemoteException e2) {
                    this.g.d().t().a("Failed to get user properties", C0365wb.a(this.f1936b), this.f1937c, e2);
                    this.f1935a.set(Collections.emptyList());
                    atomicReference = this.f1935a;
                }
                if (interfaceC0326ob == null) {
                    this.g.d().t().a("Failed to get user properties", C0365wb.a(this.f1936b), this.f1937c, this.f1938d);
                    this.f1935a.set(Collections.emptyList());
                    return;
                }
                if (TextUtils.isEmpty(this.f1936b)) {
                    atomicReference2 = this.f1935a;
                    listA = interfaceC0326ob.a(this.f1937c, this.f1938d, this.f1939e, this.f1940f);
                } else {
                    atomicReference2 = this.f1935a;
                    listA = interfaceC0326ob.a(this.f1936b, this.f1937c, this.f1938d, this.f1939e);
                }
                atomicReference2.set(listA);
                this.g.J();
                atomicReference = this.f1935a;
                atomicReference.notify();
            } finally {
                this.f1935a.notify();
            }
        }
    }
}
