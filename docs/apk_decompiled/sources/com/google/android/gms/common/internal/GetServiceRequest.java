package com.google.android.gms.common.internal;

import android.accounts.Account;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.Feature;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.internal.InterfaceC0073k;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class GetServiceRequest extends AbstractSafeParcelable {
    public static final Parcelable.Creator<GetServiceRequest> CREATOR = new G();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1197a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f1198b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f1199c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    String f1200d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    IBinder f1201e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    Scope[] f1202f;
    Bundle g;
    Account h;
    Feature[] i;
    Feature[] j;
    private boolean k;

    public GetServiceRequest(int i) {
        this.f1197a = 4;
        this.f1199c = com.google.android.gms.common.d.f1132a;
        this.f1198b = i;
        this.k = true;
    }

    GetServiceRequest(int i, int i2, int i3, String str, IBinder iBinder, Scope[] scopeArr, Bundle bundle, Account account, Feature[] featureArr, Feature[] featureArr2, boolean z) {
        this.f1197a = i;
        this.f1198b = i2;
        this.f1199c = i3;
        if ("com.google.android.gms".equals(str)) {
            this.f1200d = "com.google.android.gms";
        } else {
            this.f1200d = str;
        }
        if (i < 2) {
            this.h = iBinder != null ? BinderC0063a.a(InterfaceC0073k.a.a(iBinder)) : null;
        } else {
            this.f1201e = iBinder;
            this.h = account;
        }
        this.f1202f = scopeArr;
        this.g = bundle;
        this.i = featureArr;
        this.j = featureArr2;
        this.k = z;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1197a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1198b);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, this.f1199c);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, this.f1200d, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, this.f1201e, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, (Parcelable[]) this.f1202f, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 7, this.g, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 8, (Parcelable) this.h, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 10, (Parcelable[]) this.i, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 11, (Parcelable[]) this.j, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 12, this.k);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
