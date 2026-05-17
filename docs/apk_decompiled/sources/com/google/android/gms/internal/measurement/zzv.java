package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zzv extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zzv> CREATOR = new Nf();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final long f1886a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public final long f1887b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public final boolean f1888c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public final String f1889d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public final String f1890e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public final String f1891f;
    public final Bundle g;

    public zzv(long j, long j2, boolean z, String str, String str2, String str3, Bundle bundle) {
        this.f1886a = j;
        this.f1887b = j2;
        this.f1888c = z;
        this.f1889d = str;
        this.f1890e = str2;
        this.f1891f = str3;
        this.g = bundle;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1886a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1887b);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, this.f1888c);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, this.f1889d, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, this.f1890e, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, this.f1891f, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 7, this.g, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
