package androidx.fragment.app;

import android.view.View;
import android.view.ViewTreeObserver;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class M implements ViewTreeObserver.OnPreDrawListener, View.OnAttachStateChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final View f361a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private ViewTreeObserver f362b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Runnable f363c;

    private M(View view, Runnable runnable) {
        this.f361a = view;
        this.f362b = view.getViewTreeObserver();
        this.f363c = runnable;
    }

    public static M a(View view, Runnable runnable) {
        M m = new M(view, runnable);
        view.getViewTreeObserver().addOnPreDrawListener(m);
        view.addOnAttachStateChangeListener(m);
        return m;
    }

    public void a() {
        (this.f362b.isAlive() ? this.f362b : this.f361a.getViewTreeObserver()).removeOnPreDrawListener(this);
        this.f361a.removeOnAttachStateChangeListener(this);
    }

    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    public boolean onPreDraw() {
        a();
        this.f363c.run();
        return true;
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public void onViewAttachedToWindow(View view) {
        this.f362b = view.getViewTreeObserver();
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public void onViewDetachedFromWindow(View view) {
        a();
    }
}
