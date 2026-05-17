package androidx.core.widget;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ContentLoadingProgressBar f241a;

    b(ContentLoadingProgressBar contentLoadingProgressBar) {
        this.f241a = contentLoadingProgressBar;
    }

    @Override // java.lang.Runnable
    public void run() {
        ContentLoadingProgressBar contentLoadingProgressBar = this.f241a;
        contentLoadingProgressBar.f229c = false;
        if (contentLoadingProgressBar.f230d) {
            return;
        }
        contentLoadingProgressBar.f227a = System.currentTimeMillis();
        this.f241a.setVisibility(0);
    }
}
