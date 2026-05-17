package com.google.android.gms.measurement.internal;

import android.accounts.Account;
import android.accounts.AccountManager;
import android.accounts.AuthenticatorException;
import android.accounts.OperationCanceledException;
import android.content.Context;
import android.content.pm.PackageManager;
import java.io.IOException;
import java.util.Calendar;
import java.util.Locale;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.i, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0294i extends AbstractC0356uc {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private long f2273c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private String f2274d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Boolean f2275e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private AccountManager f2276f;
    private Boolean g;
    private long h;

    C0294i(_b _bVar) {
        super(_bVar);
    }

    public final boolean a(Context context) {
        if (this.f2275e == null) {
            f();
            this.f2275e = false;
            try {
                PackageManager packageManager = context.getPackageManager();
                if (packageManager != null) {
                    packageManager.getPackageInfo("com.google.android.gms", 128);
                    this.f2275e = true;
                }
            } catch (PackageManager.NameNotFoundException unused) {
            }
        }
        return this.f2275e.booleanValue();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ C0365wb d() {
        return super.d();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Context e() {
        return super.e();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ ye f() {
        return super.f();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ com.google.android.gms.common.util.e g() {
        return super.g();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void h() {
        super.h();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0294i i() {
        return super.i();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0355ub j() {
        return super.j();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ le k() {
        return super.k();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ Kb l() {
        return super.l();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ ze m() {
        return super.m();
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0356uc
    protected final boolean r() {
        Calendar calendar = Calendar.getInstance();
        this.f2273c = TimeUnit.MINUTES.convert(calendar.get(15) + calendar.get(16), TimeUnit.MILLISECONDS);
        Locale locale = Locale.getDefault();
        String lowerCase = locale.getLanguage().toLowerCase(Locale.ENGLISH);
        String lowerCase2 = locale.getCountry().toLowerCase(Locale.ENGLISH);
        StringBuilder sb = new StringBuilder(String.valueOf(lowerCase).length() + 1 + String.valueOf(lowerCase2).length());
        sb.append(lowerCase);
        sb.append("-");
        sb.append(lowerCase2);
        this.f2274d = sb.toString();
        return false;
    }

    public final long t() {
        o();
        return this.f2273c;
    }

    public final String u() {
        o();
        return this.f2274d;
    }

    final long v() {
        h();
        return this.h;
    }

    final void w() {
        h();
        this.g = null;
        this.h = 0L;
    }

    final boolean x() {
        h();
        long jA = g().a();
        if (jA - this.h > 86400000) {
            this.g = null;
        }
        Boolean bool = this.g;
        if (bool != null) {
            return bool.booleanValue();
        }
        if (androidx.core.content.a.a(e(), "android.permission.GET_ACCOUNTS") != 0) {
            d().x().a("Permission error checking for dasher/unicorn accounts");
        } else {
            if (this.f2276f == null) {
                this.f2276f = AccountManager.get(e());
            }
            try {
                Account[] result = this.f2276f.getAccountsByTypeAndFeatures("com.google", new String[]{"service_HOSTED"}, null, null).getResult();
                if (result != null && result.length > 0) {
                    this.g = true;
                    this.h = jA;
                    return true;
                }
                Account[] result2 = this.f2276f.getAccountsByTypeAndFeatures("com.google", new String[]{"service_uca"}, null, null).getResult();
                if (result2 != null && result2.length > 0) {
                    this.g = true;
                    this.h = jA;
                    return true;
                }
            } catch (AuthenticatorException | OperationCanceledException | IOException e2) {
                d().u().a("Exception checking account types", e2);
            }
        }
        this.h = jA;
        this.g = false;
        return false;
    }
}
