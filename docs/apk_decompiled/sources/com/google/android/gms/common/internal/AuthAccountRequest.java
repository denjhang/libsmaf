package com.google.android.gms.common.internal;

import android.accounts.Account;
import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class AuthAccountRequest extends AbstractSafeParcelable {
    public static final Parcelable.Creator<AuthAccountRequest> CREATOR = new v();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1184a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    @Deprecated
    private final IBinder f1185b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Scope[] f1186c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Integer f1187d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Integer f1188e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Account f1189f;

    AuthAccountRequest(int i, IBinder iBinder, Scope[] scopeArr, Integer num, Integer num2, Account account) {
        this.f1184a = i;
        this.f1185b = iBinder;
        this.f1186c = scopeArr;
        this.f1187d = num;
        this.f1188e = num2;
        this.f1189f = account;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1184a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1185b, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable[]) this.f1186c, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, this.f1187d, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, this.f1188e, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, (Parcelable) this.f1189f, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
