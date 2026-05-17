package c.a.a.a.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class l implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ g f863a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ k f864b;

    l(k kVar, g gVar) {
        this.f864b = kVar;
        this.f863a = gVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.f863a.c()) {
            this.f864b.f862c.f();
            return;
        }
        try {
            this.f864b.f862c.a(this.f864b.f861b.a(this.f863a));
        } catch (e e2) {
            if (e2.getCause() instanceof Exception) {
                this.f864b.f862c.a((Exception) e2.getCause());
            } else {
                this.f864b.f862c.a((Exception) e2);
            }
        } catch (Exception e3) {
            this.f864b.f862c.a(e3);
        }
    }
}
