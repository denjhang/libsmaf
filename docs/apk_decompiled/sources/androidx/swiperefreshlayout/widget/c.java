package androidx.swiperefreshlayout.widget;

import android.animation.Animator;
import androidx.swiperefreshlayout.widget.d;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements Animator.AnimatorListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ d.a f617a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ d f618b;

    c(d dVar, d.a aVar) {
        this.f618b = dVar;
        this.f617a = aVar;
    }

    @Override // android.animation.Animator.AnimatorListener
    public void onAnimationCancel(Animator animator) {
    }

    @Override // android.animation.Animator.AnimatorListener
    public void onAnimationEnd(Animator animator) {
    }

    @Override // android.animation.Animator.AnimatorListener
    public void onAnimationRepeat(Animator animator) {
        this.f618b.a(1.0f, this.f617a, true);
        this.f617a.l();
        this.f617a.j();
        d dVar = this.f618b;
        if (!dVar.i) {
            dVar.h += 1.0f;
            return;
        }
        dVar.i = false;
        animator.cancel();
        animator.setDuration(1332L);
        animator.start();
        this.f617a.a(false);
    }

    @Override // android.animation.Animator.AnimatorListener
    public void onAnimationStart(Animator animator) {
        this.f618b.h = 0.0f;
    }
}
