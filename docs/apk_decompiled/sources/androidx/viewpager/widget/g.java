package androidx.viewpager.widget;

import android.graphics.Rect;
import android.view.View;
import b.d.d.k;
import b.d.d.n;
import b.d.d.q;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g implements k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Rect f684a = new Rect();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ ViewPager f685b;

    g(ViewPager viewPager) {
        this.f685b = viewPager;
    }

    @Override // b.d.d.k
    public q a(View view, q qVar) {
        q qVarB = n.b(view, qVar);
        if (qVarB.e()) {
            return qVarB;
        }
        Rect rect = this.f684a;
        rect.left = qVarB.b();
        rect.top = qVarB.d();
        rect.right = qVarB.c();
        rect.bottom = qVarB.a();
        int childCount = this.f685b.getChildCount();
        for (int i = 0; i < childCount; i++) {
            q qVarA = n.a(this.f685b.getChildAt(i), qVarB);
            rect.left = Math.min(qVarA.b(), rect.left);
            rect.top = Math.min(qVarA.d(), rect.top);
            rect.right = Math.min(qVarA.c(), rect.right);
            rect.bottom = Math.min(qVarA.a(), rect.bottom);
        }
        return qVarB.a(rect.left, rect.top, rect.right, rect.bottom);
    }
}
