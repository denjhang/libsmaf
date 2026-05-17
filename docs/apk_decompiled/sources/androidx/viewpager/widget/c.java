package androidx.viewpager.widget;

import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PagerTabStrip f682a;

    c(PagerTabStrip pagerTabStrip) {
        this.f682a = pagerTabStrip;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        ViewPager viewPager = this.f682a.f650c;
        viewPager.setCurrentItem(viewPager.getCurrentItem() + 1);
    }
}
