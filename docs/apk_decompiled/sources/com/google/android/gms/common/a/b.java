package com.google.android.gms.common.a;

import android.annotation.TargetApi;
import android.app.AppOpsManager;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.os.Binder;
import android.os.Process;
import com.google.android.gms.common.util.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f1018a;

    public b(Context context) {
        this.f1018a = context;
    }

    public int a(String str) {
        return this.f1018a.checkCallingOrSelfPermission(str);
    }

    public ApplicationInfo a(String str, int i) {
        return this.f1018a.getPackageManager().getApplicationInfo(str, i);
    }

    public final PackageInfo a(String str, int i, int i2) {
        return this.f1018a.getPackageManager().getPackageInfo(str, 64);
    }

    public boolean a() {
        String nameForUid;
        if (Binder.getCallingUid() == Process.myUid()) {
            return a.a(this.f1018a);
        }
        if (!n.i() || (nameForUid = this.f1018a.getPackageManager().getNameForUid(Binder.getCallingUid())) == null) {
            return false;
        }
        return this.f1018a.getPackageManager().isInstantApp(nameForUid);
    }

    @TargetApi(19)
    public final boolean a(int i, String str) {
        if (n.e()) {
            try {
                ((AppOpsManager) this.f1018a.getSystemService("appops")).checkPackage(i, str);
                return true;
            } catch (SecurityException unused) {
                return false;
            }
        }
        String[] packagesForUid = this.f1018a.getPackageManager().getPackagesForUid(i);
        if (str != null && packagesForUid != null) {
            for (String str2 : packagesForUid) {
                if (str.equals(str2)) {
                    return true;
                }
            }
        }
        return false;
    }

    public final String[] a(int i) {
        return this.f1018a.getPackageManager().getPackagesForUid(i);
    }

    public PackageInfo b(String str, int i) {
        return this.f1018a.getPackageManager().getPackageInfo(str, i);
    }

    public CharSequence b(String str) {
        return this.f1018a.getPackageManager().getApplicationLabel(this.f1018a.getPackageManager().getApplicationInfo(str, 0));
    }
}
