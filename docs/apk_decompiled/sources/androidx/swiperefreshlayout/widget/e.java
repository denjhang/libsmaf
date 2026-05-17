package androidx.swiperefreshlayout.widget;

import android.view.animation.Animation;
import androidx.swiperefreshlayout.widget.SwipeRefreshLayout;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class e implements Animation.AnimationListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SwipeRefreshLayout f631a;

    e(SwipeRefreshLayout swipeRefreshLayout) {
        this.f631a = swipeRefreshLayout;
    }

    @Override // android.view.animation.Animation.AnimationListener
    public void onAnimationEnd(Animation animation) {
        SwipeRefreshLayout.b bVar;
        SwipeRefreshLayout swipeRefreshLayout = this.f631a;
        if (!swipeRefreshLayout.f608e) {
            swipeRefreshLayout.b();
            return;
        }
        swipeRefreshLayout.D.setAlpha(255);
        this.f631a.D.start();
        SwipeRefreshLayout swipeRefreshLayout2 = this.f631a;
        if (swipeRefreshLayout2.J && (bVar = swipeRefreshLayout2.f607d) != null) {
            bVar.a();
        }
        SwipeRefreshLayout swipeRefreshLayout3 = this.f631a;
        swipeRefreshLayout3.o = swipeRefreshLayout3.w.getTop();
    }

    @Override // android.view.animation.Animation.AnimationListener
    public void onAnimationRepeat(Animation animation) {
    }

    @Override // android.view.animation.Animation.AnimationListener
    public void onAnimationStart(Animation animation) {
    }
}
