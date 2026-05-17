package androidx.fragment.app;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import android.view.ViewGroup;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class q extends AnimatorListenerAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ViewGroup f395a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ View f396b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ Fragment f397c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ s f398d;

    q(s sVar, ViewGroup viewGroup, View view, Fragment fragment) {
        this.f398d = sVar;
        this.f395a = viewGroup;
        this.f396b = view;
        this.f397c = fragment;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationEnd(Animator animator) {
        this.f395a.endViewTransition(this.f396b);
        animator.removeListener(this);
        View view = this.f397c.K;
        if (view != null) {
            view.setVisibility(8);
        }
    }
}
