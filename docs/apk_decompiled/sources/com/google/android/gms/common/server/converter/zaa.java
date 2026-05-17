package com.google.android.gms.common.server.converter;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.server.response.FastJsonResponse;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zaa extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zaa> CREATOR = new a();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1311a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final StringToIntConverter f1312b;

    zaa(int i, StringToIntConverter stringToIntConverter) {
        this.f1311a = i;
        this.f1312b = stringToIntConverter;
    }

    private zaa(StringToIntConverter stringToIntConverter) {
        this.f1311a = 1;
        this.f1312b = stringToIntConverter;
    }

    public static zaa a(FastJsonResponse.a<?, ?> aVar) {
        if (aVar instanceof StringToIntConverter) {
            return new zaa((StringToIntConverter) aVar);
        }
        throw new IllegalArgumentException("Unsupported safe parcelable field converter class.");
    }

    public final FastJsonResponse.a<?, ?> a() {
        StringToIntConverter stringToIntConverter = this.f1312b;
        if (stringToIntConverter != null) {
            return stringToIntConverter;
        }
        throw new IllegalStateException("There was no converter wrapped in this ConverterWrapper.");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1311a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, (Parcelable) this.f1312b, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
