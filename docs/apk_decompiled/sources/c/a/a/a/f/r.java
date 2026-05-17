package c.a.a.a.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class r implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ g f877a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ q f878b;

    r(q qVar, g gVar) {
        this.f878b = qVar;
        this.f877a = gVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.f878b.f875b) {
            if (this.f878b.f876c != null) {
                this.f878b.f876c.a(this.f877a.a());
            }
        }
    }
}
