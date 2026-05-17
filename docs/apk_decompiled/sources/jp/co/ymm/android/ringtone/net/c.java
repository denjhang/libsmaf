package jp.co.ymm.android.ringtone.net;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f3696a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Thread f3697b;

    public void a(b bVar) {
        this.f3696a = bVar;
        this.f3697b = new Thread(bVar);
        this.f3697b.start();
    }
}
