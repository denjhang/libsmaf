package androidx.fragment.app;

import android.view.View;
import java.util.ArrayList;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class K implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ArrayList f358a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ Map f359b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ L f360c;

    K(L l, ArrayList arrayList, Map map) {
        this.f360c = l;
        this.f358a = arrayList;
        this.f359b = map;
    }

    @Override // java.lang.Runnable
    public void run() {
        int size = this.f358a.size();
        for (int i = 0; i < size; i++) {
            View view = (View) this.f358a.get(i);
            b.d.d.n.a(view, (String) this.f359b.get(b.d.d.n.f(view)));
        }
    }
}
