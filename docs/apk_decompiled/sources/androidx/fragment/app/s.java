package androidx.fragment.app;

import android.R;
import android.animation.Animator;
import android.animation.AnimatorInflater;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.PropertyValuesHolder;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.os.Build;
import android.os.Bundle;
import android.os.Looper;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.AlphaAnimation;
import android.view.animation.Animation;
import android.view.animation.AnimationSet;
import android.view.animation.AnimationUtils;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.Interpolator;
import android.view.animation.ScaleAnimation;
import android.view.animation.Transformation;
import androidx.fragment.app.AbstractC0048l;
import androidx.fragment.app.Fragment;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class s extends AbstractC0048l implements LayoutInflater.Factory2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static boolean f400a = false;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static Field f401b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    static final Interpolator f402c = new DecelerateInterpolator(2.5f);

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    static final Interpolator f403d = new DecelerateInterpolator(1.5f);

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    static final Interpolator f404e = new AccelerateInterpolator(2.5f);

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    static final Interpolator f405f = new AccelerateInterpolator(1.5f);
    String A;
    boolean B;
    ArrayList<C0037a> C;
    ArrayList<Boolean> D;
    ArrayList<Fragment> E;
    ArrayList<j> H;
    t I;
    ArrayList<h> g;
    boolean h;
    SparseArray<Fragment> k;
    ArrayList<C0037a> l;
    ArrayList<Fragment> m;
    ArrayList<C0037a> n;
    ArrayList<Integer> o;
    ArrayList<AbstractC0048l.c> p;
    AbstractC0047k s;
    AbstractC0045i t;
    Fragment u;
    Fragment v;
    boolean w;
    boolean x;
    boolean y;
    boolean z;
    int i = 0;
    final ArrayList<Fragment> j = new ArrayList<>();
    private final CopyOnWriteArrayList<f> q = new CopyOnWriteArrayList<>();
    int r = 0;
    Bundle F = null;
    SparseArray<Parcelable> G = null;
    Runnable J = new RunnableC0049m(this);

    /* JADX INFO: Access modifiers changed from: private */
    static class a extends b {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        View f406b;

        a(View view, Animation.AnimationListener animationListener) {
            super(animationListener);
            this.f406b = view;
        }

        @Override // androidx.fragment.app.s.b, android.view.animation.Animation.AnimationListener
        public void onAnimationEnd(Animation animation) {
            if (b.d.d.n.i(this.f406b) || Build.VERSION.SDK_INT >= 24) {
                this.f406b.post(new r(this));
            } else {
                this.f406b.setLayerType(0, null);
            }
            super.onAnimationEnd(animation);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    static class b implements Animation.AnimationListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Animation.AnimationListener f407a;

        b(Animation.AnimationListener animationListener) {
            this.f407a = animationListener;
        }

        @Override // android.view.animation.Animation.AnimationListener
        public void onAnimationEnd(Animation animation) {
            Animation.AnimationListener animationListener = this.f407a;
            if (animationListener != null) {
                animationListener.onAnimationEnd(animation);
            }
        }

        @Override // android.view.animation.Animation.AnimationListener
        public void onAnimationRepeat(Animation animation) {
            Animation.AnimationListener animationListener = this.f407a;
            if (animationListener != null) {
                animationListener.onAnimationRepeat(animation);
            }
        }

        @Override // android.view.animation.Animation.AnimationListener
        public void onAnimationStart(Animation animation) {
            Animation.AnimationListener animationListener = this.f407a;
            if (animationListener != null) {
                animationListener.onAnimationStart(animation);
            }
        }
    }

    private static class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final Animation f408a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public final Animator f409b;

        c(Animator animator) {
            this.f408a = null;
            this.f409b = animator;
            if (animator == null) {
                throw new IllegalStateException("Animator cannot be null");
            }
        }

        c(Animation animation) {
            this.f408a = animation;
            this.f409b = null;
            if (animation == null) {
                throw new IllegalStateException("Animation cannot be null");
            }
        }
    }

    private static class d extends AnimatorListenerAdapter {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        View f410a;

        d(View view) {
            this.f410a = view;
        }

        @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
        public void onAnimationEnd(Animator animator) {
            this.f410a.setLayerType(0, null);
            animator.removeListener(this);
        }

        @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
        public void onAnimationStart(Animator animator) {
            this.f410a.setLayerType(2, null);
        }
    }

    private static class e extends AnimationSet implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final ViewGroup f411a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final View f412b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private boolean f413c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private boolean f414d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private boolean f415e;

        e(Animation animation, ViewGroup viewGroup, View view) {
            super(false);
            this.f415e = true;
            this.f411a = viewGroup;
            this.f412b = view;
            addAnimation(animation);
            this.f411a.post(this);
        }

        @Override // android.view.animation.AnimationSet, android.view.animation.Animation
        public boolean getTransformation(long j, Transformation transformation) {
            this.f415e = true;
            if (this.f413c) {
                return !this.f414d;
            }
            if (!super.getTransformation(j, transformation)) {
                this.f413c = true;
                M.a(this.f411a, this);
            }
            return true;
        }

        @Override // android.view.animation.Animation
        public boolean getTransformation(long j, Transformation transformation, float f2) {
            this.f415e = true;
            if (this.f413c) {
                return !this.f414d;
            }
            if (!super.getTransformation(j, transformation, f2)) {
                this.f413c = true;
                M.a(this.f411a, this);
            }
            return true;
        }

        @Override // java.lang.Runnable
        public void run() {
            if (this.f413c || !this.f415e) {
                this.f411a.endViewTransition(this.f412b);
                this.f414d = true;
            } else {
                this.f415e = false;
                this.f411a.post(this);
            }
        }
    }

    private static final class f {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final AbstractC0048l.b f416a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final boolean f417b;
    }

    static class g {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final int[] f418a = {R.attr.name, R.attr.id, R.attr.tag};
    }

    interface h {
        boolean a(ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2);
    }

    private class i implements h {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final String f419a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final int f420b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        final int f421c;

        i(String str, int i, int i2) {
            this.f419a = str;
            this.f420b = i;
            this.f421c = i2;
        }

        @Override // androidx.fragment.app.s.h
        public boolean a(ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2) {
            AbstractC0048l abstractC0048lP;
            Fragment fragment = s.this.v;
            if (fragment == null || this.f420b >= 0 || this.f419a != null || (abstractC0048lP = fragment.P()) == null || !abstractC0048lP.e()) {
                return s.this.a(arrayList, arrayList2, this.f419a, this.f420b, this.f421c);
            }
            return false;
        }
    }

    static class j implements Fragment.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final boolean f423a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final C0037a f424b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private int f425c;

        j(C0037a c0037a, boolean z) {
            this.f423a = z;
            this.f424b = c0037a;
        }

        @Override // androidx.fragment.app.Fragment.c
        public void a() {
            this.f425c++;
        }

        @Override // androidx.fragment.app.Fragment.c
        public void b() {
            this.f425c--;
            if (this.f425c != 0) {
                return;
            }
            this.f424b.f364a.x();
        }

        public void c() {
            C0037a c0037a = this.f424b;
            c0037a.f364a.a(c0037a, this.f423a, false, false);
        }

        public void d() {
            boolean z = this.f425c > 0;
            s sVar = this.f424b.f364a;
            int size = sVar.j.size();
            for (int i = 0; i < size; i++) {
                Fragment fragment = sVar.j.get(i);
                fragment.a((Fragment.c) null);
                if (z && fragment.E()) {
                    fragment.Z();
                }
            }
            C0037a c0037a = this.f424b;
            c0037a.f364a.a(c0037a, this.f423a, !z, true);
        }

        public boolean e() {
            return this.f425c == 0;
        }
    }

    s() {
    }

    private void A() {
        if (d()) {
            throw new IllegalStateException("Can not perform this action after onSaveInstanceState");
        }
        if (this.A == null) {
            return;
        }
        throw new IllegalStateException("Can not perform this action inside of " + this.A);
    }

    private void B() {
        this.h = false;
        this.D.clear();
        this.C.clear();
    }

    private void C() {
        SparseArray<Fragment> sparseArray = this.k;
        int size = sparseArray == null ? 0 : sparseArray.size();
        for (int i2 = 0; i2 < size; i2++) {
            Fragment fragmentValueAt = this.k.valueAt(i2);
            if (fragmentValueAt != null) {
                if (fragmentValueAt.g() != null) {
                    int iX = fragmentValueAt.x();
                    View viewG = fragmentValueAt.g();
                    Animation animation = viewG.getAnimation();
                    if (animation != null) {
                        animation.cancel();
                        viewG.clearAnimation();
                    }
                    fragmentValueAt.a((View) null);
                    a(fragmentValueAt, iX, 0, 0, false);
                } else if (fragmentValueAt.h() != null) {
                    fragmentValueAt.h().end();
                }
            }
        }
    }

    private void D() {
        if (this.H != null) {
            while (!this.H.isEmpty()) {
                this.H.remove(0).d();
            }
        }
    }

    private int a(ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2, int i2, int i3, b.b.d<Fragment> dVar) {
        int i4 = i3;
        for (int i5 = i3 - 1; i5 >= i2; i5--) {
            C0037a c0037a = arrayList.get(i5);
            boolean zBooleanValue = arrayList2.get(i5).booleanValue();
            if (c0037a.e() && !c0037a.a(arrayList, i5 + 1, i3)) {
                if (this.H == null) {
                    this.H = new ArrayList<>();
                }
                j jVar = new j(c0037a, zBooleanValue);
                this.H.add(jVar);
                c0037a.a(jVar);
                if (zBooleanValue) {
                    c0037a.c();
                } else {
                    c0037a.b(false);
                }
                i4--;
                if (i5 != i4) {
                    arrayList.remove(i5);
                    arrayList.add(i4, c0037a);
                }
                a(dVar);
            }
        }
        return i4;
    }

    private static Animation.AnimationListener a(Animation animation) {
        String str;
        try {
            if (f401b == null) {
                f401b = Animation.class.getDeclaredField("mListener");
                f401b.setAccessible(true);
            }
            return (Animation.AnimationListener) f401b.get(animation);
        } catch (IllegalAccessException e2) {
            e = e2;
            str = "Cannot access Animation's mListener field";
            Log.e("FragmentManager", str, e);
            return null;
        } catch (NoSuchFieldException e3) {
            e = e3;
            str = "No field with the name mListener is found in Animation class";
            Log.e("FragmentManager", str, e);
            return null;
        }
    }

    static c a(Context context, float f2, float f3) {
        AlphaAnimation alphaAnimation = new AlphaAnimation(f2, f3);
        alphaAnimation.setInterpolator(f403d);
        alphaAnimation.setDuration(220L);
        return new c(alphaAnimation);
    }

    static c a(Context context, float f2, float f3, float f4, float f5) {
        AnimationSet animationSet = new AnimationSet(false);
        ScaleAnimation scaleAnimation = new ScaleAnimation(f2, f3, f2, f3, 1, 0.5f, 1, 0.5f);
        scaleAnimation.setInterpolator(f402c);
        scaleAnimation.setDuration(220L);
        animationSet.addAnimation(scaleAnimation);
        AlphaAnimation alphaAnimation = new AlphaAnimation(f4, f5);
        alphaAnimation.setInterpolator(f403d);
        alphaAnimation.setDuration(220L);
        animationSet.addAnimation(alphaAnimation);
        return new c(animationSet);
    }

    private void a(Fragment fragment, c cVar, int i2) {
        View view = fragment.K;
        ViewGroup viewGroup = fragment.J;
        viewGroup.startViewTransition(view);
        fragment.b(i2);
        Animation animation = cVar.f408a;
        if (animation != null) {
            e eVar = new e(animation, viewGroup, view);
            fragment.a(fragment.K);
            eVar.setAnimationListener(new o(this, a(eVar), viewGroup, fragment));
            b(view, cVar);
            fragment.K.startAnimation(eVar);
            return;
        }
        Animator animator = cVar.f409b;
        fragment.a(animator);
        animator.addListener(new p(this, viewGroup, view, fragment));
        animator.setTarget(fragment.K);
        b(fragment.K, cVar);
        animator.start();
    }

    private static void a(t tVar) {
        if (tVar == null) {
            return;
        }
        List<Fragment> listB = tVar.b();
        if (listB != null) {
            Iterator<Fragment> it = listB.iterator();
            while (it.hasNext()) {
                it.next().F = true;
            }
        }
        List<t> listA = tVar.a();
        if (listA != null) {
            Iterator<t> it2 = listA.iterator();
            while (it2.hasNext()) {
                a(it2.next());
            }
        }
    }

    private void a(b.b.d<Fragment> dVar) {
        int i2 = this.r;
        if (i2 < 1) {
            return;
        }
        int iMin = Math.min(i2, 3);
        int size = this.j.size();
        for (int i3 = 0; i3 < size; i3++) {
            Fragment fragment = this.j.get(i3);
            if (fragment.f306c < iMin) {
                a(fragment, iMin, fragment.p(), fragment.q(), false);
                if (fragment.K != null && !fragment.C && fragment.P) {
                    dVar.add(fragment);
                }
            }
        }
    }

    private void a(RuntimeException runtimeException) {
        Log.e("FragmentManager", runtimeException.getMessage());
        Log.e("FragmentManager", "Activity state:");
        PrintWriter printWriter = new PrintWriter(new b.d.c.b("FragmentManager"));
        AbstractC0047k abstractC0047k = this.s;
        try {
            if (abstractC0047k != null) {
                abstractC0047k.a("  ", null, printWriter, new String[0]);
            } else {
                a("  ", (FileDescriptor) null, printWriter, new String[0]);
            }
            throw runtimeException;
        } catch (Exception e2) {
            Log.e("FragmentManager", "Failed dumping state", e2);
            throw runtimeException;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0032 A[PHI: r0 r2
  0x0032: PHI (r0v8 int) = (r0v5 int), (r0v4 int) binds: [B:29:0x006b, B:15:0x0030] A[DONT_GENERATE, DONT_INLINE]
  0x0032: PHI (r2v4 int) = (r2v2 int), (r2v1 int) binds: [B:29:0x006b, B:15:0x0030] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(java.util.ArrayList<androidx.fragment.app.C0037a> r8, java.util.ArrayList<java.lang.Boolean> r9) {
        /*
            r7 = this;
            java.util.ArrayList<androidx.fragment.app.s$j> r0 = r7.H
            r1 = 0
            if (r0 != 0) goto L7
            r0 = 0
            goto Lb
        L7:
            int r0 = r0.size()
        Lb:
            r2 = r0
            r0 = 0
        Ld:
            if (r0 >= r2) goto L74
            java.util.ArrayList<androidx.fragment.app.s$j> r3 = r7.H
            java.lang.Object r3 = r3.get(r0)
            androidx.fragment.app.s$j r3 = (androidx.fragment.app.s.j) r3
            r4 = -1
            if (r8 == 0) goto L36
            boolean r5 = r3.f423a
            if (r5 != 0) goto L36
            androidx.fragment.app.a r5 = r3.f424b
            int r5 = r8.indexOf(r5)
            if (r5 == r4) goto L36
            java.lang.Object r5 = r9.get(r5)
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            if (r5 == 0) goto L36
        L32:
            r3.c()
            goto L71
        L36:
            boolean r5 = r3.e()
            if (r5 != 0) goto L4a
            if (r8 == 0) goto L71
            androidx.fragment.app.a r5 = r3.f424b
            int r6 = r8.size()
            boolean r5 = r5.a(r8, r1, r6)
            if (r5 == 0) goto L71
        L4a:
            java.util.ArrayList<androidx.fragment.app.s$j> r5 = r7.H
            r5.remove(r0)
            int r0 = r0 + (-1)
            int r2 = r2 + (-1)
            if (r8 == 0) goto L6e
            boolean r5 = r3.f423a
            if (r5 != 0) goto L6e
            androidx.fragment.app.a r5 = r3.f424b
            int r5 = r8.indexOf(r5)
            if (r5 == r4) goto L6e
            java.lang.Object r4 = r9.get(r5)
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            if (r4 == 0) goto L6e
            goto L32
        L6e:
            r3.d()
        L71:
            int r0 = r0 + 1
            goto Ld
        L74:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.fragment.app.s.a(java.util.ArrayList, java.util.ArrayList):void");
    }

    private static void a(ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2, int i2, int i3) {
        while (i2 < i3) {
            C0037a c0037a = arrayList.get(i2);
            if (arrayList2.get(i2).booleanValue()) {
                c0037a.a(-1);
                c0037a.b(i2 == i3 + (-1));
            } else {
                c0037a.a(1);
                c0037a.c();
            }
            i2++;
        }
    }

    static boolean a(Animator animator) {
        if (animator == null) {
            return false;
        }
        if (animator instanceof ValueAnimator) {
            for (PropertyValuesHolder propertyValuesHolder : ((ValueAnimator) animator).getValues()) {
                if ("alpha".equals(propertyValuesHolder.getPropertyName())) {
                    return true;
                }
            }
        } else if (animator instanceof AnimatorSet) {
            ArrayList<Animator> childAnimations = ((AnimatorSet) animator).getChildAnimations();
            for (int i2 = 0; i2 < childAnimations.size(); i2++) {
                if (a(childAnimations.get(i2))) {
                    return true;
                }
            }
        }
        return false;
    }

    static boolean a(View view, c cVar) {
        return view != null && cVar != null && Build.VERSION.SDK_INT >= 19 && view.getLayerType() == 0 && b.d.d.n.h(view) && a(cVar);
    }

    static boolean a(c cVar) {
        Animation animation = cVar.f408a;
        if (animation instanceof AlphaAnimation) {
            return true;
        }
        if (!(animation instanceof AnimationSet)) {
            return a(cVar.f409b);
        }
        List<Animation> animations = ((AnimationSet) animation).getAnimations();
        for (int i2 = 0; i2 < animations.size(); i2++) {
            if (animations.get(i2) instanceof AlphaAnimation) {
                return true;
            }
        }
        return false;
    }

    private boolean a(String str, int i2, int i3) {
        AbstractC0048l abstractC0048lP;
        p();
        c(true);
        Fragment fragment = this.v;
        if (fragment != null && i2 < 0 && str == null && (abstractC0048lP = fragment.P()) != null && abstractC0048lP.e()) {
            return true;
        }
        boolean zA = a(this.C, this.D, str, i2, i3);
        if (zA) {
            this.h = true;
            try {
                c(this.C, this.D);
            } finally {
                B();
            }
        }
        o();
        z();
        return zA;
    }

    public static int b(int i2, boolean z) {
        if (i2 == 4097) {
            return z ? 1 : 2;
        }
        if (i2 == 4099) {
            return z ? 5 : 6;
        }
        if (i2 != 8194) {
            return -1;
        }
        return z ? 3 : 4;
    }

    private static void b(View view, c cVar) {
        if (view == null || cVar == null || !a(view, cVar)) {
            return;
        }
        Animator animator = cVar.f409b;
        if (animator != null) {
            animator.addListener(new d(view));
            return;
        }
        Animation.AnimationListener animationListenerA = a(cVar.f408a);
        view.setLayerType(2, null);
        cVar.f408a.setAnimationListener(new a(view, animationListenerA));
    }

    private void b(b.b.d<Fragment> dVar) {
        int size = dVar.size();
        for (int i2 = 0; i2 < size; i2++) {
            Fragment fragmentF = dVar.f(i2);
            if (!fragmentF.m) {
                View viewY = fragmentF.y();
                fragmentF.R = viewY.getAlpha();
                viewY.setAlpha(0.0f);
            }
        }
    }

    private void b(ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2, int i2, int i3) {
        int i4;
        int i5;
        int i6 = i2;
        boolean z = arrayList.get(i6).t;
        ArrayList<Fragment> arrayList3 = this.E;
        if (arrayList3 == null) {
            this.E = new ArrayList<>();
        } else {
            arrayList3.clear();
        }
        this.E.addAll(this.j);
        Fragment fragmentR = r();
        boolean z2 = false;
        for (int i7 = i6; i7 < i3; i7++) {
            C0037a c0037a = arrayList.get(i7);
            fragmentR = !arrayList2.get(i7).booleanValue() ? c0037a.a(this.E, fragmentR) : c0037a.b(this.E, fragmentR);
            z2 = z2 || c0037a.i;
        }
        this.E.clear();
        if (!z) {
            C.a(this, arrayList, arrayList2, i2, i3, false);
        }
        a(arrayList, arrayList2, i2, i3);
        if (z) {
            b.b.d<Fragment> dVar = new b.b.d<>();
            a(dVar);
            int iA = a(arrayList, arrayList2, i2, i3, dVar);
            b(dVar);
            i4 = iA;
        } else {
            i4 = i3;
        }
        if (i4 != i6 && z) {
            C.a(this, arrayList, arrayList2, i2, i4, true);
            a(this.r, true);
        }
        while (i6 < i3) {
            C0037a c0037a2 = arrayList.get(i6);
            if (arrayList2.get(i6).booleanValue() && (i5 = c0037a2.m) >= 0) {
                b(i5);
                c0037a2.m = -1;
            }
            c0037a2.f();
            i6++;
        }
        if (z2) {
            t();
        }
    }

    private boolean b(ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2) {
        synchronized (this) {
            if (this.g != null && this.g.size() != 0) {
                int size = this.g.size();
                boolean zA = false;
                for (int i2 = 0; i2 < size; i2++) {
                    zA |= this.g.get(i2).a(arrayList, arrayList2);
                }
                this.g.clear();
                this.s.e().removeCallbacks(this.J);
                return zA;
            }
            return false;
        }
    }

    private void c(ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2) {
        if (arrayList == null || arrayList.isEmpty()) {
            return;
        }
        if (arrayList2 == null || arrayList.size() != arrayList2.size()) {
            throw new IllegalStateException("Internal error with the back stack records");
        }
        a(arrayList, arrayList2);
        int size = arrayList.size();
        int i2 = 0;
        int i3 = 0;
        while (i2 < size) {
            if (!arrayList.get(i2).t) {
                if (i3 != i2) {
                    b(arrayList, arrayList2, i3, i2);
                }
                i3 = i2 + 1;
                if (arrayList2.get(i2).booleanValue()) {
                    while (i3 < size && arrayList2.get(i3).booleanValue() && !arrayList.get(i3).t) {
                        i3++;
                    }
                }
                b(arrayList, arrayList2, i2, i3);
                i2 = i3 - 1;
            }
            i2++;
        }
        if (i3 != size) {
            b(arrayList, arrayList2, i3, size);
        }
    }

    private void c(boolean z) {
        if (this.h) {
            throw new IllegalStateException("FragmentManager is already executing transactions");
        }
        if (this.s == null) {
            throw new IllegalStateException("Fragment host has been destroyed");
        }
        if (Looper.myLooper() != this.s.e().getLooper()) {
            throw new IllegalStateException("Must be called from main thread of fragment host");
        }
        if (!z) {
            A();
        }
        if (this.C == null) {
            this.C = new ArrayList<>();
            this.D = new ArrayList<>();
        }
        this.h = true;
        try {
            a((ArrayList<C0037a>) null, (ArrayList<Boolean>) null);
        } finally {
            this.h = false;
        }
    }

    public static int d(int i2) {
        if (i2 == 4097) {
            return 8194;
        }
        if (i2 != 4099) {
            return i2 != 8194 ? 0 : 4097;
        }
        return 4099;
    }

    private void e(int i2) {
        try {
            this.h = true;
            a(i2, false);
            this.h = false;
            p();
        } catch (Throwable th) {
            this.h = false;
            throw th;
        }
    }

    private Fragment p(Fragment fragment) {
        ViewGroup viewGroup = fragment.J;
        View view = fragment.K;
        if (viewGroup != null && view != null) {
            for (int iIndexOf = this.j.indexOf(fragment) - 1; iIndexOf >= 0; iIndexOf--) {
                Fragment fragment2 = this.j.get(iIndexOf);
                if (fragment2.J == viewGroup && fragment2.K != null) {
                    return fragment2;
                }
            }
        }
        return null;
    }

    private void z() {
        SparseArray<Fragment> sparseArray = this.k;
        if (sparseArray != null) {
            for (int size = sparseArray.size() - 1; size >= 0; size--) {
                if (this.k.valueAt(size) == null) {
                    SparseArray<Fragment> sparseArray2 = this.k;
                    sparseArray2.delete(sparseArray2.keyAt(size));
                }
            }
        }
    }

    public Fragment a(int i2) {
        for (int size = this.j.size() - 1; size >= 0; size--) {
            Fragment fragment = this.j.get(size);
            if (fragment != null && fragment.z == i2) {
                return fragment;
            }
        }
        SparseArray<Fragment> sparseArray = this.k;
        if (sparseArray == null) {
            return null;
        }
        for (int size2 = sparseArray.size() - 1; size2 >= 0; size2--) {
            Fragment fragmentValueAt = this.k.valueAt(size2);
            if (fragmentValueAt != null && fragmentValueAt.z == i2) {
                return fragmentValueAt;
            }
        }
        return null;
    }

    public Fragment a(Bundle bundle, String str) {
        int i2 = bundle.getInt(str, -1);
        if (i2 == -1) {
            return null;
        }
        Fragment fragment = this.k.get(i2);
        if (fragment != null) {
            return fragment;
        }
        a(new IllegalStateException("Fragment no longer exists for key " + str + ": index " + i2));
        throw null;
    }

    @Override // androidx.fragment.app.AbstractC0048l
    public Fragment a(String str) {
        if (str != null) {
            for (int size = this.j.size() - 1; size >= 0; size--) {
                Fragment fragment = this.j.get(size);
                if (fragment != null && str.equals(fragment.B)) {
                    return fragment;
                }
            }
        }
        SparseArray<Fragment> sparseArray = this.k;
        if (sparseArray == null || str == null) {
            return null;
        }
        for (int size2 = sparseArray.size() - 1; size2 >= 0; size2--) {
            Fragment fragmentValueAt = this.k.valueAt(size2);
            if (fragmentValueAt != null && str.equals(fragmentValueAt.B)) {
                return fragmentValueAt;
            }
        }
        return null;
    }

    c a(Fragment fragment, int i2, boolean z, int i3) {
        int iB;
        int iP = fragment.p();
        Animation animationA = fragment.a(i2, z, iP);
        if (animationA != null) {
            return new c(animationA);
        }
        Animator animatorB = fragment.b(i2, z, iP);
        if (animatorB != null) {
            return new c(animatorB);
        }
        if (iP != 0) {
            boolean zEquals = "anim".equals(this.s.c().getResources().getResourceTypeName(iP));
            boolean z2 = false;
            if (zEquals) {
                try {
                    Animation animationLoadAnimation = AnimationUtils.loadAnimation(this.s.c(), iP);
                    if (animationLoadAnimation != null) {
                        return new c(animationLoadAnimation);
                    }
                    z2 = true;
                } catch (Resources.NotFoundException e2) {
                    throw e2;
                } catch (RuntimeException unused) {
                }
            }
            if (!z2) {
                try {
                    Animator animatorLoadAnimator = AnimatorInflater.loadAnimator(this.s.c(), iP);
                    if (animatorLoadAnimator != null) {
                        return new c(animatorLoadAnimator);
                    }
                } catch (RuntimeException e3) {
                    if (zEquals) {
                        throw e3;
                    }
                    Animation animationLoadAnimation2 = AnimationUtils.loadAnimation(this.s.c(), iP);
                    if (animationLoadAnimation2 != null) {
                        return new c(animationLoadAnimation2);
                    }
                }
            }
        }
        if (i2 == 0 || (iB = b(i2, z)) < 0) {
            return null;
        }
        switch (iB) {
            case 1:
                return a(this.s.c(), 1.125f, 1.0f, 0.0f, 1.0f);
            case 2:
                return a(this.s.c(), 1.0f, 0.975f, 1.0f, 0.0f);
            case 3:
                return a(this.s.c(), 0.975f, 1.0f, 0.0f, 1.0f);
            case 4:
                return a(this.s.c(), 1.0f, 1.075f, 1.0f, 0.0f);
            case 5:
                return a(this.s.c(), 0.0f, 1.0f);
            case 6:
                return a(this.s.c(), 1.0f, 0.0f);
            default:
                if (i3 == 0 && this.s.h()) {
                    i3 = this.s.g();
                }
                if (i3 == 0) {
                }
                return null;
        }
    }

    @Override // androidx.fragment.app.AbstractC0048l
    public x a() {
        return new C0037a(this);
    }

    @Override // androidx.fragment.app.AbstractC0048l
    public void a(int i2, int i3) {
        if (i2 >= 0) {
            a((h) new i(null, i2, i3), false);
            return;
        }
        throw new IllegalArgumentException("Bad id: " + i2);
    }

    public void a(int i2, C0037a c0037a) {
        synchronized (this) {
            if (this.n == null) {
                this.n = new ArrayList<>();
            }
            int size = this.n.size();
            if (i2 < size) {
                if (f400a) {
                    Log.v("FragmentManager", "Setting back stack index " + i2 + " to " + c0037a);
                }
                this.n.set(i2, c0037a);
            } else {
                while (size < i2) {
                    this.n.add(null);
                    if (this.o == null) {
                        this.o = new ArrayList<>();
                    }
                    if (f400a) {
                        Log.v("FragmentManager", "Adding available back stack index " + size);
                    }
                    this.o.add(Integer.valueOf(size));
                    size++;
                }
                if (f400a) {
                    Log.v("FragmentManager", "Adding back stack index " + i2 + " with " + c0037a);
                }
                this.n.add(c0037a);
            }
        }
    }

    void a(int i2, boolean z) {
        AbstractC0047k abstractC0047k;
        if (this.s == null && i2 != 0) {
            throw new IllegalStateException("No activity");
        }
        if (z || i2 != this.r) {
            this.r = i2;
            if (this.k != null) {
                int size = this.j.size();
                for (int i3 = 0; i3 < size; i3++) {
                    h(this.j.get(i3));
                }
                int size2 = this.k.size();
                for (int i4 = 0; i4 < size2; i4++) {
                    Fragment fragmentValueAt = this.k.valueAt(i4);
                    if (fragmentValueAt != null && ((fragmentValueAt.n || fragmentValueAt.D) && !fragmentValueAt.P)) {
                        h(fragmentValueAt);
                    }
                }
                y();
                if (this.w && (abstractC0047k = this.s) != null && this.r == 4) {
                    abstractC0047k.i();
                    this.w = false;
                }
            }
        }
    }

    public void a(Configuration configuration) {
        for (int i2 = 0; i2 < this.j.size(); i2++) {
            Fragment fragment = this.j.get(i2);
            if (fragment != null) {
                fragment.a(configuration);
            }
        }
    }

    public void a(Bundle bundle, String str, Fragment fragment) {
        int i2 = fragment.g;
        if (i2 >= 0) {
            bundle.putInt(str, i2);
            return;
        }
        a(new IllegalStateException("Fragment " + fragment + " is not currently in the FragmentManager"));
        throw null;
    }

    void a(Parcelable parcelable, t tVar) {
        List<t> listA;
        List<androidx.lifecycle.u> listC;
        if (parcelable == null) {
            return;
        }
        FragmentManagerState fragmentManagerState = (FragmentManagerState) parcelable;
        if (fragmentManagerState.f325a == null) {
            return;
        }
        if (tVar != null) {
            List<Fragment> listB = tVar.b();
            listA = tVar.a();
            listC = tVar.c();
            int size = listB != null ? listB.size() : 0;
            for (int i2 = 0; i2 < size; i2++) {
                Fragment fragment = listB.get(i2);
                if (f400a) {
                    Log.v("FragmentManager", "restoreAllState: re-attaching retained " + fragment);
                }
                int i3 = 0;
                while (true) {
                    FragmentState[] fragmentStateArr = fragmentManagerState.f325a;
                    if (i3 >= fragmentStateArr.length || fragmentStateArr[i3].f331b == fragment.g) {
                        break;
                    } else {
                        i3++;
                    }
                }
                FragmentState[] fragmentStateArr2 = fragmentManagerState.f325a;
                if (i3 == fragmentStateArr2.length) {
                    a(new IllegalStateException("Could not find active fragment with index " + fragment.g));
                    throw null;
                }
                FragmentState fragmentState = fragmentStateArr2[i3];
                fragmentState.l = fragment;
                fragment.f308e = null;
                fragment.s = 0;
                fragment.p = false;
                fragment.m = false;
                fragment.j = null;
                Bundle bundle = fragmentState.k;
                if (bundle != null) {
                    bundle.setClassLoader(this.s.c().getClassLoader());
                    fragment.f308e = fragmentState.k.getSparseParcelableArray("android:view_state");
                    fragment.f307d = fragmentState.k;
                }
            }
        } else {
            listA = null;
            listC = null;
        }
        this.k = new SparseArray<>(fragmentManagerState.f325a.length);
        int i4 = 0;
        while (true) {
            FragmentState[] fragmentStateArr3 = fragmentManagerState.f325a;
            if (i4 >= fragmentStateArr3.length) {
                break;
            }
            FragmentState fragmentState2 = fragmentStateArr3[i4];
            if (fragmentState2 != null) {
                Fragment fragmentA = fragmentState2.a(this.s, this.t, this.u, (listA == null || i4 >= listA.size()) ? null : listA.get(i4), (listC == null || i4 >= listC.size()) ? null : listC.get(i4));
                if (f400a) {
                    Log.v("FragmentManager", "restoreAllState: active #" + i4 + ": " + fragmentA);
                }
                this.k.put(fragmentA.g, fragmentA);
                fragmentState2.l = null;
            }
            i4++;
        }
        if (tVar != null) {
            List<Fragment> listB2 = tVar.b();
            int size2 = listB2 != null ? listB2.size() : 0;
            for (int i5 = 0; i5 < size2; i5++) {
                Fragment fragment2 = listB2.get(i5);
                int i6 = fragment2.k;
                if (i6 >= 0) {
                    fragment2.j = this.k.get(i6);
                    if (fragment2.j == null) {
                        Log.w("FragmentManager", "Re-attaching retained fragment " + fragment2 + " target no longer exists: " + fragment2.k);
                    }
                }
            }
        }
        this.j.clear();
        if (fragmentManagerState.f326b != null) {
            int i7 = 0;
            while (true) {
                int[] iArr = fragmentManagerState.f326b;
                if (i7 >= iArr.length) {
                    break;
                }
                Fragment fragment3 = this.k.get(iArr[i7]);
                if (fragment3 == null) {
                    a(new IllegalStateException("No instantiated fragment for index #" + fragmentManagerState.f326b[i7]));
                    throw null;
                }
                fragment3.m = true;
                if (f400a) {
                    Log.v("FragmentManager", "restoreAllState: added #" + i7 + ": " + fragment3);
                }
                if (this.j.contains(fragment3)) {
                    throw new IllegalStateException("Already added!");
                }
                synchronized (this.j) {
                    this.j.add(fragment3);
                }
                i7++;
            }
        }
        BackStackState[] backStackStateArr = fragmentManagerState.f327c;
        if (backStackStateArr != null) {
            this.l = new ArrayList<>(backStackStateArr.length);
            int i8 = 0;
            while (true) {
                BackStackState[] backStackStateArr2 = fragmentManagerState.f327c;
                if (i8 >= backStackStateArr2.length) {
                    break;
                }
                C0037a c0037aA = backStackStateArr2[i8].a(this);
                if (f400a) {
                    Log.v("FragmentManager", "restoreAllState: back stack #" + i8 + " (index " + c0037aA.m + "): " + c0037aA);
                    PrintWriter printWriter = new PrintWriter(new b.d.c.b("FragmentManager"));
                    c0037aA.a("  ", printWriter, false);
                    printWriter.close();
                }
                this.l.add(c0037aA);
                int i9 = c0037aA.m;
                if (i9 >= 0) {
                    a(i9, c0037aA);
                }
                i8++;
            }
        } else {
            this.l = null;
        }
        int i10 = fragmentManagerState.f328d;
        if (i10 >= 0) {
            this.v = this.k.get(i10);
        }
        this.i = fragmentManagerState.f329e;
    }

    public void a(Menu menu) {
        if (this.r < 1) {
            return;
        }
        for (int i2 = 0; i2 < this.j.size(); i2++) {
            Fragment fragment = this.j.get(i2);
            if (fragment != null) {
                fragment.c(menu);
            }
        }
    }

    public void a(Fragment fragment) {
        if (f400a) {
            Log.v("FragmentManager", "attach: " + fragment);
        }
        if (fragment.D) {
            fragment.D = false;
            if (fragment.m) {
                return;
            }
            if (this.j.contains(fragment)) {
                throw new IllegalStateException("Fragment already added: " + fragment);
            }
            if (f400a) {
                Log.v("FragmentManager", "add from attach: " + fragment);
            }
            synchronized (this.j) {
                this.j.add(fragment);
            }
            fragment.m = true;
            if (fragment.G && fragment.H) {
                this.w = true;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:134:0x0294  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x02b4  */
    /* JADX WARN: Removed duplicated region for block: B:191:0x03a8  */
    /* JADX WARN: Removed duplicated region for block: B:221:0x041f  */
    /* JADX WARN: Removed duplicated region for block: B:225:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    void a(androidx.fragment.app.Fragment r17, int r18, int r19, int r20, boolean r21) {
        /*
            Method dump skipped, instruction units count: 1101
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.fragment.app.s.a(androidx.fragment.app.Fragment, int, int, int, boolean):void");
    }

    void a(Fragment fragment, Context context, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).a(fragment, context, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.a(this, fragment, context);
            }
        }
    }

    void a(Fragment fragment, Bundle bundle, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).a(fragment, bundle, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.a(this, fragment, bundle);
            }
        }
    }

    void a(Fragment fragment, View view, Bundle bundle, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).a(fragment, view, bundle, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.a(this, fragment, view, bundle);
            }
        }
    }

    public void a(Fragment fragment, boolean z) {
        if (f400a) {
            Log.v("FragmentManager", "add: " + fragment);
        }
        f(fragment);
        if (fragment.D) {
            return;
        }
        if (this.j.contains(fragment)) {
            throw new IllegalStateException("Fragment already added: " + fragment);
        }
        synchronized (this.j) {
            this.j.add(fragment);
        }
        fragment.m = true;
        fragment.n = false;
        if (fragment.K == null) {
            fragment.Q = false;
        }
        if (fragment.G && fragment.H) {
            this.w = true;
        }
        if (z) {
            i(fragment);
        }
    }

    void a(C0037a c0037a) {
        if (this.l == null) {
            this.l = new ArrayList<>();
        }
        this.l.add(c0037a);
    }

    void a(C0037a c0037a, boolean z, boolean z2, boolean z3) {
        if (z) {
            c0037a.b(z3);
        } else {
            c0037a.c();
        }
        ArrayList arrayList = new ArrayList(1);
        ArrayList arrayList2 = new ArrayList(1);
        arrayList.add(c0037a);
        arrayList2.add(Boolean.valueOf(z));
        if (z2) {
            C.a(this, (ArrayList<C0037a>) arrayList, (ArrayList<Boolean>) arrayList2, 0, 1, true);
        }
        if (z3) {
            a(this.r, true);
        }
        SparseArray<Fragment> sparseArray = this.k;
        if (sparseArray != null) {
            int size = sparseArray.size();
            for (int i2 = 0; i2 < size; i2++) {
                Fragment fragmentValueAt = this.k.valueAt(i2);
                if (fragmentValueAt != null && fragmentValueAt.K != null && fragmentValueAt.P && c0037a.b(fragmentValueAt.A)) {
                    float f2 = fragmentValueAt.R;
                    if (f2 > 0.0f) {
                        fragmentValueAt.K.setAlpha(f2);
                    }
                    if (z3) {
                        fragmentValueAt.R = 0.0f;
                    } else {
                        fragmentValueAt.R = -1.0f;
                        fragmentValueAt.P = false;
                    }
                }
            }
        }
    }

    public void a(AbstractC0047k abstractC0047k, AbstractC0045i abstractC0045i, Fragment fragment) {
        if (this.s != null) {
            throw new IllegalStateException("Already attached");
        }
        this.s = abstractC0047k;
        this.t = abstractC0045i;
        this.u = fragment;
    }

    public void a(h hVar, boolean z) {
        if (!z) {
            A();
        }
        synchronized (this) {
            if (!this.z && this.s != null) {
                if (this.g == null) {
                    this.g = new ArrayList<>();
                }
                this.g.add(hVar);
                x();
                return;
            }
            if (!z) {
                throw new IllegalStateException("Activity has been destroyed");
            }
        }
    }

    @Override // androidx.fragment.app.AbstractC0048l
    public void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        int size;
        int size2;
        int size3;
        int size4;
        int size5;
        String str2 = str + "    ";
        SparseArray<Fragment> sparseArray = this.k;
        if (sparseArray != null && (size5 = sparseArray.size()) > 0) {
            printWriter.print(str);
            printWriter.print("Active Fragments in ");
            printWriter.print(Integer.toHexString(System.identityHashCode(this)));
            printWriter.println(":");
            for (int i2 = 0; i2 < size5; i2++) {
                Fragment fragmentValueAt = this.k.valueAt(i2);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(i2);
                printWriter.print(": ");
                printWriter.println(fragmentValueAt);
                if (fragmentValueAt != null) {
                    fragmentValueAt.a(str2, fileDescriptor, printWriter, strArr);
                }
            }
        }
        int size6 = this.j.size();
        if (size6 > 0) {
            printWriter.print(str);
            printWriter.println("Added Fragments:");
            for (int i3 = 0; i3 < size6; i3++) {
                Fragment fragment = this.j.get(i3);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(i3);
                printWriter.print(": ");
                printWriter.println(fragment.toString());
            }
        }
        ArrayList<Fragment> arrayList = this.m;
        if (arrayList != null && (size4 = arrayList.size()) > 0) {
            printWriter.print(str);
            printWriter.println("Fragments Created Menus:");
            for (int i4 = 0; i4 < size4; i4++) {
                Fragment fragment2 = this.m.get(i4);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(i4);
                printWriter.print(": ");
                printWriter.println(fragment2.toString());
            }
        }
        ArrayList<C0037a> arrayList2 = this.l;
        if (arrayList2 != null && (size3 = arrayList2.size()) > 0) {
            printWriter.print(str);
            printWriter.println("Back Stack:");
            for (int i5 = 0; i5 < size3; i5++) {
                C0037a c0037a = this.l.get(i5);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(i5);
                printWriter.print(": ");
                printWriter.println(c0037a.toString());
                c0037a.a(str2, fileDescriptor, printWriter, strArr);
            }
        }
        synchronized (this) {
            if (this.n != null && (size2 = this.n.size()) > 0) {
                printWriter.print(str);
                printWriter.println("Back Stack Indices:");
                for (int i6 = 0; i6 < size2; i6++) {
                    Object obj = (C0037a) this.n.get(i6);
                    printWriter.print(str);
                    printWriter.print("  #");
                    printWriter.print(i6);
                    printWriter.print(": ");
                    printWriter.println(obj);
                }
            }
            if (this.o != null && this.o.size() > 0) {
                printWriter.print(str);
                printWriter.print("mAvailBackStackIndices: ");
                printWriter.println(Arrays.toString(this.o.toArray()));
            }
        }
        ArrayList<h> arrayList3 = this.g;
        if (arrayList3 != null && (size = arrayList3.size()) > 0) {
            printWriter.print(str);
            printWriter.println("Pending Actions:");
            for (int i7 = 0; i7 < size; i7++) {
                Object obj2 = (h) this.g.get(i7);
                printWriter.print(str);
                printWriter.print("  #");
                printWriter.print(i7);
                printWriter.print(": ");
                printWriter.println(obj2);
            }
        }
        printWriter.print(str);
        printWriter.println("FragmentManager misc state:");
        printWriter.print(str);
        printWriter.print("  mHost=");
        printWriter.println(this.s);
        printWriter.print(str);
        printWriter.print("  mContainer=");
        printWriter.println(this.t);
        if (this.u != null) {
            printWriter.print(str);
            printWriter.print("  mParent=");
            printWriter.println(this.u);
        }
        printWriter.print(str);
        printWriter.print("  mCurState=");
        printWriter.print(this.r);
        printWriter.print(" mStateSaved=");
        printWriter.print(this.x);
        printWriter.print(" mStopped=");
        printWriter.print(this.y);
        printWriter.print(" mDestroyed=");
        printWriter.println(this.z);
        if (this.w) {
            printWriter.print(str);
            printWriter.print("  mNeedMenuInvalidate=");
            printWriter.println(this.w);
        }
        if (this.A != null) {
            printWriter.print(str);
            printWriter.print("  mNoTransactionsBecause=");
            printWriter.println(this.A);
        }
    }

    public void a(boolean z) {
        for (int size = this.j.size() - 1; size >= 0; size--) {
            Fragment fragment = this.j.get(size);
            if (fragment != null) {
                fragment.d(z);
            }
        }
    }

    public boolean a(Menu menu, MenuInflater menuInflater) {
        if (this.r < 1) {
            return false;
        }
        ArrayList<Fragment> arrayList = null;
        boolean z = false;
        for (int i2 = 0; i2 < this.j.size(); i2++) {
            Fragment fragment = this.j.get(i2);
            if (fragment != null && fragment.b(menu, menuInflater)) {
                if (arrayList == null) {
                    arrayList = new ArrayList<>();
                }
                arrayList.add(fragment);
                z = true;
            }
        }
        if (this.m != null) {
            for (int i3 = 0; i3 < this.m.size(); i3++) {
                Fragment fragment2 = this.m.get(i3);
                if (arrayList == null || !arrayList.contains(fragment2)) {
                    fragment2.I();
                }
            }
        }
        this.m = arrayList;
        return z;
    }

    public boolean a(MenuItem menuItem) {
        if (this.r < 1) {
            return false;
        }
        for (int i2 = 0; i2 < this.j.size(); i2++) {
            Fragment fragment = this.j.get(i2);
            if (fragment != null && fragment.c(menuItem)) {
                return true;
            }
        }
        return false;
    }

    boolean a(ArrayList<C0037a> arrayList, ArrayList<Boolean> arrayList2, String str, int i2, int i3) {
        int size;
        ArrayList<C0037a> arrayList3 = this.l;
        if (arrayList3 == null) {
            return false;
        }
        if (str == null && i2 < 0 && (i3 & 1) == 0) {
            int size2 = arrayList3.size() - 1;
            if (size2 < 0) {
                return false;
            }
            arrayList.add(this.l.remove(size2));
            arrayList2.add(true);
        } else {
            if (str != null || i2 >= 0) {
                size = this.l.size() - 1;
                while (size >= 0) {
                    C0037a c0037a = this.l.get(size);
                    if ((str != null && str.equals(c0037a.d())) || (i2 >= 0 && i2 == c0037a.m)) {
                        break;
                    }
                    size--;
                }
                if (size < 0) {
                    return false;
                }
                if ((i3 & 1) != 0) {
                    while (true) {
                        size--;
                        if (size < 0) {
                            break;
                        }
                        C0037a c0037a2 = this.l.get(size);
                        if (str == null || !str.equals(c0037a2.d())) {
                            if (i2 < 0 || i2 != c0037a2.m) {
                                break;
                            }
                        }
                    }
                }
            } else {
                size = -1;
            }
            if (size == this.l.size() - 1) {
                return false;
            }
            for (int size3 = this.l.size() - 1; size3 > size; size3--) {
                arrayList.add(this.l.remove(size3));
                arrayList2.add(true);
            }
        }
        return true;
    }

    public int b(C0037a c0037a) {
        synchronized (this) {
            if (this.o != null && this.o.size() > 0) {
                int iIntValue = this.o.remove(this.o.size() - 1).intValue();
                if (f400a) {
                    Log.v("FragmentManager", "Adding back stack index " + iIntValue + " with " + c0037a);
                }
                this.n.set(iIntValue, c0037a);
                return iIntValue;
            }
            if (this.n == null) {
                this.n = new ArrayList<>();
            }
            int size = this.n.size();
            if (f400a) {
                Log.v("FragmentManager", "Setting back stack index " + size + " to " + c0037a);
            }
            this.n.add(c0037a);
            return size;
        }
    }

    public Fragment b(String str) {
        Fragment fragmentA;
        SparseArray<Fragment> sparseArray = this.k;
        if (sparseArray == null || str == null) {
            return null;
        }
        for (int size = sparseArray.size() - 1; size >= 0; size--) {
            Fragment fragmentValueAt = this.k.valueAt(size);
            if (fragmentValueAt != null && (fragmentA = fragmentValueAt.a(str)) != null) {
                return fragmentA;
            }
        }
        return null;
    }

    public void b(int i2) {
        synchronized (this) {
            this.n.set(i2, null);
            if (this.o == null) {
                this.o = new ArrayList<>();
            }
            if (f400a) {
                Log.v("FragmentManager", "Freeing back stack index " + i2);
            }
            this.o.add(Integer.valueOf(i2));
        }
    }

    void b(Fragment fragment) {
        Animator animator;
        if (fragment.K != null) {
            c cVarA = a(fragment, fragment.q(), !fragment.C, fragment.r());
            if (cVarA == null || (animator = cVarA.f409b) == null) {
                if (cVarA != null) {
                    b(fragment.K, cVarA);
                    fragment.K.startAnimation(cVarA.f408a);
                    cVarA.f408a.start();
                }
                fragment.K.setVisibility((!fragment.C || fragment.C()) ? 0 : 8);
                if (fragment.C()) {
                    fragment.f(false);
                }
            } else {
                animator.setTarget(fragment.K);
                if (!fragment.C) {
                    fragment.K.setVisibility(0);
                } else if (fragment.C()) {
                    fragment.f(false);
                } else {
                    ViewGroup viewGroup = fragment.J;
                    View view = fragment.K;
                    viewGroup.startViewTransition(view);
                    cVarA.f409b.addListener(new q(this, viewGroup, view, fragment));
                }
                b(fragment.K, cVarA);
                cVarA.f409b.start();
            }
        }
        if (fragment.m && fragment.G && fragment.H) {
            this.w = true;
        }
        fragment.Q = false;
        fragment.a(fragment.C);
    }

    void b(Fragment fragment, Context context, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).b(fragment, context, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.b(this, fragment, context);
            }
        }
    }

    void b(Fragment fragment, Bundle bundle, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).b(fragment, bundle, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.b(this, fragment, bundle);
            }
        }
    }

    void b(Fragment fragment, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).b(fragment, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.a(this, fragment);
            }
        }
    }

    public void b(boolean z) {
        for (int size = this.j.size() - 1; size >= 0; size--) {
            Fragment fragment = this.j.get(size);
            if (fragment != null) {
                fragment.e(z);
            }
        }
    }

    @Override // androidx.fragment.app.AbstractC0048l
    public boolean b() {
        boolean zP = p();
        D();
        return zP;
    }

    public boolean b(Menu menu) {
        if (this.r < 1) {
            return false;
        }
        boolean z = false;
        for (int i2 = 0; i2 < this.j.size(); i2++) {
            Fragment fragment = this.j.get(i2);
            if (fragment != null && fragment.d(menu)) {
                z = true;
            }
        }
        return z;
    }

    public boolean b(MenuItem menuItem) {
        if (this.r < 1) {
            return false;
        }
        for (int i2 = 0; i2 < this.j.size(); i2++) {
            Fragment fragment = this.j.get(i2);
            if (fragment != null && fragment.d(menuItem)) {
                return true;
            }
        }
        return false;
    }

    @Override // androidx.fragment.app.AbstractC0048l
    public List<Fragment> c() {
        List<Fragment> list;
        if (this.j.isEmpty()) {
            return Collections.emptyList();
        }
        synchronized (this.j) {
            list = (List) this.j.clone();
        }
        return list;
    }

    public void c(Fragment fragment) {
        if (f400a) {
            Log.v("FragmentManager", "detach: " + fragment);
        }
        if (fragment.D) {
            return;
        }
        fragment.D = true;
        if (fragment.m) {
            if (f400a) {
                Log.v("FragmentManager", "remove from detach: " + fragment);
            }
            synchronized (this.j) {
                this.j.remove(fragment);
            }
            if (fragment.G && fragment.H) {
                this.w = true;
            }
            fragment.m = false;
        }
    }

    void c(Fragment fragment, Bundle bundle, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).c(fragment, bundle, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.c(this, fragment, bundle);
            }
        }
    }

    void c(Fragment fragment, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).c(fragment, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.b(this, fragment);
            }
        }
    }

    boolean c(int i2) {
        return this.r >= i2;
    }

    void d(Fragment fragment) {
        if (!fragment.o || fragment.r) {
            return;
        }
        fragment.b(fragment.i(fragment.f307d), (ViewGroup) null, fragment.f307d);
        View view = fragment.K;
        if (view == null) {
            fragment.L = null;
            return;
        }
        fragment.L = view;
        view.setSaveFromParentEnabled(false);
        if (fragment.C) {
            fragment.K.setVisibility(8);
        }
        fragment.a(fragment.K, fragment.f307d);
        a(fragment, fragment.K, fragment.f307d, false);
    }

    void d(Fragment fragment, Bundle bundle, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).d(fragment, bundle, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.d(this, fragment, bundle);
            }
        }
    }

    void d(Fragment fragment, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).d(fragment, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.c(this, fragment);
            }
        }
    }

    @Override // androidx.fragment.app.AbstractC0048l
    public boolean d() {
        return this.x || this.y;
    }

    public void e(Fragment fragment) {
        if (f400a) {
            Log.v("FragmentManager", "hide: " + fragment);
        }
        if (fragment.C) {
            return;
        }
        fragment.C = true;
        fragment.Q = true ^ fragment.Q;
    }

    void e(Fragment fragment, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).e(fragment, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.d(this, fragment);
            }
        }
    }

    @Override // androidx.fragment.app.AbstractC0048l
    public boolean e() {
        A();
        return a((String) null, -1, 0);
    }

    public void f() {
        this.x = false;
        this.y = false;
        e(2);
    }

    void f(Fragment fragment) {
        if (fragment.g >= 0) {
            return;
        }
        int i2 = this.i;
        this.i = i2 + 1;
        fragment.a(i2, this.u);
        if (this.k == null) {
            this.k = new SparseArray<>();
        }
        this.k.put(fragment.g, fragment);
        if (f400a) {
            Log.v("FragmentManager", "Allocated fragment index " + fragment);
        }
    }

    void f(Fragment fragment, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).f(fragment, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.e(this, fragment);
            }
        }
    }

    public void g() {
        this.x = false;
        this.y = false;
        e(1);
    }

    void g(Fragment fragment) {
        if (fragment.g < 0) {
            return;
        }
        if (f400a) {
            Log.v("FragmentManager", "Freeing fragment index " + fragment);
        }
        this.k.put(fragment.g, null);
        fragment.z();
    }

    void g(Fragment fragment, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).g(fragment, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.f(this, fragment);
            }
        }
    }

    public void h() {
        this.z = true;
        p();
        e(0);
        this.s = null;
        this.t = null;
        this.u = null;
    }

    void h(Fragment fragment) {
        if (fragment == null) {
            return;
        }
        int iMin = this.r;
        if (fragment.n) {
            iMin = fragment.D() ? Math.min(iMin, 1) : Math.min(iMin, 0);
        }
        a(fragment, iMin, fragment.q(), fragment.r(), false);
        if (fragment.K != null) {
            Fragment fragmentP = p(fragment);
            if (fragmentP != null) {
                View view = fragmentP.K;
                ViewGroup viewGroup = fragment.J;
                int iIndexOfChild = viewGroup.indexOfChild(view);
                int iIndexOfChild2 = viewGroup.indexOfChild(fragment.K);
                if (iIndexOfChild2 < iIndexOfChild) {
                    viewGroup.removeViewAt(iIndexOfChild2);
                    viewGroup.addView(fragment.K, iIndexOfChild);
                }
            }
            if (fragment.P && fragment.J != null) {
                float f2 = fragment.R;
                if (f2 > 0.0f) {
                    fragment.K.setAlpha(f2);
                }
                fragment.R = 0.0f;
                fragment.P = false;
                c cVarA = a(fragment, fragment.q(), true, fragment.r());
                if (cVarA != null) {
                    b(fragment.K, cVarA);
                    Animation animation = cVarA.f408a;
                    if (animation != null) {
                        fragment.K.startAnimation(animation);
                    } else {
                        cVarA.f409b.setTarget(fragment.K);
                        cVarA.f409b.start();
                    }
                }
            }
        }
        if (fragment.Q) {
            b(fragment);
        }
    }

    void h(Fragment fragment, boolean z) {
        Fragment fragment2 = this.u;
        if (fragment2 != null) {
            AbstractC0048l abstractC0048lO = fragment2.o();
            if (abstractC0048lO instanceof s) {
                ((s) abstractC0048lO).h(fragment, true);
            }
        }
        for (f fVar : this.q) {
            if (!z || fVar.f417b) {
                fVar.f416a.g(this, fragment);
            }
        }
    }

    public void i() {
        e(1);
    }

    void i(Fragment fragment) {
        a(fragment, this.r, 0, 0, false);
    }

    public void j() {
        for (int i2 = 0; i2 < this.j.size(); i2++) {
            Fragment fragment = this.j.get(i2);
            if (fragment != null) {
                fragment.T();
            }
        }
    }

    public void j(Fragment fragment) {
        if (fragment.M) {
            if (this.h) {
                this.B = true;
            } else {
                fragment.M = false;
                a(fragment, this.r, 0, 0, false);
            }
        }
    }

    public void k() {
        e(3);
    }

    public void k(Fragment fragment) {
        if (f400a) {
            Log.v("FragmentManager", "remove: " + fragment + " nesting=" + fragment.s);
        }
        boolean z = !fragment.D();
        if (!fragment.D || z) {
            synchronized (this.j) {
                this.j.remove(fragment);
            }
            if (fragment.G && fragment.H) {
                this.w = true;
            }
            fragment.m = false;
            fragment.n = true;
        }
    }

    Bundle l(Fragment fragment) {
        Bundle bundle;
        if (this.F == null) {
            this.F = new Bundle();
        }
        fragment.j(this.F);
        d(fragment, this.F, false);
        if (this.F.isEmpty()) {
            bundle = null;
        } else {
            bundle = this.F;
            this.F = null;
        }
        if (fragment.K != null) {
            m(fragment);
        }
        if (fragment.f308e != null) {
            if (bundle == null) {
                bundle = new Bundle();
            }
            bundle.putSparseParcelableArray("android:view_state", fragment.f308e);
        }
        if (!fragment.N) {
            if (bundle == null) {
                bundle = new Bundle();
            }
            bundle.putBoolean("android:user_visible_hint", fragment.N);
        }
        return bundle;
    }

    public void l() {
        this.x = false;
        this.y = false;
        e(4);
    }

    public void m() {
        this.x = false;
        this.y = false;
        e(3);
    }

    void m(Fragment fragment) {
        if (fragment.L == null) {
            return;
        }
        SparseArray<Parcelable> sparseArray = this.G;
        if (sparseArray == null) {
            this.G = new SparseArray<>();
        } else {
            sparseArray.clear();
        }
        fragment.L.saveHierarchyState(this.G);
        if (this.G.size() > 0) {
            fragment.f308e = this.G;
            this.G = null;
        }
    }

    public void n() {
        this.y = true;
        e(2);
    }

    public void n(Fragment fragment) {
        if (fragment == null || (this.k.get(fragment.g) == fragment && (fragment.u == null || fragment.o() == this))) {
            this.v = fragment;
            return;
        }
        throw new IllegalArgumentException("Fragment " + fragment + " is not an active fragment of FragmentManager " + this);
    }

    void o() {
        if (this.B) {
            this.B = false;
            y();
        }
    }

    public void o(Fragment fragment) {
        if (f400a) {
            Log.v("FragmentManager", "show: " + fragment);
        }
        if (fragment.C) {
            fragment.C = false;
            fragment.Q = !fragment.Q;
        }
    }

    @Override // android.view.LayoutInflater.Factory2
    public View onCreateView(View view, String str, Context context, AttributeSet attributeSet) {
        Fragment fragment;
        if (!"fragment".equals(str)) {
            return null;
        }
        String attributeValue = attributeSet.getAttributeValue(null, "class");
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, g.f418a);
        if (attributeValue == null) {
            attributeValue = typedArrayObtainStyledAttributes.getString(0);
        }
        String str2 = attributeValue;
        int resourceId = typedArrayObtainStyledAttributes.getResourceId(1, -1);
        String string = typedArrayObtainStyledAttributes.getString(2);
        typedArrayObtainStyledAttributes.recycle();
        if (!Fragment.a(this.s.c(), str2)) {
            return null;
        }
        int id = view != null ? view.getId() : 0;
        if (id == -1 && resourceId == -1 && string == null) {
            throw new IllegalArgumentException(attributeSet.getPositionDescription() + ": Must specify unique android:id, android:tag, or have a parent with an id for " + str2);
        }
        Fragment fragmentA = resourceId != -1 ? a(resourceId) : null;
        if (fragmentA == null && string != null) {
            fragmentA = a(string);
        }
        if (fragmentA == null && id != -1) {
            fragmentA = a(id);
        }
        if (f400a) {
            Log.v("FragmentManager", "onCreateView: id=0x" + Integer.toHexString(resourceId) + " fname=" + str2 + " existing=" + fragmentA);
        }
        if (fragmentA == null) {
            Fragment fragmentA2 = this.t.a(context, str2, null);
            fragmentA2.o = true;
            fragmentA2.z = resourceId != 0 ? resourceId : id;
            fragmentA2.A = id;
            fragmentA2.B = string;
            fragmentA2.p = true;
            fragmentA2.t = this;
            AbstractC0047k abstractC0047k = this.s;
            fragmentA2.u = abstractC0047k;
            fragmentA2.a(abstractC0047k.c(), attributeSet, fragmentA2.f307d);
            a(fragmentA2, true);
            fragment = fragmentA2;
        } else {
            if (fragmentA.p) {
                throw new IllegalArgumentException(attributeSet.getPositionDescription() + ": Duplicate id 0x" + Integer.toHexString(resourceId) + ", tag " + string + ", or parent id 0x" + Integer.toHexString(id) + " with another fragment for " + str2);
            }
            fragmentA.p = true;
            AbstractC0047k abstractC0047k2 = this.s;
            fragmentA.u = abstractC0047k2;
            if (!fragmentA.F) {
                fragmentA.a(abstractC0047k2.c(), attributeSet, fragmentA.f307d);
            }
            fragment = fragmentA;
        }
        if (this.r >= 1 || !fragment.o) {
            i(fragment);
        } else {
            a(fragment, 1, 0, 0, false);
        }
        View view2 = fragment.K;
        if (view2 != null) {
            if (resourceId != 0) {
                view2.setId(resourceId);
            }
            if (fragment.K.getTag() == null) {
                fragment.K.setTag(string);
            }
            return fragment.K;
        }
        throw new IllegalStateException("Fragment " + str2 + " did not create a view.");
    }

    @Override // android.view.LayoutInflater.Factory
    public View onCreateView(String str, Context context, AttributeSet attributeSet) {
        return onCreateView(null, str, context, attributeSet);
    }

    public boolean p() {
        c(true);
        boolean z = false;
        while (b(this.C, this.D)) {
            this.h = true;
            try {
                c(this.C, this.D);
                B();
                z = true;
            } catch (Throwable th) {
                B();
                throw th;
            }
        }
        o();
        z();
        return z;
    }

    LayoutInflater.Factory2 q() {
        return this;
    }

    public Fragment r() {
        return this.v;
    }

    public void s() {
        this.I = null;
        this.x = false;
        this.y = false;
        int size = this.j.size();
        for (int i2 = 0; i2 < size; i2++) {
            Fragment fragment = this.j.get(i2);
            if (fragment != null) {
                fragment.G();
            }
        }
    }

    void t() {
        if (this.p != null) {
            for (int i2 = 0; i2 < this.p.size(); i2++) {
                this.p.get(i2).onBackStackChanged();
            }
        }
    }

    public String toString() {
        StringBuilder sb = new StringBuilder(128);
        sb.append("FragmentManager{");
        sb.append(Integer.toHexString(System.identityHashCode(this)));
        sb.append(" in ");
        Object obj = this.u;
        if (obj == null) {
            obj = this.s;
        }
        b.d.c.a.a(obj, sb);
        sb.append("}}");
        return sb.toString();
    }

    t u() {
        a(this.I);
        return this.I;
    }

    Parcelable v() {
        int[] iArr;
        int size;
        D();
        C();
        p();
        this.x = true;
        BackStackState[] backStackStateArr = null;
        this.I = null;
        SparseArray<Fragment> sparseArray = this.k;
        if (sparseArray == null || sparseArray.size() <= 0) {
            return null;
        }
        int size2 = this.k.size();
        FragmentState[] fragmentStateArr = new FragmentState[size2];
        boolean z = false;
        for (int i2 = 0; i2 < size2; i2++) {
            Fragment fragmentValueAt = this.k.valueAt(i2);
            if (fragmentValueAt != null) {
                if (fragmentValueAt.g < 0) {
                    a(new IllegalStateException("Failure saving state: active " + fragmentValueAt + " has cleared index: " + fragmentValueAt.g));
                    throw null;
                }
                FragmentState fragmentState = new FragmentState(fragmentValueAt);
                fragmentStateArr[i2] = fragmentState;
                if (fragmentValueAt.f306c <= 0 || fragmentState.k != null) {
                    fragmentState.k = fragmentValueAt.f307d;
                } else {
                    fragmentState.k = l(fragmentValueAt);
                    Fragment fragment = fragmentValueAt.j;
                    if (fragment != null) {
                        if (fragment.g < 0) {
                            a(new IllegalStateException("Failure saving state: " + fragmentValueAt + " has target not in fragment manager: " + fragmentValueAt.j));
                            throw null;
                        }
                        if (fragmentState.k == null) {
                            fragmentState.k = new Bundle();
                        }
                        a(fragmentState.k, "android:target_state", fragmentValueAt.j);
                        int i3 = fragmentValueAt.l;
                        if (i3 != 0) {
                            fragmentState.k.putInt("android:target_req_state", i3);
                        }
                    }
                }
                if (f400a) {
                    Log.v("FragmentManager", "Saved state of " + fragmentValueAt + ": " + fragmentState.k);
                }
                z = true;
            }
        }
        if (!z) {
            if (f400a) {
                Log.v("FragmentManager", "saveAllState: no fragments!");
            }
            return null;
        }
        int size3 = this.j.size();
        if (size3 > 0) {
            iArr = new int[size3];
            for (int i4 = 0; i4 < size3; i4++) {
                iArr[i4] = this.j.get(i4).g;
                if (iArr[i4] < 0) {
                    a(new IllegalStateException("Failure saving state: active " + this.j.get(i4) + " has cleared index: " + iArr[i4]));
                    throw null;
                }
                if (f400a) {
                    Log.v("FragmentManager", "saveAllState: adding fragment #" + i4 + ": " + this.j.get(i4));
                }
            }
        } else {
            iArr = null;
        }
        ArrayList<C0037a> arrayList = this.l;
        if (arrayList != null && (size = arrayList.size()) > 0) {
            backStackStateArr = new BackStackState[size];
            for (int i5 = 0; i5 < size; i5++) {
                backStackStateArr[i5] = new BackStackState(this.l.get(i5));
                if (f400a) {
                    Log.v("FragmentManager", "saveAllState: adding back stack #" + i5 + ": " + this.l.get(i5));
                }
            }
        }
        FragmentManagerState fragmentManagerState = new FragmentManagerState();
        fragmentManagerState.f325a = fragmentStateArr;
        fragmentManagerState.f326b = iArr;
        fragmentManagerState.f327c = backStackStateArr;
        Fragment fragment2 = this.v;
        if (fragment2 != null) {
            fragmentManagerState.f328d = fragment2.g;
        }
        fragmentManagerState.f329e = this.i;
        w();
        return fragmentManagerState;
    }

    void w() {
        ArrayList arrayList;
        ArrayList arrayList2;
        ArrayList arrayList3;
        t tVar;
        if (this.k != null) {
            arrayList = null;
            arrayList2 = null;
            arrayList3 = null;
            for (int i2 = 0; i2 < this.k.size(); i2++) {
                Fragment fragmentValueAt = this.k.valueAt(i2);
                if (fragmentValueAt != null) {
                    if (fragmentValueAt.E) {
                        if (arrayList == null) {
                            arrayList = new ArrayList();
                        }
                        arrayList.add(fragmentValueAt);
                        Fragment fragment = fragmentValueAt.j;
                        fragmentValueAt.k = fragment != null ? fragment.g : -1;
                        if (f400a) {
                            Log.v("FragmentManager", "retainNonConfig: keeping retained " + fragmentValueAt);
                        }
                    }
                    s sVar = fragmentValueAt.v;
                    if (sVar != null) {
                        sVar.w();
                        tVar = fragmentValueAt.v.I;
                    } else {
                        tVar = fragmentValueAt.w;
                    }
                    if (arrayList2 == null && tVar != null) {
                        arrayList2 = new ArrayList(this.k.size());
                        for (int i3 = 0; i3 < i2; i3++) {
                            arrayList2.add(null);
                        }
                    }
                    if (arrayList2 != null) {
                        arrayList2.add(tVar);
                    }
                    if (arrayList3 == null && fragmentValueAt.x != null) {
                        arrayList3 = new ArrayList(this.k.size());
                        for (int i4 = 0; i4 < i2; i4++) {
                            arrayList3.add(null);
                        }
                    }
                    if (arrayList3 != null) {
                        arrayList3.add(fragmentValueAt.x);
                    }
                }
            }
        } else {
            arrayList = null;
            arrayList2 = null;
            arrayList3 = null;
        }
        if (arrayList == null && arrayList2 == null && arrayList3 == null) {
            this.I = null;
        } else {
            this.I = new t(arrayList, arrayList2, arrayList3);
        }
    }

    void x() {
        synchronized (this) {
            boolean z = false;
            boolean z2 = (this.H == null || this.H.isEmpty()) ? false : true;
            if (this.g != null && this.g.size() == 1) {
                z = true;
            }
            if (z2 || z) {
                this.s.e().removeCallbacks(this.J);
                this.s.e().post(this.J);
            }
        }
    }

    void y() {
        if (this.k == null) {
            return;
        }
        for (int i2 = 0; i2 < this.k.size(); i2++) {
            Fragment fragmentValueAt = this.k.valueAt(i2);
            if (fragmentValueAt != null) {
                j(fragmentValueAt);
            }
        }
    }
}
