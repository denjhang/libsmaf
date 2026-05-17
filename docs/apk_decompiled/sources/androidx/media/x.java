package androidx.media;

import android.content.Context;
import android.media.browse.MediaBrowser;
import android.os.Bundle;
import android.os.Parcel;
import android.service.media.MediaBrowserService;
import android.support.v4.media.session.MediaSessionCompat;
import android.util.Log;
import androidx.media.w;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static Field f584a;

    static class a extends w.a {
        a(Context context, c cVar) {
            super(context, cVar);
        }

        @Override // android.service.media.MediaBrowserService
        public void onLoadChildren(String str, MediaBrowserService.Result<List<MediaBrowser.MediaItem>> result, Bundle bundle) {
            MediaSessionCompat.a(bundle);
            ((c) this.f582a).a(str, new b(result), bundle);
        }
    }

    static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        MediaBrowserService.Result f585a;

        b(MediaBrowserService.Result result) {
            this.f585a = result;
        }

        List<MediaBrowser.MediaItem> a(List<Parcel> list) {
            if (list == null) {
                return null;
            }
            ArrayList arrayList = new ArrayList();
            for (Parcel parcel : list) {
                parcel.setDataPosition(0);
                arrayList.add(MediaBrowser.MediaItem.CREATOR.createFromParcel(parcel));
                parcel.recycle();
            }
            return arrayList;
        }

        public void a(List<Parcel> list, int i) {
            try {
                x.f584a.setInt(this.f585a, i);
            } catch (IllegalAccessException e2) {
                Log.w("MBSCompatApi26", e2);
            }
            this.f585a.sendResult(a(list));
        }
    }

    public interface c extends w.b {
        void a(String str, b bVar, Bundle bundle);
    }

    static {
        try {
            f584a = MediaBrowserService.Result.class.getDeclaredField("mFlags");
            f584a.setAccessible(true);
        } catch (NoSuchFieldException e2) {
            Log.w("MBSCompatApi26", e2);
        }
    }

    public static Object a(Context context, c cVar) {
        return new a(context, cVar);
    }
}
