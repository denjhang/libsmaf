package androidx.swiperefreshlayout.widget;

import android.view.animation.Animation;
import android.view.animation.Transformation;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h extends Animation {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ int f634a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f635b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ SwipeRefreshLayout f636c;

    h(SwipeRefreshLayout swipeRefreshLayout, int i, int i2) {
        this.f636c = swipeRefreshLayout;
        this.f634a = i;
        this.f635b = i2;
    }

    @Override // android.view.animation.Animation
    public void applyTransformation(float f2, Transformation transformation) {
        this.f636c.D.setAlpha((int) (this.f634a + ((this.f635b - r0) * f2)));
    }
}
