package androidx.fragment.app;

import android.view.View;
import java.util.ArrayList;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class J implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ArrayList f355a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ Map f356b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ L f357c;

    J(L l, ArrayList arrayList, Map map) {
        this.f357c = l;
        this.f355a = arrayList;
        this.f356b = map;
    }

    @Override // java.lang.Runnable
    public void run() {
        int size = this.f355a.size();
        for (int i = 0; i < size; i++) {
            View view = (View) this.f355a.get(i);
            String strF = b.d.d.n.f(view);
            if (strF != null) {
                b.d.d.n.a(view, L.a((Map<String, String>) this.f356b, strF));
            }
        }
    }
}
