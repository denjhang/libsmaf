package android.support.v4.media;

import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.v4.media.i;
import android.support.v4.media.j;
import android.support.v4.media.session.MediaSessionCompat;
import android.text.TextUtils;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class MediaDescriptionCompat implements Parcelable {
    public static final Parcelable.Creator<MediaDescriptionCompat> CREATOR = new h();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f39a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final CharSequence f40b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final CharSequence f41c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final CharSequence f42d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Bitmap f43e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Uri f44f;
    private final Bundle g;
    private final Uri h;
    private Object i;

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f45a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private CharSequence f46b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private CharSequence f47c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private CharSequence f48d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private Bitmap f49e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private Uri f50f;
        private Bundle g;
        private Uri h;

        public a a(Bitmap bitmap) {
            this.f49e = bitmap;
            return this;
        }

        public a a(Uri uri) {
            this.f50f = uri;
            return this;
        }

        public a a(Bundle bundle) {
            this.g = bundle;
            return this;
        }

        public a a(CharSequence charSequence) {
            this.f48d = charSequence;
            return this;
        }

        public a a(String str) {
            this.f45a = str;
            return this;
        }

        public MediaDescriptionCompat a() {
            return new MediaDescriptionCompat(this.f45a, this.f46b, this.f47c, this.f48d, this.f49e, this.f50f, this.g, this.h);
        }

        public a b(Uri uri) {
            this.h = uri;
            return this;
        }

        public a b(CharSequence charSequence) {
            this.f47c = charSequence;
            return this;
        }

        public a c(CharSequence charSequence) {
            this.f46b = charSequence;
            return this;
        }
    }

    MediaDescriptionCompat(Parcel parcel) {
        this.f39a = parcel.readString();
        this.f40b = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
        this.f41c = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
        this.f42d = (CharSequence) TextUtils.CHAR_SEQUENCE_CREATOR.createFromParcel(parcel);
        ClassLoader classLoader = MediaDescriptionCompat.class.getClassLoader();
        this.f43e = (Bitmap) parcel.readParcelable(classLoader);
        this.f44f = (Uri) parcel.readParcelable(classLoader);
        this.g = parcel.readBundle(classLoader);
        this.h = (Uri) parcel.readParcelable(classLoader);
    }

    MediaDescriptionCompat(String str, CharSequence charSequence, CharSequence charSequence2, CharSequence charSequence3, Bitmap bitmap, Uri uri, Bundle bundle, Uri uri2) {
        this.f39a = str;
        this.f40b = charSequence;
        this.f41c = charSequence2;
        this.f42d = charSequence3;
        this.f43e = bitmap;
        this.f44f = uri;
        this.g = bundle;
        this.h = uri2;
    }

    public static MediaDescriptionCompat a(Object obj) {
        Uri uri;
        Bundle bundle = null;
        if (obj == null || Build.VERSION.SDK_INT < 21) {
            return null;
        }
        a aVar = new a();
        aVar.a(i.e(obj));
        aVar.c(i.g(obj));
        aVar.b(i.f(obj));
        aVar.a(i.a(obj));
        aVar.a(i.c(obj));
        aVar.a(i.d(obj));
        Bundle bundleB = i.b(obj);
        if (bundleB != null) {
            MediaSessionCompat.a(bundleB);
            uri = (Uri) bundleB.getParcelable("android.support.v4.media.description.MEDIA_URI");
        } else {
            uri = null;
        }
        if (uri == null) {
            bundle = bundleB;
        } else if (!bundleB.containsKey("android.support.v4.media.description.NULL_BUNDLE_FLAG") || bundleB.size() != 2) {
            bundleB.remove("android.support.v4.media.description.MEDIA_URI");
            bundleB.remove("android.support.v4.media.description.NULL_BUNDLE_FLAG");
            bundle = bundleB;
        }
        aVar.a(bundle);
        if (uri != null) {
            aVar.b(uri);
        } else if (Build.VERSION.SDK_INT >= 23) {
            aVar.b(j.a(obj));
        }
        MediaDescriptionCompat mediaDescriptionCompatA = aVar.a();
        mediaDescriptionCompatA.i = obj;
        return mediaDescriptionCompatA;
    }

    public Object a() {
        if (this.i != null || Build.VERSION.SDK_INT < 21) {
            return this.i;
        }
        Object objA = i.a.a();
        i.a.a(objA, this.f39a);
        i.a.c(objA, this.f40b);
        i.a.b(objA, this.f41c);
        i.a.a(objA, this.f42d);
        i.a.a(objA, this.f43e);
        i.a.a(objA, this.f44f);
        Bundle bundle = this.g;
        if (Build.VERSION.SDK_INT < 23 && this.h != null) {
            if (bundle == null) {
                bundle = new Bundle();
                bundle.putBoolean("android.support.v4.media.description.NULL_BUNDLE_FLAG", true);
            }
            bundle.putParcelable("android.support.v4.media.description.MEDIA_URI", this.h);
        }
        i.a.a(objA, bundle);
        if (Build.VERSION.SDK_INT >= 23) {
            j.a.a(objA, this.h);
        }
        this.i = i.a.a(objA);
        return this.i;
    }

    public String b() {
        return this.f39a;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return ((Object) this.f40b) + ", " + ((Object) this.f41c) + ", " + ((Object) this.f42d);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        if (Build.VERSION.SDK_INT >= 21) {
            i.a(a(), parcel, i);
            return;
        }
        parcel.writeString(this.f39a);
        TextUtils.writeToParcel(this.f40b, parcel, i);
        TextUtils.writeToParcel(this.f41c, parcel, i);
        TextUtils.writeToParcel(this.f42d, parcel, i);
        parcel.writeParcelable(this.f43e, i);
        parcel.writeParcelable(this.f44f, i);
        parcel.writeBundle(this.g);
        parcel.writeParcelable(this.h, i);
    }
}
