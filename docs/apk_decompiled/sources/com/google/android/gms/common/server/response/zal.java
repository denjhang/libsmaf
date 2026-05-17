package com.google.android.gms.common.server.response;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.server.response.FastJsonResponse;
import java.util.ArrayList;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zal extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zal> CREATOR = new d();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1329a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final String f1330b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final ArrayList<zam> f1331c;

    zal(int i, String str, ArrayList<zam> arrayList) {
        this.f1329a = i;
        this.f1330b = str;
        this.f1331c = arrayList;
    }

    zal(String str, Map<String, FastJsonResponse.Field<?, ?>> map) {
        ArrayList<zam> arrayList;
        this.f1329a = 1;
        this.f1330b = str;
        if (map == null) {
            arrayList = null;
        } else {
            arrayList = new ArrayList<>();
            for (String str2 : map.keySet()) {
                arrayList.add(new zam(str2, map.get(str2)));
            }
        }
        this.f1331c = arrayList;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1329a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1330b, false);
        com.google.android.gms.common.internal.safeparcel.b.b(parcel, 3, this.f1331c, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
