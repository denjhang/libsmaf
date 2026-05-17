package androidx.coordinatorlayout.widget;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.ViewTreeObserver;
import androidx.customview.view.AbsSavedState;
import b.d.c.g;
import b.d.d.h;
import b.d.d.j;
import b.d.d.k;
import b.d.d.n;
import b.d.d.q;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class CoordinatorLayout extends ViewGroup implements h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final String f121a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static final Class<?>[] f122b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    static final ThreadLocal<Map<String, Constructor<Behavior>>> f123c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    static final Comparator<View> f124d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static final b.d.c.e<Rect> f125e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final List<View> f126f;
    private final androidx.coordinatorlayout.widget.c<View> g;
    private final List<View> h;
    private final List<View> i;
    private final int[] j;
    private Paint k;
    private boolean l;
    private boolean m;
    private int[] n;
    private View o;
    private View p;
    private e q;
    private boolean r;
    private q s;
    private boolean t;
    private Drawable u;
    ViewGroup.OnHierarchyChangeListener v;
    private k w;
    private final j x;

    public static abstract class Behavior<V extends View> {
        public Behavior() {
        }

        public Behavior(Context context, AttributeSet attributeSet) {
        }

        public q a(CoordinatorLayout coordinatorLayout, V v, q qVar) {
            return qVar;
        }

        public void a() {
        }

        public void a(d dVar) {
        }

        public void a(CoordinatorLayout coordinatorLayout, V v, Parcelable parcelable) {
        }

        public void a(CoordinatorLayout coordinatorLayout, V v, View view, int i) {
            if (i == 0) {
                d(coordinatorLayout, v, view);
            }
        }

        @Deprecated
        public void a(CoordinatorLayout coordinatorLayout, V v, View view, int i, int i2, int i3, int i4) {
        }

        public void a(CoordinatorLayout coordinatorLayout, V v, View view, int i, int i2, int i3, int i4, int i5) {
            if (i5 == 0) {
                a(coordinatorLayout, v, view, i, i2, i3, i4);
            }
        }

        @Deprecated
        public void a(CoordinatorLayout coordinatorLayout, V v, View view, int i, int i2, int[] iArr) {
        }

        public void a(CoordinatorLayout coordinatorLayout, V v, View view, int i, int i2, int[] iArr, int i3) {
            if (i3 == 0) {
                a(coordinatorLayout, v, view, i, i2, iArr);
            }
        }

        @Deprecated
        public void a(CoordinatorLayout coordinatorLayout, V v, View view, View view2, int i) {
        }

        public void a(CoordinatorLayout coordinatorLayout, V v, View view, View view2, int i, int i2) {
            if (i2 == 0) {
                a(coordinatorLayout, v, view, view2, i);
            }
        }

        public boolean a(CoordinatorLayout coordinatorLayout, V v) {
            return c(coordinatorLayout, v) > 0.0f;
        }

        public boolean a(CoordinatorLayout coordinatorLayout, V v, int i) {
            return false;
        }

        public boolean a(CoordinatorLayout coordinatorLayout, V v, int i, int i2, int i3, int i4) {
            return false;
        }

        public boolean a(CoordinatorLayout coordinatorLayout, V v, Rect rect) {
            return false;
        }

        public boolean a(CoordinatorLayout coordinatorLayout, V v, Rect rect, boolean z) {
            return false;
        }

        public boolean a(CoordinatorLayout coordinatorLayout, V v, MotionEvent motionEvent) {
            return false;
        }

        public boolean a(CoordinatorLayout coordinatorLayout, V v, View view) {
            return false;
        }

        public boolean a(CoordinatorLayout coordinatorLayout, V v, View view, float f2, float f3) {
            return false;
        }

        public boolean a(CoordinatorLayout coordinatorLayout, V v, View view, float f2, float f3, boolean z) {
            return false;
        }

        public int b(CoordinatorLayout coordinatorLayout, V v) {
            return -16777216;
        }

        public boolean b(CoordinatorLayout coordinatorLayout, V v, MotionEvent motionEvent) {
            return false;
        }

        public boolean b(CoordinatorLayout coordinatorLayout, V v, View view) {
            return false;
        }

        @Deprecated
        public boolean b(CoordinatorLayout coordinatorLayout, V v, View view, View view2, int i) {
            return false;
        }

        public boolean b(CoordinatorLayout coordinatorLayout, V v, View view, View view2, int i, int i2) {
            if (i2 == 0) {
                return b(coordinatorLayout, v, view, view2, i);
            }
            return false;
        }

        public float c(CoordinatorLayout coordinatorLayout, V v) {
            return 0.0f;
        }

        public void c(CoordinatorLayout coordinatorLayout, V v, View view) {
        }

        public Parcelable d(CoordinatorLayout coordinatorLayout, V v) {
            return View.BaseSavedState.EMPTY_STATE;
        }

        @Deprecated
        public void d(CoordinatorLayout coordinatorLayout, V v, View view) {
        }
    }

    protected static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = new androidx.coordinatorlayout.widget.b();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        SparseArray<Parcelable> f127c;

        public SavedState(Parcel parcel, ClassLoader classLoader) {
            super(parcel, classLoader);
            int i = parcel.readInt();
            int[] iArr = new int[i];
            parcel.readIntArray(iArr);
            Parcelable[] parcelableArray = parcel.readParcelableArray(classLoader);
            this.f127c = new SparseArray<>(i);
            for (int i2 = 0; i2 < i; i2++) {
                this.f127c.append(iArr[i2], parcelableArray[i2]);
            }
        }

        public SavedState(Parcelable parcelable) {
            super(parcelable);
        }

        @Override // androidx.customview.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            SparseArray<Parcelable> sparseArray = this.f127c;
            int size = sparseArray != null ? sparseArray.size() : 0;
            parcel.writeInt(size);
            int[] iArr = new int[size];
            Parcelable[] parcelableArr = new Parcelable[size];
            for (int i2 = 0; i2 < size; i2++) {
                iArr[i2] = this.f127c.keyAt(i2);
                parcelableArr[i2] = this.f127c.valueAt(i2);
            }
            parcel.writeIntArray(iArr);
            parcel.writeParcelableArray(parcelableArr, i);
        }
    }

    public interface a {
        Behavior a();
    }

    @Retention(RetentionPolicy.RUNTIME)
    @Deprecated
    public @interface b {
        Class<? extends Behavior> value();
    }

    private class c implements ViewGroup.OnHierarchyChangeListener {
        c() {
        }

        @Override // android.view.ViewGroup.OnHierarchyChangeListener
        public void onChildViewAdded(View view, View view2) {
            ViewGroup.OnHierarchyChangeListener onHierarchyChangeListener = CoordinatorLayout.this.v;
            if (onHierarchyChangeListener != null) {
                onHierarchyChangeListener.onChildViewAdded(view, view2);
            }
        }

        @Override // android.view.ViewGroup.OnHierarchyChangeListener
        public void onChildViewRemoved(View view, View view2) {
            CoordinatorLayout.this.a(2);
            ViewGroup.OnHierarchyChangeListener onHierarchyChangeListener = CoordinatorLayout.this.v;
            if (onHierarchyChangeListener != null) {
                onHierarchyChangeListener.onChildViewRemoved(view, view2);
            }
        }
    }

    public static class d extends ViewGroup.MarginLayoutParams {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        Behavior f129a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        boolean f130b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public int f131c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public int f132d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        public int f133e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        int f134f;
        public int g;
        public int h;
        int i;
        int j;
        View k;
        View l;
        private boolean m;
        private boolean n;
        private boolean o;
        private boolean p;
        final Rect q;
        Object r;

        public d(int i, int i2) {
            super(i, i2);
            this.f130b = false;
            this.f131c = 0;
            this.f132d = 0;
            this.f133e = -1;
            this.f134f = -1;
            this.g = 0;
            this.h = 0;
            this.q = new Rect();
        }

        d(Context context, AttributeSet attributeSet) {
            super(context, attributeSet);
            this.f130b = false;
            this.f131c = 0;
            this.f132d = 0;
            this.f133e = -1;
            this.f134f = -1;
            this.g = 0;
            this.h = 0;
            this.q = new Rect();
            TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, b.c.c.CoordinatorLayout_Layout);
            this.f131c = typedArrayObtainStyledAttributes.getInteger(b.c.c.CoordinatorLayout_Layout_android_layout_gravity, 0);
            this.f134f = typedArrayObtainStyledAttributes.getResourceId(b.c.c.CoordinatorLayout_Layout_layout_anchor, -1);
            this.f132d = typedArrayObtainStyledAttributes.getInteger(b.c.c.CoordinatorLayout_Layout_layout_anchorGravity, 0);
            this.f133e = typedArrayObtainStyledAttributes.getInteger(b.c.c.CoordinatorLayout_Layout_layout_keyline, -1);
            this.g = typedArrayObtainStyledAttributes.getInt(b.c.c.CoordinatorLayout_Layout_layout_insetEdge, 0);
            this.h = typedArrayObtainStyledAttributes.getInt(b.c.c.CoordinatorLayout_Layout_layout_dodgeInsetEdges, 0);
            this.f130b = typedArrayObtainStyledAttributes.hasValue(b.c.c.CoordinatorLayout_Layout_layout_behavior);
            if (this.f130b) {
                this.f129a = CoordinatorLayout.a(context, attributeSet, typedArrayObtainStyledAttributes.getString(b.c.c.CoordinatorLayout_Layout_layout_behavior));
            }
            typedArrayObtainStyledAttributes.recycle();
            Behavior behavior = this.f129a;
            if (behavior != null) {
                behavior.a(this);
            }
        }

        public d(ViewGroup.LayoutParams layoutParams) {
            super(layoutParams);
            this.f130b = false;
            this.f131c = 0;
            this.f132d = 0;
            this.f133e = -1;
            this.f134f = -1;
            this.g = 0;
            this.h = 0;
            this.q = new Rect();
        }

        public d(ViewGroup.MarginLayoutParams marginLayoutParams) {
            super(marginLayoutParams);
            this.f130b = false;
            this.f131c = 0;
            this.f132d = 0;
            this.f133e = -1;
            this.f134f = -1;
            this.g = 0;
            this.h = 0;
            this.q = new Rect();
        }

        public d(d dVar) {
            super((ViewGroup.MarginLayoutParams) dVar);
            this.f130b = false;
            this.f131c = 0;
            this.f132d = 0;
            this.f133e = -1;
            this.f134f = -1;
            this.g = 0;
            this.h = 0;
            this.q = new Rect();
        }

        private void a(View view, CoordinatorLayout coordinatorLayout) {
            this.k = coordinatorLayout.findViewById(this.f134f);
            View view2 = this.k;
            if (view2 != null) {
                if (view2 != coordinatorLayout) {
                    for (ViewParent parent = view2.getParent(); parent != coordinatorLayout && parent != null; parent = parent.getParent()) {
                        if (parent != view) {
                            if (parent instanceof View) {
                                view2 = parent;
                            }
                        } else if (!coordinatorLayout.isInEditMode()) {
                            throw new IllegalStateException("Anchor must not be a descendant of the anchored view");
                        }
                    }
                    this.l = view2;
                    return;
                }
                if (!coordinatorLayout.isInEditMode()) {
                    throw new IllegalStateException("View can not be anchored to the the parent CoordinatorLayout");
                }
            } else if (!coordinatorLayout.isInEditMode()) {
                throw new IllegalStateException("Could not find CoordinatorLayout descendant view with id " + coordinatorLayout.getResources().getResourceName(this.f134f) + " to anchor view " + view);
            }
            this.l = null;
            this.k = null;
        }

        private boolean a(View view, int i) {
            int iA = b.d.d.b.a(((d) view.getLayoutParams()).g, i);
            return iA != 0 && (b.d.d.b.a(this.h, i) & iA) == iA;
        }

        private boolean b(View view, CoordinatorLayout coordinatorLayout) {
            if (this.k.getId() != this.f134f) {
                return false;
            }
            View view2 = this.k;
            for (ViewParent parent = view2.getParent(); parent != coordinatorLayout; parent = parent.getParent()) {
                if (parent == null || parent == view) {
                    this.l = null;
                    this.k = null;
                    return false;
                }
                if (parent instanceof View) {
                    view2 = parent;
                }
            }
            this.l = view2;
            return true;
        }

        View a(CoordinatorLayout coordinatorLayout, View view) {
            if (this.f134f == -1) {
                this.l = null;
                this.k = null;
                return null;
            }
            if (this.k == null || !b(view, coordinatorLayout)) {
                a(view, coordinatorLayout);
            }
            return this.k;
        }

        void a(int i, boolean z) {
            if (i == 0) {
                this.n = z;
            } else {
                if (i != 1) {
                    return;
                }
                this.o = z;
            }
        }

        void a(Rect rect) {
            this.q.set(rect);
        }

        public void a(Behavior behavior) {
            Behavior behavior2 = this.f129a;
            if (behavior2 != behavior) {
                if (behavior2 != null) {
                    behavior2.a();
                }
                this.f129a = behavior;
                this.r = null;
                this.f130b = true;
                if (behavior != null) {
                    behavior.a(this);
                }
            }
        }

        void a(boolean z) {
            this.p = z;
        }

        boolean a() {
            return this.k == null && this.f134f != -1;
        }

        boolean a(int i) {
            if (i == 0) {
                return this.n;
            }
            if (i != 1) {
                return false;
            }
            return this.o;
        }

        boolean a(CoordinatorLayout coordinatorLayout, View view, View view2) {
            Behavior behavior;
            return view2 == this.l || a(view2, n.d(coordinatorLayout)) || ((behavior = this.f129a) != null && behavior.a(coordinatorLayout, view, view2));
        }

        void b(int i) {
            a(i, false);
        }

        boolean b() {
            if (this.f129a == null) {
                this.m = false;
            }
            return this.m;
        }

        boolean b(CoordinatorLayout coordinatorLayout, View view) {
            boolean z = this.m;
            if (z) {
                return true;
            }
            Behavior behavior = this.f129a;
            boolean zA = (behavior != null ? behavior.a(coordinatorLayout, view) : false) | z;
            this.m = zA;
            return zA;
        }

        public Behavior c() {
            return this.f129a;
        }

        boolean d() {
            return this.p;
        }

        Rect e() {
            return this.q;
        }

        void f() {
            this.p = false;
        }

        void g() {
            this.m = false;
        }
    }

    class e implements ViewTreeObserver.OnPreDrawListener {
        e() {
        }

        @Override // android.view.ViewTreeObserver.OnPreDrawListener
        public boolean onPreDraw() {
            CoordinatorLayout.this.a(0);
            return true;
        }
    }

    static class f implements Comparator<View> {
        f() {
        }

        @Override // java.util.Comparator
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public int compare(View view, View view2) {
            float fG = n.g(view);
            float fG2 = n.g(view2);
            if (fG > fG2) {
                return -1;
            }
            return fG < fG2 ? 1 : 0;
        }
    }

    static {
        Package r0 = CoordinatorLayout.class.getPackage();
        f121a = r0 != null ? r0.getName() : null;
        if (Build.VERSION.SDK_INT >= 21) {
            f124d = new f();
        } else {
            f124d = null;
        }
        f122b = new Class[]{Context.class, AttributeSet.class};
        f123c = new ThreadLocal<>();
        f125e = new g(12);
    }

    public CoordinatorLayout(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, b.c.a.coordinatorLayoutStyle);
    }

    public CoordinatorLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f126f = new ArrayList();
        this.g = new androidx.coordinatorlayout.widget.c<>();
        this.h = new ArrayList();
        this.i = new ArrayList();
        this.j = new int[2];
        this.x = new j(this);
        TypedArray typedArrayObtainStyledAttributes = i == 0 ? context.obtainStyledAttributes(attributeSet, b.c.c.CoordinatorLayout, 0, b.c.b.Widget_Support_CoordinatorLayout) : context.obtainStyledAttributes(attributeSet, b.c.c.CoordinatorLayout, i, 0);
        int resourceId = typedArrayObtainStyledAttributes.getResourceId(b.c.c.CoordinatorLayout_keylines, 0);
        if (resourceId != 0) {
            Resources resources = context.getResources();
            this.n = resources.getIntArray(resourceId);
            float f2 = resources.getDisplayMetrics().density;
            int length = this.n.length;
            for (int i2 = 0; i2 < length; i2++) {
                this.n[i2] = (int) (r1[i2] * f2);
            }
        }
        this.u = typedArrayObtainStyledAttributes.getDrawable(b.c.c.CoordinatorLayout_statusBarBackground);
        typedArrayObtainStyledAttributes.recycle();
        f();
        super.setOnHierarchyChangeListener(new c());
    }

    private static int a(int i, int i2, int i3) {
        return i < i2 ? i2 : i > i3 ? i3 : i;
    }

    static Behavior a(Context context, AttributeSet attributeSet, String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        if (str.startsWith(".")) {
            str = context.getPackageName() + str;
        } else if (str.indexOf(46) < 0 && !TextUtils.isEmpty(f121a)) {
            str = f121a + '.' + str;
        }
        try {
            Map map = f123c.get();
            if (map == null) {
                map = new HashMap();
                f123c.set((Map<String, Constructor<Behavior>>) map);
            }
            Constructor<?> constructor = (Constructor) map.get(str);
            if (constructor == null) {
                constructor = context.getClassLoader().loadClass(str).getConstructor(f122b);
                constructor.setAccessible(true);
                map.put(str, constructor);
            }
            return (Behavior) constructor.newInstance(context, attributeSet);
        } catch (Exception e2) {
            throw new RuntimeException("Could not inflate Behavior subclass " + str, e2);
        }
    }

    private static void a(Rect rect) {
        rect.setEmpty();
        f125e.a(rect);
    }

    private void a(View view, int i, int i2) {
        d dVar = (d) view.getLayoutParams();
        int iA = b.d.d.b.a(e(dVar.f131c), i2);
        int i3 = iA & 7;
        int i4 = iA & 112;
        int width = getWidth();
        int height = getHeight();
        int measuredWidth = view.getMeasuredWidth();
        int measuredHeight = view.getMeasuredHeight();
        if (i2 == 1) {
            i = width - i;
        }
        int iB = b(i) - measuredWidth;
        int i5 = 0;
        if (i3 == 1) {
            iB += measuredWidth / 2;
        } else if (i3 == 5) {
            iB += measuredWidth;
        }
        if (i4 == 16) {
            i5 = 0 + (measuredHeight / 2);
        } else if (i4 == 80) {
            i5 = measuredHeight + 0;
        }
        int iMax = Math.max(getPaddingLeft() + ((ViewGroup.MarginLayoutParams) dVar).leftMargin, Math.min(iB, ((width - getPaddingRight()) - measuredWidth) - ((ViewGroup.MarginLayoutParams) dVar).rightMargin));
        int iMax2 = Math.max(getPaddingTop() + ((ViewGroup.MarginLayoutParams) dVar).topMargin, Math.min(i5, ((height - getPaddingBottom()) - measuredHeight) - ((ViewGroup.MarginLayoutParams) dVar).bottomMargin));
        view.layout(iMax, iMax2, measuredWidth + iMax, measuredHeight + iMax2);
    }

    private void a(View view, int i, Rect rect, Rect rect2, d dVar, int i2, int i3) {
        int iA = b.d.d.b.a(c(dVar.f131c), i);
        int iA2 = b.d.d.b.a(d(dVar.f132d), i);
        int i4 = iA & 7;
        int i5 = iA & 112;
        int i6 = iA2 & 7;
        int i7 = iA2 & 112;
        int iWidth = i6 != 1 ? i6 != 5 ? rect.left : rect.right : rect.left + (rect.width() / 2);
        int iHeight = i7 != 16 ? i7 != 80 ? rect.top : rect.bottom : rect.top + (rect.height() / 2);
        if (i4 == 1) {
            iWidth -= i2 / 2;
        } else if (i4 != 5) {
            iWidth -= i2;
        }
        if (i5 == 16) {
            iHeight -= i3 / 2;
        } else if (i5 != 80) {
            iHeight -= i3;
        }
        rect2.set(iWidth, iHeight, i2 + iWidth, i3 + iHeight);
    }

    private void a(View view, Rect rect, int i) {
        boolean z;
        boolean z2;
        int width;
        int i2;
        int i3;
        int i4;
        int height;
        int i5;
        int i6;
        int i7;
        if (n.j(view) && view.getWidth() > 0 && view.getHeight() > 0) {
            d dVar = (d) view.getLayoutParams();
            Behavior behaviorC = dVar.c();
            Rect rectD = d();
            Rect rectD2 = d();
            rectD2.set(view.getLeft(), view.getTop(), view.getRight(), view.getBottom());
            if (behaviorC == null || !behaviorC.a(this, view, rectD)) {
                rectD.set(rectD2);
            } else if (!rectD2.contains(rectD)) {
                throw new IllegalArgumentException("Rect should be within the child's bounds. Rect:" + rectD.toShortString() + " | Bounds:" + rectD2.toShortString());
            }
            a(rectD2);
            if (rectD.isEmpty()) {
                a(rectD);
                return;
            }
            int iA = b.d.d.b.a(dVar.h, i);
            if ((iA & 48) != 48 || (i6 = (rectD.top - ((ViewGroup.MarginLayoutParams) dVar).topMargin) - dVar.j) >= (i7 = rect.top)) {
                z = false;
            } else {
                f(view, i7 - i6);
                z = true;
            }
            if ((iA & 80) == 80 && (height = ((getHeight() - rectD.bottom) - ((ViewGroup.MarginLayoutParams) dVar).bottomMargin) + dVar.j) < (i5 = rect.bottom)) {
                f(view, height - i5);
                z = true;
            }
            if (!z) {
                f(view, 0);
            }
            if ((iA & 3) != 3 || (i3 = (rectD.left - ((ViewGroup.MarginLayoutParams) dVar).leftMargin) - dVar.i) >= (i4 = rect.left)) {
                z2 = false;
            } else {
                e(view, i4 - i3);
                z2 = true;
            }
            if ((iA & 5) == 5 && (width = ((getWidth() - rectD.right) - ((ViewGroup.MarginLayoutParams) dVar).rightMargin) + dVar.i) < (i2 = rect.right)) {
                e(view, width - i2);
                z2 = true;
            }
            if (!z2) {
                e(view, 0);
            }
            a(rectD);
        }
    }

    private void a(View view, View view2, int i) {
        Rect rectD = d();
        Rect rectD2 = d();
        try {
            a(view2, rectD);
            a(view, i, rectD, rectD2);
            view.layout(rectD2.left, rectD2.top, rectD2.right, rectD2.bottom);
        } finally {
            a(rectD);
            a(rectD2);
        }
    }

    private void a(d dVar, Rect rect, int i, int i2) {
        int width = getWidth();
        int height = getHeight();
        int iMax = Math.max(getPaddingLeft() + ((ViewGroup.MarginLayoutParams) dVar).leftMargin, Math.min(rect.left, ((width - getPaddingRight()) - i) - ((ViewGroup.MarginLayoutParams) dVar).rightMargin));
        int iMax2 = Math.max(getPaddingTop() + ((ViewGroup.MarginLayoutParams) dVar).topMargin, Math.min(rect.top, ((height - getPaddingBottom()) - i2) - ((ViewGroup.MarginLayoutParams) dVar).bottomMargin));
        rect.set(iMax, iMax2, i + iMax, i2 + iMax2);
    }

    private void a(List<View> list) {
        list.clear();
        boolean zIsChildrenDrawingOrderEnabled = isChildrenDrawingOrderEnabled();
        int childCount = getChildCount();
        for (int i = childCount - 1; i >= 0; i--) {
            list.add(getChildAt(zIsChildrenDrawingOrderEnabled ? getChildDrawingOrder(childCount, i) : i));
        }
        Comparator<View> comparator = f124d;
        if (comparator != null) {
            Collections.sort(list, comparator);
        }
    }

    private void a(boolean z) {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            Behavior behaviorC = ((d) childAt.getLayoutParams()).c();
            if (behaviorC != null) {
                long jUptimeMillis = SystemClock.uptimeMillis();
                MotionEvent motionEventObtain = MotionEvent.obtain(jUptimeMillis, jUptimeMillis, 3, 0.0f, 0.0f, 0);
                if (z) {
                    behaviorC.a(this, childAt, motionEventObtain);
                } else {
                    behaviorC.b(this, childAt, motionEventObtain);
                }
                motionEventObtain.recycle();
            }
        }
        for (int i2 = 0; i2 < childCount; i2++) {
            ((d) getChildAt(i2).getLayoutParams()).g();
        }
        this.o = null;
        this.l = false;
    }

    private boolean a(MotionEvent motionEvent, int i) {
        int actionMasked = motionEvent.getActionMasked();
        List<View> list = this.h;
        a(list);
        int size = list.size();
        MotionEvent motionEventObtain = null;
        boolean zA = false;
        boolean z = false;
        for (int i2 = 0; i2 < size; i2++) {
            View view = list.get(i2);
            d dVar = (d) view.getLayoutParams();
            Behavior behaviorC = dVar.c();
            if (!(zA || z) || actionMasked == 0) {
                if (!zA && behaviorC != null) {
                    if (i == 0) {
                        zA = behaviorC.a(this, view, motionEvent);
                    } else if (i == 1) {
                        zA = behaviorC.b(this, view, motionEvent);
                    }
                    if (zA) {
                        this.o = view;
                    }
                }
                boolean zB = dVar.b();
                boolean zB2 = dVar.b(this, view);
                boolean z2 = zB2 && !zB;
                if (zB2 && !z2) {
                    break;
                }
                z = z2;
            } else if (behaviorC != null) {
                if (motionEventObtain == null) {
                    long jUptimeMillis = SystemClock.uptimeMillis();
                    motionEventObtain = MotionEvent.obtain(jUptimeMillis, jUptimeMillis, 3, 0.0f, 0.0f, 0);
                }
                if (i == 0) {
                    behaviorC.a(this, view, motionEventObtain);
                } else if (i == 1) {
                    behaviorC.b(this, view, motionEventObtain);
                }
            }
        }
        list.clear();
        return zA;
    }

    private int b(int i) {
        StringBuilder sb;
        int[] iArr = this.n;
        if (iArr == null) {
            sb = new StringBuilder();
            sb.append("No keylines defined for ");
            sb.append(this);
            sb.append(" - attempted index lookup ");
            sb.append(i);
        } else {
            if (i >= 0 && i < iArr.length) {
                return iArr[i];
            }
            sb = new StringBuilder();
            sb.append("Keyline index ");
            sb.append(i);
            sb.append(" out of range for ");
            sb.append(this);
        }
        Log.e("CoordinatorLayout", sb.toString());
        return 0;
    }

    private q b(q qVar) {
        Behavior behaviorC;
        if (qVar.e()) {
            return qVar;
        }
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            if (n.b(childAt) && (behaviorC = ((d) childAt.getLayoutParams()).c()) != null) {
                qVar = behaviorC.a(this, childAt, qVar);
                if (qVar.e()) {
                    break;
                }
            }
        }
        return qVar;
    }

    private boolean b(View view) {
        return this.g.c(view);
    }

    private static int c(int i) {
        if (i == 0) {
            return 17;
        }
        return i;
    }

    private static int d(int i) {
        if ((i & 7) == 0) {
            i |= 8388611;
        }
        return (i & 112) == 0 ? i | 48 : i;
    }

    private static Rect d() {
        Rect rectA = f125e.a();
        return rectA == null ? new Rect() : rectA;
    }

    private void d(View view, int i) {
        d dVar = (d) view.getLayoutParams();
        Rect rectD = d();
        rectD.set(getPaddingLeft() + ((ViewGroup.MarginLayoutParams) dVar).leftMargin, getPaddingTop() + ((ViewGroup.MarginLayoutParams) dVar).topMargin, (getWidth() - getPaddingRight()) - ((ViewGroup.MarginLayoutParams) dVar).rightMargin, (getHeight() - getPaddingBottom()) - ((ViewGroup.MarginLayoutParams) dVar).bottomMargin);
        if (this.s != null && n.b(this) && !n.b(view)) {
            rectD.left += this.s.b();
            rectD.top += this.s.d();
            rectD.right -= this.s.c();
            rectD.bottom -= this.s.a();
        }
        Rect rectD2 = d();
        b.d.d.b.a(d(dVar.f131c), view.getMeasuredWidth(), view.getMeasuredHeight(), rectD, rectD2, i);
        view.layout(rectD2.left, rectD2.top, rectD2.right, rectD2.bottom);
        a(rectD);
        a(rectD2);
    }

    private static int e(int i) {
        if (i == 0) {
            return 8388661;
        }
        return i;
    }

    private void e() {
        this.f126f.clear();
        this.g.a();
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            d dVarA = a(childAt);
            dVarA.a(this, childAt);
            this.g.a(childAt);
            for (int i2 = 0; i2 < childCount; i2++) {
                if (i2 != i) {
                    View childAt2 = getChildAt(i2);
                    if (dVarA.a(this, childAt, childAt2)) {
                        if (!this.g.b(childAt2)) {
                            this.g.a(childAt2);
                        }
                        this.g.a(childAt2, childAt);
                    }
                }
            }
        }
        this.f126f.addAll(this.g.b());
        Collections.reverse(this.f126f);
    }

    private void e(View view, int i) {
        d dVar = (d) view.getLayoutParams();
        int i2 = dVar.i;
        if (i2 != i) {
            n.a(view, i - i2);
            dVar.i = i;
        }
    }

    private void f() {
        if (Build.VERSION.SDK_INT < 21) {
            return;
        }
        if (!n.b(this)) {
            n.a(this, (k) null);
            return;
        }
        if (this.w == null) {
            this.w = new androidx.coordinatorlayout.widget.a(this);
        }
        n.a(this, this.w);
        setSystemUiVisibility(1280);
    }

    private void f(View view, int i) {
        d dVar = (d) view.getLayoutParams();
        int i2 = dVar.j;
        if (i2 != i) {
            n.b(view, i - i2);
            dVar.j = i;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    d a(View view) {
        d dVar = (d) view.getLayoutParams();
        if (!dVar.f130b) {
            if (view instanceof a) {
                Behavior behaviorA = ((a) view).a();
                if (behaviorA == null) {
                    Log.e("CoordinatorLayout", "Attached behavior class is null");
                }
                dVar.a(behaviorA);
            } else {
                b bVar = null;
                for (Class<?> superclass = view.getClass(); superclass != null; superclass = superclass.getSuperclass()) {
                    bVar = (b) superclass.getAnnotation(b.class);
                    if (bVar != null) {
                        break;
                    }
                }
                if (bVar != null) {
                    try {
                        dVar.a(bVar.value().getDeclaredConstructor(new Class[0]).newInstance(new Object[0]));
                    } catch (Exception e2) {
                        Log.e("CoordinatorLayout", "Default behavior class " + bVar.value().getName() + " could not be instantiated. Did you forget a default constructor?", e2);
                    }
                }
            }
            dVar.f130b = true;
        }
        return dVar;
    }

    final q a(q qVar) {
        if (b.d.c.c.a(this.s, qVar)) {
            return qVar;
        }
        this.s = qVar;
        this.t = qVar != null && qVar.d() > 0;
        setWillNotDraw(!this.t && getBackground() == null);
        q qVarB = b(qVar);
        requestLayout();
        return qVarB;
    }

    void a() {
        if (this.m) {
            if (this.q == null) {
                this.q = new e();
            }
            getViewTreeObserver().addOnPreDrawListener(this.q);
        }
        this.r = true;
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x00ca  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    final void a(int r18) {
        /*
            Method dump skipped, instruction units count: 273
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.coordinatorlayout.widget.CoordinatorLayout.a(int):void");
    }

    @Override // b.d.d.h
    public void a(View view, int i) {
        this.x.a(view, i);
        int childCount = getChildCount();
        for (int i2 = 0; i2 < childCount; i2++) {
            View childAt = getChildAt(i2);
            d dVar = (d) childAt.getLayoutParams();
            if (dVar.a(i)) {
                Behavior behaviorC = dVar.c();
                if (behaviorC != null) {
                    behaviorC.a(this, childAt, view, i);
                }
                dVar.b(i);
                dVar.f();
            }
        }
        this.p = null;
    }

    public void a(View view, int i, int i2, int i3, int i4) {
        measureChildWithMargins(view, i, i2, i3, i4);
    }

    @Override // b.d.d.h
    public void a(View view, int i, int i2, int i3, int i4, int i5) {
        Behavior behaviorC;
        int childCount = getChildCount();
        boolean z = false;
        for (int i6 = 0; i6 < childCount; i6++) {
            View childAt = getChildAt(i6);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                if (dVar.a(i5) && (behaviorC = dVar.c()) != null) {
                    behaviorC.a(this, childAt, view, i, i2, i3, i4, i5);
                    z = true;
                }
            }
        }
        if (z) {
            a(1);
        }
    }

    @Override // b.d.d.h
    public void a(View view, int i, int i2, int[] iArr, int i3) {
        Behavior behaviorC;
        int childCount = getChildCount();
        boolean z = false;
        int iMax = 0;
        int iMax2 = 0;
        for (int i4 = 0; i4 < childCount; i4++) {
            View childAt = getChildAt(i4);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                if (dVar.a(i3) && (behaviorC = dVar.c()) != null) {
                    int[] iArr2 = this.j;
                    iArr2[1] = 0;
                    iArr2[0] = 0;
                    behaviorC.a(this, childAt, view, i, i2, iArr2, i3);
                    iMax = i > 0 ? Math.max(iMax, this.j[0]) : Math.min(iMax, this.j[0]);
                    iMax2 = i2 > 0 ? Math.max(iMax2, this.j[1]) : Math.min(iMax2, this.j[1]);
                    z = true;
                }
            }
        }
        iArr[0] = iMax;
        iArr[1] = iMax2;
        if (z) {
            a(1);
        }
    }

    void a(View view, int i, Rect rect, Rect rect2) {
        d dVar = (d) view.getLayoutParams();
        int measuredWidth = view.getMeasuredWidth();
        int measuredHeight = view.getMeasuredHeight();
        a(view, i, rect, rect2, dVar, measuredWidth, measuredHeight);
        a(dVar, rect2, measuredWidth, measuredHeight);
    }

    void a(View view, Rect rect) {
        androidx.coordinatorlayout.widget.d.a(this, view, rect);
    }

    void a(View view, boolean z, Rect rect) {
        if (view.isLayoutRequested() || view.getVisibility() == 8) {
            rect.setEmpty();
        } else if (z) {
            a(view, rect);
        } else {
            rect.set(view.getLeft(), view.getTop(), view.getRight(), view.getBottom());
        }
    }

    @Override // b.d.d.h
    public boolean a(View view, View view2, int i, int i2) {
        int childCount = getChildCount();
        boolean z = false;
        for (int i3 = 0; i3 < childCount; i3++) {
            View childAt = getChildAt(i3);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                Behavior behaviorC = dVar.c();
                if (behaviorC != null) {
                    boolean zB = behaviorC.b(this, childAt, view, view2, i, i2);
                    dVar.a(i2, zB);
                    z |= zB;
                } else {
                    dVar.a(i2, false);
                }
            }
        }
        return z;
    }

    void b() {
        int childCount = getChildCount();
        boolean z = false;
        int i = 0;
        while (true) {
            if (i >= childCount) {
                break;
            }
            if (b(getChildAt(i))) {
                z = true;
                break;
            }
            i++;
        }
        if (z != this.r) {
            if (z) {
                a();
            } else {
                c();
            }
        }
    }

    void b(View view, int i) {
        Behavior behaviorC;
        d dVar = (d) view.getLayoutParams();
        if (dVar.k != null) {
            Rect rectD = d();
            Rect rectD2 = d();
            Rect rectD3 = d();
            a(dVar.k, rectD);
            a(view, false, rectD2);
            int measuredWidth = view.getMeasuredWidth();
            int measuredHeight = view.getMeasuredHeight();
            a(view, i, rectD, rectD3, dVar, measuredWidth, measuredHeight);
            boolean z = (rectD3.left == rectD2.left && rectD3.top == rectD2.top) ? false : true;
            a(dVar, rectD3, measuredWidth, measuredHeight);
            int i2 = rectD3.left - rectD2.left;
            int i3 = rectD3.top - rectD2.top;
            if (i2 != 0) {
                n.a(view, i2);
            }
            if (i3 != 0) {
                n.b(view, i3);
            }
            if (z && (behaviorC = dVar.c()) != null) {
                behaviorC.b(this, view, dVar.k);
            }
            a(rectD);
            a(rectD2);
            a(rectD3);
        }
    }

    void b(View view, Rect rect) {
        rect.set(((d) view.getLayoutParams()).e());
    }

    @Override // b.d.d.h
    public void b(View view, View view2, int i, int i2) {
        Behavior behaviorC;
        this.x.a(view, view2, i, i2);
        this.p = view2;
        int childCount = getChildCount();
        for (int i3 = 0; i3 < childCount; i3++) {
            View childAt = getChildAt(i3);
            d dVar = (d) childAt.getLayoutParams();
            if (dVar.a(i2) && (behaviorC = dVar.c()) != null) {
                behaviorC.a(this, childAt, view, view2, i, i2);
            }
        }
    }

    void c() {
        if (this.m && this.q != null) {
            getViewTreeObserver().removeOnPreDrawListener(this.q);
        }
        this.r = false;
    }

    public void c(View view, int i) {
        d dVar = (d) view.getLayoutParams();
        if (dVar.a()) {
            throw new IllegalStateException("An anchor may not be changed after CoordinatorLayout measurement begins before layout is complete.");
        }
        View view2 = dVar.k;
        if (view2 != null) {
            a(view, view2, i);
            return;
        }
        int i2 = dVar.f133e;
        if (i2 >= 0) {
            a(view, i2, i);
        } else {
            d(view, i);
        }
    }

    void c(View view, Rect rect) {
        ((d) view.getLayoutParams()).a(rect);
    }

    @Override // android.view.ViewGroup
    protected boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return (layoutParams instanceof d) && super.checkLayoutParams(layoutParams);
    }

    @Override // android.view.ViewGroup
    protected boolean drawChild(Canvas canvas, View view, long j) {
        d dVar = (d) view.getLayoutParams();
        Behavior behavior = dVar.f129a;
        if (behavior != null) {
            float fC = behavior.c(this, view);
            if (fC > 0.0f) {
                if (this.k == null) {
                    this.k = new Paint();
                }
                this.k.setColor(dVar.f129a.b(this, view));
                this.k.setAlpha(a(Math.round(fC * 255.0f), 0, 255));
                int iSave = canvas.save();
                if (view.isOpaque()) {
                    canvas.clipRect(view.getLeft(), view.getTop(), view.getRight(), view.getBottom(), Region.Op.DIFFERENCE);
                }
                canvas.drawRect(getPaddingLeft(), getPaddingTop(), getWidth() - getPaddingRight(), getHeight() - getPaddingBottom(), this.k);
                canvas.restoreToCount(iSave);
            }
        }
        return super.drawChild(canvas, view, j);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        int[] drawableState = getDrawableState();
        Drawable drawable = this.u;
        boolean state = false;
        if (drawable != null && drawable.isStateful()) {
            state = false | drawable.setState(drawableState);
        }
        if (state) {
            invalidate();
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.view.ViewGroup
    public d generateDefaultLayoutParams() {
        return new d(-2, -2);
    }

    @Override // android.view.ViewGroup
    public d generateLayoutParams(AttributeSet attributeSet) {
        return new d(getContext(), attributeSet);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.view.ViewGroup
    public d generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof d ? new d((d) layoutParams) : layoutParams instanceof ViewGroup.MarginLayoutParams ? new d((ViewGroup.MarginLayoutParams) layoutParams) : new d(layoutParams);
    }

    final List<View> getDependencySortedChildren() {
        e();
        return Collections.unmodifiableList(this.f126f);
    }

    public final q getLastWindowInsets() {
        return this.s;
    }

    @Override // android.view.ViewGroup
    public int getNestedScrollAxes() {
        return this.x.a();
    }

    public Drawable getStatusBarBackground() {
        return this.u;
    }

    @Override // android.view.View
    protected int getSuggestedMinimumHeight() {
        return Math.max(super.getSuggestedMinimumHeight(), getPaddingTop() + getPaddingBottom());
    }

    @Override // android.view.View
    protected int getSuggestedMinimumWidth() {
        return Math.max(super.getSuggestedMinimumWidth(), getPaddingLeft() + getPaddingRight());
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        a(false);
        if (this.r) {
            if (this.q == null) {
                this.q = new e();
            }
            getViewTreeObserver().addOnPreDrawListener(this.q);
        }
        if (this.s == null && n.b(this)) {
            n.m(this);
        }
        this.m = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        a(false);
        if (this.r && this.q != null) {
            getViewTreeObserver().removeOnPreDrawListener(this.q);
        }
        View view = this.p;
        if (view != null) {
            onStopNestedScroll(view);
        }
        this.m = false;
    }

    @Override // android.view.View
    public void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        if (!this.t || this.u == null) {
            return;
        }
        q qVar = this.s;
        int iD = qVar != null ? qVar.d() : 0;
        if (iD > 0) {
            this.u.setBounds(0, 0, getWidth(), iD);
            this.u.draw(canvas);
        }
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0) {
            a(true);
        }
        boolean zA = a(motionEvent, 0);
        if (actionMasked == 1 || actionMasked == 3) {
            a(true);
        }
        return zA;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        Behavior behaviorC;
        int iD = n.d(this);
        int size = this.f126f.size();
        for (int i5 = 0; i5 < size; i5++) {
            View view = this.f126f.get(i5);
            if (view.getVisibility() != 8 && ((behaviorC = ((d) view.getLayoutParams()).c()) == null || !behaviorC.a(this, view, iD))) {
                c(view, iD);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x00ef  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00f9  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x011a  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected void onMeasure(int r31, int r32) {
        /*
            Method dump skipped, instruction units count: 388
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.coordinatorlayout.widget.CoordinatorLayout.onMeasure(int, int):void");
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public boolean onNestedFling(View view, float f2, float f3, boolean z) {
        Behavior behaviorC;
        int childCount = getChildCount();
        boolean zA = false;
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                if (dVar.a(0) && (behaviorC = dVar.c()) != null) {
                    zA |= behaviorC.a(this, childAt, view, f2, f3, z);
                }
            }
        }
        if (zA) {
            a(1);
        }
        return zA;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public boolean onNestedPreFling(View view, float f2, float f3) {
        Behavior behaviorC;
        int childCount = getChildCount();
        boolean zA = false;
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                if (dVar.a(0) && (behaviorC = dVar.c()) != null) {
                    zA |= behaviorC.a(this, childAt, view, f2, f3);
                }
            }
        }
        return zA;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public void onNestedPreScroll(View view, int i, int i2, int[] iArr) {
        a(view, i, i2, iArr, 0);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public void onNestedScroll(View view, int i, int i2, int i3, int i4) {
        a(view, i, i2, i3, i4, 0);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public void onNestedScrollAccepted(View view, View view2, int i) {
        b(view, view2, i, 0);
    }

    @Override // android.view.View
    protected void onRestoreInstanceState(Parcelable parcelable) {
        Parcelable parcelable2;
        if (!(parcelable instanceof SavedState)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        SavedState savedState = (SavedState) parcelable;
        super.onRestoreInstanceState(savedState.a());
        SparseArray<Parcelable> sparseArray = savedState.f127c;
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            int id = childAt.getId();
            Behavior behaviorC = a(childAt).c();
            if (id != -1 && behaviorC != null && (parcelable2 = sparseArray.get(id)) != null) {
                behaviorC.a(this, childAt, parcelable2);
            }
        }
    }

    @Override // android.view.View
    protected Parcelable onSaveInstanceState() {
        Parcelable parcelableD;
        SavedState savedState = new SavedState(super.onSaveInstanceState());
        SparseArray<Parcelable> sparseArray = new SparseArray<>();
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            int id = childAt.getId();
            Behavior behaviorC = ((d) childAt.getLayoutParams()).c();
            if (id != -1 && behaviorC != null && (parcelableD = behaviorC.d(this, childAt)) != null) {
                sparseArray.append(id, parcelableD);
            }
        }
        savedState.f127c = sparseArray;
        return savedState;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public boolean onStartNestedScroll(View view, View view2, int i) {
        return a(view, view2, i, 0);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent, b.d.d.i
    public void onStopNestedScroll(View view) {
        a(view, 0);
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002b A[PHI: r3
  0x002b: PHI (r3v4 boolean) = (r3v2 boolean), (r3v5 boolean) binds: [B:9:0x0022, B:5:0x0012] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0031  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0037  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x004c  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0054  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean onTouchEvent(android.view.MotionEvent r18) {
        /*
            r17 = this;
            r0 = r17
            r1 = r18
            int r2 = r18.getActionMasked()
            android.view.View r3 = r0.o
            r4 = 1
            r5 = 0
            if (r3 != 0) goto L15
            boolean r3 = r0.a(r1, r4)
            if (r3 == 0) goto L2b
            goto L16
        L15:
            r3 = 0
        L16:
            android.view.View r6 = r0.o
            android.view.ViewGroup$LayoutParams r6 = r6.getLayoutParams()
            androidx.coordinatorlayout.widget.CoordinatorLayout$d r6 = (androidx.coordinatorlayout.widget.CoordinatorLayout.d) r6
            androidx.coordinatorlayout.widget.CoordinatorLayout$Behavior r6 = r6.c()
            if (r6 == 0) goto L2b
            android.view.View r7 = r0.o
            boolean r6 = r6.b(r0, r7, r1)
            goto L2c
        L2b:
            r6 = 0
        L2c:
            android.view.View r7 = r0.o
            r8 = 0
            if (r7 != 0) goto L37
            boolean r1 = super.onTouchEvent(r18)
            r6 = r6 | r1
            goto L4a
        L37:
            if (r3 == 0) goto L4a
            long r11 = android.os.SystemClock.uptimeMillis()
            r13 = 3
            r14 = 0
            r15 = 0
            r16 = 0
            r9 = r11
            android.view.MotionEvent r8 = android.view.MotionEvent.obtain(r9, r11, r13, r14, r15, r16)
            super.onTouchEvent(r8)
        L4a:
            if (r8 == 0) goto L4f
            r8.recycle()
        L4f:
            if (r2 == r4) goto L54
            r1 = 3
            if (r2 != r1) goto L57
        L54:
            r0.a(r5)
        L57:
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.coordinatorlayout.widget.CoordinatorLayout.onTouchEvent(android.view.MotionEvent):boolean");
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public boolean requestChildRectangleOnScreen(View view, Rect rect, boolean z) {
        Behavior behaviorC = ((d) view.getLayoutParams()).c();
        if (behaviorC == null || !behaviorC.a(this, view, rect, z)) {
            return super.requestChildRectangleOnScreen(view, rect, z);
        }
        return true;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestDisallowInterceptTouchEvent(boolean z) {
        super.requestDisallowInterceptTouchEvent(z);
        if (!z || this.l) {
            return;
        }
        a(false);
        this.l = true;
    }

    @Override // android.view.View
    public void setFitsSystemWindows(boolean z) {
        super.setFitsSystemWindows(z);
        f();
    }

    @Override // android.view.ViewGroup
    public void setOnHierarchyChangeListener(ViewGroup.OnHierarchyChangeListener onHierarchyChangeListener) {
        this.v = onHierarchyChangeListener;
    }

    public void setStatusBarBackground(Drawable drawable) {
        Drawable drawable2 = this.u;
        if (drawable2 != drawable) {
            if (drawable2 != null) {
                drawable2.setCallback(null);
            }
            this.u = drawable != null ? drawable.mutate() : null;
            Drawable drawable3 = this.u;
            if (drawable3 != null) {
                if (drawable3.isStateful()) {
                    this.u.setState(getDrawableState());
                }
                androidx.core.graphics.drawable.a.a(this.u, n.d(this));
                this.u.setVisible(getVisibility() == 0, false);
                this.u.setCallback(this);
            }
            n.l(this);
        }
    }

    public void setStatusBarBackgroundColor(int i) {
        setStatusBarBackground(new ColorDrawable(i));
    }

    public void setStatusBarBackgroundResource(int i) {
        setStatusBarBackground(i != 0 ? androidx.core.content.a.b(getContext(), i) : null);
    }

    @Override // android.view.View
    public void setVisibility(int i) {
        super.setVisibility(i);
        boolean z = i == 0;
        Drawable drawable = this.u;
        if (drawable == null || drawable.isVisible() == z) {
            return;
        }
        this.u.setVisible(z, false);
    }

    @Override // android.view.View
    protected boolean verifyDrawable(Drawable drawable) {
        return super.verifyDrawable(drawable) || drawable == this.u;
    }
}
