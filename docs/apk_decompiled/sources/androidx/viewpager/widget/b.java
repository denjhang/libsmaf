package androidx.viewpager.widget;

import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PagerTabStrip f681a;

    b(PagerTabStrip pagerTabStrip) {
        this.f681a = pagerTabStrip;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        this.f681a.f650c.setCurrentItem(r2.getCurrentItem() - 1);
    }
}
