package androidx.fragment.app;

import android.view.View;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class z implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Object f430a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ L f431b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ View f432c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ Fragment f433d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ ArrayList f434e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ ArrayList f435f;
    final /* synthetic */ ArrayList g;
    final /* synthetic */ Object h;

    z(Object obj, L l, View view, Fragment fragment, ArrayList arrayList, ArrayList arrayList2, ArrayList arrayList3, Object obj2) {
        this.f430a = obj;
        this.f431b = l;
        this.f432c = view;
        this.f433d = fragment;
        this.f434e = arrayList;
        this.f435f = arrayList2;
        this.g = arrayList3;
        this.h = obj2;
    }

    @Override // java.lang.Runnable
    public void run() {
        Object obj = this.f430a;
        if (obj != null) {
            this.f431b.b(obj, this.f432c);
            this.f435f.addAll(C.a(this.f431b, this.f430a, this.f433d, (ArrayList<View>) this.f434e, this.f432c));
        }
        if (this.g != null) {
            if (this.h != null) {
                ArrayList<View> arrayList = new ArrayList<>();
                arrayList.add(this.f432c);
                this.f431b.a(this.h, this.g, arrayList);
            }
            this.g.clear();
            this.g.add(this.f432c);
        }
    }
}
