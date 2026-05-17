package jp.co.ymm.android.ringtone.net;

import e.E;
import e.H;
import e.K;
import org.json.JSONObject;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class d extends b {
    public d(jp.co.ymm.android.ringtone.net.a.d dVar, f fVar) {
        super("", dVar, fVar);
    }

    private boolean a(String str) {
        H.a aVarB = b();
        aVarB.b("https://sdl.mysound.jp/download.aspx/key/" + str);
        aVarB.b();
        try {
            K kExecute = new E.a().a().a(aVarB.a()).execute();
            if (kExecute.c() == 200) {
                if (this.f3693b.a(kExecute.a().a(), this.f3694c, kExecute.a().b())) {
                    return true;
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    private boolean e() {
        String strA = this.f3693b.a("1");
        H.a aVarB = b();
        aVarB.b(strA);
        aVarB.b();
        try {
            K kExecute = new E.a().a().a(aVarB.a()).execute();
            if (kExecute.c() == 200) {
                JSONObject jSONObject = new JSONObject(kExecute.a().e());
                jp.co.ymm.android.ringtone.net.a.d dVar = (jp.co.ymm.android.ringtone.net.a.d) this.f3693b;
                dVar.f3641b.f3649c = jSONObject.optString("cid");
                dVar.f3641b.f3650d = jSONObject.optString("aName");
                dVar.f3641b.f3651e = jSONObject.optString("sName");
                String strOptString = jSONObject.optString("mime");
                dVar.f3641b.f3652f = strOptString.substring(strOptString.lastIndexOf("/") + 1).toUpperCase();
                return true;
            }
        } catch (Exception unused) {
        }
        return false;
    }

    private String f() {
        String strA = this.f3693b.a("4");
        H.a aVarB = b();
        aVarB.b(strA);
        aVarB.b();
        try {
            K kExecute = new E.a().a().a(aVarB.a()).execute();
            if (kExecute.c() == 200) {
                return new JSONObject(kExecute.a().e()).optString("one_time_key");
            }
        } catch (Exception unused) {
        }
        return null;
    }

    @Override // jp.co.ymm.android.ringtone.net.b, java.lang.Runnable
    public void run() {
        String strF;
        if (!e() || (strF = f()) == null || strF.isEmpty() || !a(strF)) {
            c();
        } else {
            d();
        }
    }
}
