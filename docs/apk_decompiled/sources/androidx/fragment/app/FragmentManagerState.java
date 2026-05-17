package androidx.fragment.app;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class FragmentManagerState implements Parcelable {
    public static final Parcelable.Creator<FragmentManagerState> CREATOR = new u();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    FragmentState[] f325a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    int[] f326b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    BackStackState[] f327c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    int f328d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    int f329e;

    public FragmentManagerState() {
        this.f328d = -1;
    }

    public FragmentManagerState(Parcel parcel) {
        this.f328d = -1;
        this.f325a = (FragmentState[]) parcel.createTypedArray(FragmentState.CREATOR);
        this.f326b = parcel.createIntArray();
        this.f327c = (BackStackState[]) parcel.createTypedArray(BackStackState.CREATOR);
        this.f328d = parcel.readInt();
        this.f329e = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeTypedArray(this.f325a, i);
        parcel.writeIntArray(this.f326b);
        parcel.writeTypedArray(this.f327c, i);
        parcel.writeInt(this.f328d);
        parcel.writeInt(this.f329e);
    }
}
