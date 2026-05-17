package jp.co.ymm.android.ringtone.receiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;
import java.util.HashMap;
import jp.co.ymm.android.ringtone.util.BookmarkAgent;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class MarketReferrerReceiver extends BroadcastReceiver {
    private HashMap<String, String> a(Intent intent) {
        HashMap<String, String> map = new HashMap<>();
        String stringExtra = intent.getStringExtra("referrer");
        if (!"com.android.vending.INSTALL_REFERRER".equals(intent.getAction()) || stringExtra == null) {
            g.a("No referrer");
            return map;
        }
        g.a("referrer: " + stringExtra);
        for (String str : stringExtra.split("&")) {
            String[] strArrSplit = str.split("=");
            if (strArrSplit.length == 2) {
                try {
                    map.put(strArrSplit[0], URLDecoder.decode(strArrSplit[1], HTTP.UTF_8));
                } catch (UnsupportedEncodingException unused) {
                    g.b("URLdecode error");
                    return map;
                }
            }
        }
        return map;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        g.a("onReceive referrer");
        HashMap<String, String> mapA = a(intent);
        if (!mapA.containsKey("yr_sitename") || !mapA.containsKey("yr_siteurl")) {
            g.a("No siteName or siteUrl");
            if (mapA.containsKey("utm_medium") && mapA.get("utm_medium").equalsIgnoreCase("mysound")) {
                z.b(context, o.Utm_Medium.name(), true);
                return;
            } else {
                z.b(context, o.Utm_Medium.name(), false);
                return;
            }
        }
        g.a("siteName: " + mapA.get("yr_sitename"));
        g.a("siteUrl: " + mapA.get("yr_siteurl"));
        g.a("returnUrl: " + mapA.get("yr_returnurl"));
        new BookmarkAgent(context).a(mapA.get("yr_sitename"), mapA.get("yr_siteurl"), mapA.get("yr_returnurl"));
        z.b(context, o.Utm_Medium.name(), false);
    }
}
