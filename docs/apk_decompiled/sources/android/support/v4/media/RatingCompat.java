package android.support.v4.media;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class RatingCompat implements Parcelable {
    public static final Parcelable.Creator<RatingCompat> CREATOR = new m();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f57a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final float f58b;

    RatingCompat(int i, float f2) {
        this.f57a = i;
        this.f58b = f2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return this.f57a;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("Rating:style=");
        sb.append(this.f57a);
        sb.append(" rating=");
        float f2 = this.f58b;
        sb.append(f2 < 0.0f ? "unrated" : String.valueOf(f2));
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.f57a);
        parcel.writeFloat(this.f58b);
    }
}
