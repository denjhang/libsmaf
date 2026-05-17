package androidx.fragment.app;

import android.content.Context;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.Log;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class FragmentState implements Parcelable {
    public static final Parcelable.Creator<FragmentState> CREATOR = new v();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f330a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final int f331b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final boolean f332c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final int f333d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final int f334e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final String f335f;
    final boolean g;
    final boolean h;
    final Bundle i;
    final boolean j;
    Bundle k;
    Fragment l;

    FragmentState(Parcel parcel) {
        this.f330a = parcel.readString();
        this.f331b = parcel.readInt();
        this.f332c = parcel.readInt() != 0;
        this.f333d = parcel.readInt();
        this.f334e = parcel.readInt();
        this.f335f = parcel.readString();
        this.g = parcel.readInt() != 0;
        this.h = parcel.readInt() != 0;
        this.i = parcel.readBundle();
        this.j = parcel.readInt() != 0;
        this.k = parcel.readBundle();
    }

    FragmentState(Fragment fragment) {
        this.f330a = fragment.getClass().getName();
        this.f331b = fragment.g;
        this.f332c = fragment.o;
        this.f333d = fragment.z;
        this.f334e = fragment.A;
        this.f335f = fragment.B;
        this.g = fragment.E;
        this.h = fragment.D;
        this.i = fragment.i;
        this.j = fragment.C;
    }

    public Fragment a(AbstractC0047k abstractC0047k, AbstractC0045i abstractC0045i, Fragment fragment, t tVar, androidx.lifecycle.u uVar) {
        if (this.l == null) {
            Context contextC = abstractC0047k.c();
            Bundle bundle = this.i;
            if (bundle != null) {
                bundle.setClassLoader(contextC.getClassLoader());
            }
            this.l = abstractC0045i != null ? abstractC0045i.a(contextC, this.f330a, this.i) : Fragment.a(contextC, this.f330a, this.i);
            Bundle bundle2 = this.k;
            if (bundle2 != null) {
                bundle2.setClassLoader(contextC.getClassLoader());
                this.l.f307d = this.k;
            }
            this.l.a(this.f331b, fragment);
            Fragment fragment2 = this.l;
            fragment2.o = this.f332c;
            fragment2.q = true;
            fragment2.z = this.f333d;
            fragment2.A = this.f334e;
            fragment2.B = this.f335f;
            fragment2.E = this.g;
            fragment2.D = this.h;
            fragment2.C = this.j;
            fragment2.t = abstractC0047k.f385e;
            if (s.f400a) {
                Log.v("FragmentManager", "Instantiated fragment " + this.l);
            }
        }
        Fragment fragment3 = this.l;
        fragment3.w = tVar;
        fragment3.x = uVar;
        return fragment3;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.f330a);
        parcel.writeInt(this.f331b);
        parcel.writeInt(this.f332c ? 1 : 0);
        parcel.writeInt(this.f333d);
        parcel.writeInt(this.f334e);
        parcel.writeString(this.f335f);
        parcel.writeInt(this.g ? 1 : 0);
        parcel.writeInt(this.h ? 1 : 0);
        parcel.writeBundle(this.i);
        parcel.writeInt(this.j ? 1 : 0);
        parcel.writeBundle(this.k);
    }
}
