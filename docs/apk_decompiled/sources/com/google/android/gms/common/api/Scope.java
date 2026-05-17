package com.google.android.gms.common.api;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.ReflectedParcelable;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Scope extends AbstractSafeParcelable implements ReflectedParcelable {
    public static final Parcelable.Creator<Scope> CREATOR = new m();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1022a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f1023b;

    Scope(int i, String str) {
        r.a(str, (Object) "scopeUri must not be null or empty");
        this.f1022a = i;
        this.f1023b = str;
    }

    public Scope(String str) {
        this(1, str);
    }

    public final String a() {
        return this.f1023b;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof Scope) {
            return this.f1023b.equals(((Scope) obj).f1023b);
        }
        return false;
    }

    public final int hashCode() {
        return this.f1023b.hashCode();
    }

    public final String toString() {
        return this.f1023b;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1022a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, a(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
