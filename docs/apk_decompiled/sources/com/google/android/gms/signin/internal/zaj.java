package com.google.android.gms.signin.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.internal.ResolveAccountResponse;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zaj extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zaj> CREATOR = new i();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f2535a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final ConnectionResult f2536b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final ResolveAccountResponse f2537c;

    public zaj(int i) {
        this(new ConnectionResult(8, null), null);
    }

    zaj(int i, ConnectionResult connectionResult, ResolveAccountResponse resolveAccountResponse) {
        this.f2535a = i;
        this.f2536b = connectionResult;
        this.f2537c = resolveAccountResponse;
    }

    private zaj(ConnectionResult connectionResult, ResolveAccountResponse resolveAccountResponse) {
        this(1, connectionResult, null);
    }

    public final ConnectionResult a() {
        return this.f2536b;
    }

    public final ResolveAccountResponse b() {
        return this.f2537c;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f2535a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, (Parcelable) this.f2536b, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable) this.f2537c, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
