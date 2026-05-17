package android.support.v4.media.session;

import android.os.Build;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.v4.media.session.k;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class PlaybackStateCompat implements Parcelable {
    public static final Parcelable.Creator<PlaybackStateCompat> CREATOR = new i();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final int f100a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final long f101b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final long f102c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final float f103d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final long f104e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final int f105f;
    final CharSequence g;
    final long h;
    List<CustomAction> i;
    final long j;
    final Bundle k;
    private Object l;

    public static final class CustomAction implements Parcelable {
        public static final Parcelable.Creator<CustomAction> CREATOR = new j();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f106a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final CharSequence f107b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final int f108c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final Bundle f109d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private Object f110e;

        CustomAction(Parcel parcel) {
            this.f106a = parcel.readString();
            this.f107b = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
            this.f108c = parcel.readInt();
            this.f109d = parcel.readBundle(MediaSessionCompat.class.getClassLoader());
        }

        CustomAction(String str, CharSequence charSequence, int i, Bundle bundle) {
            this.f106a = str;
            this.f107b = charSequence;
            this.f108c = i;
            this.f109d = bundle;
        }

        public static CustomAction a(Object obj) {
            if (obj == null || Build.VERSION.SDK_INT < 21) {
                return null;
            }
            CustomAction customAction = new CustomAction(k.a.a(obj), k.a.d(obj), k.a.c(obj), k.a.b(obj));
            customAction.f110e = obj;
            return customAction;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        public String toString() {
            return "Action:mName='" + ((Object) this.f107b) + ", mIcon=" + this.f108c + ", mExtras=" + this.f109d;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            parcel.writeString(this.f106a);
            TextUtils.writeToParcel(this.f107b, parcel, i);
            parcel.writeInt(this.f108c);
            parcel.writeBundle(this.f109d);
        }
    }

    PlaybackStateCompat(int i, long j, long j2, float f2, long j3, int i2, CharSequence charSequence, long j4, List<CustomAction> list, long j5, Bundle bundle) {
        this.f100a = i;
        this.f101b = j;
        this.f102c = j2;
        this.f103d = f2;
        this.f104e = j3;
        this.f105f = i2;
        this.g = charSequence;
        this.h = j4;
        this.i = new ArrayList(list);
        this.j = j5;
        this.k = bundle;
    }

    PlaybackStateCompat(Parcel parcel) {
        this.f100a = parcel.readInt();
        this.f101b = parcel.readLong();
        this.f103d = parcel.readFloat();
        this.h = parcel.readLong();
        this.f102c = parcel.readLong();
        this.f104e = parcel.readLong();
        this.g = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
        this.i = parcel.createTypedArrayList(CustomAction.CREATOR);
        this.j = parcel.readLong();
        this.k = parcel.readBundle(MediaSessionCompat.class.getClassLoader());
        this.f105f = parcel.readInt();
    }

    public static PlaybackStateCompat a(Object obj) {
        ArrayList arrayList;
        if (obj == null || Build.VERSION.SDK_INT < 21) {
            return null;
        }
        List<Object> listD = k.d(obj);
        if (listD != null) {
            ArrayList arrayList2 = new ArrayList(listD.size());
            Iterator<Object> it = listD.iterator();
            while (it.hasNext()) {
                arrayList2.add(CustomAction.a(it.next()));
            }
            arrayList = arrayList2;
        } else {
            arrayList = null;
        }
        PlaybackStateCompat playbackStateCompat = new PlaybackStateCompat(k.i(obj), k.h(obj), k.c(obj), k.g(obj), k.a(obj), 0, k.e(obj), k.f(obj), arrayList, k.b(obj), Build.VERSION.SDK_INT >= 22 ? l.a(obj) : null);
        playbackStateCompat.l = obj;
        return playbackStateCompat;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return "PlaybackState {state=" + this.f100a + ", position=" + this.f101b + ", buffered position=" + this.f102c + ", speed=" + this.f103d + ", updated=" + this.h + ", actions=" + this.f104e + ", error code=" + this.f105f + ", error message=" + this.g + ", custom actions=" + this.i + ", active item id=" + this.j + "}";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.f100a);
        parcel.writeLong(this.f101b);
        parcel.writeFloat(this.f103d);
        parcel.writeLong(this.h);
        parcel.writeLong(this.f102c);
        parcel.writeLong(this.f104e);
        TextUtils.writeToParcel(this.g, parcel, i);
        parcel.writeTypedList(this.i);
        parcel.writeLong(this.j);
        parcel.writeBundle(this.k);
        parcel.writeInt(this.f105f);
    }
}
