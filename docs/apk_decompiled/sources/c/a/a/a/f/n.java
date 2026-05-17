package c.a.a.a.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class n implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ g f868a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ m f869b;

    n(m mVar, g gVar) {
        this.f869b = mVar;
        this.f868a = gVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            g gVar = (g) this.f869b.f866b.a(this.f868a);
            if (gVar == null) {
                this.f869b.a((Exception) new NullPointerException("Continuation returned null"));
                return;
            }
            gVar.a(i.f857b, (d) this.f869b);
            gVar.a(i.f857b, (c) this.f869b);
            gVar.a(i.f857b, (b) this.f869b);
        } catch (e e2) {
            if (e2.getCause() instanceof Exception) {
                this.f869b.f867c.a((Exception) e2.getCause());
            } else {
                this.f869b.f867c.a((Exception) e2);
            }
        } catch (Exception e3) {
            this.f869b.f867c.a(e3);
        }
    }
}
