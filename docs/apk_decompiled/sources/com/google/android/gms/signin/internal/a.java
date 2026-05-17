package com.google.android.gms.signin.internal;

import android.accounts.Account;
import android.content.Context;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.common.internal.AbstractC0065c;
import com.google.android.gms.common.internal.AbstractC0069g;
import com.google.android.gms.common.internal.C0066d;
import com.google.android.gms.common.internal.ResolveAccountRequest;
import com.google.android.gms.common.internal.r;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a extends AbstractC0069g<f> implements c.a.a.a.e.e {
    private final boolean G;
    private final C0066d H;
    private final Bundle I;
    private Integer J;

    private a(Context context, Looper looper, boolean z, C0066d c0066d, Bundle bundle, com.google.android.gms.common.api.f fVar, com.google.android.gms.common.api.g gVar) {
        super(context, looper, 44, c0066d, fVar, gVar);
        this.G = true;
        this.H = c0066d;
        this.I = bundle;
        this.J = c0066d.d();
    }

    public a(Context context, Looper looper, boolean z, C0066d c0066d, c.a.a.a.e.a aVar, com.google.android.gms.common.api.f fVar, com.google.android.gms.common.api.g gVar) {
        this(context, looper, true, c0066d, a(c0066d), fVar, gVar);
    }

    public static Bundle a(C0066d c0066d) {
        c.a.a.a.e.a aVarH = c0066d.h();
        Integer numD = c0066d.d();
        Bundle bundle = new Bundle();
        bundle.putParcelable("com.google.android.gms.signin.internal.clientRequestedAccount", c0066d.a());
        if (numD != null) {
            bundle.putInt("com.google.android.gms.common.internal.ClientSettings.sessionId", numD.intValue());
        }
        if (aVarH != null) {
            bundle.putBoolean("com.google.android.gms.signin.internal.offlineAccessRequested", aVarH.g());
            bundle.putBoolean("com.google.android.gms.signin.internal.idTokenRequested", aVarH.f());
            bundle.putString("com.google.android.gms.signin.internal.serverClientId", aVarH.d());
            bundle.putBoolean("com.google.android.gms.signin.internal.usePromptModeForAuthCode", true);
            bundle.putBoolean("com.google.android.gms.signin.internal.forceCodeForRefreshToken", aVarH.e());
            bundle.putString("com.google.android.gms.signin.internal.hostedDomain", aVarH.b());
            bundle.putBoolean("com.google.android.gms.signin.internal.waitForAccessTokenRefresh", aVarH.h());
            if (aVarH.a() != null) {
                bundle.putLong("com.google.android.gms.signin.internal.authApiSignInModuleVersion", aVarH.a().longValue());
            }
            if (aVarH.c() != null) {
                bundle.putLong("com.google.android.gms.signin.internal.realClientLibraryVersion", aVarH.c().longValue());
            }
        }
        return bundle;
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected /* synthetic */ IInterface a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.signin.internal.ISignInService");
        return iInterfaceQueryLocalInterface instanceof f ? (f) iInterfaceQueryLocalInterface : new g(iBinder);
    }

    @Override // c.a.a.a.e.e
    public final void a(d dVar) {
        r.a(dVar, "Expecting a valid ISignInCallbacks");
        try {
            Account accountB = this.H.b();
            ((f) r()).a(new zah(new ResolveAccountRequest(accountB, this.J.intValue(), "<<default account>>".equals(accountB.name) ? com.google.android.gms.auth.api.signin.internal.b.a(n()).a() : null)), dVar);
        } catch (RemoteException e2) {
            Log.w("SignInClientImpl", "Remote service probably died when signIn is called");
            try {
                dVar.a(new zaj(8));
            } catch (RemoteException unused) {
                Log.wtf("SignInClientImpl", "ISignInCallbacks#onSignInComplete should be executed from the same process, unexpected RemoteException.", e2);
            }
        }
    }

    @Override // c.a.a.a.e.e
    public final void connect() {
        a(new AbstractC0065c.d());
    }

    @Override // com.google.android.gms.common.internal.AbstractC0069g, com.google.android.gms.common.internal.AbstractC0065c, com.google.android.gms.common.api.a.f
    public int e() {
        return 12451000;
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c, com.google.android.gms.common.api.a.f
    public boolean g() {
        return this.G;
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected Bundle o() {
        if (!n().getPackageName().equals(this.H.f())) {
            this.I.putString("com.google.android.gms.signin.internal.realClientPackageName", this.H.f());
        }
        return this.I;
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected String s() {
        return "com.google.android.gms.signin.internal.ISignInService";
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected String t() {
        return "com.google.android.gms.signin.service.START";
    }
}
