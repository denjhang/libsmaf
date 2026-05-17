package androidx.swiperefreshlayout.widget;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.os.Build;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.animation.Animation;
import android.view.animation.DecelerateInterpolator;
import android.widget.AbsListView;
import android.widget.ListView;
import b.d.d.n;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class SwipeRefreshLayout extends ViewGroup implements b.d.d.i, b.d.d.f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f604a = "SwipeRefreshLayout";

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final int[] f605b = {R.attr.enabled};
    protected int A;
    int B;
    int C;
    d D;
    private Animation E;
    private Animation F;
    private Animation G;
    private Animation H;
    private Animation I;
    boolean J;
    private int K;
    boolean L;
    private a M;
    private Animation.AnimationListener N;
    private final Animation O;
    private final Animation P;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private View f606c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    b f607d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    boolean f608e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f609f;
    private float g;
    private float h;
    private final b.d.d.j i;
    private final b.d.d.g j;
    private final int[] k;
    private final int[] l;
    private boolean m;
    private int n;
    int o;
    private float p;
    private float q;
    private boolean r;
    private int s;
    boolean t;
    private boolean u;
    private final DecelerateInterpolator v;
    androidx.swiperefreshlayout.widget.a w;
    private int x;
    protected int y;
    float z;

    public interface a {
        boolean a(SwipeRefreshLayout swipeRefreshLayout, View view);
    }

    public interface b {
        void a();
    }

    public SwipeRefreshLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f608e = false;
        this.g = -1.0f;
        this.k = new int[2];
        this.l = new int[2];
        this.s = -1;
        this.x = -1;
        this.N = new e(this);
        this.O = new j(this);
        this.P = new k(this);
        this.f609f = ViewConfiguration.get(context).getScaledTouchSlop();
        this.n = getResources().getInteger(R.integer.config_mediumAnimTime);
        setWillNotDraw(false);
        this.v = new DecelerateInterpolator(2.0f);
        DisplayMetrics displayMetrics = getResources().getDisplayMetrics();
        this.K = (int) (displayMetrics.density * 40.0f);
        c();
        setChildrenDrawingOrderEnabled(true);
        this.B = (int) (displayMetrics.density * 64.0f);
        this.g = this.B;
        this.i = new b.d.d.j(this);
        this.j = new b.d.d.g(this);
        setNestedScrollingEnabled(true);
        int i = -this.K;
        this.o = i;
        this.A = i;
        a(1.0f);
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, f605b);
        setEnabled(typedArrayObtainStyledAttributes.getBoolean(0, true));
        typedArrayObtainStyledAttributes.recycle();
    }

    private Animation a(int i, int i2) {
        h hVar = new h(this, i, i2);
        hVar.setDuration(300L);
        this.w.a(null);
        this.w.clearAnimation();
        this.w.startAnimation(hVar);
        return hVar;
    }

    private void a(int i, Animation.AnimationListener animationListener) {
        this.y = i;
        this.O.reset();
        this.O.setDuration(200L);
        this.O.setInterpolator(this.v);
        if (animationListener != null) {
            this.w.a(animationListener);
        }
        this.w.clearAnimation();
        this.w.startAnimation(this.O);
    }

    private void a(MotionEvent motionEvent) {
        int actionIndex = motionEvent.getActionIndex();
        if (motionEvent.getPointerId(actionIndex) == this.s) {
            this.s = motionEvent.getPointerId(actionIndex == 0 ? 1 : 0);
        }
    }

    private void a(boolean z, boolean z2) {
        if (this.f608e != z) {
            this.J = z2;
            d();
            this.f608e = z;
            if (this.f608e) {
                a(this.o, this.N);
            } else {
                a(this.N);
            }
        }
    }

    private boolean a(Animation animation) {
        return (animation == null || !animation.hasStarted() || animation.hasEnded()) ? false : true;
    }

    private void b(float f2) {
        if (f2 > this.g) {
            a(true, true);
            return;
        }
        this.f608e = false;
        this.D.a(0.0f, 0.0f);
        b(this.o, this.t ? null : new i(this));
        this.D.a(false);
    }

    private void b(int i, Animation.AnimationListener animationListener) {
        if (this.t) {
            c(i, animationListener);
            return;
        }
        this.y = i;
        this.P.reset();
        this.P.setDuration(200L);
        this.P.setInterpolator(this.v);
        if (animationListener != null) {
            this.w.a(animationListener);
        }
        this.w.clearAnimation();
        this.w.startAnimation(this.P);
    }

    private void b(Animation.AnimationListener animationListener) {
        this.w.setVisibility(0);
        this.D.setAlpha(255);
        this.E = new f(this);
        this.E.setDuration(this.n);
        if (animationListener != null) {
            this.w.a(animationListener);
        }
        this.w.clearAnimation();
        this.w.startAnimation(this.E);
    }

    private void c() {
        this.w = new androidx.swiperefreshlayout.widget.a(getContext(), -328966);
        this.D = new d(getContext());
        this.D.a(1);
        this.w.setImageDrawable(this.D);
        this.w.setVisibility(8);
        addView(this.w);
    }

    private void c(float f2) {
        this.D.a(true);
        float fMin = Math.min(1.0f, Math.abs(f2 / this.g));
        double d2 = fMin;
        Double.isNaN(d2);
        float fMax = (((float) Math.max(d2 - 0.4d, 0.0d)) * 5.0f) / 3.0f;
        float fAbs = Math.abs(f2) - this.g;
        int i = this.C;
        if (i <= 0) {
            i = this.L ? this.B - this.A : this.B;
        }
        float f3 = i;
        double dMax = Math.max(0.0f, Math.min(fAbs, f3 * 2.0f) / f3) / 4.0f;
        double dPow = Math.pow(dMax, 2.0d);
        Double.isNaN(dMax);
        float f4 = ((float) (dMax - dPow)) * 2.0f;
        int i2 = this.A + ((int) ((f3 * fMin) + (f3 * f4 * 2.0f)));
        if (this.w.getVisibility() != 0) {
            this.w.setVisibility(0);
        }
        if (!this.t) {
            this.w.setScaleX(1.0f);
            this.w.setScaleY(1.0f);
        }
        if (this.t) {
            setAnimationProgress(Math.min(1.0f, f2 / this.g));
        }
        if (f2 < this.g) {
            if (this.D.getAlpha() > 76 && !a(this.G)) {
                f();
            }
        } else if (this.D.getAlpha() < 255 && !a(this.H)) {
            e();
        }
        this.D.a(0.0f, Math.min(0.8f, fMax * 0.8f));
        this.D.a(Math.min(1.0f, fMax));
        this.D.b((((fMax * 0.4f) - 0.25f) + (f4 * 2.0f)) * 0.5f);
        setTargetOffsetTopAndBottom(i2 - this.o);
    }

    private void c(int i, Animation.AnimationListener animationListener) {
        this.y = i;
        this.z = this.w.getScaleX();
        this.I = new l(this);
        this.I.setDuration(150L);
        if (animationListener != null) {
            this.w.a(animationListener);
        }
        this.w.clearAnimation();
        this.w.startAnimation(this.I);
    }

    private void d() {
        if (this.f606c == null) {
            for (int i = 0; i < getChildCount(); i++) {
                View childAt = getChildAt(i);
                if (!childAt.equals(this.w)) {
                    this.f606c = childAt;
                    return;
                }
            }
        }
    }

    private void d(float f2) {
        float f3 = this.q;
        float f4 = f2 - f3;
        int i = this.f609f;
        if (f4 <= i || this.r) {
            return;
        }
        this.p = f3 + i;
        this.r = true;
        this.D.setAlpha(76);
    }

    private void e() {
        this.H = a(this.D.getAlpha(), 255);
    }

    private void f() {
        this.G = a(this.D.getAlpha(), 76);
    }

    private void setColorViewAlpha(int i) {
        this.w.getBackground().setAlpha(i);
        this.D.setAlpha(i);
    }

    void a(float f2) {
        setTargetOffsetTopAndBottom((this.y + ((int) ((this.A - r0) * f2))) - this.w.getTop());
    }

    void a(Animation.AnimationListener animationListener) {
        this.F = new g(this);
        this.F.setDuration(150L);
        this.w.a(animationListener);
        this.w.clearAnimation();
        this.w.startAnimation(this.F);
    }

    public boolean a() {
        a aVar = this.M;
        if (aVar != null) {
            return aVar.a(this, this.f606c);
        }
        View view = this.f606c;
        return view instanceof ListView ? androidx.core.widget.d.a((ListView) view, -1) : view.canScrollVertically(-1);
    }

    void b() {
        this.w.clearAnimation();
        this.D.stop();
        this.w.setVisibility(8);
        setColorViewAlpha(255);
        if (this.t) {
            setAnimationProgress(0.0f);
        } else {
            setTargetOffsetTopAndBottom(this.A - this.o);
        }
        this.o = this.w.getTop();
    }

    @Override // android.view.View
    public boolean dispatchNestedFling(float f2, float f3, boolean z) {
        return this.j.a(f2, f3, z);
    }

    @Override // android.view.View
    public boolean dispatchNestedPreFling(float f2, float f3) {
        return this.j.a(f2, f3);
    }

    @Override // android.view.View
    public boolean dispatchNestedPreScroll(int i, int i2, int[] iArr, int[] iArr2) {
        return this.j.a(i, i2, iArr, iArr2);
    }

    @Override // android.view.View
    public boolean dispatchNestedScroll(int i, int i2, int i3, int i4, int[] iArr) {
        return this.j.a(i, i2, i3, i4, iArr);
    }

    @Override // android.view.ViewGroup
    protected int getChildDrawingOrder(int i, int i2) {
        int i3 = this.x;
        return i3 < 0 ? i2 : i2 == i + (-1) ? i3 : i2 >= i3 ? i2 + 1 : i2;
    }

    @Override // android.view.ViewGroup
    public int getNestedScrollAxes() {
        return this.i.a();
    }

    public int getProgressCircleDiameter() {
        return this.K;
    }

    public int getProgressViewEndOffset() {
        return this.B;
    }

    public int getProgressViewStartOffset() {
        return this.A;
    }

    @Override // android.view.View
    public boolean hasNestedScrollingParent() {
        return this.j.a();
    }

    @Override // android.view.View, b.d.d.f
    public boolean isNestedScrollingEnabled() {
        return this.j.b();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        b();
    }

    /* JADX WARN: Removed duplicated region for block: B:36:0x0058  */
    @Override // android.view.ViewGroup
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean onInterceptTouchEvent(android.view.MotionEvent r5) {
        /*
            r4 = this;
            r4.d()
            int r0 = r5.getActionMasked()
            boolean r1 = r4.u
            r2 = 0
            if (r1 == 0) goto L10
            if (r0 != 0) goto L10
            r4.u = r2
        L10:
            boolean r1 = r4.isEnabled()
            if (r1 == 0) goto L83
            boolean r1 = r4.u
            if (r1 != 0) goto L83
            boolean r1 = r4.a()
            if (r1 != 0) goto L83
            boolean r1 = r4.f608e
            if (r1 != 0) goto L83
            boolean r1 = r4.m
            if (r1 == 0) goto L29
            goto L83
        L29:
            if (r0 == 0) goto L5d
            r1 = 1
            r3 = -1
            if (r0 == r1) goto L58
            r1 = 2
            if (r0 == r1) goto L3d
            r1 = 3
            if (r0 == r1) goto L58
            r1 = 6
            if (r0 == r1) goto L39
            goto L80
        L39:
            r4.a(r5)
            goto L80
        L3d:
            int r0 = r4.s
            if (r0 != r3) goto L49
            java.lang.String r5 = androidx.swiperefreshlayout.widget.SwipeRefreshLayout.f604a
            java.lang.String r0 = "Got ACTION_MOVE event but don't have an active pointer id."
            android.util.Log.e(r5, r0)
            return r2
        L49:
            int r0 = r5.findPointerIndex(r0)
            if (r0 >= 0) goto L50
            return r2
        L50:
            float r5 = r5.getY(r0)
            r4.d(r5)
            goto L80
        L58:
            r4.r = r2
            r4.s = r3
            goto L80
        L5d:
            int r0 = r4.A
            androidx.swiperefreshlayout.widget.a r1 = r4.w
            int r1 = r1.getTop()
            int r0 = r0 - r1
            r4.setTargetOffsetTopAndBottom(r0)
            int r0 = r5.getPointerId(r2)
            r4.s = r0
            r4.r = r2
            int r0 = r4.s
            int r0 = r5.findPointerIndex(r0)
            if (r0 >= 0) goto L7a
            return r2
        L7a:
            float r5 = r5.getY(r0)
            r4.q = r5
        L80:
            boolean r5 = r4.r
            return r5
        L83:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.swiperefreshlayout.widget.SwipeRefreshLayout.onInterceptTouchEvent(android.view.MotionEvent):boolean");
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int measuredWidth = getMeasuredWidth();
        int measuredHeight = getMeasuredHeight();
        if (getChildCount() == 0) {
            return;
        }
        if (this.f606c == null) {
            d();
        }
        View view = this.f606c;
        if (view == null) {
            return;
        }
        int paddingLeft = getPaddingLeft();
        int paddingTop = getPaddingTop();
        view.layout(paddingLeft, paddingTop, ((measuredWidth - getPaddingLeft()) - getPaddingRight()) + paddingLeft, ((measuredHeight - getPaddingTop()) - getPaddingBottom()) + paddingTop);
        int measuredWidth2 = this.w.getMeasuredWidth();
        int measuredHeight2 = this.w.getMeasuredHeight();
        int i5 = measuredWidth / 2;
        int i6 = measuredWidth2 / 2;
        int i7 = this.o;
        this.w.layout(i5 - i6, i7, i5 + i6, measuredHeight2 + i7);
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        if (this.f606c == null) {
            d();
        }
        View view = this.f606c;
        if (view == null) {
            return;
        }
        view.measure(View.MeasureSpec.makeMeasureSpec((getMeasuredWidth() - getPaddingLeft()) - getPaddingRight(), 1073741824), View.MeasureSpec.makeMeasureSpec((getMeasuredHeight() - getPaddingTop()) - getPaddingBottom(), 1073741824));
        this.w.measure(View.MeasureSpec.makeMeasureSpec(this.K, 1073741824), View.MeasureSpec.makeMeasureSpec(this.K, 1073741824));
        this.x = -1;
        for (int i3 = 0; i3 < getChildCount(); i3++) {
            if (getChildAt(i3) == this.w) {
                this.x = i3;
                return;
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public boolean onNestedFling(View view, float f2, float f3, boolean z) {
        return dispatchNestedFling(f2, f3, z);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public boolean onNestedPreFling(View view, float f2, float f3) {
        return dispatchNestedPreFling(f2, f3);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public void onNestedPreScroll(View view, int i, int i2, int[] iArr) {
        if (i2 > 0) {
            float f2 = this.h;
            if (f2 > 0.0f) {
                float f3 = i2;
                if (f3 > f2) {
                    iArr[1] = i2 - ((int) f2);
                    this.h = 0.0f;
                } else {
                    this.h = f2 - f3;
                    iArr[1] = i2;
                }
                c(this.h);
            }
        }
        if (this.L && i2 > 0 && this.h == 0.0f && Math.abs(i2 - iArr[1]) > 0) {
            this.w.setVisibility(8);
        }
        int[] iArr2 = this.k;
        if (dispatchNestedPreScroll(i - iArr[0], i2 - iArr[1], iArr2, null)) {
            iArr[0] = iArr[0] + iArr2[0];
            iArr[1] = iArr[1] + iArr2[1];
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public void onNestedScroll(View view, int i, int i2, int i3, int i4) {
        dispatchNestedScroll(i, i2, i3, i4, this.l);
        if (i4 + this.l[1] >= 0 || a()) {
            return;
        }
        this.h += Math.abs(r11);
        c(this.h);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public void onNestedScrollAccepted(View view, View view2, int i) {
        this.i.a(view, view2, i);
        startNestedScroll(i & 2);
        this.h = 0.0f;
        this.m = true;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public boolean onStartNestedScroll(View view, View view2, int i) {
        return (!isEnabled() || this.u || this.f608e || (i & 2) == 0) ? false : true;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public void onStopNestedScroll(View view) {
        this.i.a(view);
        this.m = false;
        float f2 = this.h;
        if (f2 > 0.0f) {
            b(f2);
            this.h = 0.0f;
        }
        stopNestedScroll();
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (this.u && actionMasked == 0) {
            this.u = false;
        }
        if (!isEnabled() || this.u || a() || this.f608e || this.m) {
            return false;
        }
        if (actionMasked == 0) {
            this.s = motionEvent.getPointerId(0);
            this.r = false;
        } else {
            if (actionMasked == 1) {
                int iFindPointerIndex = motionEvent.findPointerIndex(this.s);
                if (iFindPointerIndex < 0) {
                    Log.e(f604a, "Got ACTION_UP event but don't have an active pointer id.");
                    return false;
                }
                if (this.r) {
                    float y = (motionEvent.getY(iFindPointerIndex) - this.p) * 0.5f;
                    this.r = false;
                    b(y);
                }
                this.s = -1;
                return false;
            }
            if (actionMasked == 2) {
                int iFindPointerIndex2 = motionEvent.findPointerIndex(this.s);
                if (iFindPointerIndex2 < 0) {
                    Log.e(f604a, "Got ACTION_MOVE event but have an invalid active pointer id.");
                    return false;
                }
                float y2 = motionEvent.getY(iFindPointerIndex2);
                d(y2);
                if (this.r) {
                    float f2 = (y2 - this.p) * 0.5f;
                    if (f2 <= 0.0f) {
                        return false;
                    }
                    c(f2);
                }
            } else {
                if (actionMasked == 3) {
                    return false;
                }
                if (actionMasked == 5) {
                    int actionIndex = motionEvent.getActionIndex();
                    if (actionIndex < 0) {
                        Log.e(f604a, "Got ACTION_POINTER_DOWN event but have an invalid action index.");
                        return false;
                    }
                    this.s = motionEvent.getPointerId(actionIndex);
                } else if (actionMasked == 6) {
                    a(motionEvent);
                }
            }
        }
        return true;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestDisallowInterceptTouchEvent(boolean z) {
        if (Build.VERSION.SDK_INT >= 21 || !(this.f606c instanceof AbsListView)) {
            View view = this.f606c;
            if (view == null || n.k(view)) {
                super.requestDisallowInterceptTouchEvent(z);
            }
        }
    }

    void setAnimationProgress(float f2) {
        this.w.setScaleX(f2);
        this.w.setScaleY(f2);
    }

    @Deprecated
    public void setColorScheme(int... iArr) {
        setColorSchemeResources(iArr);
    }

    public void setColorSchemeColors(int... iArr) {
        d();
        this.D.a(iArr);
    }

    public void setColorSchemeResources(int... iArr) {
        Context context = getContext();
        int[] iArr2 = new int[iArr.length];
        for (int i = 0; i < iArr.length; i++) {
            iArr2[i] = androidx.core.content.a.a(context, iArr[i]);
        }
        setColorSchemeColors(iArr2);
    }

    public void setDistanceToTriggerSync(int i) {
        this.g = i;
    }

    @Override // android.view.View
    public void setEnabled(boolean z) {
        super.setEnabled(z);
        if (z) {
            return;
        }
        b();
    }

    @Override // android.view.View
    public void setNestedScrollingEnabled(boolean z) {
        this.j.a(z);
    }

    public void setOnChildScrollUpCallback(a aVar) {
        this.M = aVar;
    }

    public void setOnRefreshListener(b bVar) {
        this.f607d = bVar;
    }

    @Deprecated
    public void setProgressBackgroundColor(int i) {
        setProgressBackgroundColorSchemeResource(i);
    }

    public void setProgressBackgroundColorSchemeColor(int i) {
        this.w.setBackgroundColor(i);
    }

    public void setProgressBackgroundColorSchemeResource(int i) {
        setProgressBackgroundColorSchemeColor(androidx.core.content.a.a(getContext(), i));
    }

    public void setRefreshing(boolean z) {
        if (!z || this.f608e == z) {
            a(z, false);
            return;
        }
        this.f608e = z;
        setTargetOffsetTopAndBottom((!this.L ? this.B + this.A : this.B) - this.o);
        this.J = false;
        b(this.N);
    }

    public void setSize(int i) {
        if (i == 0 || i == 1) {
            this.K = (int) (getResources().getDisplayMetrics().density * (i == 0 ? 56.0f : 40.0f));
            this.w.setImageDrawable(null);
            this.D.a(i);
            this.w.setImageDrawable(this.D);
        }
    }

    public void setSlingshotDistance(int i) {
        this.C = i;
    }

    void setTargetOffsetTopAndBottom(int i) {
        this.w.bringToFront();
        n.b(this.w, i);
        this.o = this.w.getTop();
    }

    @Override // android.view.View
    public boolean startNestedScroll(int i) {
        return this.j.b(i);
    }

    @Override // android.view.View, b.d.d.f
    public void stopNestedScroll() {
        this.j.c();
    }
}
