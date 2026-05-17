package com.google.android.gms.common.server;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.ReflectedParcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.internal.safeparcel.b;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class FavaDiagnosticsEntity extends AbstractSafeParcelable implements ReflectedParcelable {
    public static final Parcelable.Creator<FavaDiagnosticsEntity> CREATOR = new a();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1301a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f1302b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int f1303c;

    public FavaDiagnosticsEntity(int i, String str, int i2) {
        this.f1301a = i;
        this.f1302b = str;
        this.f1303c = i2;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        int iA = b.a(parcel);
        b.a(parcel, 1, this.f1301a);
        b.a(parcel, 2, this.f1302b, false);
        b.a(parcel, 3, this.f1303c);
        b.a(parcel, iA);
    }
}
