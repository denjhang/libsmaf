package e;

/* JADX INFO: renamed from: e.l, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class RunnableC0419l implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ C0420m f3181a;

    RunnableC0419l(C0420m c0420m) {
        this.f3181a = c0420m;
    }

    @Override // java.lang.Runnable
    public void run() {
        while (true) {
            long jA = this.f3181a.a(System.nanoTime());
            if (jA == -1) {
                return;
            }
            if (jA > 0) {
                long j = jA / 1000000;
                long j2 = jA - (1000000 * j);
                synchronized (this.f3181a) {
                    try {
                        this.f3181a.wait(j, (int) j2);
                    } catch (InterruptedException unused) {
                    }
                }
            }
        }
    }
}
