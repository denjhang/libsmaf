package com.google.android.gms.signin.internal;

import android.content.Intent;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.j;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zaa extends AbstractSafeParcelable implements j {
    public static final Parcelable.Creator<zaa> CREATOR = new b();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f2530a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f2531b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Intent f2532c;

    public zaa() {
        this(0, null);
    }

    zaa(int i, int i2, Intent intent) {
        this.f2530a = i;
        this.f2531b = i2;
        this.f2532c = intent;
    }

    private zaa(int i, Intent intent) {
        this(2, 0, null);
    }

    @Override // com.google.android.gms.common.api.j
    public final Status getStatus() {
        return this.f2531b == 0 ? Status.f1024a : Status.f1028e;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f2530a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f2531b);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable) this.f2532c, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
