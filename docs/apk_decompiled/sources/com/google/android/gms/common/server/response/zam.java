package com.google.android.gms.common.server.response;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.server.response.FastJsonResponse;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zam extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zam> CREATOR = new b();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1332a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final String f1333b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final FastJsonResponse.Field<?, ?> f1334c;

    zam(int i, String str, FastJsonResponse.Field<?, ?> field) {
        this.f1332a = i;
        this.f1333b = str;
        this.f1334c = field;
    }

    zam(String str, FastJsonResponse.Field<?, ?> field) {
        this.f1332a = 1;
        this.f1333b = str;
        this.f1334c = field;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1332a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1333b, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable) this.f1334c, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
