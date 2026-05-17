package com.google.android.gms.common.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class SignInButtonConfig extends AbstractSafeParcelable {
    public static final Parcelable.Creator<SignInButtonConfig> CREATOR = new D();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1232a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f1233b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int f1234c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    @Deprecated
    private final Scope[] f1235d;

    SignInButtonConfig(int i, int i2, int i3, Scope[] scopeArr) {
        this.f1232a = i;
        this.f1233b = i2;
        this.f1234c = i3;
        this.f1235d = scopeArr;
    }

    public SignInButtonConfig(int i, int i2, Scope[] scopeArr) {
        this(1, i, i2, null);
    }

    public int a() {
        return this.f1233b;
    }

    public int b() {
        return this.f1234c;
    }

    @Deprecated
    public Scope[] c() {
        return this.f1235d;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1232a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, a());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, b());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, (Parcelable[]) c(), i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
