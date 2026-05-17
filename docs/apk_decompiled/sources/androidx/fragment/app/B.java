package androidx.fragment.app;

import android.graphics.Rect;
import android.view.View;
import androidx.fragment.app.C;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class B implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ L f272a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ b.b.b f273b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ Object f274c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ C.a f275d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ ArrayList f276e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ View f277f;
    final /* synthetic */ Fragment g;
    final /* synthetic */ Fragment h;
    final /* synthetic */ boolean i;
    final /* synthetic */ ArrayList j;
    final /* synthetic */ Object k;
    final /* synthetic */ Rect l;

    B(L l, b.b.b bVar, Object obj, C.a aVar, ArrayList arrayList, View view, Fragment fragment, Fragment fragment2, boolean z, ArrayList arrayList2, Object obj2, Rect rect) {
        this.f272a = l;
        this.f273b = bVar;
        this.f274c = obj;
        this.f275d = aVar;
        this.f276e = arrayList;
        this.f277f = view;
        this.g = fragment;
        this.h = fragment2;
        this.i = z;
        this.j = arrayList2;
        this.k = obj2;
        this.l = rect;
    }

    @Override // java.lang.Runnable
    public void run() {
        b.b.b<String, View> bVarA = C.a(this.f272a, (b.b.b<String, String>) this.f273b, this.f274c, this.f275d);
        if (bVarA != null) {
            this.f276e.addAll(bVarA.values());
            this.f276e.add(this.f277f);
        }
        C.a(this.g, this.h, this.i, bVarA, false);
        Object obj = this.f274c;
        if (obj != null) {
            this.f272a.b(obj, this.j, this.f276e);
            View viewA = C.a(bVarA, this.f275d, this.k, this.i);
            if (viewA != null) {
                this.f272a.a(viewA, this.l);
            }
        }
    }
}
