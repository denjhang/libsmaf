package com.google.android.apps.analytics;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class m {
    static Map<String, String> a(String str) {
        HashMap map = new HashMap();
        for (String str2 : str.split("&")) {
            String[] strArrSplit = str2.split("=");
            if (strArrSplit.length > 1) {
                map.put(strArrSplit[0], strArrSplit[1]);
            } else if (strArrSplit.length == 1) {
                map.put(strArrSplit[0], null);
            }
        }
        return map;
    }
}
