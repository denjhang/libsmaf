package androidx.core.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.ProgressBar;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ContentLoadingProgressBar extends ProgressBar {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    long f227a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    boolean f228b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    boolean f229c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    boolean f230d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Runnable f231e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Runnable f232f;

    public ContentLoadingProgressBar(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.f227a = -1L;
        this.f228b = false;
        this.f229c = false;
        this.f230d = false;
        this.f231e = new a(this);
        this.f232f = new b(this);
    }

    private void a() {
        removeCallbacks(this.f231e);
        removeCallbacks(this.f232f);
    }

    @Override // android.widget.ProgressBar, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        a();
    }

    @Override // android.widget.ProgressBar, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        a();
    }
}
