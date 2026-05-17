package androidx.viewpager.widget;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ViewPager f683a;

    f(ViewPager viewPager) {
        this.f683a = viewPager;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f683a.setScrollState(0);
        this.f683a.e();
    }
}
