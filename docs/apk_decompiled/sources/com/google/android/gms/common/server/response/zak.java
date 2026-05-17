package com.google.android.gms.common.server.response;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.server.response.FastJsonResponse;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zak extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zak> CREATOR = new c();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1325a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final HashMap<String, Map<String, FastJsonResponse.Field<?, ?>>> f1326b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final ArrayList<zal> f1327c = null;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final String f1328d;

    zak(int i, ArrayList<zal> arrayList, String str) {
        this.f1325a = i;
        HashMap<String, Map<String, FastJsonResponse.Field<?, ?>>> map = new HashMap<>();
        int size = arrayList.size();
        for (int i2 = 0; i2 < size; i2++) {
            zal zalVar = arrayList.get(i2);
            String str2 = zalVar.f1330b;
            HashMap map2 = new HashMap();
            int size2 = zalVar.f1331c.size();
            for (int i3 = 0; i3 < size2; i3++) {
                zam zamVar = zalVar.f1331c.get(i3);
                map2.put(zamVar.f1333b, zamVar.f1334c);
            }
            map.put(str2, map2);
        }
        this.f1326b = map;
        r.a(str);
        this.f1328d = str;
        a();
    }

    public final Map<String, FastJsonResponse.Field<?, ?>> a(String str) {
        return this.f1326b.get(str);
    }

    public final void a() {
        Iterator<String> it = this.f1326b.keySet().iterator();
        while (it.hasNext()) {
            Map<String, FastJsonResponse.Field<?, ?>> map = this.f1326b.get(it.next());
            Iterator<String> it2 = map.keySet().iterator();
            while (it2.hasNext()) {
                map.get(it2.next()).a(this);
            }
        }
    }

    public final String b() {
        return this.f1328d;
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        for (String str : this.f1326b.keySet()) {
            sb.append(str);
            sb.append(":\n");
            Map<String, FastJsonResponse.Field<?, ?>> map = this.f1326b.get(str);
            for (String str2 : map.keySet()) {
                sb.append("  ");
                sb.append(str2);
                sb.append(": ");
                sb.append(map.get(str2));
            }
        }
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1325a);
        ArrayList arrayList = new ArrayList();
        for (String str : this.f1326b.keySet()) {
            arrayList.add(new zal(str, this.f1326b.get(str)));
        }
        com.google.android.gms.common.internal.safeparcel.b.b(parcel, 2, arrayList, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, this.f1328d, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
