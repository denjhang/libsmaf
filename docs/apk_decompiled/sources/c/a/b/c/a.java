package c.a.b.c;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import c.a.b.a.c;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f903a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final SharedPreferences f904b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final c f905c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final AtomicBoolean f906d = new AtomicBoolean(b());

    public a(Context context, String str, c cVar) {
        this.f903a = a(context);
        this.f904b = context.getSharedPreferences("com.google.firebase.common.prefs:" + str, 0);
        this.f905c = cVar;
    }

    private static Context a(Context context) {
        return (Build.VERSION.SDK_INT < 24 || androidx.core.content.a.d(context)) ? context : androidx.core.content.a.a(context);
    }

    private boolean b() {
        ApplicationInfo applicationInfo;
        if (this.f904b.contains("firebase_data_collection_default_enabled")) {
            return this.f904b.getBoolean("firebase_data_collection_default_enabled", true);
        }
        try {
            PackageManager packageManager = this.f903a.getPackageManager();
            if (packageManager != null && (applicationInfo = packageManager.getApplicationInfo(this.f903a.getPackageName(), 128)) != null && applicationInfo.metaData != null && applicationInfo.metaData.containsKey("firebase_data_collection_default_enabled")) {
                return applicationInfo.metaData.getBoolean("firebase_data_collection_default_enabled");
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return true;
    }

    public boolean a() {
        return this.f906d.get();
    }
}
