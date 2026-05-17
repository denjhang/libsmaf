package androidx.fragment.app;

import android.transition.Transition;
import android.view.View;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class F implements Transition.TransitionListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Object f298a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ ArrayList f299b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ Object f300c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ ArrayList f301d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ Object f302e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ ArrayList f303f;
    final /* synthetic */ H g;

    F(H h, Object obj, ArrayList arrayList, Object obj2, ArrayList arrayList2, Object obj3, ArrayList arrayList3) {
        this.g = h;
        this.f298a = obj;
        this.f299b = arrayList;
        this.f300c = obj2;
        this.f301d = arrayList2;
        this.f302e = obj3;
        this.f303f = arrayList3;
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionCancel(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionEnd(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionPause(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionResume(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionStart(Transition transition) {
        Object obj = this.f298a;
        if (obj != null) {
            this.g.a(obj, this.f299b, (ArrayList<View>) null);
        }
        Object obj2 = this.f300c;
        if (obj2 != null) {
            this.g.a(obj2, this.f301d, (ArrayList<View>) null);
        }
        Object obj3 = this.f302e;
        if (obj3 != null) {
            this.g.a(obj3, this.f303f, (ArrayList<View>) null);
        }
    }
}
