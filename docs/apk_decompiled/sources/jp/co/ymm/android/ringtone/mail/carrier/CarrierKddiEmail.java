package jp.co.ymm.android.ringtone.mail.carrier;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.Context;
import android.database.ContentObserver;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.l;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class CarrierKddiEmail {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f3610a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static int f3611b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static int f3612c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static int f3613d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static ContentObserver f3614e;

    public static class CarrierKddiEmailProvider extends ContentProvider {
        @Override // android.content.ContentProvider
        public int delete(Uri uri, String str, String[] strArr) {
            return 0;
        }

        @Override // android.content.ContentProvider
        public String getType(Uri uri) {
            return null;
        }

        @Override // android.content.ContentProvider
        public Uri insert(Uri uri, ContentValues contentValues) {
            return null;
        }

        @Override // android.content.ContentProvider
        public boolean onCreate() {
            return false;
        }

        @Override // android.content.ContentProvider
        public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
            return null;
        }

        @Override // android.content.ContentProvider
        public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
            return 0;
        }
    }

    public static void a(Context context) {
        if (l.f(context).equals(o.U) && z.a(context, 2131493040)) {
            c(context.getApplicationContext());
        }
    }

    public static void b(Context context) {
        if (f3614e != null) {
            context.getContentResolver().unregisterContentObserver(f3614e);
        }
    }

    private static void c(Context context) {
        if (n.a(context, "android.permission.WRITE_EXTERNAL_STORAGE")) {
            f3614e = new a(new Handler(), context);
            if (Build.VERSION.SDK_INT < 26) {
                context.getContentResolver().registerContentObserver(Uri.parse("content://com.kddi.android.email.maildb.provider"), true, f3614e);
                g.a("registerContentObserver()");
            }
        }
    }
}
