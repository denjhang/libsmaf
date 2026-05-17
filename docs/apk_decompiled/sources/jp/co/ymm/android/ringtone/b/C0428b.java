package jp.co.ymm.android.ringtone.b;

import android.content.Context;
import android.content.IntentFilter;
import android.os.Environment;
import java.io.File;

/* JADX INFO: renamed from: jp.co.ymm.android.ringtone.b.b, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class C0428b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static EnumC0033b f3506a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static a f3507b;

    /* JADX INFO: renamed from: jp.co.ymm.android.ringtone.b.b$a */
    static abstract class a {
        a() {
        }

        abstract void a(EnumC0033b enumC0033b);
    }

    /* JADX INFO: renamed from: jp.co.ymm.android.ringtone.b.b$b, reason: collision with other inner class name */
    enum EnumC0033b {
        UNUSABLE,
        READABLE,
        WRITABLE
    }

    static void a(Context context, File file, a aVar) {
        jp.co.ymm.android.ringtone.util.g.c("c=" + context + ", watchPoint=" + file + ", o=" + aVar);
        f3507b = aVar;
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.MEDIA_MOUNTED");
        intentFilter.addAction("android.intent.action.MEDIA_EJECT");
        intentFilter.addAction("android.intent.action.MEDIA_UNMOUNTED");
        intentFilter.addAction("android.intent.action.MEDIA_REMOVED");
        intentFilter.addAction("android.intent.action.MEDIA_UNMOUNTABLE");
        intentFilter.addAction("android.intent.action.MEDIA_NOFS");
        intentFilter.addDataScheme("file");
        intentFilter.addDataAuthority("*", null);
        intentFilter.addDataPath(file.getPath(), 0);
        context.registerReceiver(new C0427a(), intentFilter);
        jp.co.ymm.android.ringtone.util.g.a();
    }

    static EnumC0033b b() {
        if (f3506a == null) {
            f3506a = e();
            jp.co.ymm.android.ringtone.util.g.d("State: " + f3506a);
        }
        jp.co.ymm.android.ringtone.util.g.a(f3506a != null);
        return f3506a;
    }

    static boolean c() {
        return b() != EnumC0033b.UNUSABLE;
    }

    static boolean d() {
        return b() == EnumC0033b.WRITABLE;
    }

    private static EnumC0033b e() {
        String externalStorageState = Environment.getExternalStorageState();
        jp.co.ymm.android.ringtone.util.g.a("now=\"" + externalStorageState + "\"");
        return externalStorageState.equals("mounted") ? EnumC0033b.WRITABLE : externalStorageState.equals("mounted_ro") ? EnumC0033b.READABLE : EnumC0033b.UNUSABLE;
    }
}
