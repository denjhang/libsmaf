package androidx.fragment.app;

import android.view.ViewGroup;
import android.view.animation.Animation;
import androidx.fragment.app.s;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class o extends s.b {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ ViewGroup f388b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ Fragment f389c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ s f390d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    o(s sVar, Animation.AnimationListener animationListener, ViewGroup viewGroup, Fragment fragment) {
        super(animationListener);
        this.f390d = sVar;
        this.f388b = viewGroup;
        this.f389c = fragment;
    }

    @Override // androidx.fragment.app.s.b, android.view.animation.Animation.AnimationListener
    public void onAnimationEnd(Animation animation) {
        super.onAnimationEnd(animation);
        this.f388b.post(new RunnableC0050n(this));
    }
}
