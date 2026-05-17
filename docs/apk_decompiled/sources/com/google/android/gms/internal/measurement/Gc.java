package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Gc implements InterfaceC0207sc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final InterfaceC0219uc f1457a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f1458b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Object[] f1459c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final int f1460d;

    Gc(InterfaceC0219uc interfaceC0219uc, String str, Object[] objArr) {
        this.f1457a = interfaceC0219uc;
        this.f1458b = str;
        this.f1459c = objArr;
        char cCharAt = str.charAt(0);
        if (cCharAt < 55296) {
            this.f1460d = cCharAt;
            return;
        }
        int i = cCharAt & 8191;
        int i2 = 13;
        int i3 = 1;
        while (true) {
            int i4 = i3 + 1;
            char cCharAt2 = str.charAt(i3);
            if (cCharAt2 < 55296) {
                this.f1460d = i | (cCharAt2 << i2);
                return;
            } else {
                i |= (cCharAt2 & 8191) << i2;
                i2 += 13;
                i3 = i4;
            }
        }
    }

    final String a() {
        return this.f1458b;
    }

    final Object[] b() {
        return this.f1459c;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0207sc
    public final int h() {
        return (this.f1460d & 1) == 1 ? Jb.e.i : Jb.e.j;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0207sc
    public final boolean m() {
        return (this.f1460d & 2) == 2;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0207sc
    public final InterfaceC0219uc x() {
        return this.f1457a;
    }
}
