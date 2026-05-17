package androidx.swiperefreshlayout.widget;

import android.animation.ValueAnimator;
import androidx.swiperefreshlayout.widget.d;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements ValueAnimator.AnimatorUpdateListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ d.a f615a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ d f616b;

    b(d dVar, d.a aVar) {
        this.f616b = dVar;
        this.f615a = aVar;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public void onAnimationUpdate(ValueAnimator valueAnimator) {
        float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
        this.f616b.a(fFloatValue, this.f615a);
        this.f616b.a(fFloatValue, this.f615a, false);
        this.f616b.invalidateSelf();
    }
}
