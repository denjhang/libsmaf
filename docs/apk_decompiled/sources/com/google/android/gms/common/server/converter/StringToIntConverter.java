package com.google.android.gms.common.server.converter;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.SparseArray;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.server.response.FastJsonResponse;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class StringToIntConverter extends AbstractSafeParcelable implements FastJsonResponse.a<String, Integer> {
    public static final Parcelable.Creator<StringToIntConverter> CREATOR = new b();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1304a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final HashMap<String, Integer> f1305b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final SparseArray<String> f1306c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final ArrayList<zaa> f1307d;

    public static final class zaa extends AbstractSafeParcelable {
        public static final Parcelable.Creator<zaa> CREATOR = new c();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f1308a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final String f1309b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        final int f1310c;

        zaa(int i, String str, int i2) {
            this.f1308a = i;
            this.f1309b = str;
            this.f1310c = i2;
        }

        zaa(String str, int i) {
            this.f1308a = 1;
            this.f1309b = str;
            this.f1310c = i;
        }

        @Override // android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i) {
            int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1308a);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1309b, false);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, this.f1310c);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
        }
    }

    public StringToIntConverter() {
        this.f1304a = 1;
        this.f1305b = new HashMap<>();
        this.f1306c = new SparseArray<>();
        this.f1307d = null;
    }

    StringToIntConverter(int i, ArrayList<zaa> arrayList) {
        this.f1304a = i;
        this.f1305b = new HashMap<>();
        this.f1306c = new SparseArray<>();
        this.f1307d = null;
        int size = arrayList.size();
        int i2 = 0;
        while (i2 < size) {
            zaa zaaVar = arrayList.get(i2);
            i2++;
            zaa zaaVar2 = zaaVar;
            a(zaaVar2.f1309b, zaaVar2.f1310c);
        }
    }

    public final StringToIntConverter a(String str, int i) {
        this.f1305b.put(str, Integer.valueOf(i));
        this.f1306c.put(i, str);
        return this;
    }

    @Override // com.google.android.gms.common.server.response.FastJsonResponse.a
    public final /* synthetic */ String a(Integer num) {
        String str = this.f1306c.get(num.intValue());
        return (str == null && this.f1305b.containsKey("gms_unknown")) ? "gms_unknown" : str;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1304a);
        ArrayList arrayList = new ArrayList();
        for (String str : this.f1305b.keySet()) {
            arrayList.add(new zaa(str, this.f1305b.get(str).intValue()));
        }
        com.google.android.gms.common.internal.safeparcel.b.b(parcel, 2, arrayList, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
