package android.support.v4.media.session;

import android.os.Build;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.ResultReceiver;
import android.support.v4.media.MediaDescriptionCompat;
import android.support.v4.media.session.g;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class MediaSessionCompat {

    public static final class QueueItem implements Parcelable {
        public static final Parcelable.Creator<QueueItem> CREATOR = new d();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final MediaDescriptionCompat f88a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final long f89b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private Object f90c;

        QueueItem(Parcel parcel) {
            this.f88a = MediaDescriptionCompat.CREATOR.createFromParcel(parcel);
            this.f89b = parcel.readLong();
        }

        private QueueItem(Object obj, MediaDescriptionCompat mediaDescriptionCompat, long j) {
            if (mediaDescriptionCompat == null) {
                throw new IllegalArgumentException("Description cannot be null.");
            }
            if (j == -1) {
                throw new IllegalArgumentException("Id cannot be QueueItem.UNKNOWN_ID");
            }
            this.f88a = mediaDescriptionCompat;
            this.f89b = j;
            this.f90c = obj;
        }

        public static QueueItem a(Object obj) {
            if (obj == null || Build.VERSION.SDK_INT < 21) {
                return null;
            }
            return new QueueItem(obj, MediaDescriptionCompat.a(g.a.a(obj)), g.a.b(obj));
        }

        public static List<QueueItem> a(List<?> list) {
            if (list == null || Build.VERSION.SDK_INT < 21) {
                return null;
            }
            ArrayList arrayList = new ArrayList();
            Iterator<?> it = list.iterator();
            while (it.hasNext()) {
                arrayList.add(a(it.next()));
            }
            return arrayList;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        public String toString() {
            return "MediaSession.QueueItem {Description=" + this.f88a + ", Id=" + this.f89b + " }";
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            this.f88a.writeToParcel(parcel, i);
            parcel.writeLong(this.f89b);
        }
    }

    public static final class ResultReceiverWrapper implements Parcelable {
        public static final Parcelable.Creator<ResultReceiverWrapper> CREATOR = new e();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        ResultReceiver f91a;

        ResultReceiverWrapper(Parcel parcel) {
            this.f91a = (ResultReceiver) ResultReceiver.CREATOR.createFromParcel(parcel);
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            this.f91a.writeToParcel(parcel, i);
        }
    }

    public static final class Token implements Parcelable {
        public static final Parcelable.Creator<Token> CREATOR = new f();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Object f92a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private b f93b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private Bundle f94c;

        Token(Object obj) {
            this(obj, null, null);
        }

        Token(Object obj, b bVar) {
            this(obj, bVar, null);
        }

        Token(Object obj, b bVar, Bundle bundle) {
            this.f92a = obj;
            this.f93b = bVar;
            this.f94c = bundle;
        }

        public static Token a(Object obj) {
            return a(obj, null);
        }

        public static Token a(Object obj, b bVar) {
            if (obj == null || Build.VERSION.SDK_INT < 21) {
                return null;
            }
            g.a(obj);
            return new Token(obj, bVar);
        }

        public b a() {
            return this.f93b;
        }

        public void a(Bundle bundle) {
            this.f94c = bundle;
        }

        public void a(b bVar) {
            this.f93b = bVar;
        }

        public Object b() {
            return this.f92a;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (!(obj instanceof Token)) {
                return false;
            }
            Token token = (Token) obj;
            Object obj2 = this.f92a;
            if (obj2 == null) {
                return token.f92a == null;
            }
            Object obj3 = token.f92a;
            if (obj3 == null) {
                return false;
            }
            return obj2.equals(obj3);
        }

        public int hashCode() {
            Object obj = this.f92a;
            if (obj == null) {
                return 0;
            }
            return obj.hashCode();
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            if (Build.VERSION.SDK_INT >= 21) {
                parcel.writeParcelable((Parcelable) this.f92a, i);
            } else {
                parcel.writeStrongBinder((IBinder) this.f92a);
            }
        }
    }

    public static void a(Bundle bundle) {
        if (bundle != null) {
            bundle.setClassLoader(MediaSessionCompat.class.getClassLoader());
        }
    }
}
