package android.support.v4.media.session;

import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.os.RemoteException;
import android.os.ResultReceiver;
import android.support.v4.media.MediaMetadataCompat;
import android.support.v4.media.session.MediaSessionCompat;
import android.support.v4.media.session.a;
import android.support.v4.media.session.b;
import android.support.v4.media.session.c;
import android.util.Log;
import android.view.KeyEvent;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class MediaControllerCompat {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final b f68a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final MediaSessionCompat.Token f69b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final HashSet<a> f70c = new HashSet<>();

    static class MediaControllerImplApi21 implements b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected final Object f71a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final Object f72b = new Object();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final List<a> f73c = new ArrayList();

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private HashMap<a, a> f74d = new HashMap<>();

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        final MediaSessionCompat.Token f75e;

        private static class ExtraBinderRequestResultReceiver extends ResultReceiver {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private WeakReference<MediaControllerImplApi21> f76a;

            ExtraBinderRequestResultReceiver(MediaControllerImplApi21 mediaControllerImplApi21) {
                super(null);
                this.f76a = new WeakReference<>(mediaControllerImplApi21);
            }

            @Override // android.os.ResultReceiver
            protected void onReceiveResult(int i, Bundle bundle) {
                MediaControllerImplApi21 mediaControllerImplApi21 = this.f76a.get();
                if (mediaControllerImplApi21 == null || bundle == null) {
                    return;
                }
                synchronized (mediaControllerImplApi21.f72b) {
                    mediaControllerImplApi21.f75e.a(b.a.a(androidx.core.app.c.a(bundle, "android.support.v4.media.session.EXTRA_BINDER")));
                    mediaControllerImplApi21.f75e.a(bundle.getBundle("android.support.v4.media.session.SESSION_TOKEN2_BUNDLE"));
                    mediaControllerImplApi21.a();
                }
            }
        }

        private static class a extends a.c {
            a(a aVar) {
                super(aVar);
            }

            @Override // android.support.v4.media.session.MediaControllerCompat.a.c, android.support.v4.media.session.a
            public void a(Bundle bundle) {
                throw new AssertionError();
            }

            @Override // android.support.v4.media.session.MediaControllerCompat.a.c, android.support.v4.media.session.a
            public void a(MediaMetadataCompat mediaMetadataCompat) {
                throw new AssertionError();
            }

            @Override // android.support.v4.media.session.MediaControllerCompat.a.c, android.support.v4.media.session.a
            public void a(ParcelableVolumeInfo parcelableVolumeInfo) {
                throw new AssertionError();
            }

            @Override // android.support.v4.media.session.MediaControllerCompat.a.c, android.support.v4.media.session.a
            public void a(CharSequence charSequence) {
                throw new AssertionError();
            }

            @Override // android.support.v4.media.session.MediaControllerCompat.a.c, android.support.v4.media.session.a
            public void a(List<MediaSessionCompat.QueueItem> list) {
                throw new AssertionError();
            }

            @Override // android.support.v4.media.session.MediaControllerCompat.a.c, android.support.v4.media.session.a
            public void b() {
                throw new AssertionError();
            }
        }

        public MediaControllerImplApi21(Context context, MediaSessionCompat.Token token) throws RemoteException {
            this.f75e = token;
            this.f71a = android.support.v4.media.session.c.a(context, this.f75e.b());
            if (this.f71a == null) {
                throw new RemoteException();
            }
            if (this.f75e.a() == null) {
                b();
            }
        }

        private void b() {
            a("android.support.v4.media.session.command.GET_EXTRA_BINDER", null, new ExtraBinderRequestResultReceiver(this));
        }

        void a() {
            if (this.f75e.a() == null) {
                return;
            }
            for (a aVar : this.f73c) {
                a aVar2 = new a(aVar);
                this.f74d.put(aVar, aVar2);
                aVar.f79c = aVar2;
                try {
                    this.f75e.a().a(aVar2);
                    aVar.a(13, null, null);
                } catch (RemoteException e2) {
                    Log.e("MediaControllerCompat", "Dead object in registerCallback.", e2);
                }
            }
            this.f73c.clear();
        }

        public void a(String str, Bundle bundle, ResultReceiver resultReceiver) {
            android.support.v4.media.session.c.a(this.f71a, str, bundle, resultReceiver);
        }

        @Override // android.support.v4.media.session.MediaControllerCompat.b
        public boolean a(KeyEvent keyEvent) {
            return android.support.v4.media.session.c.a(this.f71a, keyEvent);
        }
    }

    public static abstract class a implements IBinder.DeathRecipient {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Object f77a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        HandlerC0002a f78b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        android.support.v4.media.session.a f79c;

        /* JADX INFO: renamed from: android.support.v4.media.session.MediaControllerCompat$a$a, reason: collision with other inner class name */
        private class HandlerC0002a extends Handler {
        }

        private static class b implements c.a {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final WeakReference<a> f80a;

            b(a aVar) {
                this.f80a = new WeakReference<>(aVar);
            }

            @Override // android.support.v4.media.session.c.a
            public void a(int i, int i2, int i3, int i4, int i5) {
                a aVar = this.f80a.get();
                if (aVar != null) {
                    aVar.a(new f(i, i2, i3, i4, i5));
                }
            }

            @Override // android.support.v4.media.session.c.a
            public void a(Bundle bundle) {
                a aVar = this.f80a.get();
                if (aVar != null) {
                    aVar.a(bundle);
                }
            }

            @Override // android.support.v4.media.session.c.a
            public void a(CharSequence charSequence) {
                a aVar = this.f80a.get();
                if (aVar != null) {
                    aVar.a(charSequence);
                }
            }

            @Override // android.support.v4.media.session.c.a
            public void a(Object obj) {
                a aVar = this.f80a.get();
                if (aVar != null) {
                    aVar.a(MediaMetadataCompat.a(obj));
                }
            }

            @Override // android.support.v4.media.session.c.a
            public void a(String str, Bundle bundle) {
                a aVar = this.f80a.get();
                if (aVar != null) {
                    if (aVar.f79c == null || Build.VERSION.SDK_INT >= 23) {
                        aVar.a(str, bundle);
                    }
                }
            }

            @Override // android.support.v4.media.session.c.a
            public void a(List<?> list) {
                a aVar = this.f80a.get();
                if (aVar != null) {
                    aVar.a(MediaSessionCompat.QueueItem.a(list));
                }
            }

            @Override // android.support.v4.media.session.c.a
            public void b() {
                a aVar = this.f80a.get();
                if (aVar != null) {
                    aVar.a();
                }
            }

            @Override // android.support.v4.media.session.c.a
            public void b(Object obj) {
                a aVar = this.f80a.get();
                if (aVar == null || aVar.f79c != null) {
                    return;
                }
                aVar.a(PlaybackStateCompat.a(obj));
            }
        }

        private static class c extends a.AbstractBinderC0003a {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final WeakReference<a> f81a;

            c(a aVar) {
                this.f81a = new WeakReference<>(aVar);
            }

            @Override // android.support.v4.media.session.a
            public void a(int i) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(9, Integer.valueOf(i), null);
                }
            }

            public void a(Bundle bundle) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(7, bundle, null);
                }
            }

            public void a(MediaMetadataCompat mediaMetadataCompat) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(3, mediaMetadataCompat, null);
                }
            }

            public void a(ParcelableVolumeInfo parcelableVolumeInfo) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(4, parcelableVolumeInfo != null ? new f(parcelableVolumeInfo.f95a, parcelableVolumeInfo.f96b, parcelableVolumeInfo.f97c, parcelableVolumeInfo.f98d, parcelableVolumeInfo.f99e) : null, null);
                }
            }

            @Override // android.support.v4.media.session.a
            public void a(PlaybackStateCompat playbackStateCompat) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(2, playbackStateCompat, null);
                }
            }

            public void a(CharSequence charSequence) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(6, charSequence, null);
                }
            }

            @Override // android.support.v4.media.session.a
            public void a(String str, Bundle bundle) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(1, str, bundle);
                }
            }

            public void a(List<MediaSessionCompat.QueueItem> list) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(5, list, null);
                }
            }

            public void b() {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(8, null, null);
                }
            }

            @Override // android.support.v4.media.session.a
            public void b(int i) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(12, Integer.valueOf(i), null);
                }
            }

            @Override // android.support.v4.media.session.a
            public void b(boolean z) {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(11, Boolean.valueOf(z), null);
                }
            }

            @Override // android.support.v4.media.session.a
            public void c() {
                a aVar = this.f81a.get();
                if (aVar != null) {
                    aVar.a(13, null, null);
                }
            }

            @Override // android.support.v4.media.session.a
            public void c(boolean z) {
            }
        }

        public a() {
            Object objA;
            if (Build.VERSION.SDK_INT >= 21) {
                objA = android.support.v4.media.session.c.a(new b(this));
            } else {
                c cVar = new c(this);
                this.f79c = cVar;
                objA = cVar;
            }
            this.f77a = objA;
        }

        public void a() {
        }

        void a(int i, Object obj, Bundle bundle) {
            HandlerC0002a handlerC0002a = this.f78b;
            if (handlerC0002a != null) {
                Message messageObtainMessage = handlerC0002a.obtainMessage(i, obj);
                messageObtainMessage.setData(bundle);
                messageObtainMessage.sendToTarget();
            }
        }

        public void a(Bundle bundle) {
        }

        public void a(MediaMetadataCompat mediaMetadataCompat) {
        }

        public void a(f fVar) {
        }

        public void a(PlaybackStateCompat playbackStateCompat) {
        }

        public void a(CharSequence charSequence) {
        }

        public void a(String str, Bundle bundle) {
        }

        public void a(List<MediaSessionCompat.QueueItem> list) {
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            a(8, null, null);
        }
    }

    interface b {
        boolean a(KeyEvent keyEvent);
    }

    static class c extends MediaControllerImplApi21 {
        public c(Context context, MediaSessionCompat.Token token) {
            super(context, token);
        }
    }

    static class d extends c {
        public d(Context context, MediaSessionCompat.Token token) {
            super(context, token);
        }
    }

    static class e implements b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private android.support.v4.media.session.b f82a;

        public e(MediaSessionCompat.Token token) {
            this.f82a = b.a.a((IBinder) token.b());
        }

        @Override // android.support.v4.media.session.MediaControllerCompat.b
        public boolean a(KeyEvent keyEvent) {
            if (keyEvent == null) {
                throw new IllegalArgumentException("event may not be null.");
            }
            try {
                this.f82a.a(keyEvent);
                return false;
            } catch (RemoteException e2) {
                Log.e("MediaControllerCompat", "Dead object in dispatchMediaButtonEvent.", e2);
                return false;
            }
        }
    }

    public static final class f {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f83a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final int f84b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final int f85c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final int f86d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final int f87e;

        f(int i, int i2, int i3, int i4, int i5) {
            this.f83a = i;
            this.f84b = i2;
            this.f85c = i3;
            this.f86d = i4;
            this.f87e = i5;
        }
    }

    public MediaControllerCompat(Context context, MediaSessionCompat.Token token) {
        b mediaControllerImplApi21;
        if (token == null) {
            throw new IllegalArgumentException("sessionToken must not be null");
        }
        this.f69b = token;
        int i = Build.VERSION.SDK_INT;
        if (i >= 24) {
            mediaControllerImplApi21 = new d(context, token);
        } else if (i >= 23) {
            mediaControllerImplApi21 = new c(context, token);
        } else {
            if (i < 21) {
                this.f68a = new e(token);
                return;
            }
            mediaControllerImplApi21 = new MediaControllerImplApi21(context, token);
        }
        this.f68a = mediaControllerImplApi21;
    }

    public boolean a(KeyEvent keyEvent) {
        if (keyEvent != null) {
            return this.f68a.a(keyEvent);
        }
        throw new IllegalArgumentException("KeyEvent may not be null");
    }
}
