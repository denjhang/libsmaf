package androidx.swiperefreshlayout.widget;

import android.view.animation.Animation;
import android.view.animation.Transformation;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class l extends Animation {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SwipeRefreshLayout f640a;

    l(SwipeRefreshLayout swipeRefreshLayout) {
        this.f640a = swipeRefreshLayout;
    }

    @Override // android.view.animation.Animation
    public void applyTransformation(float f2, Transformation transformation) {
        SwipeRefreshLayout swipeRefreshLayout = this.f640a;
        float f3 = swipeRefreshLayout.z;
        swipeRefreshLayout.setAnimationProgress(f3 + ((-f3) * f2));
        this.f640a.a(f2);
    }
}
