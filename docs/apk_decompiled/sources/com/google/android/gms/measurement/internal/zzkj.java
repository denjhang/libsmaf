package com.google.android.gms.measurement.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zzkj extends AbstractSafeParcelable {
    public static final Parcelable.Creator<zzkj> CREATOR = new ke();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f2510a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public final String f2511b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public final long f2512c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public final Long f2513d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Float f2514e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public final String f2515f;
    public final String g;
    public final Double h;

    zzkj(int i, String str, long j, Long l, Float f2, String str2, String str3, Double d2) {
        this.f2510a = i;
        this.f2511b = str;
        this.f2512c = j;
        this.f2513d = l;
        this.f2514e = null;
        if (i == 1) {
            this.h = f2 != null ? Double.valueOf(f2.doubleValue()) : null;
        } else {
            this.h = d2;
        }
        this.f2515f = str2;
        this.g = str3;
    }

    zzkj(me meVar) {
        this(meVar.f2341c, meVar.f2342d, meVar.f2343e, meVar.f2340b);
    }

    zzkj(String str, long j, Object obj, String str2) {
        com.google.android.gms.common.internal.r.b(str);
        this.f2510a = 2;
        this.f2511b = str;
        this.f2512c = j;
        this.g = str2;
        if (obj == null) {
            this.f2513d = null;
            this.f2514e = null;
            this.h = null;
            this.f2515f = null;
            return;
        }
        if (obj instanceof Long) {
            this.f2513d = (Long) obj;
            this.f2514e = null;
            this.h = null;
            this.f2515f = null;
            return;
        }
        if (obj instanceof String) {
            this.f2513d = null;
            this.f2514e = null;
            this.h = null;
            this.f2515f = (String) obj;
            return;
        }
        if (!(obj instanceof Double)) {
            throw new IllegalArgumentException("User attribute given of un-supported type");
        }
        this.f2513d = null;
        this.f2514e = null;
        this.h = (Double) obj;
        this.f2515f = null;
    }

    zzkj(String str, long j, String str2) {
        com.google.android.gms.common.internal.r.b(str);
        this.f2510a = 2;
        this.f2511b = str;
        this.f2512c = 0L;
        this.f2513d = null;
        this.f2514e = null;
        this.h = null;
        this.f2515f = null;
        this.g = null;
    }

    public final Object h() {
        Long l = this.f2513d;
        if (l != null) {
            return l;
        }
        Double d2 = this.h;
        if (d2 != null) {
            return d2;
        }
        String str = this.f2515f;
        if (str != null) {
            return str;
        }
        return null;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f2510a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f2511b, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, this.f2512c);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, this.f2513d, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, (Float) null, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, this.f2515f, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 7, this.g, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 8, this.h, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
