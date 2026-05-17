package androidx.core.widget;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ContentLoadingProgressBar f240a;

    a(ContentLoadingProgressBar contentLoadingProgressBar) {
        this.f240a = contentLoadingProgressBar;
    }

    @Override // java.lang.Runnable
    public void run() {
        ContentLoadingProgressBar contentLoadingProgressBar = this.f240a;
        contentLoadingProgressBar.f228b = false;
        contentLoadingProgressBar.f227a = -1L;
        contentLoadingProgressBar.setVisibility(8);
    }
}
