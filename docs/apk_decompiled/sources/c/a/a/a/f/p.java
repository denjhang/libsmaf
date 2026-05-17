package c.a.a.a.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class p implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ o f873a;

    p(o oVar) {
        this.f873a = oVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f873a.f871b) {
            if (this.f873a.f872c != null) {
                this.f873a.f872c.a();
            }
        }
    }
}
