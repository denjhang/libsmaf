package androidx.fragment.app;

import android.transition.Transition;
import android.view.View;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class E implements Transition.TransitionListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ View f295a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ ArrayList f296b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ H f297c;

    E(H h, View view, ArrayList arrayList) {
        this.f297c = h;
        this.f295a = view;
        this.f296b = arrayList;
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionCancel(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionEnd(Transition transition) {
        transition.removeListener(this);
        this.f295a.setVisibility(8);
        int size = this.f296b.size();
        for (int i = 0; i < size; i++) {
            ((View) this.f296b.get(i)).setVisibility(0);
        }
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionPause(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionResume(Transition transition) {
    }

    @Override // android.transition.Transition.TransitionListener
    public void onTransitionStart(Transition transition) {
    }
}
