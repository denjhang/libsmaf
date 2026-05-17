package jp.co.ymm.android.ringtone.b;

import android.content.Context;
import java.io.File;
import java.util.Iterator;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class d implements Iterable<c> {
    public static d a() {
        return z.b((Boolean) false);
    }

    public static void a(Context context) {
        z.b(context);
    }

    public static void a(Boolean bool) {
        z.a(bool);
    }

    public static void a(e eVar) {
        z.c(eVar);
    }

    public static File b() {
        return z.b();
    }

    public static c b(String str) {
        return z.d(str);
    }

    public static void b(e eVar) {
        z.d(eVar);
    }

    public abstract String a(String str, byte[] bArr);

    public abstract String a(String str, byte[] bArr, String str2, String str3);

    public abstract c a(String str);

    public abstract boolean c();

    public abstract boolean c(String str);

    @Override // java.lang.Iterable
    public abstract Iterator<c> iterator();
}
