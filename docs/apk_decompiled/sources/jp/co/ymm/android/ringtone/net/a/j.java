package jp.co.ymm.android.ringtone.net.a;

import e.J;
import e.x;
import java.io.InputStream;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class j extends jp.co.ymm.android.ringtone.net.a.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public b f3679a = new b();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public c f3680b = new c();

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f3681a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f3682b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public String f3683c;

        public a() {
        }
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3685a = null;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f3686b = null;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public String f3687c = null;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public String f3688d = null;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        public int f3689e = 1;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        public String f3690f = null;
        public int g = 0;
        public String h = null;
        public int i = 0;
        public String j = null;
        public long k = 0;
        public long l = 0;
        public int m = 0;
        public int n = 0;
        public int o = 0;
        public int p = 0;
        public int q = 0;
        public int r = 0;
        public int s = 0;
        public String t = null;
        public String u = null;
    }

    public static class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public ArrayList<a> f3691a;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public J a() {
        x.a aVar = new x.a();
        aVar.a("act", this.f3679a.f3685a);
        aVar.a("site", this.f3679a.f3686b);
        aVar.a("apikey", this.f3679a.f3687c);
        aVar.a("sid", this.f3679a.f3688d);
        aVar.a("stype", Integer.toString(this.f3679a.f3689e));
        aVar.a("ma", this.f3679a.h);
        aVar.a("osv", this.f3679a.f3690f);
        aVar.a("appv", Integer.toString(this.f3679a.g));
        aVar.a("cid", Integer.toString(this.f3679a.i));
        aVar.a("sp", this.f3679a.j);
        aVar.a("ss", Long.toString(this.f3679a.k));
        aVar.a("sf", Long.toString(this.f3679a.l));
        aVar.a("ifm", Integer.toString(this.f3679a.m));
        aVar.a("yf", Integer.toString(this.f3679a.n));
        aVar.a("tv", Integer.toString(this.f3679a.o));
        aVar.a("mv", Integer.toString(this.f3679a.p));
        aVar.a("av", Integer.toString(this.f3679a.q));
        aVar.a("ias", Integer.toString(this.f3679a.r));
        aVar.a("ie", Integer.toString(this.f3679a.s));
        aVar.a("ai", this.f3679a.t);
        aVar.a("au", this.f3679a.u);
        return aVar.a();
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public String a(String str) {
        return null;
    }

    public ArrayList<a> a(JSONArray jSONArray) throws JSONException {
        ArrayList<a> arrayList = new ArrayList<>();
        for (int i = 0; i < jSONArray.length(); i++) {
            a aVar = new a();
            JSONObject jSONObject = jSONArray.getJSONObject(i);
            aVar.f3681a = jSONObject.optInt("code");
            aVar.f3682b = jSONObject.optString("message");
            aVar.f3683c = jSONObject.optString("detail");
            arrayList.add(aVar);
        }
        return arrayList;
    }

    public JSONArray a(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        String string = jSONObject.toString();
        if (string.indexOf("[") == 0) {
            return new JSONArray(string);
        }
        return new JSONArray("[" + string + "]");
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean a(InputStream inputStream, jp.co.ymm.android.ringtone.net.f fVar, long j) {
        return false;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean b(String str) {
        return false;
    }
}
