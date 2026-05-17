package com.google.android.gms.common.images;

import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.C0079q;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import java.util.Locale;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class WebImage extends AbstractSafeParcelable {
    public static final Parcelable.Creator<WebImage> CREATOR = new c();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1178a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Uri f1179b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int f1180c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final int f1181d;

    WebImage(int i, Uri uri, int i2, int i3) {
        this.f1178a = i;
        this.f1179b = uri;
        this.f1180c = i2;
        this.f1181d = i3;
    }

    public final int a() {
        return this.f1181d;
    }

    public final Uri b() {
        return this.f1179b;
    }

    public final int c() {
        return this.f1180c;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && (obj instanceof WebImage)) {
            WebImage webImage = (WebImage) obj;
            if (C0079q.a(this.f1179b, webImage.f1179b) && this.f1180c == webImage.f1180c && this.f1181d == webImage.f1181d) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return C0079q.a(this.f1179b, Integer.valueOf(this.f1180c), Integer.valueOf(this.f1181d));
    }

    public final String toString() {
        return String.format(Locale.US, "Image %dx%d %s", Integer.valueOf(this.f1180c), Integer.valueOf(this.f1181d), this.f1179b.toString());
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1178a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, (Parcelable) b(), i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, c());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, a());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
