package androidx.media;

import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.Parcel;
import android.os.RemoteException;
import android.support.v4.media.MediaBrowserCompat;
import android.support.v4.media.session.MediaSessionCompat;
import android.support.v4.os.ResultReceiver;
import android.text.TextUtils;
import android.util.Log;
import androidx.media.v;
import androidx.media.w;
import androidx.media.x;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class MediaBrowserServiceCompat extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final boolean f494a = Log.isLoggable("MBServiceCompat", 3);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private c f495b;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    b f497d;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    MediaSessionCompat.Token f499f;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final b.b.b<IBinder, b> f496c = new b.b.b<>();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final m f498e = new m();

    public static final class a {
        public Bundle a() {
            throw null;
        }

        public String b() {
            throw null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    class b implements IBinder.DeathRecipient {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f500a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public final int f501b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public final int f502c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public final y f503d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        public final Bundle f504e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        public final k f505f;
        public final HashMap<String, List<b.d.c.d<IBinder, Bundle>>> g = new HashMap<>();
        public a h;

        b(String str, int i, int i2, Bundle bundle, k kVar) {
            this.f500a = str;
            this.f501b = i;
            this.f502c = i2;
            this.f503d = new y(str, i, i2);
            this.f504e = bundle;
            this.f505f = kVar;
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            MediaBrowserServiceCompat.this.f498e.post(new androidx.media.i(this));
        }
    }

    interface c {
        IBinder a(Intent intent);

        void onCreate();
    }

    class d implements c, v.d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final List<Bundle> f506a = new ArrayList();

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        Object f507b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        Messenger f508c;

        d() {
        }

        @Override // androidx.media.MediaBrowserServiceCompat.c
        public IBinder a(Intent intent) {
            return v.a(this.f507b, intent);
        }

        @Override // androidx.media.v.d
        public v.a a(String str, int i, Bundle bundle) {
            Bundle bundle2;
            if (bundle == null || bundle.getInt("extra_client_version", 0) == 0) {
                bundle2 = null;
            } else {
                bundle.remove("extra_client_version");
                this.f508c = new Messenger(MediaBrowserServiceCompat.this.f498e);
                bundle2 = new Bundle();
                bundle2.putInt("extra_service_version", 2);
                androidx.core.app.c.a(bundle2, "extra_messenger", this.f508c.getBinder());
                MediaSessionCompat.Token token = MediaBrowserServiceCompat.this.f499f;
                if (token != null) {
                    android.support.v4.media.session.b bVarA = token.a();
                    androidx.core.app.c.a(bundle2, "extra_session_binder", bVarA == null ? null : bVarA.asBinder());
                } else {
                    this.f506a.add(bundle2);
                }
            }
            MediaBrowserServiceCompat mediaBrowserServiceCompat = MediaBrowserServiceCompat.this;
            mediaBrowserServiceCompat.f497d = mediaBrowserServiceCompat.new b(str, -1, i, bundle, null);
            a aVarA = MediaBrowserServiceCompat.this.a(str, i, bundle);
            MediaBrowserServiceCompat.this.f497d = null;
            if (aVarA == null) {
                return null;
            }
            if (bundle2 == null) {
                aVarA.a();
                throw null;
            }
            aVarA.a();
            throw null;
        }

        @Override // androidx.media.v.d
        public void b(String str, v.c<List<Parcel>> cVar) {
            MediaBrowserServiceCompat.this.a(str, new androidx.media.j(this, str, cVar));
        }

        @Override // androidx.media.MediaBrowserServiceCompat.c
        public void onCreate() {
            this.f507b = v.a(MediaBrowserServiceCompat.this, this);
            v.a(this.f507b);
        }
    }

    class e extends d implements w.b {
        e() {
            super();
        }

        @Override // androidx.media.w.b
        public void a(String str, v.c<Parcel> cVar) {
            MediaBrowserServiceCompat.this.b(str, new androidx.media.k(this, str, cVar));
        }

        @Override // androidx.media.MediaBrowserServiceCompat.d, androidx.media.MediaBrowserServiceCompat.c
        public void onCreate() {
            this.f507b = w.a(MediaBrowserServiceCompat.this, this);
            v.a(this.f507b);
        }
    }

    class f extends e implements x.c {
        f() {
            super();
        }

        @Override // androidx.media.x.c
        public void a(String str, x.b bVar, Bundle bundle) {
            MediaBrowserServiceCompat.this.a(str, new androidx.media.l(this, str, bVar), bundle);
        }

        @Override // androidx.media.MediaBrowserServiceCompat.e, androidx.media.MediaBrowserServiceCompat.d, androidx.media.MediaBrowserServiceCompat.c
        public void onCreate() {
            this.f507b = x.a(MediaBrowserServiceCompat.this, this);
            v.a(this.f507b);
        }
    }

    class g extends f {
        g() {
            super();
        }
    }

    class h implements c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Messenger f512a;

        h() {
        }

        @Override // androidx.media.MediaBrowserServiceCompat.c
        public IBinder a(Intent intent) {
            if ("android.media.browse.MediaBrowserService".equals(intent.getAction())) {
                return this.f512a.getBinder();
            }
            return null;
        }

        @Override // androidx.media.MediaBrowserServiceCompat.c
        public void onCreate() {
            this.f512a = new Messenger(MediaBrowserServiceCompat.this.f498e);
        }
    }

    public static class i<T> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Object f514a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private boolean f515b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private boolean f516c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private boolean f517d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private int f518e;

        i(Object obj) {
            this.f514a = obj;
        }

        int a() {
            return this.f518e;
        }

        void a(int i) {
            this.f518e = i;
        }

        void a(Bundle bundle) {
            throw new UnsupportedOperationException("It is not supported to send an error for " + this.f514a);
        }

        void a(T t) {
            throw null;
        }

        public void b(Bundle bundle) {
            if (!this.f516c && !this.f517d) {
                this.f517d = true;
                a(bundle);
            } else {
                throw new IllegalStateException("sendError() called when either sendResult() or sendError() had already been called for: " + this.f514a);
            }
        }

        public void b(T t) {
            if (!this.f516c && !this.f517d) {
                this.f516c = true;
                a(t);
            } else {
                throw new IllegalStateException("sendResult() called when either sendResult() or sendError() had already been called for: " + this.f514a);
            }
        }

        boolean b() {
            return this.f515b || this.f516c || this.f517d;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    class j {
        j() {
        }

        public void a(k kVar) {
            MediaBrowserServiceCompat.this.f498e.a(new n(this, kVar));
        }

        public void a(k kVar, String str, int i, int i2, Bundle bundle) {
            MediaBrowserServiceCompat.this.f498e.a(new r(this, kVar, str, i, i2, bundle));
        }

        public void a(String str, int i, int i2, Bundle bundle, k kVar) {
            if (MediaBrowserServiceCompat.this.a(str, i2)) {
                MediaBrowserServiceCompat.this.f498e.a(new androidx.media.m(this, kVar, str, i, i2, bundle));
                return;
            }
            throw new IllegalArgumentException("Package/uid mismatch: uid=" + i2 + " package=" + str);
        }

        public void a(String str, Bundle bundle, ResultReceiver resultReceiver, k kVar) {
            if (TextUtils.isEmpty(str) || resultReceiver == null) {
                return;
            }
            MediaBrowserServiceCompat.this.f498e.a(new t(this, kVar, str, bundle, resultReceiver));
        }

        public void a(String str, IBinder iBinder, Bundle bundle, k kVar) {
            MediaBrowserServiceCompat.this.f498e.a(new o(this, kVar, str, iBinder, bundle));
        }

        public void a(String str, IBinder iBinder, k kVar) {
            MediaBrowserServiceCompat.this.f498e.a(new p(this, kVar, str, iBinder));
        }

        public void a(String str, ResultReceiver resultReceiver, k kVar) {
            if (TextUtils.isEmpty(str) || resultReceiver == null) {
                return;
            }
            MediaBrowserServiceCompat.this.f498e.a(new q(this, kVar, str, resultReceiver));
        }

        public void b(k kVar) {
            MediaBrowserServiceCompat.this.f498e.a(new s(this, kVar));
        }

        public void b(String str, Bundle bundle, ResultReceiver resultReceiver, k kVar) {
            if (TextUtils.isEmpty(str) || resultReceiver == null) {
                return;
            }
            MediaBrowserServiceCompat.this.f498e.a(new u(this, kVar, str, bundle, resultReceiver));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    interface k {
        void a();

        void a(String str, List<MediaBrowserCompat.MediaItem> list, Bundle bundle, Bundle bundle2);

        IBinder asBinder();
    }

    private static class l implements k {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Messenger f520a;

        l(Messenger messenger) {
            this.f520a = messenger;
        }

        private void a(int i, Bundle bundle) throws RemoteException {
            Message messageObtain = Message.obtain();
            messageObtain.what = i;
            messageObtain.arg1 = 2;
            messageObtain.setData(bundle);
            this.f520a.send(messageObtain);
        }

        @Override // androidx.media.MediaBrowserServiceCompat.k
        public void a() throws RemoteException {
            a(2, null);
        }

        @Override // androidx.media.MediaBrowserServiceCompat.k
        public void a(String str, List<MediaBrowserCompat.MediaItem> list, Bundle bundle, Bundle bundle2) throws RemoteException {
            Bundle bundle3 = new Bundle();
            bundle3.putString("data_media_item_id", str);
            bundle3.putBundle("data_options", bundle);
            bundle3.putBundle("data_notify_children_changed_options", bundle2);
            if (list != null) {
                bundle3.putParcelableArrayList("data_media_item_list", list instanceof ArrayList ? (ArrayList) list : new ArrayList<>(list));
            }
            a(3, bundle3);
        }

        @Override // androidx.media.MediaBrowserServiceCompat.k
        public IBinder asBinder() {
            return this.f520a.getBinder();
        }
    }

    private final class m extends Handler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final j f521a;

        m() {
            this.f521a = MediaBrowserServiceCompat.this.new j();
        }

        public void a(Runnable runnable) {
            if (Thread.currentThread() == getLooper().getThread()) {
                runnable.run();
            } else {
                post(runnable);
            }
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Bundle data = message.getData();
            switch (message.what) {
                case 1:
                    Bundle bundle = data.getBundle("data_root_hints");
                    MediaSessionCompat.a(bundle);
                    this.f521a.a(data.getString("data_package_name"), data.getInt("data_calling_pid"), data.getInt("data_calling_uid"), bundle, new l(message.replyTo));
                    break;
                case 2:
                    this.f521a.a(new l(message.replyTo));
                    break;
                case 3:
                    Bundle bundle2 = data.getBundle("data_options");
                    MediaSessionCompat.a(bundle2);
                    this.f521a.a(data.getString("data_media_item_id"), androidx.core.app.c.a(data, "data_callback_token"), bundle2, new l(message.replyTo));
                    break;
                case 4:
                    this.f521a.a(data.getString("data_media_item_id"), androidx.core.app.c.a(data, "data_callback_token"), new l(message.replyTo));
                    break;
                case 5:
                    this.f521a.a(data.getString("data_media_item_id"), (ResultReceiver) data.getParcelable("data_result_receiver"), new l(message.replyTo));
                    break;
                case 6:
                    Bundle bundle3 = data.getBundle("data_root_hints");
                    MediaSessionCompat.a(bundle3);
                    this.f521a.a(new l(message.replyTo), data.getString("data_package_name"), data.getInt("data_calling_pid"), data.getInt("data_calling_uid"), bundle3);
                    break;
                case 7:
                    this.f521a.b(new l(message.replyTo));
                    break;
                case 8:
                    Bundle bundle4 = data.getBundle("data_search_extras");
                    MediaSessionCompat.a(bundle4);
                    this.f521a.a(data.getString("data_search_query"), bundle4, (ResultReceiver) data.getParcelable("data_result_receiver"), new l(message.replyTo));
                    break;
                case 9:
                    Bundle bundle5 = data.getBundle("data_custom_action_extras");
                    MediaSessionCompat.a(bundle5);
                    this.f521a.b(data.getString("data_custom_action"), bundle5, (ResultReceiver) data.getParcelable("data_result_receiver"), new l(message.replyTo));
                    break;
                default:
                    Log.w("MBServiceCompat", "Unhandled message: " + message + "\n  Service version: 2\n  Client version: " + message.arg1);
                    break;
            }
        }

        @Override // android.os.Handler
        public boolean sendMessageAtTime(Message message, long j) {
            Bundle data = message.getData();
            data.setClassLoader(MediaBrowserCompat.class.getClassLoader());
            data.putInt("data_calling_uid", Binder.getCallingUid());
            data.putInt("data_calling_pid", Binder.getCallingPid());
            return super.sendMessageAtTime(message, j);
        }
    }

    public abstract a a(String str, int i2, Bundle bundle);

    List<MediaBrowserCompat.MediaItem> a(List<MediaBrowserCompat.MediaItem> list, Bundle bundle) {
        if (list == null) {
            return null;
        }
        int i2 = bundle.getInt("android.media.browse.extra.PAGE", -1);
        int i3 = bundle.getInt("android.media.browse.extra.PAGE_SIZE", -1);
        if (i2 == -1 && i3 == -1) {
            return list;
        }
        int i4 = i3 * i2;
        int size = i4 + i3;
        if (i2 < 0 || i3 < 1 || i4 >= list.size()) {
            return Collections.emptyList();
        }
        if (size > list.size()) {
            size = list.size();
        }
        return list.subList(i4, size);
    }

    public void a(String str) {
    }

    public void a(String str, Bundle bundle) {
    }

    void a(String str, Bundle bundle, b bVar, ResultReceiver resultReceiver) {
        androidx.media.h hVar = new androidx.media.h(this, str, resultReceiver);
        this.f497d = bVar;
        a(str, bundle, hVar);
        this.f497d = null;
        if (hVar.b()) {
            return;
        }
        throw new IllegalStateException("onCustomAction must call detach() or sendResult() or sendError() before returning for action=" + str + " extras=" + bundle);
    }

    public void a(String str, Bundle bundle, i<Bundle> iVar) {
        iVar.b((Bundle) null);
    }

    void a(String str, b bVar, Bundle bundle, Bundle bundle2) {
        androidx.media.e eVar = new androidx.media.e(this, str, bVar, str, bundle, bundle2);
        this.f497d = bVar;
        if (bundle == null) {
            a(str, eVar);
        } else {
            a(str, eVar, bundle);
        }
        this.f497d = null;
        if (eVar.b()) {
            return;
        }
        throw new IllegalStateException("onLoadChildren must call detach() or sendResult() before returning for package=" + bVar.f500a + " id=" + str);
    }

    void a(String str, b bVar, IBinder iBinder, Bundle bundle) {
        List<b.d.c.d<IBinder, Bundle>> arrayList = bVar.g.get(str);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
        }
        for (b.d.c.d<IBinder, Bundle> dVar : arrayList) {
            if (iBinder == dVar.f749a && androidx.media.d.a(bundle, dVar.f750b)) {
                return;
            }
        }
        arrayList.add(new b.d.c.d<>(iBinder, bundle));
        bVar.g.put(str, arrayList);
        a(str, bVar, bundle, (Bundle) null);
        this.f497d = bVar;
        a(str, bundle);
        this.f497d = null;
    }

    void a(String str, b bVar, ResultReceiver resultReceiver) {
        androidx.media.f fVar = new androidx.media.f(this, str, resultReceiver);
        this.f497d = bVar;
        b(str, fVar);
        this.f497d = null;
        if (fVar.b()) {
            return;
        }
        throw new IllegalStateException("onLoadItem must call detach() or sendResult() before returning for id=" + str);
    }

    public abstract void a(String str, i<List<MediaBrowserCompat.MediaItem>> iVar);

    public void a(String str, i<List<MediaBrowserCompat.MediaItem>> iVar, Bundle bundle) {
        iVar.a(1);
        a(str, iVar);
    }

    boolean a(String str, int i2) {
        if (str == null) {
            return false;
        }
        for (String str2 : getPackageManager().getPackagesForUid(i2)) {
            if (str2.equals(str)) {
                return true;
            }
        }
        return false;
    }

    boolean a(String str, b bVar, IBinder iBinder) {
        boolean z = false;
        try {
            if (iBinder == null) {
                return bVar.g.remove(str) != null;
            }
            List<b.d.c.d<IBinder, Bundle>> list = bVar.g.get(str);
            if (list != null) {
                Iterator<b.d.c.d<IBinder, Bundle>> it = list.iterator();
                while (it.hasNext()) {
                    if (iBinder == it.next().f749a) {
                        it.remove();
                        z = true;
                    }
                }
                if (list.size() == 0) {
                    bVar.g.remove(str);
                }
            }
            return z;
        } finally {
            this.f497d = bVar;
            a(str);
            this.f497d = null;
        }
    }

    void b(String str, Bundle bundle, b bVar, ResultReceiver resultReceiver) {
        androidx.media.g gVar = new androidx.media.g(this, str, resultReceiver);
        this.f497d = bVar;
        b(str, bundle, gVar);
        this.f497d = null;
        if (gVar.b()) {
            return;
        }
        throw new IllegalStateException("onSearch must call detach() or sendResult() before returning for query=" + str);
    }

    public void b(String str, Bundle bundle, i<List<MediaBrowserCompat.MediaItem>> iVar) {
        iVar.a(4);
        iVar.b((List<MediaBrowserCompat.MediaItem>) null);
    }

    public void b(String str, i<MediaBrowserCompat.MediaItem> iVar) {
        iVar.a(2);
        iVar.b((MediaBrowserCompat.MediaItem) null);
    }

    @Override // android.app.Service
    public void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return this.f495b.a(intent);
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        int i2 = Build.VERSION.SDK_INT;
        this.f495b = i2 >= 28 ? new g() : i2 >= 26 ? new f() : i2 >= 23 ? new e() : i2 >= 21 ? new d() : new h();
        this.f495b.onCreate();
    }
}
