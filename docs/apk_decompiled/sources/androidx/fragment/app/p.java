package androidx.fragment.app;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import android.view.ViewGroup;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class p extends AnimatorListenerAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ViewGroup f391a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ View f392b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ Fragment f393c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ s f394d;

    p(s sVar, ViewGroup viewGroup, View view, Fragment fragment) {
        this.f394d = sVar;
        this.f391a = viewGroup;
        this.f392b = view;
        this.f393c = fragment;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationEnd(Animator animator) {
        this.f391a.endViewTransition(this.f392b);
        Animator animatorH = this.f393c.h();
        this.f393c.a((Animator) null);
        if (animatorH == null || this.f391a.indexOfChild(this.f392b) >= 0) {
            return;
        }
        s sVar = this.f394d;
        Fragment fragment = this.f393c;
        sVar.a(fragment, fragment.x(), 0, 0, false);
    }
}
