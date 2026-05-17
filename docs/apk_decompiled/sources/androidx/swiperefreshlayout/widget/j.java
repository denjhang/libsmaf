package androidx.swiperefreshlayout.widget;

import android.view.animation.Animation;
import android.view.animation.Transformation;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class j extends Animation {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SwipeRefreshLayout f638a;

    j(SwipeRefreshLayout swipeRefreshLayout) {
        this.f638a = swipeRefreshLayout;
    }

    @Override // android.view.animation.Animation
    public void applyTransformation(float f2, Transformation transformation) {
        SwipeRefreshLayout swipeRefreshLayout = this.f638a;
        int iAbs = !swipeRefreshLayout.L ? swipeRefreshLayout.B - Math.abs(swipeRefreshLayout.A) : swipeRefreshLayout.B;
        SwipeRefreshLayout swipeRefreshLayout2 = this.f638a;
        this.f638a.setTargetOffsetTopAndBottom((swipeRefreshLayout2.y + ((int) ((iAbs - r1) * f2))) - swipeRefreshLayout2.w.getTop());
        this.f638a.D.a(1.0f - f2);
    }
}
