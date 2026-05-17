package c.a.a.a.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class t implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ g f882a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ s f883b;

    t(s sVar, g gVar) {
        this.f883b = sVar;
        this.f882a = gVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f883b.f880b) {
            if (this.f883b.f881c != null) {
                this.f883b.f881c.a(this.f882a.b());
            }
        }
    }
}
