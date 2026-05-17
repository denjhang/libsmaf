package com.google.android.gms.common;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.C0079q;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import org.apache.http.cookie.ClientCookie;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class Feature extends AbstractSafeParcelable {
    public static final Parcelable.Creator<Feature> CREATOR = new l();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f1007a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    @Deprecated
    private final int f1008b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final long f1009c;

    public Feature(String str, int i, long j) {
        this.f1007a = str;
        this.f1008b = i;
        this.f1009c = j;
    }

    public String a() {
        return this.f1007a;
    }

    public long b() {
        long j = this.f1009c;
        return j == -1 ? this.f1008b : j;
    }

    public boolean equals(Object obj) {
        if (obj instanceof Feature) {
            Feature feature = (Feature) obj;
            if (((a() != null && a().equals(feature.a())) || (a() == null && feature.a() == null)) && b() == feature.b()) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return C0079q.a(a(), Long.valueOf(b()));
    }

    public String toString() {
        C0079q.a aVarA = C0079q.a(this);
        aVarA.a("name", a());
        aVarA.a(ClientCookie.VERSION_ATTR, Long.valueOf(b()));
        return aVarA.toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, a(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1008b);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, b());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
