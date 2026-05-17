package android.support.v4.media;

import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.BadParcelableException;
import android.os.Binder;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.RemoteException;
import android.support.v4.media.f;
import android.support.v4.media.g;
import android.support.v4.media.session.MediaSessionCompat;
import android.support.v4.media.session.b;
import android.support.v4.os.ResultReceiver;
import android.text.TextUtils;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class MediaBrowserCompat {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final boolean f0a = Log.isLoggable("MediaBrowserCompat", 3);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final e f1b;

    private static class CustomActionResultReceiver extends ResultReceiver {

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final String f2d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final Bundle f3e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private final c f4f;

        @Override // android.support.v4.os.ResultReceiver
        protected void a(int i, Bundle bundle) {
            if (this.f4f == null) {
                return;
            }
            MediaSessionCompat.a(bundle);
            if (i == -1) {
                this.f4f.a(this.f2d, this.f3e, bundle);
                return;
            }
            if (i == 0) {
                this.f4f.c(this.f2d, this.f3e, bundle);
                return;
            }
            if (i == 1) {
                this.f4f.b(this.f2d, this.f3e, bundle);
                return;
            }
            Log.w("MediaBrowserCompat", "Unknown result code: " + i + " (extras=" + this.f3e + ", resultData=" + bundle + ")");
        }
    }

    private static class ItemReceiver extends ResultReceiver {

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final String f5d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final d f6e;

        @Override // android.support.v4.os.ResultReceiver
        protected void a(int i, Bundle bundle) {
            MediaSessionCompat.a(bundle);
            if (i != 0 || bundle == null || !bundle.containsKey("media_item")) {
                this.f6e.a(this.f5d);
                return;
            }
            Parcelable parcelable = bundle.getParcelable("media_item");
            if (parcelable == null || (parcelable instanceof MediaItem)) {
                this.f6e.a((MediaItem) parcelable);
            } else {
                this.f6e.a(this.f5d);
            }
        }
    }

    public static class MediaItem implements Parcelable {
        public static final Parcelable.Creator<MediaItem> CREATOR = new android.support.v4.media.e();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f7a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final MediaDescriptionCompat f8b;

        MediaItem(Parcel parcel) {
            this.f7a = parcel.readInt();
            this.f8b = MediaDescriptionCompat.CREATOR.createFromParcel(parcel);
        }

        public MediaItem(MediaDescriptionCompat mediaDescriptionCompat, int i) {
            if (mediaDescriptionCompat == null) {
                throw new IllegalArgumentException("description cannot be null");
            }
            if (TextUtils.isEmpty(mediaDescriptionCompat.b())) {
                throw new IllegalArgumentException("description must have a non-empty media id");
            }
            this.f7a = i;
            this.f8b = mediaDescriptionCompat;
        }

        public static MediaItem a(Object obj) {
            if (obj == null || Build.VERSION.SDK_INT < 21) {
                return null;
            }
            return new MediaItem(MediaDescriptionCompat.a(f.c.a(obj)), f.c.b(obj));
        }

        public static List<MediaItem> a(List<?> list) {
            if (list == null || Build.VERSION.SDK_INT < 21) {
                return null;
            }
            ArrayList arrayList = new ArrayList(list.size());
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
            return "MediaItem{mFlags=" + this.f7a + ", mDescription=" + this.f8b + '}';
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            parcel.writeInt(this.f7a);
            this.f8b.writeToParcel(parcel, i);
        }
    }

    private static class SearchResultReceiver extends ResultReceiver {

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final String f9d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final Bundle f10e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private final k f11f;

        @Override // android.support.v4.os.ResultReceiver
        protected void a(int i, Bundle bundle) {
            MediaSessionCompat.a(bundle);
            if (i != 0 || bundle == null || !bundle.containsKey("search_results")) {
                this.f11f.a(this.f9d, this.f10e);
                return;
            }
            Parcelable[] parcelableArray = bundle.getParcelableArray("search_results");
            ArrayList arrayList = null;
            if (parcelableArray != null) {
                arrayList = new ArrayList();
                for (Parcelable parcelable : parcelableArray) {
                    arrayList.add((MediaItem) parcelable);
                }
            }
            this.f11f.a(this.f9d, this.f10e, arrayList);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    static class a extends Handler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final WeakReference<j> f12a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private WeakReference<Messenger> f13b;

        a(j jVar) {
            this.f12a = new WeakReference<>(jVar);
        }

        void a(Messenger messenger) {
            this.f13b = new WeakReference<>(messenger);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            WeakReference<Messenger> weakReference = this.f13b;
            if (weakReference == null || weakReference.get() == null || this.f12a.get() == null) {
                return;
            }
            Bundle data = message.getData();
            MediaSessionCompat.a(data);
            j jVar = this.f12a.get();
            Messenger messenger = this.f13b.get();
            try {
                int i = message.what;
                if (i == 1) {
                    Bundle bundle = data.getBundle("data_root_hints");
                    MediaSessionCompat.a(bundle);
                    jVar.a(messenger, data.getString("data_media_item_id"), (MediaSessionCompat.Token) data.getParcelable("data_media_session_token"), bundle);
                } else if (i == 2) {
                    jVar.a(messenger);
                } else if (i != 3) {
                    Log.w("MediaBrowserCompat", "Unhandled message: " + message + "\n  Client version: 1\n  Service version: " + message.arg1);
                } else {
                    Bundle bundle2 = data.getBundle("data_options");
                    MediaSessionCompat.a(bundle2);
                    Bundle bundle3 = data.getBundle("data_notify_children_changed_options");
                    MediaSessionCompat.a(bundle3);
                    jVar.a(messenger, data.getString("data_media_item_id"), data.getParcelableArrayList("data_media_item_list"), bundle2, bundle3);
                }
            } catch (BadParcelableException unused) {
                Log.e("MediaBrowserCompat", "Could not unparcel the data.");
                if (message.what == 1) {
                    jVar.a(messenger);
                }
            }
        }
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Object f14a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        a f15b;

        interface a {
            void b();

            void c();

            void onConnected();
        }

        /* JADX INFO: renamed from: android.support.v4.media.MediaBrowserCompat$b$b, reason: collision with other inner class name */
        private class C0001b implements f.a {
            C0001b() {
            }

            @Override // android.support.v4.media.f.a
            public void b() {
                a aVar = b.this.f15b;
                if (aVar != null) {
                    aVar.b();
                }
                b.this.c();
            }

            @Override // android.support.v4.media.f.a
            public void c() {
                a aVar = b.this.f15b;
                if (aVar != null) {
                    aVar.c();
                }
                b.this.b();
            }

            @Override // android.support.v4.media.f.a
            public void onConnected() {
                a aVar = b.this.f15b;
                if (aVar != null) {
                    aVar.onConnected();
                }
                b.this.a();
            }
        }

        public b() {
            this.f14a = Build.VERSION.SDK_INT >= 21 ? android.support.v4.media.f.a((f.a) new C0001b()) : null;
        }

        public void a() {
            throw null;
        }

        void a(a aVar) {
            this.f15b = aVar;
        }

        public void b() {
            throw null;
        }

        public void c() {
            throw null;
        }
    }

    public static abstract class c {
        public abstract void a(String str, Bundle bundle, Bundle bundle2);

        public abstract void b(String str, Bundle bundle, Bundle bundle2);

        public abstract void c(String str, Bundle bundle, Bundle bundle2);
    }

    public static abstract class d {
        public abstract void a(MediaItem mediaItem);

        public abstract void a(String str);
    }

    interface e {
        void a();

        void connect();

        MediaSessionCompat.Token d();
    }

    static class f implements e, j, b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Context f17a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        protected final Object f18b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        protected final Bundle f19c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        protected final a f20d = new a(this);

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final b.b.b<String, m> f21e = new b.b.b<>();

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        protected int f22f;
        protected l g;
        protected Messenger h;
        private MediaSessionCompat.Token i;
        private Bundle j;

        f(Context context, ComponentName componentName, b bVar, Bundle bundle) {
            this.f17a = context;
            this.f19c = bundle != null ? new Bundle(bundle) : new Bundle();
            this.f19c.putInt("extra_client_version", 1);
            bVar.a(this);
            this.f18b = android.support.v4.media.f.a(context, componentName, bVar.f14a, this.f19c);
        }

        @Override // android.support.v4.media.MediaBrowserCompat.e
        public void a() {
            Messenger messenger;
            l lVar = this.g;
            if (lVar != null && (messenger = this.h) != null) {
                try {
                    lVar.b(messenger);
                } catch (RemoteException unused) {
                    Log.i("MediaBrowserCompat", "Remote error unregistering client messenger.");
                }
            }
            android.support.v4.media.f.b(this.f18b);
        }

        @Override // android.support.v4.media.MediaBrowserCompat.j
        public void a(Messenger messenger) {
        }

        @Override // android.support.v4.media.MediaBrowserCompat.j
        public void a(Messenger messenger, String str, MediaSessionCompat.Token token, Bundle bundle) {
        }

        @Override // android.support.v4.media.MediaBrowserCompat.j
        public void a(Messenger messenger, String str, List list, Bundle bundle, Bundle bundle2) {
            if (this.h != messenger) {
                return;
            }
            m mVar = this.f21e.get(str);
            if (mVar == null) {
                if (MediaBrowserCompat.f0a) {
                    Log.d("MediaBrowserCompat", "onLoadChildren for id that isn't subscribed id=" + str);
                    return;
                }
                return;
            }
            n nVarA = mVar.a(bundle);
            if (nVarA != null) {
                if (bundle == null) {
                    if (list == null) {
                        nVarA.a(str);
                        return;
                    } else {
                        this.j = bundle2;
                        nVarA.a(str, (List<MediaItem>) list);
                    }
                } else if (list == null) {
                    nVarA.a(str, bundle);
                    return;
                } else {
                    this.j = bundle2;
                    nVarA.a(str, list, bundle);
                }
                this.j = null;
            }
        }

        @Override // android.support.v4.media.MediaBrowserCompat.b.a
        public void b() {
            this.g = null;
            this.h = null;
            this.i = null;
            this.f20d.a(null);
        }

        @Override // android.support.v4.media.MediaBrowserCompat.b.a
        public void c() {
        }

        @Override // android.support.v4.media.MediaBrowserCompat.e
        public void connect() {
            android.support.v4.media.f.a(this.f18b);
        }

        @Override // android.support.v4.media.MediaBrowserCompat.e
        public MediaSessionCompat.Token d() {
            if (this.i == null) {
                this.i = MediaSessionCompat.Token.a(android.support.v4.media.f.d(this.f18b));
            }
            return this.i;
        }

        @Override // android.support.v4.media.MediaBrowserCompat.b.a
        public void onConnected() {
            Bundle bundleC = android.support.v4.media.f.c(this.f18b);
            if (bundleC == null) {
                return;
            }
            this.f22f = bundleC.getInt("extra_service_version", 0);
            IBinder iBinderA = androidx.core.app.c.a(bundleC, "extra_messenger");
            if (iBinderA != null) {
                this.g = new l(iBinderA, this.f19c);
                this.h = new Messenger(this.f20d);
                this.f20d.a(this.h);
                try {
                    this.g.b(this.f17a, this.h);
                } catch (RemoteException unused) {
                    Log.i("MediaBrowserCompat", "Remote error registering client messenger.");
                }
            }
            android.support.v4.media.session.b bVarA = b.a.a(androidx.core.app.c.a(bundleC, "extra_session_binder"));
            if (bVarA != null) {
                this.i = MediaSessionCompat.Token.a(android.support.v4.media.f.d(this.f18b), bVarA);
            }
        }
    }

    static class g extends f {
        g(Context context, ComponentName componentName, b bVar, Bundle bundle) {
            super(context, componentName, bVar, bundle);
        }
    }

    static class h extends g {
        h(Context context, ComponentName componentName, b bVar, Bundle bundle) {
            super(context, componentName, bVar, bundle);
        }
    }

    static class i implements e, j {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Context f23a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final ComponentName f24b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        final b f25c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        final Bundle f26d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        final a f27e = new a(this);

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private final b.b.b<String, m> f28f = new b.b.b<>();
        int g = 1;
        a h;
        l i;
        Messenger j;
        private String k;
        private MediaSessionCompat.Token l;
        private Bundle m;
        private Bundle n;

        /* JADX INFO: Access modifiers changed from: private */
        class a implements ServiceConnection {
            a() {
            }

            private void a(Runnable runnable) {
                if (Thread.currentThread() == i.this.f27e.getLooper().getThread()) {
                    runnable.run();
                } else {
                    i.this.f27e.post(runnable);
                }
            }

            boolean a(String str) {
                int i;
                i iVar = i.this;
                if (iVar.h == this && (i = iVar.g) != 0 && i != 1) {
                    return true;
                }
                int i2 = i.this.g;
                if (i2 == 0 || i2 == 1) {
                    return false;
                }
                Log.i("MediaBrowserCompat", str + " for " + i.this.f24b + " with mServiceConnection=" + i.this.h + " this=" + this);
                return false;
            }

            @Override // android.content.ServiceConnection
            public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
                a(new android.support.v4.media.c(this, componentName, iBinder));
            }

            @Override // android.content.ServiceConnection
            public void onServiceDisconnected(ComponentName componentName) {
                a(new android.support.v4.media.d(this, componentName));
            }
        }

        public i(Context context, ComponentName componentName, b bVar, Bundle bundle) {
            if (context == null) {
                throw new IllegalArgumentException("context must not be null");
            }
            if (componentName == null) {
                throw new IllegalArgumentException("service component must not be null");
            }
            if (bVar == null) {
                throw new IllegalArgumentException("connection callback must not be null");
            }
            this.f23a = context;
            this.f24b = componentName;
            this.f25c = bVar;
            this.f26d = bundle == null ? null : new Bundle(bundle);
        }

        private static String a(int i) {
            if (i == 0) {
                return "CONNECT_STATE_DISCONNECTING";
            }
            if (i == 1) {
                return "CONNECT_STATE_DISCONNECTED";
            }
            if (i == 2) {
                return "CONNECT_STATE_CONNECTING";
            }
            if (i == 3) {
                return "CONNECT_STATE_CONNECTED";
            }
            if (i == 4) {
                return "CONNECT_STATE_SUSPENDED";
            }
            return "UNKNOWN/" + i;
        }

        private boolean a(Messenger messenger, String str) {
            int i;
            if (this.j == messenger && (i = this.g) != 0 && i != 1) {
                return true;
            }
            int i2 = this.g;
            if (i2 == 0 || i2 == 1) {
                return false;
            }
            Log.i("MediaBrowserCompat", str + " for " + this.f24b + " with mCallbacksMessenger=" + this.j + " this=" + this);
            return false;
        }

        @Override // android.support.v4.media.MediaBrowserCompat.e
        public void a() {
            this.g = 0;
            this.f27e.post(new android.support.v4.media.b(this));
        }

        @Override // android.support.v4.media.MediaBrowserCompat.j
        public void a(Messenger messenger) {
            Log.e("MediaBrowserCompat", "onConnectFailed for " + this.f24b);
            if (a(messenger, "onConnectFailed")) {
                if (this.g == 2) {
                    c();
                    this.f25c.b();
                    return;
                }
                Log.w("MediaBrowserCompat", "onConnect from service while mState=" + a(this.g) + "... ignoring");
            }
        }

        @Override // android.support.v4.media.MediaBrowserCompat.j
        public void a(Messenger messenger, String str, MediaSessionCompat.Token token, Bundle bundle) {
            if (a(messenger, "onConnect")) {
                if (this.g != 2) {
                    Log.w("MediaBrowserCompat", "onConnect from service while mState=" + a(this.g) + "... ignoring");
                    return;
                }
                this.k = str;
                this.l = token;
                this.m = bundle;
                this.g = 3;
                if (MediaBrowserCompat.f0a) {
                    Log.d("MediaBrowserCompat", "ServiceCallbacks.onConnect...");
                    b();
                }
                this.f25c.a();
                try {
                    for (Map.Entry<String, m> entry : this.f28f.entrySet()) {
                        String key = entry.getKey();
                        m value = entry.getValue();
                        List<n> listA = value.a();
                        List<Bundle> listB = value.b();
                        for (int i = 0; i < listA.size(); i++) {
                            this.i.a(key, listA.get(i).f35b, listB.get(i), this.j);
                        }
                    }
                } catch (RemoteException unused) {
                    Log.d("MediaBrowserCompat", "addSubscription failed with RemoteException.");
                }
            }
        }

        @Override // android.support.v4.media.MediaBrowserCompat.j
        public void a(Messenger messenger, String str, List list, Bundle bundle, Bundle bundle2) {
            if (a(messenger, "onLoadChildren")) {
                if (MediaBrowserCompat.f0a) {
                    Log.d("MediaBrowserCompat", "onLoadChildren for " + this.f24b + " id=" + str);
                }
                m mVar = this.f28f.get(str);
                if (mVar == null) {
                    if (MediaBrowserCompat.f0a) {
                        Log.d("MediaBrowserCompat", "onLoadChildren for id that isn't subscribed id=" + str);
                        return;
                    }
                    return;
                }
                n nVarA = mVar.a(bundle);
                if (nVarA != null) {
                    if (bundle == null) {
                        if (list == null) {
                            nVarA.a(str);
                            return;
                        } else {
                            this.n = bundle2;
                            nVarA.a(str, (List<MediaItem>) list);
                        }
                    } else if (list == null) {
                        nVarA.a(str, bundle);
                        return;
                    } else {
                        this.n = bundle2;
                        nVarA.a(str, list, bundle);
                    }
                    this.n = null;
                }
            }
        }

        void b() {
            Log.d("MediaBrowserCompat", "MediaBrowserCompat...");
            Log.d("MediaBrowserCompat", "  mServiceComponent=" + this.f24b);
            Log.d("MediaBrowserCompat", "  mCallback=" + this.f25c);
            Log.d("MediaBrowserCompat", "  mRootHints=" + this.f26d);
            Log.d("MediaBrowserCompat", "  mState=" + a(this.g));
            Log.d("MediaBrowserCompat", "  mServiceConnection=" + this.h);
            Log.d("MediaBrowserCompat", "  mServiceBinderWrapper=" + this.i);
            Log.d("MediaBrowserCompat", "  mCallbacksMessenger=" + this.j);
            Log.d("MediaBrowserCompat", "  mRootId=" + this.k);
            Log.d("MediaBrowserCompat", "  mMediaSessionToken=" + this.l);
        }

        void c() {
            a aVar = this.h;
            if (aVar != null) {
                this.f23a.unbindService(aVar);
            }
            this.g = 1;
            this.h = null;
            this.i = null;
            this.j = null;
            this.f27e.a(null);
            this.k = null;
            this.l = null;
        }

        @Override // android.support.v4.media.MediaBrowserCompat.e
        public void connect() {
            int i = this.g;
            if (i == 0 || i == 1) {
                this.g = 2;
                this.f27e.post(new android.support.v4.media.a(this));
            } else {
                throw new IllegalStateException("connect() called while neigther disconnecting nor disconnected (state=" + a(this.g) + ")");
            }
        }

        @Override // android.support.v4.media.MediaBrowserCompat.e
        public MediaSessionCompat.Token d() {
            if (e()) {
                return this.l;
            }
            throw new IllegalStateException("getSessionToken() called while not connected(state=" + this.g + ")");
        }

        public boolean e() {
            return this.g == 3;
        }
    }

    interface j {
        void a(Messenger messenger);

        void a(Messenger messenger, String str, MediaSessionCompat.Token token, Bundle bundle);

        void a(Messenger messenger, String str, List list, Bundle bundle, Bundle bundle2);
    }

    public static abstract class k {
        public abstract void a(String str, Bundle bundle);

        public abstract void a(String str, Bundle bundle, List<MediaItem> list);
    }

    /* JADX INFO: Access modifiers changed from: private */
    static class l {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Messenger f30a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private Bundle f31b;

        public l(IBinder iBinder, Bundle bundle) {
            this.f30a = new Messenger(iBinder);
            this.f31b = bundle;
        }

        private void a(int i, Bundle bundle, Messenger messenger) throws RemoteException {
            Message messageObtain = Message.obtain();
            messageObtain.what = i;
            messageObtain.arg1 = 1;
            messageObtain.setData(bundle);
            messageObtain.replyTo = messenger;
            this.f30a.send(messageObtain);
        }

        void a(Context context, Messenger messenger) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putString("data_package_name", context.getPackageName());
            bundle.putBundle("data_root_hints", this.f31b);
            a(1, bundle, messenger);
        }

        void a(Messenger messenger) {
            a(2, null, messenger);
        }

        void a(String str, IBinder iBinder, Bundle bundle, Messenger messenger) throws RemoteException {
            Bundle bundle2 = new Bundle();
            bundle2.putString("data_media_item_id", str);
            androidx.core.app.c.a(bundle2, "data_callback_token", iBinder);
            bundle2.putBundle("data_options", bundle);
            a(3, bundle2, messenger);
        }

        void b(Context context, Messenger messenger) throws RemoteException {
            Bundle bundle = new Bundle();
            bundle.putString("data_package_name", context.getPackageName());
            bundle.putBundle("data_root_hints", this.f31b);
            a(6, bundle, messenger);
        }

        void b(Messenger messenger) throws RemoteException {
            a(7, null, messenger);
        }
    }

    private static class m {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<n> f32a = new ArrayList();

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final List<Bundle> f33b = new ArrayList();

        public n a(Bundle bundle) {
            for (int i = 0; i < this.f33b.size(); i++) {
                if (androidx.media.d.a(this.f33b.get(i), bundle)) {
                    return this.f32a.get(i);
                }
            }
            return null;
        }

        public List<n> a() {
            return this.f32a;
        }

        public List<Bundle> b() {
            return this.f33b;
        }
    }

    public static abstract class n {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Object f34a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final IBinder f35b = new Binder();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        WeakReference<m> f36c;

        private class a implements f.d {
            a() {
            }

            List<MediaItem> a(List<MediaItem> list, Bundle bundle) {
                if (list == null) {
                    return null;
                }
                int i = bundle.getInt("android.media.browse.extra.PAGE", -1);
                int i2 = bundle.getInt("android.media.browse.extra.PAGE_SIZE", -1);
                if (i == -1 && i2 == -1) {
                    return list;
                }
                int i3 = i2 * i;
                int size = i3 + i2;
                if (i < 0 || i2 < 1 || i3 >= list.size()) {
                    return Collections.emptyList();
                }
                if (size > list.size()) {
                    size = list.size();
                }
                return list.subList(i3, size);
            }

            @Override // android.support.v4.media.f.d
            public void a(String str, List<?> list) {
                WeakReference<m> weakReference = n.this.f36c;
                m mVar = weakReference == null ? null : weakReference.get();
                if (mVar == null) {
                    n.this.a(str, MediaItem.a(list));
                    return;
                }
                List<MediaItem> listA = MediaItem.a(list);
                List<n> listA2 = mVar.a();
                List<Bundle> listB = mVar.b();
                for (int i = 0; i < listA2.size(); i++) {
                    Bundle bundle = listB.get(i);
                    if (bundle == null) {
                        n.this.a(str, listA);
                    } else {
                        n.this.a(str, a(listA, bundle), bundle);
                    }
                }
            }

            @Override // android.support.v4.media.f.d
            public void onError(String str) {
                n.this.a(str);
            }
        }

        private class b extends a implements g.a {
            b() {
                super();
            }

            @Override // android.support.v4.media.g.a
            public void a(String str, Bundle bundle) {
                n.this.a(str, bundle);
            }

            @Override // android.support.v4.media.g.a
            public void a(String str, List<?> list, Bundle bundle) {
                n.this.a(str, MediaItem.a(list), bundle);
            }
        }

        public n() {
            int i = Build.VERSION.SDK_INT;
            this.f34a = i >= 26 ? android.support.v4.media.g.a(new b()) : i >= 21 ? android.support.v4.media.f.a((f.d) new a()) : null;
        }

        public void a(String str) {
        }

        public void a(String str, Bundle bundle) {
        }

        public void a(String str, List<MediaItem> list) {
        }

        public void a(String str, List<MediaItem> list, Bundle bundle) {
        }
    }

    public MediaBrowserCompat(Context context, ComponentName componentName, b bVar, Bundle bundle) {
        int i2 = Build.VERSION.SDK_INT;
        this.f1b = i2 >= 26 ? new h(context, componentName, bVar, bundle) : i2 >= 23 ? new g(context, componentName, bVar, bundle) : i2 >= 21 ? new f(context, componentName, bVar, bundle) : new i(context, componentName, bVar, bundle);
    }

    public void a() {
        this.f1b.connect();
    }

    public void b() {
        this.f1b.a();
    }

    public MediaSessionCompat.Token c() {
        return this.f1b.d();
    }
}
