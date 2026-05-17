package jp.co.ymm.android.ringtone.net;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.net.a.b;
import jp.co.ymm.android.ringtone.net.a.d;
import jp.co.ymm.android.ringtone.net.a.g;
import jp.co.ymm.android.ringtone.net.a.i;
import jp.co.ymm.android.ringtone.util.m;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private c f3698a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Context f3699b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private c.a f3700c;

    public e(Context context) {
        this.f3699b = context.getApplicationContext();
    }

    private i a(String str, String str2, String str3, String str4) {
        i iVar = new i();
        i.a aVar = iVar.f3670a;
        aVar.f3672a = str;
        aVar.f3676e = str2;
        aVar.f3674c = str3;
        aVar.f3673b = str4;
        return iVar;
    }

    private void a(String str, String str2) {
        c.a aVar;
        this.f3700c = new c.a();
        if (TextUtils.isEmpty(str)) {
            this.f3700c.f3513a = this.f3699b.getString(2131493032);
        } else {
            this.f3700c.f3513a = str;
        }
        if (TextUtils.isEmpty(str2)) {
            aVar = this.f3700c;
            str2 = this.f3699b.getString(2131493032);
        } else {
            aVar = this.f3700c;
        }
        aVar.f3514b = str2;
    }

    public c.a a() {
        return this.f3700c;
    }

    public void a(String str, String str2, f fVar) {
        jp.co.ymm.android.ringtone.net.a.g gVar = new jp.co.ymm.android.ringtone.net.a.g();
        g.a aVar = gVar.f3658a;
        aVar.f3662a = str;
        aVar.f3663b = str2;
        jp.co.ymm.android.ringtone.util.g.a("bodyUrl: http://dl.rights-guard.com/ymmringtone/dl/body");
        this.f3698a = new c();
        this.f3698a.a(new b("http://dl.rights-guard.com/ymmringtone/dl/body", gVar, fVar));
    }

    public void a(String str, f fVar) {
        jp.co.ymm.android.ringtone.net.a.h hVar = new jp.co.ymm.android.ringtone.net.a.h();
        hVar.f3666a.f3668a = str;
        jp.co.ymm.android.ringtone.util.g.a("roCompUrl: https://api.rights-guard.com/ymmringtone/api/android/ro_complete");
        this.f3698a = new c();
        this.f3698a.a(new b("https://api.rights-guard.com/ymmringtone/api/android/ro_complete", hVar, fVar));
    }

    public boolean a(Uri uri, f fVar) {
        String queryParameter = uri.getQueryParameter("vid");
        String strH = m.c().h();
        if (TextUtils.isEmpty(strH)) {
            strH = m.d().h();
        }
        if (TextUtils.isEmpty(queryParameter) || TextUtils.isEmpty(strH)) {
            return false;
        }
        jp.co.ymm.android.ringtone.net.a.b bVar = new jp.co.ymm.android.ringtone.net.a.b();
        b.a aVar = bVar.f3633a;
        aVar.f3635a = queryParameter;
        aVar.f3636b = strH;
        jp.co.ymm.android.ringtone.util.g.a("deviceURl: https://api.rights-guard.com/ymmringtone/api/android/device_info");
        this.f3698a = new c();
        this.f3698a.a(new b("https://api.rights-guard.com/ymmringtone/api/android/device_info", bVar, fVar));
        return true;
    }

    public boolean b(Uri uri, f fVar) {
        String queryParameter = uri.getQueryParameter("session_id");
        if (TextUtils.isEmpty(queryParameter)) {
            return false;
        }
        jp.co.ymm.android.ringtone.net.a.d dVar = new jp.co.ymm.android.ringtone.net.a.d();
        d.a aVar = dVar.f3640a;
        aVar.f3646c = queryParameter;
        aVar.f3645b = z.a();
        this.f3698a = new c();
        this.f3698a.a(new d(dVar, fVar));
        return true;
    }

    public boolean c(Uri uri, f fVar) {
        String queryParameter = uri.getQueryParameter("aid");
        String queryParameter2 = uri.getQueryParameter("cntcode");
        String queryParameter3 = uri.getQueryParameter("sngname");
        String queryParameter4 = uri.getQueryParameter("artname");
        m mVarC = m.c();
        String strA = mVarC.a();
        String strH = mVarC.h();
        if (TextUtils.isEmpty(strH)) {
            strH = m.d().h();
        }
        if (TextUtils.isEmpty(queryParameter) || TextUtils.isEmpty(queryParameter2) || TextUtils.isEmpty(strH) || TextUtils.isEmpty(strA)) {
            return false;
        }
        a(queryParameter3, queryParameter4);
        i iVarA = a(strH, strA, queryParameter2, queryParameter);
        jp.co.ymm.android.ringtone.util.g.a("RoUrl: https://api.rights-guard.com/ymmringtone/api/android/ro");
        this.f3698a = new c();
        this.f3698a.a(new b("https://api.rights-guard.com/ymmringtone/api/android/ro", iVarA, fVar));
        return true;
    }
}
