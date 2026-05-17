package androidx.fragment.app;

import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.Log;
import androidx.fragment.app.C0037a;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class BackStackState implements Parcelable {
    public static final Parcelable.Creator<BackStackState> CREATOR = new C0038b();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final int[] f278a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final int f279b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final int f280c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final String f281d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final int f282e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final int f283f;
    final CharSequence g;
    final int h;
    final CharSequence i;
    final ArrayList<String> j;
    final ArrayList<String> k;
    final boolean l;

    public BackStackState(Parcel parcel) {
        this.f278a = parcel.createIntArray();
        this.f279b = parcel.readInt();
        this.f280c = parcel.readInt();
        this.f281d = parcel.readString();
        this.f282e = parcel.readInt();
        this.f283f = parcel.readInt();
        this.g = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
        this.h = parcel.readInt();
        this.i = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
        this.j = parcel.createStringArrayList();
        this.k = parcel.createStringArrayList();
        this.l = parcel.readInt() != 0;
    }

    public BackStackState(C0037a c0037a) {
        int size = c0037a.f365b.size();
        this.f278a = new int[size * 6];
        if (!c0037a.i) {
            throw new IllegalStateException("Not on back stack");
        }
        int i = 0;
        for (int i2 = 0; i2 < size; i2++) {
            C0037a.C0009a c0009a = c0037a.f365b.get(i2);
            int[] iArr = this.f278a;
            int i3 = i + 1;
            iArr[i] = c0009a.f370a;
            int i4 = i3 + 1;
            Fragment fragment = c0009a.f371b;
            iArr[i3] = fragment != null ? fragment.g : -1;
            int[] iArr2 = this.f278a;
            int i5 = i4 + 1;
            iArr2[i4] = c0009a.f372c;
            int i6 = i5 + 1;
            iArr2[i5] = c0009a.f373d;
            int i7 = i6 + 1;
            iArr2[i6] = c0009a.f374e;
            i = i7 + 1;
            iArr2[i7] = c0009a.f375f;
        }
        this.f279b = c0037a.g;
        this.f280c = c0037a.h;
        this.f281d = c0037a.k;
        this.f282e = c0037a.m;
        this.f283f = c0037a.n;
        this.g = c0037a.o;
        this.h = c0037a.p;
        this.i = c0037a.q;
        this.j = c0037a.r;
        this.k = c0037a.s;
        this.l = c0037a.t;
    }

    public C0037a a(s sVar) {
        C0037a c0037a = new C0037a(sVar);
        int i = 0;
        int i2 = 0;
        while (i < this.f278a.length) {
            C0037a.C0009a c0009a = new C0037a.C0009a();
            int i3 = i + 1;
            c0009a.f370a = this.f278a[i];
            if (s.f400a) {
                Log.v("FragmentManager", "Instantiate " + c0037a + " op #" + i2 + " base fragment #" + this.f278a[i3]);
            }
            int i4 = i3 + 1;
            int i5 = this.f278a[i3];
            c0009a.f371b = i5 >= 0 ? sVar.k.get(i5) : null;
            int[] iArr = this.f278a;
            int i6 = i4 + 1;
            c0009a.f372c = iArr[i4];
            int i7 = i6 + 1;
            c0009a.f373d = iArr[i6];
            int i8 = i7 + 1;
            c0009a.f374e = iArr[i7];
            c0009a.f375f = iArr[i8];
            c0037a.f366c = c0009a.f372c;
            c0037a.f367d = c0009a.f373d;
            c0037a.f368e = c0009a.f374e;
            c0037a.f369f = c0009a.f375f;
            c0037a.a(c0009a);
            i2++;
            i = i8 + 1;
        }
        c0037a.g = this.f279b;
        c0037a.h = this.f280c;
        c0037a.k = this.f281d;
        c0037a.m = this.f282e;
        c0037a.i = true;
        c0037a.n = this.f283f;
        c0037a.o = this.g;
        c0037a.p = this.h;
        c0037a.q = this.i;
        c0037a.r = this.j;
        c0037a.s = this.k;
        c0037a.t = this.l;
        c0037a.a(1);
        return c0037a;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeIntArray(this.f278a);
        parcel.writeInt(this.f279b);
        parcel.writeInt(this.f280c);
        parcel.writeString(this.f281d);
        parcel.writeInt(this.f282e);
        parcel.writeInt(this.f283f);
        TextUtils.writeToParcel(this.g, parcel, 0);
        parcel.writeInt(this.h);
        TextUtils.writeToParcel(this.i, parcel, 0);
        parcel.writeStringList(this.j);
        parcel.writeStringList(this.k);
        parcel.writeInt(this.l ? 1 : 0);
    }
}
