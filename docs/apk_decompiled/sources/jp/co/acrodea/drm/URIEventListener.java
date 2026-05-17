package jp.co.acrodea.drm;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface URIEventListener {
    void onError(String str);

    void onReady(String str);

    void onShutdowned();

    void onSuspended();
}
