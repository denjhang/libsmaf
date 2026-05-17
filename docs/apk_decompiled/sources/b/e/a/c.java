package b.e.a;

import android.content.Context;
import android.util.Log;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.OverScroller;
import b.d.d.n;
import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Interpolator f791a = new b.e.a.a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f792b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f793c;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private float[] f795e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private float[] f796f;
    private float[] g;
    private float[] h;
    private int[] i;
    private int[] j;
    private int[] k;
    private int l;
    private VelocityTracker m;
    private float n;
    private float o;
    private int p;
    private int q;
    private OverScroller r;
    private final a s;
    private View t;
    private boolean u;
    private final ViewGroup v;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f794d = -1;
    private final Runnable w = new b(this);

    public static abstract class a {
        public int a(int i) {
            return i;
        }

        public abstract int a(View view);

        public abstract int a(View view, int i, int i2);

        public abstract void a(int i, int i2);

        public abstract void a(View view, float f2, float f3);

        public abstract void a(View view, int i);

        public abstract void a(View view, int i, int i2, int i3, int i4);

        public int b(View view) {
            return 0;
        }

        public abstract int b(View view, int i, int i2);

        public void b(int i, int i2) {
        }

        public boolean b(int i) {
            return false;
        }

        public abstract boolean b(View view, int i);

        public abstract void c(int i);
    }

    private c(Context context, ViewGroup viewGroup, a aVar) {
        if (viewGroup == null) {
            throw new IllegalArgumentException("Parent view may not be null");
        }
        if (aVar == null) {
            throw new IllegalArgumentException("Callback may not be null");
        }
        this.v = viewGroup;
        this.s = aVar;
        ViewConfiguration viewConfiguration = ViewConfiguration.get(context);
        this.p = (int) ((context.getResources().getDisplayMetrics().density * 20.0f) + 0.5f);
        this.f793c = viewConfiguration.getScaledTouchSlop();
        this.n = viewConfiguration.getScaledMaximumFlingVelocity();
        this.o = viewConfiguration.getScaledMinimumFlingVelocity();
        this.r = new OverScroller(context, f791a);
    }

    private float a(float f2, float f3, float f4) {
        float fAbs = Math.abs(f2);
        if (fAbs < f3) {
            return 0.0f;
        }
        return fAbs > f4 ? f2 > 0.0f ? f4 : -f4 : f2;
    }

    private int a(int i, int i2, int i3) {
        int iAbs = Math.abs(i);
        if (iAbs < i2) {
            return 0;
        }
        return iAbs > i3 ? i > 0 ? i3 : -i3 : i;
    }

    private int a(View view, int i, int i2, int i3, int i4) {
        float f2;
        float f3;
        float f4;
        float f5;
        int iA = a(i3, (int) this.o, (int) this.n);
        int iA2 = a(i4, (int) this.o, (int) this.n);
        int iAbs = Math.abs(i);
        int iAbs2 = Math.abs(i2);
        int iAbs3 = Math.abs(iA);
        int iAbs4 = Math.abs(iA2);
        int i5 = iAbs3 + iAbs4;
        int i6 = iAbs + iAbs2;
        if (iA != 0) {
            f2 = iAbs3;
            f3 = i5;
        } else {
            f2 = iAbs;
            f3 = i6;
        }
        float f6 = f2 / f3;
        if (iA2 != 0) {
            f4 = iAbs4;
            f5 = i5;
        } else {
            f4 = iAbs2;
            f5 = i6;
        }
        return (int) ((b(i, iA, this.s.a(view)) * f6) + (b(i2, iA2, this.s.b(view)) * (f4 / f5)));
    }

    public static c a(ViewGroup viewGroup, float f2, a aVar) {
        c cVarA = a(viewGroup, aVar);
        cVarA.f793c = (int) (cVarA.f793c * (1.0f / f2));
        return cVarA;
    }

    public static c a(ViewGroup viewGroup, a aVar) {
        return new c(viewGroup.getContext(), viewGroup, aVar);
    }

    private void a(float f2, float f3) {
        this.u = true;
        this.s.a(this.t, f2, f3);
        this.u = false;
        if (this.f792b == 1) {
            c(0);
        }
    }

    private void a(float f2, float f3, int i) {
        int i2 = a(f2, f3, i, 1) ? 1 : 0;
        if (a(f3, f2, i, 4)) {
            i2 |= 4;
        }
        if (a(f2, f3, i, 2)) {
            i2 |= 2;
        }
        if (a(f3, f2, i, 8)) {
            i2 |= 8;
        }
        if (i2 != 0) {
            int[] iArr = this.j;
            iArr[i] = iArr[i] | i2;
            this.s.a(i2, i);
        }
    }

    private void a(int i, int i2, int i3, int i4) {
        int left = this.t.getLeft();
        int top = this.t.getTop();
        if (i3 != 0) {
            i = this.s.a(this.t, i, i3);
            n.a(this.t, i - left);
        }
        int i5 = i;
        if (i4 != 0) {
            i2 = this.s.b(this.t, i2, i4);
            n.b(this.t, i2 - top);
        }
        int i6 = i2;
        if (i3 == 0 && i4 == 0) {
            return;
        }
        this.s.a(this.t, i5, i6, i5 - left, i6 - top);
    }

    private boolean a(float f2, float f3, int i, int i2) {
        float fAbs = Math.abs(f2);
        float fAbs2 = Math.abs(f3);
        if ((this.i[i] & i2) != i2 || (this.q & i2) == 0 || (this.k[i] & i2) == i2 || (this.j[i] & i2) == i2) {
            return false;
        }
        int i3 = this.f793c;
        if (fAbs <= i3 && fAbs2 <= i3) {
            return false;
        }
        if (fAbs >= fAbs2 * 0.5f || !this.s.b(i2)) {
            return (this.j[i] & i2) == 0 && fAbs > ((float) this.f793c);
        }
        int[] iArr = this.k;
        iArr[i] = iArr[i] | i2;
        return false;
    }

    private boolean a(View view, float f2, float f3) {
        if (view == null) {
            return false;
        }
        boolean z = this.s.a(view) > 0;
        boolean z2 = this.s.b(view) > 0;
        if (!z || !z2) {
            return z ? Math.abs(f2) > ((float) this.f793c) : z2 && Math.abs(f3) > ((float) this.f793c);
        }
        float f4 = (f2 * f2) + (f3 * f3);
        int i = this.f793c;
        return f4 > ((float) (i * i));
    }

    private float b(float f2) {
        return (float) Math.sin((f2 - 0.5f) * 0.47123894f);
    }

    private int b(int i, int i2, int i3) {
        if (i == 0) {
            return 0;
        }
        int width = this.v.getWidth();
        float f2 = width / 2;
        float fB = f2 + (b(Math.min(1.0f, Math.abs(i) / width)) * f2);
        int iAbs = Math.abs(i2);
        return Math.min(iAbs > 0 ? Math.round(Math.abs(fB / iAbs) * 1000.0f) * 4 : (int) (((Math.abs(i) / i3) + 1.0f) * 256.0f), 600);
    }

    private void b(float f2, float f3, int i) {
        f(i);
        float[] fArr = this.f795e;
        this.g[i] = f2;
        fArr[i] = f2;
        float[] fArr2 = this.f796f;
        this.h[i] = f3;
        fArr2[i] = f3;
        this.i[i] = e((int) f2, (int) f3);
        this.l |= 1 << i;
    }

    private boolean b(int i, int i2, int i3, int i4) {
        int left = this.t.getLeft();
        int top = this.t.getTop();
        int i5 = i - left;
        int i6 = i2 - top;
        if (i5 == 0 && i6 == 0) {
            this.r.abortAnimation();
            c(0);
            return false;
        }
        this.r.startScroll(left, top, i5, i6, a(this.t, i5, i6, i3, i4));
        c(2);
        return true;
    }

    private void c(MotionEvent motionEvent) {
        int pointerCount = motionEvent.getPointerCount();
        for (int i = 0; i < pointerCount; i++) {
            int pointerId = motionEvent.getPointerId(i);
            if (g(pointerId)) {
                float x = motionEvent.getX(i);
                float y = motionEvent.getY(i);
                this.g[pointerId] = x;
                this.h[pointerId] = y;
            }
        }
    }

    private int e(int i, int i2) {
        int i3 = i < this.v.getLeft() + this.p ? 1 : 0;
        if (i2 < this.v.getTop() + this.p) {
            i3 |= 4;
        }
        if (i > this.v.getRight() - this.p) {
            i3 |= 2;
        }
        return i2 > this.v.getBottom() - this.p ? i3 | 8 : i3;
    }

    private void e(int i) {
        if (this.f795e == null || !b(i)) {
            return;
        }
        this.f795e[i] = 0.0f;
        this.f796f[i] = 0.0f;
        this.g[i] = 0.0f;
        this.h[i] = 0.0f;
        this.i[i] = 0;
        this.j[i] = 0;
        this.k[i] = 0;
        this.l = ((1 << i) ^ (-1)) & this.l;
    }

    private void f(int i) {
        float[] fArr = this.f795e;
        if (fArr == null || fArr.length <= i) {
            int i2 = i + 1;
            float[] fArr2 = new float[i2];
            float[] fArr3 = new float[i2];
            float[] fArr4 = new float[i2];
            float[] fArr5 = new float[i2];
            int[] iArr = new int[i2];
            int[] iArr2 = new int[i2];
            int[] iArr3 = new int[i2];
            float[] fArr6 = this.f795e;
            if (fArr6 != null) {
                System.arraycopy(fArr6, 0, fArr2, 0, fArr6.length);
                float[] fArr7 = this.f796f;
                System.arraycopy(fArr7, 0, fArr3, 0, fArr7.length);
                float[] fArr8 = this.g;
                System.arraycopy(fArr8, 0, fArr4, 0, fArr8.length);
                float[] fArr9 = this.h;
                System.arraycopy(fArr9, 0, fArr5, 0, fArr9.length);
                int[] iArr4 = this.i;
                System.arraycopy(iArr4, 0, iArr, 0, iArr4.length);
                int[] iArr5 = this.j;
                System.arraycopy(iArr5, 0, iArr2, 0, iArr5.length);
                int[] iArr6 = this.k;
                System.arraycopy(iArr6, 0, iArr3, 0, iArr6.length);
            }
            this.f795e = fArr2;
            this.f796f = fArr3;
            this.g = fArr4;
            this.h = fArr5;
            this.i = iArr;
            this.j = iArr2;
            this.k = iArr3;
        }
    }

    private void g() {
        float[] fArr = this.f795e;
        if (fArr == null) {
            return;
        }
        Arrays.fill(fArr, 0.0f);
        Arrays.fill(this.f796f, 0.0f);
        Arrays.fill(this.g, 0.0f);
        Arrays.fill(this.h, 0.0f);
        Arrays.fill(this.i, 0);
        Arrays.fill(this.j, 0);
        Arrays.fill(this.k, 0);
        this.l = 0;
    }

    private boolean g(int i) {
        if (b(i)) {
            return true;
        }
        Log.e("ViewDragHelper", "Ignoring pointerId=" + i + " because ACTION_DOWN was not received for this pointer before ACTION_MOVE. It likely happened because  ViewDragHelper did not receive all the events in the event stream.");
        return false;
    }

    private void h() {
        this.m.computeCurrentVelocity(1000, this.n);
        a(a(this.m.getXVelocity(this.f794d), this.o, this.n), a(this.m.getYVelocity(this.f794d), this.o, this.n));
    }

    public void a() {
        b();
        if (this.f792b == 2) {
            int currX = this.r.getCurrX();
            int currY = this.r.getCurrY();
            this.r.abortAnimation();
            int currX2 = this.r.getCurrX();
            int currY2 = this.r.getCurrY();
            this.s.a(this.t, currX2, currY2, currX2 - currX, currY2 - currY);
        }
        c(0);
    }

    public void a(float f2) {
        this.o = f2;
    }

    public void a(MotionEvent motionEvent) {
        int i;
        int actionMasked = motionEvent.getActionMasked();
        int actionIndex = motionEvent.getActionIndex();
        if (actionMasked == 0) {
            b();
        }
        if (this.m == null) {
            this.m = VelocityTracker.obtain();
        }
        this.m.addMovement(motionEvent);
        int i2 = 0;
        if (actionMasked == 0) {
            float x = motionEvent.getX();
            float y = motionEvent.getY();
            int pointerId = motionEvent.getPointerId(0);
            View viewB = b((int) x, (int) y);
            b(x, y, pointerId);
            b(viewB, pointerId);
            int i3 = this.i[pointerId];
            int i4 = this.q;
            if ((i3 & i4) != 0) {
                this.s.b(i3 & i4, pointerId);
                return;
            }
            return;
        }
        if (actionMasked != 1) {
            if (actionMasked == 2) {
                if (this.f792b != 1) {
                    int pointerCount = motionEvent.getPointerCount();
                    while (i2 < pointerCount) {
                        int pointerId2 = motionEvent.getPointerId(i2);
                        if (g(pointerId2)) {
                            float x2 = motionEvent.getX(i2);
                            float y2 = motionEvent.getY(i2);
                            float f2 = x2 - this.f795e[pointerId2];
                            float f3 = y2 - this.f796f[pointerId2];
                            a(f2, f3, pointerId2);
                            if (this.f792b != 1) {
                                View viewB2 = b((int) x2, (int) y2);
                                if (a(viewB2, f2, f3) && b(viewB2, pointerId2)) {
                                    break;
                                }
                            } else {
                                break;
                            }
                        }
                        i2++;
                    }
                } else {
                    if (!g(this.f794d)) {
                        return;
                    }
                    int iFindPointerIndex = motionEvent.findPointerIndex(this.f794d);
                    float x3 = motionEvent.getX(iFindPointerIndex);
                    float y3 = motionEvent.getY(iFindPointerIndex);
                    float[] fArr = this.g;
                    int i5 = this.f794d;
                    int i6 = (int) (x3 - fArr[i5]);
                    int i7 = (int) (y3 - this.h[i5]);
                    a(this.t.getLeft() + i6, this.t.getTop() + i7, i6, i7);
                }
                c(motionEvent);
                return;
            }
            if (actionMasked != 3) {
                if (actionMasked == 5) {
                    int pointerId3 = motionEvent.getPointerId(actionIndex);
                    float x4 = motionEvent.getX(actionIndex);
                    float y4 = motionEvent.getY(actionIndex);
                    b(x4, y4, pointerId3);
                    if (this.f792b != 0) {
                        if (c((int) x4, (int) y4)) {
                            b(this.t, pointerId3);
                            return;
                        }
                        return;
                    } else {
                        b(b((int) x4, (int) y4), pointerId3);
                        int i8 = this.i[pointerId3];
                        int i9 = this.q;
                        if ((i8 & i9) != 0) {
                            this.s.b(i8 & i9, pointerId3);
                            return;
                        }
                        return;
                    }
                }
                if (actionMasked != 6) {
                    return;
                }
                int pointerId4 = motionEvent.getPointerId(actionIndex);
                if (this.f792b == 1 && pointerId4 == this.f794d) {
                    int pointerCount2 = motionEvent.getPointerCount();
                    while (true) {
                        if (i2 >= pointerCount2) {
                            i = -1;
                            break;
                        }
                        int pointerId5 = motionEvent.getPointerId(i2);
                        if (pointerId5 != this.f794d) {
                            View viewB3 = b((int) motionEvent.getX(i2), (int) motionEvent.getY(i2));
                            View view = this.t;
                            if (viewB3 == view && b(view, pointerId5)) {
                                i = this.f794d;
                                break;
                            }
                        }
                        i2++;
                    }
                    if (i == -1) {
                        h();
                    }
                }
                e(pointerId4);
                return;
            }
            if (this.f792b == 1) {
                a(0.0f, 0.0f);
            }
        } else if (this.f792b == 1) {
            h();
        }
        b();
    }

    public void a(View view, int i) {
        if (view.getParent() == this.v) {
            this.t = view;
            this.f794d = i;
            this.s.a(view, i);
            c(1);
            return;
        }
        throw new IllegalArgumentException("captureChildView: parameter must be a descendant of the ViewDragHelper's tracked parent view (" + this.v + ")");
    }

    public boolean a(int i) {
        int length = this.f795e.length;
        for (int i2 = 0; i2 < length; i2++) {
            if (a(i, i2)) {
                return true;
            }
        }
        return false;
    }

    public boolean a(int i, int i2) {
        if (!b(i2)) {
            return false;
        }
        boolean z = (i & 1) == 1;
        boolean z2 = (i & 2) == 2;
        float f2 = this.g[i2] - this.f795e[i2];
        float f3 = this.h[i2] - this.f796f[i2];
        if (!z || !z2) {
            return z ? Math.abs(f2) > ((float) this.f793c) : z2 && Math.abs(f3) > ((float) this.f793c);
        }
        float f4 = (f2 * f2) + (f3 * f3);
        int i3 = this.f793c;
        return f4 > ((float) (i3 * i3));
    }

    public boolean a(View view, int i, int i2) {
        return view != null && i >= view.getLeft() && i < view.getRight() && i2 >= view.getTop() && i2 < view.getBottom();
    }

    public boolean a(boolean z) {
        if (this.f792b == 2) {
            boolean zComputeScrollOffset = this.r.computeScrollOffset();
            int currX = this.r.getCurrX();
            int currY = this.r.getCurrY();
            int left = currX - this.t.getLeft();
            int top = currY - this.t.getTop();
            if (left != 0) {
                n.a(this.t, left);
            }
            if (top != 0) {
                n.b(this.t, top);
            }
            if (left != 0 || top != 0) {
                this.s.a(this.t, currX, currY, left, top);
            }
            if (zComputeScrollOffset && currX == this.r.getFinalX() && currY == this.r.getFinalY()) {
                this.r.abortAnimation();
                zComputeScrollOffset = false;
            }
            if (!zComputeScrollOffset) {
                if (z) {
                    this.v.post(this.w);
                } else {
                    c(0);
                }
            }
        }
        return this.f792b == 2;
    }

    public View b(int i, int i2) {
        for (int childCount = this.v.getChildCount() - 1; childCount >= 0; childCount--) {
            ViewGroup viewGroup = this.v;
            this.s.a(childCount);
            View childAt = viewGroup.getChildAt(childCount);
            if (i >= childAt.getLeft() && i < childAt.getRight() && i2 >= childAt.getTop() && i2 < childAt.getBottom()) {
                return childAt;
            }
        }
        return null;
    }

    public void b() {
        this.f794d = -1;
        g();
        VelocityTracker velocityTracker = this.m;
        if (velocityTracker != null) {
            velocityTracker.recycle();
            this.m = null;
        }
    }

    public boolean b(int i) {
        return ((1 << i) & this.l) != 0;
    }

    /* JADX WARN: Removed duplicated region for block: B:54:0x00e6  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x00ff  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean b(android.view.MotionEvent r17) {
        /*
            Method dump skipped, instruction units count: 315
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: b.e.a.c.b(android.view.MotionEvent):boolean");
    }

    boolean b(View view, int i) {
        if (view == this.t && this.f794d == i) {
            return true;
        }
        if (view == null || !this.s.b(view, i)) {
            return false;
        }
        this.f794d = i;
        a(view, i);
        return true;
    }

    public boolean b(View view, int i, int i2) {
        this.t = view;
        this.f794d = -1;
        boolean zB = b(i, i2, 0, 0);
        if (!zB && this.f792b == 0 && this.t != null) {
            this.t = null;
        }
        return zB;
    }

    public View c() {
        return this.t;
    }

    void c(int i) {
        this.v.removeCallbacks(this.w);
        if (this.f792b != i) {
            this.f792b = i;
            this.s.c(i);
            if (this.f792b == 0) {
                this.t = null;
            }
        }
    }

    public boolean c(int i, int i2) {
        return a(this.t, i, i2);
    }

    public int d() {
        return this.p;
    }

    public void d(int i) {
        this.q = i;
    }

    public boolean d(int i, int i2) {
        if (this.u) {
            return b(i, i2, (int) this.m.getXVelocity(this.f794d), (int) this.m.getYVelocity(this.f794d));
        }
        throw new IllegalStateException("Cannot settleCapturedViewAt outside of a call to Callback#onViewReleased");
    }

    public int e() {
        return this.f793c;
    }

    public int f() {
        return this.f792b;
    }
}
