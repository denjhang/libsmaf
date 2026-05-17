package jp.co.ymm.android.ringtone.ui.activity.a;

import android.app.Activity;
import android.os.Bundle;
import com.google.firebase.analytics.FirebaseAnalytics;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private FirebaseAnalytics f3779a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final boolean f3780b = false;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Activity f3781c;

    public a(Activity activity) {
        g.a("--------TrackerManager Constructor--------");
        this.f3779a = FirebaseAnalytics.getInstance(activity);
        this.f3781c = activity;
    }

    public static String a(c cVar) {
        String str;
        if (cVar != null) {
            str = cVar.getAttributes().f3513a + "___" + cVar.getAttributes().f3514b + "___" + cVar.getAttributes().f3516d;
        } else {
            str = "";
        }
        g.a("RingtoneInfo : " + str);
        return str;
    }

    public void a() {
        g.a("--------TrackerManager onDestory--------");
    }

    public void a(String str, String str2, String str3, String str4) {
        g.a("--------TrackerManager trackEvent--------");
        if (this.f3779a != null) {
            Bundle bundle = new Bundle();
            bundle.putString("category", str);
            bundle.putString("action", str2);
            bundle.putString("label", str3);
            bundle.putString("screen", str4);
            this.f3779a.a("GAEvent", bundle);
        }
    }

    public void b() {
        g.a("--------TrackerManager onStart--------");
    }

    public void c() {
        g.a("--------TrackerManager onStop--------");
    }
}
