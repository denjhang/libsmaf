package jp.co.ymm.android.ringtone.util;

import android.webkit.JavascriptInterface;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class RingtoneSiteJs {
    public static final String RINGTONE_SITE_JS_NAME = "ymmringtoneapp";
    private final a mListener;

    public interface a {
        void a(String[] strArr, String[] strArr2, String[] strArr3, String str, String str2);
    }

    public RingtoneSiteJs(a aVar) {
        this.mListener = aVar;
    }

    @JavascriptInterface
    public void regSupportDeviceInfo(String[] strArr, String str, String str2) {
        regSupportDeviceInfo(strArr, new String[]{""}, new String[]{""}, str, str2);
    }

    public void regSupportDeviceInfo(String[] strArr, String[] strArr2, String[] strArr3, String str, String str2) {
        this.mListener.a(strArr, strArr2, strArr3, str, str2);
    }
}
