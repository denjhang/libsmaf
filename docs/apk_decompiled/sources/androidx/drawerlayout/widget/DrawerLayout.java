package androidx.drawerlayout.widget;

import android.R;
import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.SystemClock;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowInsets;
import android.view.accessibility.AccessibilityEvent;
import androidx.customview.view.AbsSavedState;
import b.d.d.a.b;
import b.d.d.n;
import b.e.a.c;
import java.util.ArrayList;
import java.util.List;
import org.apache.http.HttpStatus;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class DrawerLayout extends ViewGroup {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int[] f244a = {R.attr.colorPrimaryDark};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static final int[] f245b = {R.attr.layout_gravity};

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    static final boolean f246c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final boolean f247d;
    private float A;
    private Drawable B;
    private Drawable C;
    private Drawable D;
    private CharSequence E;
    private CharSequence F;
    private Object G;
    private boolean H;
    private Drawable I;
    private Drawable J;
    private Drawable K;
    private Drawable L;
    private final ArrayList<View> M;
    private Rect N;
    private Matrix O;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final b f248e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private float f249f;
    private int g;
    private int h;
    private float i;
    private Paint j;
    private final b.e.a.c k;
    private final b.e.a.c l;
    private final d m;
    private final d n;
    private int o;
    private boolean p;
    private boolean q;
    private int r;
    private int s;
    private int t;
    private int u;
    private boolean v;
    private boolean w;
    private c x;
    private List<c> y;
    private float z;

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f250a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        float f251b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        boolean f252c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        int f253d;

        public LayoutParams(int i, int i2) {
            super(i, i2);
            this.f250a = 0;
        }

        public LayoutParams(Context context, AttributeSet attributeSet) {
            super(context, attributeSet);
            this.f250a = 0;
            TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, DrawerLayout.f245b);
            this.f250a = typedArrayObtainStyledAttributes.getInt(0, 0);
            typedArrayObtainStyledAttributes.recycle();
        }

        public LayoutParams(ViewGroup.LayoutParams layoutParams) {
            super(layoutParams);
            this.f250a = 0;
        }

        public LayoutParams(ViewGroup.MarginLayoutParams marginLayoutParams) {
            super(marginLayoutParams);
            this.f250a = 0;
        }

        public LayoutParams(LayoutParams layoutParams) {
            super((ViewGroup.MarginLayoutParams) layoutParams);
            this.f250a = 0;
            this.f250a = layoutParams.f250a;
        }
    }

    protected static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = new androidx.drawerlayout.widget.b();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f254c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        int f255d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        int f256e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        int f257f;
        int g;

        public SavedState(Parcel parcel, ClassLoader classLoader) {
            super(parcel, classLoader);
            this.f254c = 0;
            this.f254c = parcel.readInt();
            this.f255d = parcel.readInt();
            this.f256e = parcel.readInt();
            this.f257f = parcel.readInt();
            this.g = parcel.readInt();
        }

        public SavedState(Parcelable parcelable) {
            super(parcelable);
            this.f254c = 0;
        }

        @Override // androidx.customview.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.f254c);
            parcel.writeInt(this.f255d);
            parcel.writeInt(this.f256e);
            parcel.writeInt(this.f257f);
            parcel.writeInt(this.g);
        }
    }

    class a extends b.d.d.a {

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final Rect f258c = new Rect();

        a() {
        }

        private void a(b.d.d.a.b bVar, ViewGroup viewGroup) {
            int childCount = viewGroup.getChildCount();
            for (int i = 0; i < childCount; i++) {
                View childAt = viewGroup.getChildAt(i);
                if (DrawerLayout.g(childAt)) {
                    bVar.a(childAt);
                }
            }
        }

        private void a(b.d.d.a.b bVar, b.d.d.a.b bVar2) {
            Rect rect = this.f258c;
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
        }

        @Override // b.d.d.a
        public void a(View view, b.d.d.a.b bVar) {
            if (DrawerLayout.f246c) {
                super.a(view, bVar);
            } else {
                b.d.d.a.b bVarA = b.d.d.a.b.a(bVar);
                super.a(view, bVarA);
                bVar.c(view);
                Object objE = n.e(view);
                if (objE instanceof View) {
                    bVar.b((View) objE);
                }
                a(bVar, bVarA);
                bVarA.t();
                a(bVar, (ViewGroup) view);
            }
            bVar.a(DrawerLayout.class.getName());
            bVar.d(false);
            bVar.e(false);
            bVar.a(b.a.f759a);
            bVar.a(b.a.f760b);
        }

        @Override // b.d.d.a
        public boolean a(View view, AccessibilityEvent accessibilityEvent) {
            if (accessibilityEvent.getEventType() != 32) {
                return super.a(view, accessibilityEvent);
            }
            List<CharSequence> text = accessibilityEvent.getText();
            View viewD = DrawerLayout.this.d();
            if (viewD == null) {
                return true;
            }
            CharSequence charSequenceC = DrawerLayout.this.c(DrawerLayout.this.e(viewD));
            if (charSequenceC == null) {
                return true;
            }
            text.add(charSequenceC);
            return true;
        }

        @Override // b.d.d.a
        public boolean a(ViewGroup viewGroup, View view, AccessibilityEvent accessibilityEvent) {
            if (DrawerLayout.f246c || DrawerLayout.g(view)) {
                return super.a(viewGroup, view, accessibilityEvent);
            }
            return false;
        }

        @Override // b.d.d.a
        public void b(View view, AccessibilityEvent accessibilityEvent) {
            super.b(view, accessibilityEvent);
            accessibilityEvent.setClassName(DrawerLayout.class.getName());
        }
    }

    static final class b extends b.d.d.a {
        b() {
        }

        @Override // b.d.d.a
        public void a(View view, b.d.d.a.b bVar) {
            super.a(view, bVar);
            if (DrawerLayout.g(view)) {
                return;
            }
            bVar.b((View) null);
        }
    }

    public interface c {
        void a(int i);

        void a(View view);

        void a(View view, float f2);

        void b(View view);
    }

    /* JADX INFO: Access modifiers changed from: private */
    class d extends c.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f260a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private b.e.a.c f261b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final Runnable f262c = new androidx.drawerlayout.widget.c(this);

        d(int i) {
            this.f260a = i;
        }

        private void c() {
            View viewA = DrawerLayout.this.a(this.f260a == 3 ? 5 : 3);
            if (viewA != null) {
                DrawerLayout.this.a(viewA);
            }
        }

        @Override // b.e.a.c.a
        public int a(View view) {
            if (DrawerLayout.this.j(view)) {
                return view.getWidth();
            }
            return 0;
        }

        @Override // b.e.a.c.a
        public int a(View view, int i, int i2) {
            int width;
            int width2;
            if (DrawerLayout.this.a(view, 3)) {
                width2 = -view.getWidth();
                width = 0;
            } else {
                width = DrawerLayout.this.getWidth();
                width2 = width - view.getWidth();
            }
            return Math.max(width2, Math.min(i, width));
        }

        void a() {
            View viewA;
            int width;
            int iD = this.f261b.d();
            boolean z = this.f260a == 3;
            if (z) {
                viewA = DrawerLayout.this.a(3);
                width = (viewA != null ? -viewA.getWidth() : 0) + iD;
            } else {
                viewA = DrawerLayout.this.a(5);
                width = DrawerLayout.this.getWidth() - iD;
            }
            if (viewA != null) {
                if (((!z || viewA.getLeft() >= width) && (z || viewA.getLeft() <= width)) || DrawerLayout.this.d(viewA) != 0) {
                    return;
                }
                LayoutParams layoutParams = (LayoutParams) viewA.getLayoutParams();
                this.f261b.b(viewA, width, viewA.getTop());
                layoutParams.f252c = true;
                DrawerLayout.this.invalidate();
                c();
                DrawerLayout.this.a();
            }
        }

        @Override // b.e.a.c.a
        public void a(int i, int i2) {
            DrawerLayout drawerLayout;
            int i3;
            if ((i & 1) == 1) {
                drawerLayout = DrawerLayout.this;
                i3 = 3;
            } else {
                drawerLayout = DrawerLayout.this;
                i3 = 5;
            }
            View viewA = drawerLayout.a(i3);
            if (viewA == null || DrawerLayout.this.d(viewA) != 0) {
                return;
            }
            this.f261b.a(viewA, i2);
        }

        @Override // b.e.a.c.a
        public void a(View view, float f2, float f3) {
            int i;
            float f4 = DrawerLayout.this.f(view);
            int width = view.getWidth();
            if (DrawerLayout.this.a(view, 3)) {
                i = (f2 > 0.0f || (f2 == 0.0f && f4 > 0.5f)) ? 0 : -width;
            } else {
                int width2 = DrawerLayout.this.getWidth();
                if (f2 < 0.0f || (f2 == 0.0f && f4 > 0.5f)) {
                    width2 -= width;
                }
                i = width2;
            }
            this.f261b.d(i, view.getTop());
            DrawerLayout.this.invalidate();
        }

        @Override // b.e.a.c.a
        public void a(View view, int i) {
            ((LayoutParams) view.getLayoutParams()).f252c = false;
            c();
        }

        @Override // b.e.a.c.a
        public void a(View view, int i, int i2, int i3, int i4) {
            float width = (DrawerLayout.this.a(view, 3) ? i + r3 : DrawerLayout.this.getWidth() - i) / view.getWidth();
            DrawerLayout.this.c(view, width);
            view.setVisibility(width == 0.0f ? 4 : 0);
            DrawerLayout.this.invalidate();
        }

        public void a(b.e.a.c cVar) {
            this.f261b = cVar;
        }

        @Override // b.e.a.c.a
        public int b(View view, int i, int i2) {
            return view.getTop();
        }

        public void b() {
            DrawerLayout.this.removeCallbacks(this.f262c);
        }

        @Override // b.e.a.c.a
        public void b(int i, int i2) {
            DrawerLayout.this.postDelayed(this.f262c, 160L);
        }

        @Override // b.e.a.c.a
        public boolean b(int i) {
            return false;
        }

        @Override // b.e.a.c.a
        public boolean b(View view, int i) {
            return DrawerLayout.this.j(view) && DrawerLayout.this.a(view, this.f260a) && DrawerLayout.this.d(view) == 0;
        }

        @Override // b.e.a.c.a
        public void c(int i) {
            DrawerLayout.this.a(this.f260a, i, this.f261b.c());
        }
    }

    static {
        f246c = Build.VERSION.SDK_INT >= 19;
        f247d = Build.VERSION.SDK_INT >= 21;
    }

    public DrawerLayout(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public DrawerLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f248e = new b();
        this.h = -1728053248;
        this.j = new Paint();
        this.q = true;
        this.r = 3;
        this.s = 3;
        this.t = 3;
        this.u = 3;
        this.I = null;
        this.J = null;
        this.K = null;
        this.L = null;
        setDescendantFocusability(262144);
        float f2 = getResources().getDisplayMetrics().density;
        this.g = (int) ((64.0f * f2) + 0.5f);
        float f3 = 400.0f * f2;
        this.m = new d(3);
        this.n = new d(5);
        this.k = b.e.a.c.a(this, 1.0f, this.m);
        this.k.d(1);
        this.k.a(f3);
        this.m.a(this.k);
        this.l = b.e.a.c.a(this, 1.0f, this.n);
        this.l.d(2);
        this.l.a(f3);
        this.n.a(this.l);
        setFocusableInTouchMode(true);
        n.c(this, 1);
        n.a(this, new a());
        setMotionEventSplittingEnabled(false);
        if (n.b(this)) {
            if (Build.VERSION.SDK_INT >= 21) {
                setOnApplyWindowInsetsListener(new androidx.drawerlayout.widget.a(this));
                setSystemUiVisibility(1280);
                TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(f244a);
                try {
                    this.B = typedArrayObtainStyledAttributes.getDrawable(0);
                } finally {
                    typedArrayObtainStyledAttributes.recycle();
                }
            } else {
                this.B = null;
            }
        }
        this.f249f = f2 * 10.0f;
        this.M = new ArrayList<>();
    }

    private boolean a(float f2, float f3, View view) {
        if (this.N == null) {
            this.N = new Rect();
        }
        view.getHitRect(this.N);
        return this.N.contains((int) f2, (int) f3);
    }

    private boolean a(Drawable drawable, int i) {
        if (drawable == null || !androidx.core.graphics.drawable.a.a(drawable)) {
            return false;
        }
        androidx.core.graphics.drawable.a.a(drawable, i);
        return true;
    }

    private boolean a(MotionEvent motionEvent, View view) {
        if (!view.getMatrix().isIdentity()) {
            MotionEvent motionEventB = b(motionEvent, view);
            boolean zDispatchGenericMotionEvent = view.dispatchGenericMotionEvent(motionEventB);
            motionEventB.recycle();
            return zDispatchGenericMotionEvent;
        }
        float scrollX = getScrollX() - view.getLeft();
        float scrollY = getScrollY() - view.getTop();
        motionEvent.offsetLocation(scrollX, scrollY);
        boolean zDispatchGenericMotionEvent2 = view.dispatchGenericMotionEvent(motionEvent);
        motionEvent.offsetLocation(-scrollX, -scrollY);
        return zDispatchGenericMotionEvent2;
    }

    private MotionEvent b(MotionEvent motionEvent, View view) {
        float scrollX = getScrollX() - view.getLeft();
        float scrollY = getScrollY() - view.getTop();
        MotionEvent motionEventObtain = MotionEvent.obtain(motionEvent);
        motionEventObtain.offsetLocation(scrollX, scrollY);
        Matrix matrix = view.getMatrix();
        if (!matrix.isIdentity()) {
            if (this.O == null) {
                this.O = new Matrix();
            }
            matrix.invert(this.O);
            motionEventObtain.transform(this.O);
        }
        return motionEventObtain;
    }

    private void c(View view, boolean z) {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            n.c(childAt, ((z || j(childAt)) && !(z && childAt == view)) ? 4 : 1);
        }
    }

    static String d(int i) {
        return (i & 3) == 3 ? "LEFT" : (i & 5) == 5 ? "RIGHT" : Integer.toHexString(i);
    }

    private boolean e() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            if (((LayoutParams) getChildAt(i).getLayoutParams()).f252c) {
                return true;
            }
        }
        return false;
    }

    private boolean f() {
        return d() != null;
    }

    private Drawable g() {
        int iD = n.d(this);
        if (iD == 0) {
            Drawable drawable = this.I;
            if (drawable != null) {
                a(drawable, iD);
                return this.I;
            }
        } else {
            Drawable drawable2 = this.J;
            if (drawable2 != null) {
                a(drawable2, iD);
                return this.J;
            }
        }
        return this.K;
    }

    static boolean g(View view) {
        return (n.c(view) == 4 || n.c(view) == 2) ? false : true;
    }

    private Drawable h() {
        int iD = n.d(this);
        if (iD == 0) {
            Drawable drawable = this.J;
            if (drawable != null) {
                a(drawable, iD);
                return this.J;
            }
        } else {
            Drawable drawable2 = this.I;
            if (drawable2 != null) {
                a(drawable2, iD);
                return this.I;
            }
        }
        return this.L;
    }

    private void i() {
        if (f247d) {
            return;
        }
        this.C = g();
        this.D = h();
    }

    private static boolean m(View view) {
        Drawable background = view.getBackground();
        return background != null && background.getOpacity() == -1;
    }

    View a(int i) {
        int iA = b.d.d.b.a(i, n.d(this)) & 7;
        int childCount = getChildCount();
        for (int i2 = 0; i2 < childCount; i2++) {
            View childAt = getChildAt(i2);
            if ((e(childAt) & 7) == iA) {
                return childAt;
            }
        }
        return null;
    }

    void a() {
        if (this.w) {
            return;
        }
        long jUptimeMillis = SystemClock.uptimeMillis();
        MotionEvent motionEventObtain = MotionEvent.obtain(jUptimeMillis, jUptimeMillis, 3, 0.0f, 0.0f, 0);
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            getChildAt(i).dispatchTouchEvent(motionEventObtain);
        }
        motionEventObtain.recycle();
        this.w = true;
    }

    public void a(int i, int i2) {
        View viewA;
        int iA = b.d.d.b.a(i2, n.d(this));
        if (i2 == 3) {
            this.r = i;
        } else if (i2 == 5) {
            this.s = i;
        } else if (i2 == 8388611) {
            this.t = i;
        } else if (i2 == 8388613) {
            this.u = i;
        }
        if (i != 0) {
            (iA == 3 ? this.k : this.l).b();
        }
        if (i != 1) {
            if (i == 2 && (viewA = a(iA)) != null) {
                l(viewA);
                return;
            }
            return;
        }
        View viewA2 = a(iA);
        if (viewA2 != null) {
            a(viewA2);
        }
    }

    void a(int i, int i2, View view) {
        int iF = this.k.f();
        int iF2 = this.l.f();
        int i3 = 2;
        if (iF == 1 || iF2 == 1) {
            i3 = 1;
        } else if (iF != 2 && iF2 != 2) {
            i3 = 0;
        }
        if (view != null && i2 == 0) {
            float f2 = ((LayoutParams) view.getLayoutParams()).f251b;
            if (f2 == 0.0f) {
                b(view);
            } else if (f2 == 1.0f) {
                c(view);
            }
        }
        if (i3 != this.o) {
            this.o = i3;
            List<c> list = this.y;
            if (list != null) {
                for (int size = list.size() - 1; size >= 0; size--) {
                    this.y.get(size).a(i3);
                }
            }
        }
    }

    public void a(View view) {
        a(view, true);
    }

    void a(View view, float f2) {
        List<c> list = this.y;
        if (list != null) {
            for (int size = list.size() - 1; size >= 0; size--) {
                this.y.get(size).a(view, f2);
            }
        }
    }

    public void a(View view, boolean z) {
        b.e.a.c cVar;
        int width;
        if (!j(view)) {
            throw new IllegalArgumentException("View " + view + " is not a sliding drawer");
        }
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        if (this.q) {
            layoutParams.f251b = 0.0f;
            layoutParams.f253d = 0;
        } else if (z) {
            layoutParams.f253d |= 4;
            if (a(view, 3)) {
                cVar = this.k;
                width = -view.getWidth();
            } else {
                cVar = this.l;
                width = getWidth();
            }
            cVar.b(view, width, view.getTop());
        } else {
            b(view, 0.0f);
            a(layoutParams.f250a, 0, view);
            view.setVisibility(4);
        }
        invalidate();
    }

    public void a(c cVar) {
        if (cVar == null) {
            return;
        }
        if (this.y == null) {
            this.y = new ArrayList();
        }
        this.y.add(cVar);
    }

    public void a(Object obj, boolean z) {
        this.G = obj;
        this.H = z;
        setWillNotDraw(!z && getBackground() == null);
        requestLayout();
    }

    void a(boolean z) {
        int childCount = getChildCount();
        boolean zB = false;
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            LayoutParams layoutParams = (LayoutParams) childAt.getLayoutParams();
            if (j(childAt) && (!z || layoutParams.f252c)) {
                zB |= a(childAt, 3) ? this.k.b(childAt, -childAt.getWidth(), childAt.getTop()) : this.l.b(childAt, getWidth(), childAt.getTop());
                layoutParams.f252c = false;
            }
        }
        this.m.b();
        this.n.b();
        if (zB) {
            invalidate();
        }
    }

    boolean a(View view, int i) {
        return (e(view) & i) == i;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void addFocusables(ArrayList<View> arrayList, int i, int i2) {
        if (getDescendantFocusability() == 393216) {
            return;
        }
        int childCount = getChildCount();
        boolean z = false;
        for (int i3 = 0; i3 < childCount; i3++) {
            View childAt = getChildAt(i3);
            if (!j(childAt)) {
                this.M.add(childAt);
            } else if (i(childAt)) {
                childAt.addFocusables(arrayList, i, i2);
                z = true;
            }
        }
        if (!z) {
            int size = this.M.size();
            for (int i4 = 0; i4 < size; i4++) {
                View view = this.M.get(i4);
                if (view.getVisibility() == 0) {
                    view.addFocusables(arrayList, i, i2);
                }
            }
        }
        this.M.clear();
    }

    @Override // android.view.ViewGroup
    public void addView(View view, int i, ViewGroup.LayoutParams layoutParams) {
        super.addView(view, i, layoutParams);
        n.c(view, (c() != null || j(view)) ? 4 : 1);
        if (f246c) {
            return;
        }
        n.a(view, this.f248e);
    }

    public int b(int i) {
        int iD = n.d(this);
        if (i == 3) {
            int i2 = this.r;
            if (i2 != 3) {
                return i2;
            }
            int i3 = iD == 0 ? this.t : this.u;
            if (i3 != 3) {
                return i3;
            }
            return 0;
        }
        if (i == 5) {
            int i4 = this.s;
            if (i4 != 3) {
                return i4;
            }
            int i5 = iD == 0 ? this.u : this.t;
            if (i5 != 3) {
                return i5;
            }
            return 0;
        }
        if (i == 8388611) {
            int i6 = this.t;
            if (i6 != 3) {
                return i6;
            }
            int i7 = iD == 0 ? this.r : this.s;
            if (i7 != 3) {
                return i7;
            }
            return 0;
        }
        if (i != 8388613) {
            return 0;
        }
        int i8 = this.u;
        if (i8 != 3) {
            return i8;
        }
        int i9 = iD == 0 ? this.s : this.r;
        if (i9 != 3) {
            return i9;
        }
        return 0;
    }

    public void b() {
        a(false);
    }

    void b(View view) {
        View rootView;
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        if ((layoutParams.f253d & 1) == 1) {
            layoutParams.f253d = 0;
            List<c> list = this.y;
            if (list != null) {
                for (int size = list.size() - 1; size >= 0; size--) {
                    this.y.get(size).b(view);
                }
            }
            c(view, false);
            if (!hasWindowFocus() || (rootView = getRootView()) == null) {
                return;
            }
            rootView.sendAccessibilityEvent(32);
        }
    }

    void b(View view, float f2) {
        float f3 = f(view);
        float width = view.getWidth();
        int i = ((int) (width * f2)) - ((int) (f3 * width));
        if (!a(view, 3)) {
            i = -i;
        }
        view.offsetLeftAndRight(i);
        c(view, f2);
    }

    public void b(View view, boolean z) {
        if (!j(view)) {
            throw new IllegalArgumentException("View " + view + " is not a sliding drawer");
        }
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        if (this.q) {
            layoutParams.f251b = 1.0f;
            layoutParams.f253d = 1;
            c(view, true);
        } else if (z) {
            layoutParams.f253d |= 2;
            if (a(view, 3)) {
                this.k.b(view, 0, view.getTop());
            } else {
                this.l.b(view, getWidth() - view.getWidth(), view.getTop());
            }
        } else {
            b(view, 1.0f);
            a(layoutParams.f250a, 0, view);
            view.setVisibility(0);
        }
        invalidate();
    }

    public void b(c cVar) {
        List<c> list;
        if (cVar == null || (list = this.y) == null) {
            return;
        }
        list.remove(cVar);
    }

    View c() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            if ((((LayoutParams) childAt.getLayoutParams()).f253d & 1) == 1) {
                return childAt;
            }
        }
        return null;
    }

    public CharSequence c(int i) {
        int iA = b.d.d.b.a(i, n.d(this));
        if (iA == 3) {
            return this.E;
        }
        if (iA == 5) {
            return this.F;
        }
        return null;
    }

    void c(View view) {
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        if ((layoutParams.f253d & 1) == 0) {
            layoutParams.f253d = 1;
            List<c> list = this.y;
            if (list != null) {
                for (int size = list.size() - 1; size >= 0; size--) {
                    this.y.get(size).a(view);
                }
            }
            c(view, true);
            if (hasWindowFocus()) {
                sendAccessibilityEvent(32);
            }
        }
    }

    void c(View view, float f2) {
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        if (f2 == layoutParams.f251b) {
            return;
        }
        layoutParams.f251b = f2;
        a(view, f2);
    }

    @Override // android.view.ViewGroup
    protected boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return (layoutParams instanceof LayoutParams) && super.checkLayoutParams(layoutParams);
    }

    @Override // android.view.View
    public void computeScroll() {
        int childCount = getChildCount();
        float fMax = 0.0f;
        for (int i = 0; i < childCount; i++) {
            fMax = Math.max(fMax, ((LayoutParams) getChildAt(i).getLayoutParams()).f251b);
        }
        this.i = fMax;
        boolean zA = this.k.a(true);
        boolean zA2 = this.l.a(true);
        if (zA || zA2) {
            n.l(this);
        }
    }

    public int d(View view) {
        if (j(view)) {
            return b(((LayoutParams) view.getLayoutParams()).f250a);
        }
        throw new IllegalArgumentException("View " + view + " is not a drawer");
    }

    View d() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            if (j(childAt) && k(childAt)) {
                return childAt;
            }
        }
        return null;
    }

    @Override // android.view.View
    public boolean dispatchGenericMotionEvent(MotionEvent motionEvent) {
        if ((motionEvent.getSource() & 2) == 0 || motionEvent.getAction() == 10 || this.i <= 0.0f) {
            return super.dispatchGenericMotionEvent(motionEvent);
        }
        int childCount = getChildCount();
        if (childCount == 0) {
            return false;
        }
        float x = motionEvent.getX();
        float y = motionEvent.getY();
        for (int i = childCount - 1; i >= 0; i--) {
            View childAt = getChildAt(i);
            if (a(x, y, childAt) && !h(childAt) && a(motionEvent, childAt)) {
                return true;
            }
        }
        return false;
    }

    @Override // android.view.ViewGroup
    protected boolean drawChild(Canvas canvas, View view, long j) {
        int i;
        Drawable drawable;
        int height = getHeight();
        boolean zH = h(view);
        int width = getWidth();
        int iSave = canvas.save();
        int i2 = 0;
        if (zH) {
            int childCount = getChildCount();
            i = width;
            int i3 = 0;
            for (int i4 = 0; i4 < childCount; i4++) {
                View childAt = getChildAt(i4);
                if (childAt != view && childAt.getVisibility() == 0 && m(childAt) && j(childAt) && childAt.getHeight() >= height) {
                    if (a(childAt, 3)) {
                        int right = childAt.getRight();
                        if (right > i3) {
                            i3 = right;
                        }
                    } else {
                        int left = childAt.getLeft();
                        if (left < i) {
                            i = left;
                        }
                    }
                }
            }
            canvas.clipRect(i3, 0, i, getHeight());
            i2 = i3;
        } else {
            i = width;
        }
        boolean zDrawChild = super.drawChild(canvas, view, j);
        canvas.restoreToCount(iSave);
        float f2 = this.i;
        if (f2 <= 0.0f || !zH) {
            if (this.C != null && a(view, 3)) {
                int intrinsicWidth = this.C.getIntrinsicWidth();
                int right2 = view.getRight();
                float fMax = Math.max(0.0f, Math.min(right2 / this.k.d(), 1.0f));
                this.C.setBounds(right2, view.getTop(), intrinsicWidth + right2, view.getBottom());
                this.C.setAlpha((int) (fMax * 255.0f));
                drawable = this.C;
            } else if (this.D != null && a(view, 5)) {
                int intrinsicWidth2 = this.D.getIntrinsicWidth();
                int left2 = view.getLeft();
                float fMax2 = Math.max(0.0f, Math.min((getWidth() - left2) / this.l.d(), 1.0f));
                this.D.setBounds(left2 - intrinsicWidth2, view.getTop(), left2, view.getBottom());
                this.D.setAlpha((int) (fMax2 * 255.0f));
                drawable = this.D;
            }
            drawable.draw(canvas);
        } else {
            this.j.setColor((this.h & 16777215) | (((int) ((((-16777216) & r2) >>> 24) * f2)) << 24));
            canvas.drawRect(i2, 0.0f, i, getHeight(), this.j);
        }
        return zDrawChild;
    }

    int e(View view) {
        return b.d.d.b.a(((LayoutParams) view.getLayoutParams()).f250a, n.d(this));
    }

    float f(View view) {
        return ((LayoutParams) view.getLayoutParams()).f251b;
    }

    @Override // android.view.ViewGroup
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new LayoutParams(-1, -1);
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new LayoutParams(getContext(), attributeSet);
    }

    @Override // android.view.ViewGroup
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof LayoutParams ? new LayoutParams((LayoutParams) layoutParams) : layoutParams instanceof ViewGroup.MarginLayoutParams ? new LayoutParams((ViewGroup.MarginLayoutParams) layoutParams) : new LayoutParams(layoutParams);
    }

    public float getDrawerElevation() {
        if (f247d) {
            return this.f249f;
        }
        return 0.0f;
    }

    public Drawable getStatusBarBackgroundDrawable() {
        return this.B;
    }

    boolean h(View view) {
        return ((LayoutParams) view.getLayoutParams()).f250a == 0;
    }

    public boolean i(View view) {
        if (j(view)) {
            return (((LayoutParams) view.getLayoutParams()).f253d & 1) == 1;
        }
        throw new IllegalArgumentException("View " + view + " is not a drawer");
    }

    boolean j(View view) {
        int iA = b.d.d.b.a(((LayoutParams) view.getLayoutParams()).f250a, n.d(view));
        return ((iA & 3) == 0 && (iA & 5) == 0) ? false : true;
    }

    public boolean k(View view) {
        if (j(view)) {
            return ((LayoutParams) view.getLayoutParams()).f251b > 0.0f;
        }
        throw new IllegalArgumentException("View " + view + " is not a drawer");
    }

    public void l(View view) {
        b(view, true);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.q = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.q = true;
    }

    @Override // android.view.View
    public void onDraw(Canvas canvas) {
        Object obj;
        super.onDraw(canvas);
        if (!this.H || this.B == null) {
            return;
        }
        int systemWindowInsetTop = (Build.VERSION.SDK_INT < 21 || (obj = this.G) == null) ? 0 : ((WindowInsets) obj).getSystemWindowInsetTop();
        if (systemWindowInsetTop > 0) {
            this.B.setBounds(0, 0, getWidth(), systemWindowInsetTop);
            this.B.draw(canvas);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0031  */
    @Override // android.view.ViewGroup
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean onInterceptTouchEvent(android.view.MotionEvent r7) {
        /*
            r6 = this;
            int r0 = r7.getActionMasked()
            b.e.a.c r1 = r6.k
            boolean r1 = r1.b(r7)
            b.e.a.c r2 = r6.l
            boolean r2 = r2.b(r7)
            r1 = r1 | r2
            r2 = 1
            r3 = 0
            if (r0 == 0) goto L3a
            if (r0 == r2) goto L31
            r7 = 2
            r4 = 3
            if (r0 == r7) goto L1e
            if (r0 == r4) goto L31
            goto L38
        L1e:
            b.e.a.c r7 = r6.k
            boolean r7 = r7.a(r4)
            if (r7 == 0) goto L38
            androidx.drawerlayout.widget.DrawerLayout$d r7 = r6.m
            r7.b()
            androidx.drawerlayout.widget.DrawerLayout$d r7 = r6.n
            r7.b()
            goto L38
        L31:
            r6.a(r2)
            r6.v = r3
            r6.w = r3
        L38:
            r7 = 0
            goto L64
        L3a:
            float r0 = r7.getX()
            float r7 = r7.getY()
            r6.z = r0
            r6.A = r7
            float r4 = r6.i
            r5 = 0
            int r4 = (r4 > r5 ? 1 : (r4 == r5 ? 0 : -1))
            if (r4 <= 0) goto L5f
            b.e.a.c r4 = r6.k
            int r0 = (int) r0
            int r7 = (int) r7
            android.view.View r7 = r4.b(r0, r7)
            if (r7 == 0) goto L5f
            boolean r7 = r6.h(r7)
            if (r7 == 0) goto L5f
            r7 = 1
            goto L60
        L5f:
            r7 = 0
        L60:
            r6.v = r3
            r6.w = r3
        L64:
            if (r1 != 0) goto L74
            if (r7 != 0) goto L74
            boolean r7 = r6.e()
            if (r7 != 0) goto L74
            boolean r7 = r6.w
            if (r7 == 0) goto L73
            goto L74
        L73:
            r2 = 0
        L74:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.drawerlayout.widget.DrawerLayout.onInterceptTouchEvent(android.view.MotionEvent):boolean");
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (i != 4 || !f()) {
            return super.onKeyDown(i, keyEvent);
        }
        keyEvent.startTracking();
        return true;
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyUp(int i, KeyEvent keyEvent) {
        if (i != 4) {
            return super.onKeyUp(i, keyEvent);
        }
        View viewD = d();
        if (viewD != null && d(viewD) == 0) {
            b();
        }
        return viewD != null;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        float f2;
        int i5;
        int measuredHeight;
        int i6;
        int i7;
        this.p = true;
        int i8 = i3 - i;
        int childCount = getChildCount();
        for (int i9 = 0; i9 < childCount; i9++) {
            View childAt = getChildAt(i9);
            if (childAt.getVisibility() != 8) {
                LayoutParams layoutParams = (LayoutParams) childAt.getLayoutParams();
                if (h(childAt)) {
                    int i10 = ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin;
                    childAt.layout(i10, ((ViewGroup.MarginLayoutParams) layoutParams).topMargin, childAt.getMeasuredWidth() + i10, ((ViewGroup.MarginLayoutParams) layoutParams).topMargin + childAt.getMeasuredHeight());
                } else {
                    int measuredWidth = childAt.getMeasuredWidth();
                    int measuredHeight2 = childAt.getMeasuredHeight();
                    if (a(childAt, 3)) {
                        float f3 = measuredWidth;
                        i5 = (-measuredWidth) + ((int) (layoutParams.f251b * f3));
                        f2 = (measuredWidth + i5) / f3;
                    } else {
                        float f4 = measuredWidth;
                        f2 = (i8 - r11) / f4;
                        i5 = i8 - ((int) (layoutParams.f251b * f4));
                    }
                    boolean z2 = f2 != layoutParams.f251b;
                    int i11 = layoutParams.f250a & 112;
                    if (i11 != 16) {
                        if (i11 != 80) {
                            measuredHeight = ((ViewGroup.MarginLayoutParams) layoutParams).topMargin;
                            i6 = measuredWidth + i5;
                            i7 = measuredHeight2 + measuredHeight;
                        } else {
                            int i12 = i4 - i2;
                            measuredHeight = (i12 - ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin) - childAt.getMeasuredHeight();
                            i6 = measuredWidth + i5;
                            i7 = i12 - ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin;
                        }
                        childAt.layout(i5, measuredHeight, i6, i7);
                    } else {
                        int i13 = i4 - i2;
                        int i14 = (i13 - measuredHeight2) / 2;
                        int i15 = ((ViewGroup.MarginLayoutParams) layoutParams).topMargin;
                        if (i14 < i15) {
                            i14 = i15;
                        } else {
                            int i16 = i14 + measuredHeight2;
                            int i17 = ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin;
                            if (i16 > i13 - i17) {
                                i14 = (i13 - i17) - measuredHeight2;
                            }
                        }
                        childAt.layout(i5, i14, measuredWidth + i5, measuredHeight2 + i14);
                    }
                    if (z2) {
                        c(childAt, f2);
                    }
                    int i18 = layoutParams.f251b > 0.0f ? 0 : 4;
                    if (childAt.getVisibility() != i18) {
                        childAt.setVisibility(i18);
                    }
                }
            }
        }
        this.p = false;
        this.q = false;
    }

    @Override // android.view.View
    @SuppressLint({"WrongConstant"})
    protected void onMeasure(int i, int i2) {
        int mode = View.MeasureSpec.getMode(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        if (mode != 1073741824 || mode2 != 1073741824) {
            if (!isInEditMode()) {
                throw new IllegalArgumentException("DrawerLayout must be measured with MeasureSpec.EXACTLY.");
            }
            if (mode != Integer.MIN_VALUE && mode == 0) {
                size = HttpStatus.SC_MULTIPLE_CHOICES;
            }
            if (mode2 != Integer.MIN_VALUE && mode2 == 0) {
                size2 = HttpStatus.SC_MULTIPLE_CHOICES;
            }
        }
        setMeasuredDimension(size, size2);
        int i3 = 0;
        boolean z = this.G != null && n.b(this);
        int iD = n.d(this);
        int childCount = getChildCount();
        int i4 = 0;
        boolean z2 = false;
        boolean z3 = false;
        while (i4 < childCount) {
            View childAt = getChildAt(i4);
            if (childAt.getVisibility() != 8) {
                LayoutParams layoutParams = (LayoutParams) childAt.getLayoutParams();
                if (z) {
                    int iA = b.d.d.b.a(layoutParams.f250a, iD);
                    if (n.b(childAt)) {
                        if (Build.VERSION.SDK_INT >= 21) {
                            WindowInsets windowInsetsReplaceSystemWindowInsets = (WindowInsets) this.G;
                            if (iA == 3) {
                                windowInsetsReplaceSystemWindowInsets = windowInsetsReplaceSystemWindowInsets.replaceSystemWindowInsets(windowInsetsReplaceSystemWindowInsets.getSystemWindowInsetLeft(), windowInsetsReplaceSystemWindowInsets.getSystemWindowInsetTop(), i3, windowInsetsReplaceSystemWindowInsets.getSystemWindowInsetBottom());
                            } else if (iA == 5) {
                                windowInsetsReplaceSystemWindowInsets = windowInsetsReplaceSystemWindowInsets.replaceSystemWindowInsets(i3, windowInsetsReplaceSystemWindowInsets.getSystemWindowInsetTop(), windowInsetsReplaceSystemWindowInsets.getSystemWindowInsetRight(), windowInsetsReplaceSystemWindowInsets.getSystemWindowInsetBottom());
                            }
                            childAt.dispatchApplyWindowInsets(windowInsetsReplaceSystemWindowInsets);
                        }
                    } else if (Build.VERSION.SDK_INT >= 21) {
                        WindowInsets windowInsetsReplaceSystemWindowInsets2 = (WindowInsets) this.G;
                        if (iA == 3) {
                            windowInsetsReplaceSystemWindowInsets2 = windowInsetsReplaceSystemWindowInsets2.replaceSystemWindowInsets(windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetLeft(), windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetTop(), i3, windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetBottom());
                        } else if (iA == 5) {
                            windowInsetsReplaceSystemWindowInsets2 = windowInsetsReplaceSystemWindowInsets2.replaceSystemWindowInsets(i3, windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetTop(), windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetRight(), windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetBottom());
                        }
                        ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin = windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetLeft();
                        ((ViewGroup.MarginLayoutParams) layoutParams).topMargin = windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetTop();
                        ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin = windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetRight();
                        ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin = windowInsetsReplaceSystemWindowInsets2.getSystemWindowInsetBottom();
                    }
                }
                if (h(childAt)) {
                    childAt.measure(View.MeasureSpec.makeMeasureSpec((size - ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin) - ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin, 1073741824), View.MeasureSpec.makeMeasureSpec((size2 - ((ViewGroup.MarginLayoutParams) layoutParams).topMargin) - ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin, 1073741824));
                } else {
                    if (!j(childAt)) {
                        throw new IllegalStateException("Child " + childAt + " at index " + i4 + " does not have a valid layout_gravity - must be Gravity.LEFT, Gravity.RIGHT or Gravity.NO_GRAVITY");
                    }
                    if (f247d) {
                        float fA = n.a(childAt);
                        float f2 = this.f249f;
                        if (fA != f2) {
                            n.a(childAt, f2);
                        }
                    }
                    int iE = e(childAt) & 7;
                    boolean z4 = iE == 3;
                    if ((z4 && z2) || (!z4 && z3)) {
                        throw new IllegalStateException("Child drawer has absolute gravity " + d(iE) + " but this DrawerLayout already has a drawer view along that edge");
                    }
                    if (z4) {
                        z2 = true;
                    } else {
                        z3 = true;
                    }
                    childAt.measure(ViewGroup.getChildMeasureSpec(i, this.g + ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin, ((ViewGroup.MarginLayoutParams) layoutParams).width), ViewGroup.getChildMeasureSpec(i2, ((ViewGroup.MarginLayoutParams) layoutParams).topMargin + ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin, ((ViewGroup.MarginLayoutParams) layoutParams).height));
                }
            }
            i4++;
            i3 = 0;
        }
    }

    @Override // android.view.View
    protected void onRestoreInstanceState(Parcelable parcelable) {
        View viewA;
        if (!(parcelable instanceof SavedState)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        SavedState savedState = (SavedState) parcelable;
        super.onRestoreInstanceState(savedState.a());
        int i = savedState.f254c;
        if (i != 0 && (viewA = a(i)) != null) {
            l(viewA);
        }
        int i2 = savedState.f255d;
        if (i2 != 3) {
            a(i2, 3);
        }
        int i3 = savedState.f256e;
        if (i3 != 3) {
            a(i3, 5);
        }
        int i4 = savedState.f257f;
        if (i4 != 3) {
            a(i4, 8388611);
        }
        int i5 = savedState.g;
        if (i5 != 3) {
            a(i5, 8388613);
        }
    }

    @Override // android.view.View
    public void onRtlPropertiesChanged(int i) {
        i();
    }

    @Override // android.view.View
    protected Parcelable onSaveInstanceState() {
        SavedState savedState = new SavedState(super.onSaveInstanceState());
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            LayoutParams layoutParams = (LayoutParams) getChildAt(i).getLayoutParams();
            boolean z = layoutParams.f253d == 1;
            boolean z2 = layoutParams.f253d == 2;
            if (z || z2) {
                savedState.f254c = layoutParams.f250a;
                break;
            }
        }
        savedState.f255d = this.r;
        savedState.f256e = this.s;
        savedState.f257f = this.t;
        savedState.g = this.u;
        return savedState;
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x005e  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean onTouchEvent(android.view.MotionEvent r7) {
        /*
            r6 = this;
            b.e.a.c r0 = r6.k
            r0.a(r7)
            b.e.a.c r0 = r6.l
            r0.a(r7)
            int r0 = r7.getAction()
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L65
            if (r0 == r1) goto L1e
            r7 = 3
            if (r0 == r7) goto L1a
            goto L75
        L1a:
            r6.a(r1)
            goto L71
        L1e:
            float r0 = r7.getX()
            float r7 = r7.getY()
            b.e.a.c r3 = r6.k
            int r4 = (int) r0
            int r5 = (int) r7
            android.view.View r3 = r3.b(r4, r5)
            if (r3 == 0) goto L5e
            boolean r3 = r6.h(r3)
            if (r3 == 0) goto L5e
            float r3 = r6.z
            float r0 = r0 - r3
            float r3 = r6.A
            float r7 = r7 - r3
            b.e.a.c r3 = r6.k
            int r3 = r3.e()
            float r0 = r0 * r0
            float r7 = r7 * r7
            float r0 = r0 + r7
            int r3 = r3 * r3
            float r7 = (float) r3
            int r7 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r7 >= 0) goto L5e
            android.view.View r7 = r6.c()
            if (r7 == 0) goto L5e
            int r7 = r6.d(r7)
            r0 = 2
            if (r7 != r0) goto L5c
            goto L5e
        L5c:
            r7 = 0
            goto L5f
        L5e:
            r7 = 1
        L5f:
            r6.a(r7)
            r6.v = r2
            goto L75
        L65:
            float r0 = r7.getX()
            float r7 = r7.getY()
            r6.z = r0
            r6.A = r7
        L71:
            r6.v = r2
            r6.w = r2
        L75:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.drawerlayout.widget.DrawerLayout.onTouchEvent(android.view.MotionEvent):boolean");
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestDisallowInterceptTouchEvent(boolean z) {
        super.requestDisallowInterceptTouchEvent(z);
        this.v = z;
        if (z) {
            a(true);
        }
    }

    @Override // android.view.View, android.view.ViewParent
    public void requestLayout() {
        if (this.p) {
            return;
        }
        super.requestLayout();
    }

    public void setDrawerElevation(float f2) {
        this.f249f = f2;
        for (int i = 0; i < getChildCount(); i++) {
            View childAt = getChildAt(i);
            if (j(childAt)) {
                n.a(childAt, this.f249f);
            }
        }
    }

    @Deprecated
    public void setDrawerListener(c cVar) {
        c cVar2 = this.x;
        if (cVar2 != null) {
            b(cVar2);
        }
        if (cVar != null) {
            a(cVar);
        }
        this.x = cVar;
    }

    public void setDrawerLockMode(int i) {
        a(i, 3);
        a(i, 5);
    }

    public void setScrimColor(int i) {
        this.h = i;
        invalidate();
    }

    public void setStatusBarBackground(int i) {
        this.B = i != 0 ? androidx.core.content.a.b(getContext(), i) : null;
        invalidate();
    }

    public void setStatusBarBackground(Drawable drawable) {
        this.B = drawable;
        invalidate();
    }

    public void setStatusBarBackgroundColor(int i) {
        this.B = new ColorDrawable(i);
        invalidate();
    }
}
