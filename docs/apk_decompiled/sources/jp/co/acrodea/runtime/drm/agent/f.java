package jp.co.acrodea.runtime.drm.agent;

import android.content.Context;
import android.telephony.TelephonyManager;
import java.io.File;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f3341a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private TelephonyManager f3342b = null;

    public f(Context context) {
        this.f3341a = context;
    }

    private void c() {
        if (this.f3342b == null) {
            this.f3342b = (TelephonyManager) this.f3341a.getSystemService("phone");
        }
    }

    public File a(String str) {
        return this.f3341a.getDir(str, 0);
    }

    public String a() {
        c();
        return this.f3342b.getSubscriberId();
    }

    public InputStream b(String str) {
        return this.f3341a.getAssets().open(str);
    }

    public String b() {
        c();
        return this.f3342b.getDeviceId();
    }
}
