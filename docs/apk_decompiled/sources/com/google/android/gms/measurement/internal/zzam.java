package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import java.util.Iterator;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class zzam extends AbstractSafeParcelable implements Iterable<String> {
    public static final Parcelable.Creator<zzam> CREATOR = new C0319n();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Bundle f2505a;

    zzam(Bundle bundle) {
        this.f2505a = bundle;
    }

    final Object a(String str) {
        return this.f2505a.get(str);
    }

    final Long b(String str) {
        return Long.valueOf(this.f2505a.getLong(str));
    }

    final Double c(String str) {
        return Double.valueOf(this.f2505a.getDouble(str));
    }

    final String e(String str) {
        return this.f2505a.getString(str);
    }

    public final int h() {
        return this.f2505a.size();
    }

    @Override // java.lang.Iterable
    public final Iterator<String> iterator() {
        return new C0314m(this);
    }

    public final Bundle m() {
        return new Bundle(this.f2505a);
    }

    public final String toString() {
        return this.f2505a.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, m(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
