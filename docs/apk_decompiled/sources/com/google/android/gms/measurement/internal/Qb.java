package com.google.android.gms.measurement.internal;

import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import android.os.Bundle;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Qb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final _b f2080a;

    Qb(_b _bVar) {
        this.f2080a = _bVar;
    }

    private final boolean a() {
        try {
            com.google.android.gms.common.a.b bVarA = com.google.android.gms.common.a.c.a(this.f2080a.e());
            if (bVarA != null) {
                return bVarA.b("com.android.vending", 128).versionCode >= 80837300;
            }
            this.f2080a.d().z().a("Failed to retrieve Package Manager to check Play Store compatibility");
            return false;
        } catch (Exception e2) {
            this.f2080a.d().z().a("Failed to retrieve Play Store version", e2);
            return false;
        }
    }

    final Bundle a(String str, com.google.android.gms.internal.measurement.Ja ja) {
        this.f2080a.c().h();
        if (ja == null) {
            this.f2080a.d().w().a("Attempting to use Install Referrer Service while it is not initialized");
            return null;
        }
        Bundle bundle = new Bundle();
        bundle.putString("package_name", str);
        try {
            Bundle bundleB = ja.b(bundle);
            if (bundleB != null) {
                return bundleB;
            }
            this.f2080a.d().t().a("Install Referrer Service returned a null response");
            return null;
        } catch (Exception e2) {
            this.f2080a.d().t().a("Exception occurred while retrieving the Install Referrer", e2.getMessage());
            return null;
        }
    }

    protected final void a(String str) {
        if (str == null || str.isEmpty()) {
            this.f2080a.d().z().a("Install Referrer Reporter was called with invalid app package name");
            return;
        }
        this.f2080a.c().h();
        if (!a()) {
            this.f2080a.d().z().a("Install Referrer Reporter is not available");
            return;
        }
        this.f2080a.d().z().a("Install Referrer Reporter is initializing");
        Pb pb = new Pb(this, str);
        this.f2080a.c().h();
        Intent intent = new Intent("com.google.android.finsky.BIND_GET_INSTALL_REFERRER_SERVICE");
        intent.setComponent(new ComponentName("com.android.vending", "com.google.android.finsky.externalreferrer.GetInstallReferrerService"));
        PackageManager packageManager = this.f2080a.e().getPackageManager();
        if (packageManager == null) {
            this.f2080a.d().w().a("Failed to obtain Package Manager to verify binding conditions");
            return;
        }
        List<ResolveInfo> listQueryIntentServices = packageManager.queryIntentServices(intent, 0);
        if (listQueryIntentServices == null || listQueryIntentServices.isEmpty()) {
            this.f2080a.d().z().a("Play Service for fetching Install Referrer is unavailable on device");
            return;
        }
        ResolveInfo resolveInfo = listQueryIntentServices.get(0);
        ServiceInfo serviceInfo = resolveInfo.serviceInfo;
        if (serviceInfo != null) {
            String str2 = serviceInfo.packageName;
            if (resolveInfo.serviceInfo.name == null || !"com.android.vending".equals(str2) || !a()) {
                this.f2080a.d().z().a("Play Store missing or incompatible. Version 8.3.73 or later required");
                return;
            }
            try {
                this.f2080a.d().z().a("Install Referrer Service is", com.google.android.gms.common.stats.a.a().a(this.f2080a.e(), new Intent(intent), pb, 1) ? "available" : "not available");
            } catch (Exception e2) {
                this.f2080a.d().t().a("Exception occurred while binding to Install Referrer Service", e2.getMessage());
            }
        }
    }
}
