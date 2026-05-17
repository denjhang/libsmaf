package jp.co.acrodea.runtime.drm;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class o extends Exception {
    private static final long serialVersionUID = 1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected int f3423a;

    public o() {
        this.f3423a = -1;
    }

    public o(String str, int i) {
        super(str);
        this.f3423a = i;
    }

    public int a() {
        return this.f3423a;
    }
}
