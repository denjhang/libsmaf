package jp.co.ymm.android.ringtone.net;

import e.K;
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import jp.co.ymm.android.ringtone.net.a.j;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class g extends b {
    public g(String str, jp.co.ymm.android.ringtone.net.a.a aVar, f fVar) {
        super(str, aVar, fVar);
    }

    @Override // jp.co.ymm.android.ringtone.net.b
    protected boolean a(K k) {
        if (k == null || this.f3693b == null) {
            return false;
        }
        try {
            InputStream inputStreamA = k.a().a();
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStreamA));
            StringBuilder sb = new StringBuilder();
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                sb.append(line);
            }
            String string = sb.toString();
            inputStreamA.close();
            JSONObject jSONObject = new JSONObject(string);
            j jVar = (j) this.f3693b;
            JSONArray jSONArrayA = jVar.a(jSONObject.optJSONObject("status"));
            if (jSONArrayA == null) {
                return false;
            }
            jVar.f3680b.f3691a = jVar.a(jSONArrayA);
            return true;
        } catch (Exception e2) {
            e2.printStackTrace();
            return false;
        }
    }
}
