package jp.co.acrodea.runtime.drm;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private byte[] f3396a = null;

    public synchronized boolean a(String str) {
        this.f3396a = null;
        if (str != null && str.length() != 0) {
            this.f3396a = b.a(str);
            return this.f3396a != null;
        }
        return false;
    }

    public synchronized byte[] a() {
        return this.f3396a;
    }
}
