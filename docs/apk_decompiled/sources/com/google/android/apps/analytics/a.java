package com.google.android.apps.analytics;

import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {
    public static String a(String str) {
        return a(str, HTTP.UTF_8);
    }

    static String a(String str, String str2) {
        try {
            return URLEncoder.encode(str, str2).replace("+", "%20");
        } catch (UnsupportedEncodingException unused) {
            throw new AssertionError("URL encoding failed for: " + str);
        }
    }
}
