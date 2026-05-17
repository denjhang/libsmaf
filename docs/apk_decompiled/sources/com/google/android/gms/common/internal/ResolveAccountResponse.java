package com.google.android.gms.common.internal;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.internal.InterfaceC0073k;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ResolveAccountResponse extends AbstractSafeParcelable {
    public static final Parcelable.Creator<ResolveAccountResponse> CREATOR = new C();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1223a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private IBinder f1224b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private ConnectionResult f1225c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f1226d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private boolean f1227e;

    ResolveAccountResponse(int i, IBinder iBinder, ConnectionResult connectionResult, boolean z, boolean z2) {
        this.f1223a = i;
        this.f1224b = iBinder;
        this.f1225c = connectionResult;
        this.f1226d = z;
        this.f1227e = z2;
    }

    public InterfaceC0073k a() {
        return InterfaceC0073k.a.a(this.f1224b);
    }

    public ConnectionResult b() {
        return this.f1225c;
    }

    public boolean c() {
        return this.f1226d;
    }

    public boolean d() {
        return this.f1227e;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof ResolveAccountResponse)) {
            return false;
        }
        ResolveAccountResponse resolveAccountResponse = (ResolveAccountResponse) obj;
        return this.f1225c.equals(resolveAccountResponse.f1225c) && a().equals(resolveAccountResponse.a());
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1223a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1224b, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable) b(), i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, c());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, d());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
