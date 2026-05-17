package androidx.fragment.app;

import android.view.View;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class I implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ int f349a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ ArrayList f350b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ ArrayList f351c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ ArrayList f352d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ ArrayList f353e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ L f354f;

    I(L l, int i, ArrayList arrayList, ArrayList arrayList2, ArrayList arrayList3, ArrayList arrayList4) {
        this.f354f = l;
        this.f349a = i;
        this.f350b = arrayList;
        this.f351c = arrayList2;
        this.f352d = arrayList3;
        this.f353e = arrayList4;
    }

    @Override // java.lang.Runnable
    public void run() {
        for (int i = 0; i < this.f349a; i++) {
            b.d.d.n.a((View) this.f350b.get(i), (String) this.f351c.get(i));
            b.d.d.n.a((View) this.f352d.get(i), (String) this.f353e.get(i));
        }
    }
}
