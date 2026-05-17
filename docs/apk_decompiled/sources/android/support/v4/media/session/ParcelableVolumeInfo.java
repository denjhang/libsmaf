package android.support.v4.media.session;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ParcelableVolumeInfo implements Parcelable {
    public static final Parcelable.Creator<ParcelableVolumeInfo> CREATOR = new h();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f95a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public int f96b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public int f97c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public int f98d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public int f99e;

    public ParcelableVolumeInfo(Parcel parcel) {
        this.f95a = parcel.readInt();
        this.f97c = parcel.readInt();
        this.f98d = parcel.readInt();
        this.f99e = parcel.readInt();
        this.f96b = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.f95a);
        parcel.writeInt(this.f97c);
        parcel.writeInt(this.f98d);
        parcel.writeInt(this.f99e);
        parcel.writeInt(this.f96b);
    }
}
