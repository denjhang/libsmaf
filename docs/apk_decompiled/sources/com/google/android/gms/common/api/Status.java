package com.google.android.gms.common.api;

import android.app.PendingIntent;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.C0079q;
import com.google.android.gms.common.internal.ReflectedParcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Status extends AbstractSafeParcelable implements j, ReflectedParcelable {
    private final int h;
    private final int i;
    private final String j;
    private final PendingIntent k;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Status f1024a = new Status(0);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static final Status f1025b = new Status(14);

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public static final Status f1026c = new Status(8);

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public static final Status f1027d = new Status(15);

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public static final Status f1028e = new Status(16);

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private static final Status f1029f = new Status(17);
    public static final Status g = new Status(18);
    public static final Parcelable.Creator<Status> CREATOR = new n();

    public Status(int i) {
        this(i, null);
    }

    Status(int i, int i2, String str, PendingIntent pendingIntent) {
        this.h = i;
        this.i = i2;
        this.j = str;
        this.k = pendingIntent;
    }

    public Status(int i, String str) {
        this(1, i, str, null);
    }

    public final int a() {
        return this.i;
    }

    public final String b() {
        return this.j;
    }

    public final boolean c() {
        return this.i <= 0;
    }

    public final String d() {
        String str = this.j;
        return str != null ? str : d.a(this.i);
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof Status)) {
            return false;
        }
        Status status = (Status) obj;
        return this.h == status.h && this.i == status.i && C0079q.a(this.j, status.j) && C0079q.a(this.k, status.k);
    }

    @Override // com.google.android.gms.common.api.j
    public final Status getStatus() {
        return this;
    }

    public final int hashCode() {
        return C0079q.a(Integer.valueOf(this.h), Integer.valueOf(this.i), this.j, this.k);
    }

    public final String toString() {
        C0079q.a aVarA = C0079q.a(this);
        aVarA.a("statusCode", d());
        aVarA.a("resolution", this.k);
        return aVarA.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, a());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, b(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable) this.k, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1000, this.h);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
