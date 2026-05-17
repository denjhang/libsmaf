package androidx.slidingpanelayout.widget;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import androidx.customview.view.AbsSavedState;
import b.d.d.n;
import b.e.a.c;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class SlidingPaneLayout extends ViewGroup {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f587a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f588b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Drawable f589c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Drawable f590d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final int f591e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private boolean f592f;
    View g;
    float h;
    private float i;
    int j;
    boolean k;
    private int l;
    private float m;
    private float n;
    private d o;
    final b.e.a.c p;
    boolean q;
    private boolean r;
    private final Rect s;
    final ArrayList<b> t;
    private Method u;
    private Field v;
    private boolean w;

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final int[] f593a = {R.attr.layout_weight};

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public float f594b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        boolean f595c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        boolean f596d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        Paint f597e;

        public LayoutParams() {
            super(-1, -1);
            this.f594b = 0.0f;
        }

        public LayoutParams(Context context, AttributeSet attributeSet) {
            super(context, attributeSet);
            this.f594b = 0.0f;
            TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, f593a);
            this.f594b = typedArrayObtainStyledAttributes.getFloat(0, 0.0f);
            typedArrayObtainStyledAttributes.recycle();
        }

        public LayoutParams(ViewGroup.LayoutParams layoutParams) {
            super(layoutParams);
            this.f594b = 0.0f;
        }

        public LayoutParams(ViewGroup.MarginLayoutParams marginLayoutParams) {
            super(marginLayoutParams);
            this.f594b = 0.0f;
        }
    }

    static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = new androidx.slidingpanelayout.widget.a();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        boolean f598c;

        SavedState(Parcel parcel, ClassLoader classLoader) {
            super(parcel, classLoader);
            this.f598c = parcel.readInt() != 0;
        }

        SavedState(Parcelable parcelable) {
            super(parcelable);
        }

        @Override // androidx.customview.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.f598c ? 1 : 0);
        }
    }

    class a extends b.d.d.a {

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final Rect f599c = new Rect();

        a() {
        }

        private void a(b.d.d.a.b bVar, b.d.d.a.b bVar2) {
            Rect rect = this.f599c;
            bVar2.a(rect);
            bVar.c(rect);
            bVar2.b(rect);
            bVar.d(rect);
            bVar.i(bVar2.s());
            bVar.c(bVar2.e());
            bVar.a(bVar2.b());
            bVar.b(bVar2.c());
            bVar.c(bVar2.l());
            bVar.b(bVar2.k());
            bVar.d(bVar2.m());
            bVar.e(bVar2.n());
            bVar.a(bVar2.h());
            bVar.h(bVar2.r());
            bVar.f(bVar2.o());
            bVar.a(bVar2.a());
            bVar.b(bVar2.d());
        }

        @Override // b.d.d.a
        public void a(View view, b.d.d.a.b bVar) {
            b.d.d.a.b bVarA = b.d.d.a.b.a(bVar);
            super.a(view, bVarA);
            a(bVar, bVarA);
            bVarA.t();
            bVar.a(SlidingPaneLayout.class.getName());
            bVar.c(view);
            Object objE = n.e(view);
            if (objE instanceof View) {
                bVar.b((View) objE);
            }
            int childCount = SlidingPaneLayout.this.getChildCount();
            for (int i = 0; i < childCount; i++) {
                View childAt = SlidingPaneLayout.this.getChildAt(i);
                if (!b(childAt) && childAt.getVisibility() == 0) {
                    n.c(childAt, 1);
                    bVar.a(childAt);
                }
            }
        }

        @Override // b.d.d.a
        public boolean a(ViewGroup viewGroup, View view, AccessibilityEvent accessibilityEvent) {
            if (b(view)) {
                return false;
            }
            return super.a(viewGroup, view, accessibilityEvent);
        }

        @Override // b.d.d.a
        public void b(View view, AccessibilityEvent accessibilityEvent) {
            super.b(view, accessibilityEvent);
            accessibilityEvent.setClassName(SlidingPaneLayout.class.getName());
        }

        public boolean b(View view) {
            return SlidingPaneLayout.this.e(view);
        }
    }

    private class b implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final View f601a;

        b(View view) {
            this.f601a = view;
        }

        @Override // java.lang.Runnable
        public void run() {
            if (this.f601a.getParent() == SlidingPaneLayout.this) {
                this.f601a.setLayerType(0, null);
                SlidingPaneLayout.this.d(this.f601a);
            }
            SlidingPaneLayout.this.t.remove(this);
        }
    }

    private class c extends c.a {
        c() {
        }

        @Override // b.e.a.c.a
        public int a(View view) {
            return SlidingPaneLayout.this.j;
        }

        @Override // b.e.a.c.a
        public int a(View view, int i, int i2) {
            LayoutParams layoutParams = (LayoutParams) SlidingPaneLayout.this.g.getLayoutParams();
            if (SlidingPaneLayout.this.b()) {
                int width = SlidingPaneLayout.this.getWidth() - ((SlidingPaneLayout.this.getPaddingRight() + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin) + SlidingPaneLayout.this.g.getWidth());
                return Math.max(Math.min(i, width), width - SlidingPaneLayout.this.j);
            }
            int paddingLeft = SlidingPaneLayout.this.getPaddingLeft() + ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin;
            return Math.min(Math.max(i, paddingLeft), SlidingPaneLayout.this.j + paddingLeft);
        }

        @Override // b.e.a.c.a
        public void a(int i, int i2) {
            SlidingPaneLayout slidingPaneLayout = SlidingPaneLayout.this;
            slidingPaneLayout.p.a(slidingPaneLayout.g, i2);
        }

        @Override // b.e.a.c.a
        public void a(View view, float f2, float f3) {
            int paddingLeft;
            LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
            if (SlidingPaneLayout.this.b()) {
                int paddingRight = SlidingPaneLayout.this.getPaddingRight() + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin;
                if (f2 < 0.0f || (f2 == 0.0f && SlidingPaneLayout.this.h > 0.5f)) {
                    paddingRight += SlidingPaneLayout.this.j;
                }
                paddingLeft = (SlidingPaneLayout.this.getWidth() - paddingRight) - SlidingPaneLayout.this.g.getWidth();
            } else {
                paddingLeft = ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin + SlidingPaneLayout.this.getPaddingLeft();
                if (f2 > 0.0f || (f2 == 0.0f && SlidingPaneLayout.this.h > 0.5f)) {
                    paddingLeft += SlidingPaneLayout.this.j;
                }
            }
            SlidingPaneLayout.this.p.d(paddingLeft, view.getTop());
            SlidingPaneLayout.this.invalidate();
        }

        @Override // b.e.a.c.a
        public void a(View view, int i) {
            SlidingPaneLayout.this.f();
        }

        @Override // b.e.a.c.a
        public void a(View view, int i, int i2, int i3, int i4) {
            SlidingPaneLayout.this.a(i);
            SlidingPaneLayout.this.invalidate();
        }

        @Override // b.e.a.c.a
        public int b(View view, int i, int i2) {
            return view.getTop();
        }

        @Override // b.e.a.c.a
        public boolean b(View view, int i) {
            if (SlidingPaneLayout.this.k) {
                return false;
            }
            return ((LayoutParams) view.getLayoutParams()).f595c;
        }

        @Override // b.e.a.c.a
        public void c(int i) {
            SlidingPaneLayout slidingPaneLayout;
            boolean z;
            if (SlidingPaneLayout.this.p.f() == 0) {
                SlidingPaneLayout slidingPaneLayout2 = SlidingPaneLayout.this;
                if (slidingPaneLayout2.h == 0.0f) {
                    slidingPaneLayout2.f(slidingPaneLayout2.g);
                    SlidingPaneLayout slidingPaneLayout3 = SlidingPaneLayout.this;
                    slidingPaneLayout3.a(slidingPaneLayout3.g);
                    slidingPaneLayout = SlidingPaneLayout.this;
                    z = false;
                } else {
                    slidingPaneLayout2.b(slidingPaneLayout2.g);
                    slidingPaneLayout = SlidingPaneLayout.this;
                    z = true;
                }
                slidingPaneLayout.q = z;
            }
        }
    }

    public interface d {
        void a(View view);

        void a(View view, float f2);

        void b(View view);
    }

    public SlidingPaneLayout(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public SlidingPaneLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f587a = -858993460;
        this.r = true;
        this.s = new Rect();
        this.t = new ArrayList<>();
        float f2 = context.getResources().getDisplayMetrics().density;
        this.f591e = (int) ((32.0f * f2) + 0.5f);
        setWillNotDraw(false);
        n.a(this, new a());
        n.c(this, 1);
        this.p = b.e.a.c.a(this, 0.5f, new c());
        this.p.a(f2 * 400.0f);
    }

    /* JADX WARN: Removed duplicated region for block: B:9:0x001c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(float r10) {
        /*
            r9 = this;
            boolean r0 = r9.b()
            android.view.View r1 = r9.g
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            androidx.slidingpanelayout.widget.SlidingPaneLayout$LayoutParams r1 = (androidx.slidingpanelayout.widget.SlidingPaneLayout.LayoutParams) r1
            boolean r2 = r1.f596d
            r3 = 0
            if (r2 == 0) goto L1c
            if (r0 == 0) goto L16
            int r1 = r1.rightMargin
            goto L18
        L16:
            int r1 = r1.leftMargin
        L18:
            if (r1 > 0) goto L1c
            r1 = 1
            goto L1d
        L1c:
            r1 = 0
        L1d:
            int r2 = r9.getChildCount()
        L21:
            if (r3 >= r2) goto L5b
            android.view.View r4 = r9.getChildAt(r3)
            android.view.View r5 = r9.g
            if (r4 != r5) goto L2c
            goto L58
        L2c:
            float r5 = r9.i
            r6 = 1065353216(0x3f800000, float:1.0)
            float r5 = r6 - r5
            int r7 = r9.l
            float r8 = (float) r7
            float r5 = r5 * r8
            int r5 = (int) r5
            r9.i = r10
            float r8 = r6 - r10
            float r7 = (float) r7
            float r8 = r8 * r7
            int r7 = (int) r8
            int r5 = r5 - r7
            if (r0 == 0) goto L44
            int r5 = -r5
        L44:
            r4.offsetLeftAndRight(r5)
            if (r1 == 0) goto L58
            if (r0 == 0) goto L4f
            float r5 = r9.i
            float r5 = r5 - r6
            goto L53
        L4f:
            float r5 = r9.i
            float r5 = r6 - r5
        L53:
            int r6 = r9.f588b
            r9.a(r4, r5, r6)
        L58:
            int r3 = r3 + 1
            goto L21
        L5b:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.slidingpanelayout.widget.SlidingPaneLayout.a(float):void");
    }

    private void a(View view, float f2, int i) {
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        if (f2 > 0.0f && i != 0) {
            int i2 = (((int) ((((-16777216) & i) >>> 24) * f2)) << 24) | (i & 16777215);
            if (layoutParams.f597e == null) {
                layoutParams.f597e = new Paint();
            }
            layoutParams.f597e.setColorFilter(new PorterDuffColorFilter(i2, PorterDuff.Mode.SRC_OVER));
            if (view.getLayerType() != 2) {
                view.setLayerType(2, layoutParams.f597e);
            }
            d(view);
            return;
        }
        if (view.getLayerType() != 0) {
            Paint paint = layoutParams.f597e;
            if (paint != null) {
                paint.setColorFilter(null);
            }
            b bVar = new b(view);
            this.t.add(bVar);
            n.a(this, bVar);
        }
    }

    private boolean a(View view, int i) {
        if (!this.r && !a(0.0f, i)) {
            return false;
        }
        this.q = false;
        return true;
    }

    private boolean b(View view, int i) {
        if (!this.r && !a(1.0f, i)) {
            return false;
        }
        this.q = true;
        return true;
    }

    private static boolean g(View view) {
        Drawable background;
        if (view.isOpaque()) {
            return true;
        }
        return Build.VERSION.SDK_INT < 18 && (background = view.getBackground()) != null && background.getOpacity() == -1;
    }

    void a(int i) {
        if (this.g == null) {
            this.h = 0.0f;
            return;
        }
        boolean zB = b();
        LayoutParams layoutParams = (LayoutParams) this.g.getLayoutParams();
        int width = this.g.getWidth();
        if (zB) {
            i = (getWidth() - i) - width;
        }
        this.h = (i - ((zB ? getPaddingRight() : getPaddingLeft()) + (zB ? ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin : ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin))) / this.j;
        if (this.l != 0) {
            a(this.h);
        }
        if (layoutParams.f596d) {
            a(this.g, this.h, this.f587a);
        }
        c(this.g);
    }

    void a(View view) {
        d dVar = this.o;
        if (dVar != null) {
            dVar.b(view);
        }
        sendAccessibilityEvent(32);
    }

    public boolean a() {
        return a(this.g, 0);
    }

    boolean a(float f2, int i) {
        int paddingLeft;
        if (!this.f592f) {
            return false;
        }
        boolean zB = b();
        LayoutParams layoutParams = (LayoutParams) this.g.getLayoutParams();
        if (zB) {
            paddingLeft = (int) (getWidth() - (((getPaddingRight() + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin) + (f2 * this.j)) + this.g.getWidth()));
        } else {
            paddingLeft = (int) (getPaddingLeft() + ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin + (f2 * this.j));
        }
        b.e.a.c cVar = this.p;
        View view = this.g;
        if (!cVar.b(view, paddingLeft, view.getTop())) {
            return false;
        }
        f();
        n.l(this);
        return true;
    }

    void b(View view) {
        d dVar = this.o;
        if (dVar != null) {
            dVar.a(view);
        }
        sendAccessibilityEvent(32);
    }

    boolean b() {
        return n.d(this) == 1;
    }

    void c(View view) {
        d dVar = this.o;
        if (dVar != null) {
            dVar.a(view, this.h);
        }
    }

    public boolean c() {
        return !this.f592f || this.h == 1.0f;
    }

    @Override // android.view.ViewGroup
    protected boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return (layoutParams instanceof LayoutParams) && super.checkLayoutParams(layoutParams);
    }

    @Override // android.view.View
    public void computeScroll() {
        if (this.p.a(true)) {
            if (this.f592f) {
                n.l(this);
            } else {
                this.p.a();
            }
        }
    }

    void d(View view) {
        Field field;
        int i = Build.VERSION.SDK_INT;
        if (i >= 17) {
            n.a(view, ((LayoutParams) view.getLayoutParams()).f597e);
            return;
        }
        if (i >= 16) {
            if (!this.w) {
                try {
                    this.u = View.class.getDeclaredMethod("getDisplayList", null);
                } catch (NoSuchMethodException e2) {
                    Log.e("SlidingPaneLayout", "Couldn't fetch getDisplayList method; dimming won't work right.", e2);
                }
                try {
                    this.v = View.class.getDeclaredField("mRecreateDisplayList");
                    this.v.setAccessible(true);
                } catch (NoSuchFieldException e3) {
                    Log.e("SlidingPaneLayout", "Couldn't fetch mRecreateDisplayList field; dimming will be slow.", e3);
                }
                this.w = true;
            }
            if (this.u == null || (field = this.v) == null) {
                view.invalidate();
                return;
            }
            try {
                field.setBoolean(view, true);
                this.u.invoke(view, null);
            } catch (Exception e4) {
                Log.e("SlidingPaneLayout", "Error refreshing display list state", e4);
            }
        }
        n.a(this, view.getLeft(), view.getTop(), view.getRight(), view.getBottom());
    }

    public boolean d() {
        return this.f592f;
    }

    @Override // android.view.View
    public void draw(Canvas canvas) {
        int i;
        int right;
        super.draw(canvas);
        Drawable drawable = b() ? this.f590d : this.f589c;
        View childAt = getChildCount() > 1 ? getChildAt(1) : null;
        if (childAt == null || drawable == null) {
            return;
        }
        int top = childAt.getTop();
        int bottom = childAt.getBottom();
        int intrinsicWidth = drawable.getIntrinsicWidth();
        if (b()) {
            right = childAt.getRight();
            i = intrinsicWidth + right;
        } else {
            int left = childAt.getLeft();
            int i2 = left - intrinsicWidth;
            i = left;
            right = i2;
        }
        drawable.setBounds(right, top, i, bottom);
        drawable.draw(canvas);
    }

    @Override // android.view.ViewGroup
    protected boolean drawChild(Canvas canvas, View view, long j) {
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        int iSave = canvas.save();
        if (this.f592f && !layoutParams.f595c && this.g != null) {
            canvas.getClipBounds(this.s);
            if (b()) {
                Rect rect = this.s;
                rect.left = Math.max(rect.left, this.g.getRight());
            } else {
                Rect rect2 = this.s;
                rect2.right = Math.min(rect2.right, this.g.getLeft());
            }
            canvas.clipRect(this.s);
        }
        boolean zDrawChild = super.drawChild(canvas, view, j);
        canvas.restoreToCount(iSave);
        return zDrawChild;
    }

    public boolean e() {
        return b(this.g, 0);
    }

    boolean e(View view) {
        if (view == null) {
            return false;
        }
        return this.f592f && ((LayoutParams) view.getLayoutParams()).f596d && this.h > 0.0f;
    }

    void f() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            if (childAt.getVisibility() == 4) {
                childAt.setVisibility(0);
            }
        }
    }

    void f(View view) {
        int left;
        int right;
        int top;
        int bottom;
        boolean z;
        int i;
        View view2 = view;
        boolean zB = b();
        int width = zB ? getWidth() - getPaddingRight() : getPaddingLeft();
        int paddingLeft = zB ? getPaddingLeft() : getWidth() - getPaddingRight();
        int paddingTop = getPaddingTop();
        int height = getHeight() - getPaddingBottom();
        if (view2 == null || !g(view)) {
            left = 0;
            right = 0;
            top = 0;
            bottom = 0;
        } else {
            left = view.getLeft();
            right = view.getRight();
            top = view.getTop();
            bottom = view.getBottom();
        }
        int childCount = getChildCount();
        int i2 = 0;
        while (i2 < childCount) {
            View childAt = getChildAt(i2);
            if (childAt == view2) {
                return;
            }
            if (childAt.getVisibility() == 8) {
                z = zB;
            } else {
                int iMax = Math.max(zB ? paddingLeft : width, childAt.getLeft());
                int iMax2 = Math.max(paddingTop, childAt.getTop());
                if (zB) {
                    z = zB;
                    i = width;
                } else {
                    z = zB;
                    i = paddingLeft;
                }
                childAt.setVisibility((iMax < left || iMax2 < top || Math.min(i, childAt.getRight()) > right || Math.min(height, childAt.getBottom()) > bottom) ? 0 : 4);
            }
            i2++;
            view2 = view;
            zB = z;
        }
    }

    @Override // android.view.ViewGroup
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new LayoutParams();
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new LayoutParams(getContext(), attributeSet);
    }

    @Override // android.view.ViewGroup
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof ViewGroup.MarginLayoutParams ? new LayoutParams((ViewGroup.MarginLayoutParams) layoutParams) : new LayoutParams(layoutParams);
    }

    public int getCoveredFadeColor() {
        return this.f588b;
    }

    public int getParallaxDistance() {
        return this.l;
    }

    public int getSliderFadeColor() {
        return this.f587a;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.r = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.r = true;
        int size = this.t.size();
        for (int i = 0; i < size; i++) {
            this.t.get(i).run();
        }
        this.t.clear();
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        boolean z;
        View childAt;
        int actionMasked = motionEvent.getActionMasked();
        if (!this.f592f && actionMasked == 0 && getChildCount() > 1 && (childAt = getChildAt(1)) != null) {
            this.q = !this.p.a(childAt, (int) motionEvent.getX(), (int) motionEvent.getY());
        }
        if (!this.f592f || (this.k && actionMasked != 0)) {
            this.p.b();
            return super.onInterceptTouchEvent(motionEvent);
        }
        if (actionMasked == 3 || actionMasked == 1) {
            this.p.b();
            return false;
        }
        if (actionMasked == 0) {
            this.k = false;
            float x = motionEvent.getX();
            float y = motionEvent.getY();
            this.m = x;
            this.n = y;
            if (this.p.a(this.g, (int) x, (int) y) && e(this.g)) {
                z = true;
            }
            return this.p.b(motionEvent) || z;
        }
        if (actionMasked == 2) {
            float x2 = motionEvent.getX();
            float y2 = motionEvent.getY();
            float fAbs = Math.abs(x2 - this.m);
            float fAbs2 = Math.abs(y2 - this.n);
            if (fAbs > this.p.e() && fAbs2 > fAbs) {
                this.p.b();
                this.k = true;
                return false;
            }
        }
        z = false;
        if (this.p.b(motionEvent)) {
            return true;
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int i5;
        int i6;
        int i7;
        int i8;
        int i9;
        boolean zB = b();
        if (zB) {
            this.p.d(2);
        } else {
            this.p.d(1);
        }
        int i10 = i3 - i;
        int paddingRight = zB ? getPaddingRight() : getPaddingLeft();
        int paddingLeft = zB ? getPaddingLeft() : getPaddingRight();
        int paddingTop = getPaddingTop();
        int childCount = getChildCount();
        if (this.r) {
            this.h = (this.f592f && this.q) ? 1.0f : 0.0f;
        }
        int width = paddingRight;
        int i11 = width;
        for (int i12 = 0; i12 < childCount; i12++) {
            View childAt = getChildAt(i12);
            if (childAt.getVisibility() != 8) {
                LayoutParams layoutParams = (LayoutParams) childAt.getLayoutParams();
                int measuredWidth = childAt.getMeasuredWidth();
                if (layoutParams.f595c) {
                    int i13 = i10 - paddingLeft;
                    int iMin = (Math.min(width, i13 - this.f591e) - i11) - (((ViewGroup.MarginLayoutParams) layoutParams).leftMargin + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin);
                    this.j = iMin;
                    int i14 = zB ? ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin : ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin;
                    layoutParams.f596d = ((i11 + i14) + iMin) + (measuredWidth / 2) > i13;
                    int i15 = (int) (iMin * this.h);
                    i5 = i14 + i15 + i11;
                    this.h = i15 / this.j;
                    i6 = 0;
                } else if (!this.f592f || (i7 = this.l) == 0) {
                    i5 = width;
                    i6 = 0;
                } else {
                    i6 = (int) ((1.0f - this.h) * i7);
                    i5 = width;
                }
                if (zB) {
                    i9 = (i10 - i5) + i6;
                    i8 = i9 - measuredWidth;
                } else {
                    i8 = i5 - i6;
                    i9 = i8 + measuredWidth;
                }
                childAt.layout(i8, paddingTop, i9, childAt.getMeasuredHeight() + paddingTop);
                width += childAt.getWidth();
                i11 = i5;
            }
        }
        if (this.r) {
            if (this.f592f) {
                if (this.l != 0) {
                    a(this.h);
                }
                if (((LayoutParams) this.g.getLayoutParams()).f596d) {
                    a(this.g, this.h, this.f587a);
                }
            } else {
                for (int i16 = 0; i16 < childCount; i16++) {
                    a(getChildAt(i16), 0.0f, this.f587a);
                }
            }
            f(this.g);
        }
        this.r = false;
    }

    /* JADX WARN: Removed duplicated region for block: B:122:0x01e4  */
    /* JADX WARN: Removed duplicated region for block: B:125:0x01fa  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00b1 A[PHI: r12
  0x00b1: PHI (r12v2 float) = (r12v1 float), (r12v3 float) binds: [B:35:0x00a9, B:37:0x00ae] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:61:0x010c  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x010e  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0116  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x013a  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected void onMeasure(int r22, int r23) {
        /*
            Method dump skipped, instruction units count: 569
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.slidingpanelayout.widget.SlidingPaneLayout.onMeasure(int, int):void");
    }

    @Override // android.view.View
    protected void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof SavedState)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        SavedState savedState = (SavedState) parcelable;
        super.onRestoreInstanceState(savedState.a());
        if (savedState.f598c) {
            e();
        } else {
            a();
        }
        this.q = savedState.f598c;
    }

    @Override // android.view.View
    protected Parcelable onSaveInstanceState() {
        SavedState savedState = new SavedState(super.onSaveInstanceState());
        savedState.f598c = d() ? c() : this.q;
        return savedState;
    }

    @Override // android.view.View
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        if (i != i3) {
            this.r = true;
        }
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (!this.f592f) {
            return super.onTouchEvent(motionEvent);
        }
        this.p.a(motionEvent);
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0) {
            float x = motionEvent.getX();
            float y = motionEvent.getY();
            this.m = x;
            this.n = y;
        } else if (actionMasked == 1 && e(this.g)) {
            float x2 = motionEvent.getX();
            float y2 = motionEvent.getY();
            float f2 = x2 - this.m;
            float f3 = y2 - this.n;
            int iE = this.p.e();
            if ((f2 * f2) + (f3 * f3) < iE * iE && this.p.a(this.g, (int) x2, (int) y2)) {
                a(this.g, 0);
            }
        }
        return true;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestChildFocus(View view, View view2) {
        super.requestChildFocus(view, view2);
        if (isInTouchMode() || this.f592f) {
            return;
        }
        this.q = view == this.g;
    }

    public void setCoveredFadeColor(int i) {
        this.f588b = i;
    }

    public void setPanelSlideListener(d dVar) {
        this.o = dVar;
    }

    public void setParallaxDistance(int i) {
        this.l = i;
        requestLayout();
    }

    @Deprecated
    public void setShadowDrawable(Drawable drawable) {
        setShadowDrawableLeft(drawable);
    }

    public void setShadowDrawableLeft(Drawable drawable) {
        this.f589c = drawable;
    }

    public void setShadowDrawableRight(Drawable drawable) {
        this.f590d = drawable;
    }

    @Deprecated
    public void setShadowResource(int i) {
        setShadowDrawable(getResources().getDrawable(i));
    }

    public void setShadowResourceLeft(int i) {
        setShadowDrawableLeft(androidx.core.content.a.b(getContext(), i));
    }

    public void setShadowResourceRight(int i) {
        setShadowDrawableRight(androidx.core.content.a.b(getContext(), i));
    }

    public void setSliderFadeColor(int i) {
        this.f587a = i;
    }
}
