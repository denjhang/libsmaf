package com.google.android.gms.common.stats;

import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class WakeLockEvent extends StatsEvent {
    public static final Parcelable.Creator<WakeLockEvent> CREATOR = new b();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1335a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final long f1336b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f1337c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final String f1338d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final String f1339e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final String f1340f;
    private final int g;
    private final List<String> h;
    private final String i;
    private final long j;
    private int k;
    private final String l;
    private final float m;
    private final long n;
    private final boolean o;
    private long p = -1;

    WakeLockEvent(int i, long j, int i2, String str, int i3, List<String> list, String str2, long j2, int i4, String str3, String str4, float f2, long j3, String str5, boolean z) {
        this.f1335a = i;
        this.f1336b = j;
        this.f1337c = i2;
        this.f1338d = str;
        this.f1339e = str3;
        this.f1340f = str5;
        this.g = i3;
        this.h = list;
        this.i = str2;
        this.j = j2;
        this.k = i4;
        this.l = str4;
        this.m = f2;
        this.n = j3;
        this.o = z;
    }

    @Override // com.google.android.gms.common.stats.StatsEvent
    public final int a() {
        return this.f1337c;
    }

    @Override // com.google.android.gms.common.stats.StatsEvent
    public final long b() {
        return this.f1336b;
    }

    @Override // com.google.android.gms.common.stats.StatsEvent
    public final long c() {
        return this.p;
    }

    @Override // com.google.android.gms.common.stats.StatsEvent
    public final String d() {
        String str = this.f1338d;
        int i = this.g;
        List<String> list = this.h;
        String strJoin = list == null ? "" : TextUtils.join(",", list);
        int i2 = this.k;
        String str2 = this.f1339e;
        if (str2 == null) {
            str2 = "";
        }
        String str3 = this.l;
        if (str3 == null) {
            str3 = "";
        }
        float f2 = this.m;
        String str4 = this.f1340f;
        String str5 = str4 != null ? str4 : "";
        boolean z = this.o;
        StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 51 + String.valueOf(strJoin).length() + String.valueOf(str2).length() + String.valueOf(str3).length() + String.valueOf(str5).length());
        sb.append("\t");
        sb.append(str);
        sb.append("\t");
        sb.append(i);
        sb.append("\t");
        sb.append(strJoin);
        sb.append("\t");
        sb.append(i2);
        sb.append("\t");
        sb.append(str2);
        sb.append("\t");
        sb.append(str3);
        sb.append("\t");
        sb.append(f2);
        sb.append("\t");
        sb.append(str5);
        sb.append("\t");
        sb.append(z);
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1335a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, b());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, this.f1338d, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, this.g);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, this.h, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 8, this.j);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 10, this.f1339e, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 11, a());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 12, this.i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 13, this.l, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 14, this.k);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 15, this.m);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 16, this.n);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 17, this.f1340f, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 18, this.o);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
