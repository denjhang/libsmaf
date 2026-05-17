package com.google.android.gms.common.api.internal;

import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.api.a;
import com.google.android.gms.common.internal.C0066d;
import com.google.android.gms.common.internal.ResolveAccountResponse;
import com.google.android.gms.signin.internal.zaj;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class w extends com.google.android.gms.signin.internal.c implements com.google.android.gms.common.api.f, com.google.android.gms.common.api.g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a.AbstractC0021a<? extends c.a.a.a.e.e, c.a.a.a.e.a> f1112a = c.a.a.a.e.b.f851c;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Context f1113b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Handler f1114c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final a.AbstractC0021a<? extends c.a.a.a.e.e, c.a.a.a.e.a> f1115d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Set<Scope> f1116e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private C0066d f1117f;
    private c.a.a.a.e.e g;
    private z h;

    public w(Context context, Handler handler, C0066d c0066d) {
        this(context, handler, c0066d, f1112a);
    }

    public w(Context context, Handler handler, C0066d c0066d, a.AbstractC0021a<? extends c.a.a.a.e.e, c.a.a.a.e.a> abstractC0021a) {
        this.f1113b = context;
        this.f1114c = handler;
        com.google.android.gms.common.internal.r.a(c0066d, "ClientSettings must not be null");
        this.f1117f = c0066d;
        this.f1116e = c0066d.g();
        this.f1115d = abstractC0021a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(zaj zajVar) {
        ConnectionResult connectionResultA = zajVar.a();
        if (connectionResultA.e()) {
            ResolveAccountResponse resolveAccountResponseB = zajVar.b();
            connectionResultA = resolveAccountResponseB.b();
            if (connectionResultA.e()) {
                this.h.a(resolveAccountResponseB.a(), this.f1116e);
            } else {
                String strValueOf = String.valueOf(connectionResultA);
                StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 48);
                sb.append("Sign-in succeeded with resolve account failure: ");
                sb.append(strValueOf);
                Log.wtf("SignInCoordinator", sb.toString(), new Exception());
                this.h.b(connectionResultA);
            }
        } else {
            this.h.b(connectionResultA);
        }
        this.g.a();
    }

    @Override // com.google.android.gms.common.api.g
    public final void a(ConnectionResult connectionResult) {
        this.h.b(connectionResult);
    }

    public final void a(z zVar) {
        c.a.a.a.e.e eVar = this.g;
        if (eVar != null) {
            eVar.a();
        }
        this.f1117f.a(Integer.valueOf(System.identityHashCode(this)));
        a.AbstractC0021a<? extends c.a.a.a.e.e, c.a.a.a.e.a> abstractC0021a = this.f1115d;
        Context context = this.f1113b;
        Looper looper = this.f1114c.getLooper();
        C0066d c0066d = this.f1117f;
        this.g = (c.a.a.a.e.e) abstractC0021a.a(context, looper, c0066d, c0066d.h(), this, this);
        this.h = zVar;
        Set<Scope> set = this.f1116e;
        if (set == null || set.isEmpty()) {
            this.f1114c.post(new x(this));
        } else {
            this.g.connect();
        }
    }

    @Override // com.google.android.gms.signin.internal.d
    public final void a(zaj zajVar) {
        this.f1114c.post(new y(this, zajVar));
    }

    @Override // com.google.android.gms.common.api.f
    public final void c(int i) {
        this.g.a();
    }

    @Override // com.google.android.gms.common.api.f
    public final void c(Bundle bundle) {
        this.g.a(this);
    }

    public final void e() {
        c.a.a.a.e.e eVar = this.g;
        if (eVar != null) {
            eVar.a();
        }
    }
}
