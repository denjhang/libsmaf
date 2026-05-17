package com.google.android.gms.signin.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.ResolveAccountRequest;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zah extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zah> CREATOR = new h();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f2533a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final ResolveAccountRequest f2534b;

    zah(int i, ResolveAccountRequest resolveAccountRequest) {
        this.f2533a = i;
        this.f2534b = resolveAccountRequest;
    }

    public zah(ResolveAccountRequest resolveAccountRequest) {
        this(1, resolveAccountRequest);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f2533a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, (Parcelable) this.f2534b, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
