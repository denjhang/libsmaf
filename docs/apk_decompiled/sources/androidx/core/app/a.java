package androidx.core.app;

import android.app.Activity;
import android.content.Intent;
import android.os.Build;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a extends androidx.core.content.a {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static b f169c;

    /* JADX INFO: renamed from: androidx.core.app.a$a, reason: collision with other inner class name */
    public interface InterfaceC0008a {
    }

    public interface b {
        boolean a(Activity activity, int i, int i2, Intent intent);
    }

    public interface c {
    }

    public static b a() {
        return f169c;
    }

    public static void a(Activity activity) {
        if (Build.VERSION.SDK_INT >= 16) {
            activity.finishAffinity();
        } else {
            activity.finish();
        }
    }
}
