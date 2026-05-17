package androidx.viewpager.widget;

import androidx.viewpager.widget.ViewPager;
import java.util.Comparator;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements Comparator<ViewPager.b> {
    d() {
    }

    @Override // java.util.Comparator
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compare(ViewPager.b bVar, ViewPager.b bVar2) {
        return bVar.f673b - bVar2.f673b;
    }
}
