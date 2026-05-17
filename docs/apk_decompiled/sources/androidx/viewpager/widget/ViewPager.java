package androidx.viewpager.widget;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.database.DataSetObserver;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityEvent;
import android.view.animation.Interpolator;
import android.widget.EdgeEffect;
import android.widget.Scroller;
import androidx.customview.view.AbsSavedState;
import b.d.d.n;
import java.lang.annotation.ElementType;
import java.lang.annotation.Inherited;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ViewPager extends ViewGroup {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final int[] f657a = {R.attr.layout_gravity};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Comparator<b> f658b = new androidx.viewpager.widget.d();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final Interpolator f659c = new androidx.viewpager.widget.e();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final h f660d = new h();
    private boolean A;
    private int B;
    private boolean C;
    private boolean D;
    private int E;
    private int F;
    private int G;
    private float H;
    private float I;
    private float J;
    private float K;
    private int L;
    private VelocityTracker M;
    private int N;
    private int O;
    private int P;
    private int Q;
    private boolean R;
    private EdgeEffect S;
    private EdgeEffect T;
    private boolean U;
    private boolean V;
    private boolean W;
    private int aa;
    private List<e> ba;
    private e ca;
    private e da;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f661e;
    private List<d> ea;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final ArrayList<b> f662f;
    private f fa;
    private final b g;
    private int ga;
    private final Rect h;
    private int ha;
    androidx.viewpager.widget.a i;
    private ArrayList<View> ia;
    int j;
    private final Runnable ja;
    private int k;
    private int ka;
    private Parcelable l;
    private ClassLoader m;
    private Scroller n;
    private boolean o;
    private g p;
    private int q;
    private Drawable r;
    private int s;
    private int t;
    private float u;
    private float v;
    private int w;
    private int x;
    private boolean y;
    private boolean z;

    public static class LayoutParams extends ViewGroup.LayoutParams {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public boolean f663a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public int f664b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        float f665c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        boolean f666d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        int f667e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        int f668f;

        public LayoutParams() {
            super(-1, -1);
            this.f665c = 0.0f;
        }

        public LayoutParams(Context context, AttributeSet attributeSet) {
            super(context, attributeSet);
            this.f665c = 0.0f;
            TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, ViewPager.f657a);
            this.f664b = typedArrayObtainStyledAttributes.getInteger(0, 48);
            typedArrayObtainStyledAttributes.recycle();
        }
    }

    public static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = new androidx.viewpager.widget.h();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f669c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        Parcelable f670d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        ClassLoader f671e;

        SavedState(Parcel parcel, ClassLoader classLoader) {
            super(parcel, classLoader);
            classLoader = classLoader == null ? SavedState.class.getClassLoader() : classLoader;
            this.f669c = parcel.readInt();
            this.f670d = parcel.readParcelable(classLoader);
            this.f671e = classLoader;
        }

        public SavedState(Parcelable parcelable) {
            super(parcelable);
        }

        public String toString() {
            return "FragmentPager.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " position=" + this.f669c + "}";
        }

        @Override // androidx.customview.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeInt(this.f669c);
            parcel.writeParcelable(this.f670d, i);
        }
    }

    @Target({ElementType.TYPE})
    @Inherited
    @Retention(RetentionPolicy.RUNTIME)
    public @interface a {
    }

    static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        Object f672a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        int f673b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        boolean f674c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        float f675d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        float f676e;

        b() {
        }
    }

    class c extends b.d.d.a {
        c() {
        }

        private boolean b() {
            androidx.viewpager.widget.a aVar = ViewPager.this.i;
            return aVar != null && aVar.a() > 1;
        }

        @Override // b.d.d.a
        public void a(View view, b.d.d.a.b bVar) {
            super.a(view, bVar);
            bVar.a(ViewPager.class.getName());
            bVar.g(b());
            if (ViewPager.this.canScrollHorizontally(1)) {
                bVar.a(4096);
            }
            if (ViewPager.this.canScrollHorizontally(-1)) {
                bVar.a(8192);
            }
        }

        @Override // b.d.d.a
        public boolean a(View view, int i, Bundle bundle) {
            ViewPager viewPager;
            int i2;
            if (super.a(view, i, bundle)) {
                return true;
            }
            if (i != 4096) {
                if (i != 8192 || !ViewPager.this.canScrollHorizontally(-1)) {
                    return false;
                }
                viewPager = ViewPager.this;
                i2 = viewPager.j - 1;
            } else {
                if (!ViewPager.this.canScrollHorizontally(1)) {
                    return false;
                }
                viewPager = ViewPager.this;
                i2 = viewPager.j + 1;
            }
            viewPager.setCurrentItem(i2);
            return true;
        }

        @Override // b.d.d.a
        public void b(View view, AccessibilityEvent accessibilityEvent) {
            androidx.viewpager.widget.a aVar;
            super.b(view, accessibilityEvent);
            accessibilityEvent.setClassName(ViewPager.class.getName());
            accessibilityEvent.setScrollable(b());
            if (accessibilityEvent.getEventType() != 4096 || (aVar = ViewPager.this.i) == null) {
                return;
            }
            accessibilityEvent.setItemCount(aVar.a());
            accessibilityEvent.setFromIndex(ViewPager.this.j);
            accessibilityEvent.setToIndex(ViewPager.this.j);
        }
    }

    public interface d {
        void a(ViewPager viewPager, androidx.viewpager.widget.a aVar, androidx.viewpager.widget.a aVar2);
    }

    public interface e {
        void a(int i);

        void a(int i, float f2, int i2);

        void b(int i);
    }

    public interface f {
        void a(View view, float f2);
    }

    private class g extends DataSetObserver {
        g() {
        }

        @Override // android.database.DataSetObserver
        public void onChanged() {
            ViewPager.this.a();
        }

        @Override // android.database.DataSetObserver
        public void onInvalidated() {
            ViewPager.this.a();
        }
    }

    static class h implements Comparator<View> {
        h() {
        }

        @Override // java.util.Comparator
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public int compare(View view, View view2) {
            LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
            LayoutParams layoutParams2 = (LayoutParams) view2.getLayoutParams();
            boolean z = layoutParams.f663a;
            return z != layoutParams2.f663a ? z ? 1 : -1 : layoutParams.f667e - layoutParams2.f667e;
        }
    }

    public ViewPager(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f662f = new ArrayList<>();
        this.g = new b();
        this.h = new Rect();
        this.k = -1;
        this.l = null;
        this.m = null;
        this.u = -3.4028235E38f;
        this.v = Float.MAX_VALUE;
        this.B = 1;
        this.L = -1;
        this.U = true;
        this.V = false;
        this.ja = new androidx.viewpager.widget.f(this);
        this.ka = 0;
        b();
    }

    private int a(int i, float f2, int i2, int i3) {
        if (Math.abs(i3) <= this.P || Math.abs(i2) <= this.N) {
            i += (int) (f2 + (i >= this.j ? 0.4f : 0.6f));
        } else if (i2 <= 0) {
            i++;
        }
        if (this.f662f.size() <= 0) {
            return i;
        }
        return Math.max(this.f662f.get(0).f673b, Math.min(i, this.f662f.get(r4.size() - 1).f673b));
    }

    private Rect a(Rect rect, View view) {
        if (rect == null) {
            rect = new Rect();
        }
        if (view == null) {
            rect.set(0, 0, 0, 0);
            return rect;
        }
        rect.left = view.getLeft();
        rect.right = view.getRight();
        rect.top = view.getTop();
        rect.bottom = view.getBottom();
        ViewParent parent = view.getParent();
        while ((parent instanceof ViewGroup) && parent != this) {
            ViewGroup viewGroup = (ViewGroup) parent;
            rect.left += viewGroup.getLeft();
            rect.right += viewGroup.getRight();
            rect.top += viewGroup.getTop();
            rect.bottom += viewGroup.getBottom();
            parent = viewGroup.getParent();
        }
        return rect;
    }

    private void a(int i, int i2, int i3, int i4) {
        int iMin;
        if (i2 <= 0 || this.f662f.isEmpty()) {
            b bVarB = b(this.j);
            iMin = (int) ((bVarB != null ? Math.min(bVarB.f676e, this.v) : 0.0f) * ((i - getPaddingLeft()) - getPaddingRight()));
            if (iMin == getScrollX()) {
                return;
            } else {
                a(false);
            }
        } else if (!this.n.isFinished()) {
            this.n.setFinalX(getCurrentItem() * getClientWidth());
            return;
        } else {
            iMin = (int) ((getScrollX() / (((i2 - getPaddingLeft()) - getPaddingRight()) + i4)) * (((i - getPaddingLeft()) - getPaddingRight()) + i3));
        }
        scrollTo(iMin, getScrollY());
    }

    private void a(int i, boolean z, int i2, boolean z2) {
        b bVarB = b(i);
        int clientWidth = bVarB != null ? (int) (getClientWidth() * Math.max(this.u, Math.min(bVarB.f676e, this.v))) : 0;
        if (z) {
            a(clientWidth, 0, i2);
            if (z2) {
                d(i);
                return;
            }
            return;
        }
        if (z2) {
            d(i);
        }
        a(false);
        scrollTo(clientWidth, 0);
        f(clientWidth);
    }

    private void a(MotionEvent motionEvent) {
        int actionIndex = motionEvent.getActionIndex();
        if (motionEvent.getPointerId(actionIndex) == this.L) {
            int i = actionIndex == 0 ? 1 : 0;
            this.H = motionEvent.getX(i);
            this.L = motionEvent.getPointerId(i);
            VelocityTracker velocityTracker = this.M;
            if (velocityTracker != null) {
                velocityTracker.clear();
            }
        }
    }

    private void a(b bVar, int i, b bVar2) {
        int i2;
        int i3;
        b bVar3;
        b bVar4;
        int iA = this.i.a();
        int clientWidth = getClientWidth();
        float f2 = clientWidth > 0 ? this.q / clientWidth : 0.0f;
        if (bVar2 != null) {
            int i4 = bVar2.f673b;
            int i5 = bVar.f673b;
            if (i4 < i5) {
                float fB = bVar2.f676e + bVar2.f675d + f2;
                int i6 = i4 + 1;
                int i7 = 0;
                while (i6 <= bVar.f673b && i7 < this.f662f.size()) {
                    while (true) {
                        bVar4 = this.f662f.get(i7);
                        if (i6 <= bVar4.f673b || i7 >= this.f662f.size() - 1) {
                            break;
                        } else {
                            i7++;
                        }
                    }
                    while (i6 < bVar4.f673b) {
                        fB += this.i.b(i6) + f2;
                        i6++;
                    }
                    bVar4.f676e = fB;
                    fB += bVar4.f675d + f2;
                    i6++;
                }
            } else if (i4 > i5) {
                int size = this.f662f.size() - 1;
                float fB2 = bVar2.f676e;
                while (true) {
                    i4--;
                    if (i4 < bVar.f673b || size < 0) {
                        break;
                    }
                    while (true) {
                        bVar3 = this.f662f.get(size);
                        if (i4 >= bVar3.f673b || size <= 0) {
                            break;
                        } else {
                            size--;
                        }
                    }
                    while (i4 > bVar3.f673b) {
                        fB2 -= this.i.b(i4) + f2;
                        i4--;
                    }
                    fB2 -= bVar3.f675d + f2;
                    bVar3.f676e = fB2;
                }
            }
        }
        int size2 = this.f662f.size();
        float fB3 = bVar.f676e;
        int i8 = bVar.f673b;
        int i9 = i8 - 1;
        this.u = i8 == 0 ? fB3 : -3.4028235E38f;
        int i10 = iA - 1;
        this.v = bVar.f673b == i10 ? (bVar.f676e + bVar.f675d) - 1.0f : Float.MAX_VALUE;
        int i11 = i - 1;
        while (i11 >= 0) {
            b bVar5 = this.f662f.get(i11);
            while (true) {
                i3 = bVar5.f673b;
                if (i9 <= i3) {
                    break;
                }
                fB3 -= this.i.b(i9) + f2;
                i9--;
            }
            fB3 -= bVar5.f675d + f2;
            bVar5.f676e = fB3;
            if (i3 == 0) {
                this.u = fB3;
            }
            i11--;
            i9--;
        }
        float fB4 = bVar.f676e + bVar.f675d + f2;
        int i12 = bVar.f673b + 1;
        int i13 = i + 1;
        while (i13 < size2) {
            b bVar6 = this.f662f.get(i13);
            while (true) {
                i2 = bVar6.f673b;
                if (i12 >= i2) {
                    break;
                }
                fB4 += this.i.b(i12) + f2;
                i12++;
            }
            if (i2 == i10) {
                this.v = (bVar6.f675d + fB4) - 1.0f;
            }
            bVar6.f676e = fB4;
            fB4 += bVar6.f675d + f2;
            i13++;
            i12++;
        }
        this.V = false;
    }

    private void a(boolean z) {
        boolean z2 = this.ka == 2;
        if (z2) {
            setScrollingCacheEnabled(false);
            if (!this.n.isFinished()) {
                this.n.abortAnimation();
                int scrollX = getScrollX();
                int scrollY = getScrollY();
                int currX = this.n.getCurrX();
                int currY = this.n.getCurrY();
                if (scrollX != currX || scrollY != currY) {
                    scrollTo(currX, currY);
                    if (currX != scrollX) {
                        f(currX);
                    }
                }
            }
        }
        this.A = false;
        boolean z3 = z2;
        for (int i = 0; i < this.f662f.size(); i++) {
            b bVar = this.f662f.get(i);
            if (bVar.f674c) {
                bVar.f674c = false;
                z3 = true;
            }
        }
        if (z3) {
            if (z) {
                n.a(this, this.ja);
            } else {
                this.ja.run();
            }
        }
    }

    private boolean a(float f2, float f3) {
        return (f2 < ((float) this.F) && f3 > 0.0f) || (f2 > ((float) (getWidth() - this.F)) && f3 < 0.0f);
    }

    private void b(int i, float f2, int i2) {
        e eVar = this.ca;
        if (eVar != null) {
            eVar.a(i, f2, i2);
        }
        List<e> list = this.ba;
        if (list != null) {
            int size = list.size();
            for (int i3 = 0; i3 < size; i3++) {
                e eVar2 = this.ba.get(i3);
                if (eVar2 != null) {
                    eVar2.a(i, f2, i2);
                }
            }
        }
        e eVar3 = this.da;
        if (eVar3 != null) {
            eVar3.a(i, f2, i2);
        }
    }

    private void b(boolean z) {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            getChildAt(i).setLayerType(z ? this.ga : 0, null);
        }
    }

    private boolean b(float f2) {
        boolean z;
        boolean z2;
        float f3 = this.H - f2;
        this.H = f2;
        float scrollX = getScrollX() + f3;
        float clientWidth = getClientWidth();
        float f4 = this.u * clientWidth;
        float f5 = this.v * clientWidth;
        boolean z3 = false;
        b bVar = this.f662f.get(0);
        ArrayList<b> arrayList = this.f662f;
        b bVar2 = arrayList.get(arrayList.size() - 1);
        if (bVar.f673b != 0) {
            f4 = bVar.f676e * clientWidth;
            z = false;
        } else {
            z = true;
        }
        if (bVar2.f673b != this.i.a() - 1) {
            f5 = bVar2.f676e * clientWidth;
            z2 = false;
        } else {
            z2 = true;
        }
        if (scrollX < f4) {
            if (z) {
                this.S.onPull(Math.abs(f4 - scrollX) / clientWidth);
                z3 = true;
            }
            scrollX = f4;
        } else if (scrollX > f5) {
            if (z2) {
                this.T.onPull(Math.abs(scrollX - f5) / clientWidth);
                z3 = true;
            }
            scrollX = f5;
        }
        int i = (int) scrollX;
        this.H += scrollX - i;
        scrollTo(i, getScrollY());
        f(i);
        return z3;
    }

    private void c(boolean z) {
        ViewParent parent = getParent();
        if (parent != null) {
            parent.requestDisallowInterceptTouchEvent(z);
        }
    }

    private static boolean c(View view) {
        return view.getClass().getAnnotation(a.class) != null;
    }

    private void d(int i) {
        e eVar = this.ca;
        if (eVar != null) {
            eVar.b(i);
        }
        List<e> list = this.ba;
        if (list != null) {
            int size = list.size();
            for (int i2 = 0; i2 < size; i2++) {
                e eVar2 = this.ba.get(i2);
                if (eVar2 != null) {
                    eVar2.b(i);
                }
            }
        }
        e eVar3 = this.da;
        if (eVar3 != null) {
            eVar3.b(i);
        }
    }

    private void e(int i) {
        e eVar = this.ca;
        if (eVar != null) {
            eVar.a(i);
        }
        List<e> list = this.ba;
        if (list != null) {
            int size = list.size();
            for (int i2 = 0; i2 < size; i2++) {
                e eVar2 = this.ba.get(i2);
                if (eVar2 != null) {
                    eVar2.a(i);
                }
            }
        }
        e eVar3 = this.da;
        if (eVar3 != null) {
            eVar3.a(i);
        }
    }

    private void f() {
        this.C = false;
        this.D = false;
        VelocityTracker velocityTracker = this.M;
        if (velocityTracker != null) {
            velocityTracker.recycle();
            this.M = null;
        }
    }

    private boolean f(int i) {
        if (this.f662f.size() == 0) {
            if (this.U) {
                return false;
            }
            this.W = false;
            a(0, 0.0f, 0);
            if (this.W) {
                return false;
            }
            throw new IllegalStateException("onPageScrolled did not call superclass implementation");
        }
        b bVarG = g();
        int clientWidth = getClientWidth();
        int i2 = this.q;
        int i3 = clientWidth + i2;
        float f2 = clientWidth;
        int i4 = bVarG.f673b;
        float f3 = ((i / f2) - bVarG.f676e) / (bVarG.f675d + (i2 / f2));
        this.W = false;
        a(i4, f3, (int) (i3 * f3));
        if (this.W) {
            return true;
        }
        throw new IllegalStateException("onPageScrolled did not call superclass implementation");
    }

    private b g() {
        int i;
        int clientWidth = getClientWidth();
        float scrollX = clientWidth > 0 ? getScrollX() / clientWidth : 0.0f;
        float f2 = clientWidth > 0 ? this.q / clientWidth : 0.0f;
        b bVar = null;
        int i2 = 0;
        boolean z = true;
        int i3 = -1;
        float f3 = 0.0f;
        float f4 = 0.0f;
        while (i2 < this.f662f.size()) {
            b bVar2 = this.f662f.get(i2);
            if (!z && bVar2.f673b != (i = i3 + 1)) {
                bVar2 = this.g;
                bVar2.f676e = f3 + f4 + f2;
                bVar2.f673b = i;
                bVar2.f675d = this.i.b(bVar2.f673b);
                i2--;
            }
            f3 = bVar2.f676e;
            float f5 = bVar2.f675d + f3 + f2;
            if (!z && scrollX < f3) {
                return bVar;
            }
            if (scrollX < f5 || i2 == this.f662f.size() - 1) {
                return bVar2;
            }
            i3 = bVar2.f673b;
            f4 = bVar2.f675d;
            i2++;
            bVar = bVar2;
            z = false;
        }
        return bVar;
    }

    private int getClientWidth() {
        return (getMeasuredWidth() - getPaddingLeft()) - getPaddingRight();
    }

    private void h() {
        int i = 0;
        while (i < getChildCount()) {
            if (!((LayoutParams) getChildAt(i).getLayoutParams()).f663a) {
                removeViewAt(i);
                i--;
            }
            i++;
        }
    }

    private boolean i() {
        this.L = -1;
        f();
        this.S.onRelease();
        this.T.onRelease();
        return this.S.isFinished() || this.T.isFinished();
    }

    private void j() {
        if (this.ha != 0) {
            ArrayList<View> arrayList = this.ia;
            if (arrayList == null) {
                this.ia = new ArrayList<>();
            } else {
                arrayList.clear();
            }
            int childCount = getChildCount();
            for (int i = 0; i < childCount; i++) {
                this.ia.add(getChildAt(i));
            }
            Collections.sort(this.ia, f660d);
        }
    }

    private void setScrollingCacheEnabled(boolean z) {
        if (this.z != z) {
            this.z = z;
        }
    }

    float a(float f2) {
        return (float) Math.sin((f2 - 0.5f) * 0.47123894f);
    }

    b a(int i, int i2) {
        b bVar = new b();
        bVar.f673b = i;
        bVar.f672a = this.i.a((ViewGroup) this, i);
        bVar.f675d = this.i.b(i);
        if (i2 < 0 || i2 >= this.f662f.size()) {
            this.f662f.add(bVar);
        } else {
            this.f662f.add(i2, bVar);
        }
        return bVar;
    }

    b a(View view) {
        while (true) {
            Object parent = view.getParent();
            if (parent == this) {
                return b(view);
            }
            if (parent == null || !(parent instanceof View)) {
                return null;
            }
            view = (View) parent;
        }
    }

    e a(e eVar) {
        e eVar2 = this.da;
        this.da = eVar;
        return eVar2;
    }

    void a() {
        int iA = this.i.a();
        this.f661e = iA;
        boolean z = this.f662f.size() < (this.B * 2) + 1 && this.f662f.size() < iA;
        int iMax = this.j;
        int i = 0;
        boolean z2 = false;
        while (i < this.f662f.size()) {
            b bVar = this.f662f.get(i);
            int iA2 = this.i.a(bVar.f672a);
            if (iA2 != -1) {
                if (iA2 == -2) {
                    this.f662f.remove(i);
                    i--;
                    if (!z2) {
                        this.i.b((ViewGroup) this);
                        z2 = true;
                    }
                    this.i.a((ViewGroup) this, bVar.f673b, bVar.f672a);
                    int i2 = this.j;
                    if (i2 == bVar.f673b) {
                        iMax = Math.max(0, Math.min(i2, iA - 1));
                    }
                } else {
                    int i3 = bVar.f673b;
                    if (i3 != iA2) {
                        if (i3 == this.j) {
                            iMax = iA2;
                        }
                        bVar.f673b = iA2;
                    }
                }
                z = true;
            }
            i++;
        }
        if (z2) {
            this.i.a((ViewGroup) this);
        }
        Collections.sort(this.f662f, f658b);
        if (z) {
            int childCount = getChildCount();
            for (int i4 = 0; i4 < childCount; i4++) {
                LayoutParams layoutParams = (LayoutParams) getChildAt(i4).getLayoutParams();
                if (!layoutParams.f663a) {
                    layoutParams.f665c = 0.0f;
                }
            }
            a(iMax, false, true);
            requestLayout();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0066  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected void a(int r13, float r14, int r15) {
        /*
            r12 = this;
            int r0 = r12.aa
            r1 = 0
            r2 = 1
            if (r0 <= 0) goto L6d
            int r0 = r12.getScrollX()
            int r3 = r12.getPaddingLeft()
            int r4 = r12.getPaddingRight()
            int r5 = r12.getWidth()
            int r6 = r12.getChildCount()
            r7 = r4
            r4 = r3
            r3 = 0
        L1d:
            if (r3 >= r6) goto L6d
            android.view.View r8 = r12.getChildAt(r3)
            android.view.ViewGroup$LayoutParams r9 = r8.getLayoutParams()
            androidx.viewpager.widget.ViewPager$LayoutParams r9 = (androidx.viewpager.widget.ViewPager.LayoutParams) r9
            boolean r10 = r9.f663a
            if (r10 != 0) goto L2e
            goto L6a
        L2e:
            int r9 = r9.f664b
            r9 = r9 & 7
            if (r9 == r2) goto L4f
            r10 = 3
            if (r9 == r10) goto L49
            r10 = 5
            if (r9 == r10) goto L3c
            r9 = r4
            goto L5e
        L3c:
            int r9 = r5 - r7
            int r10 = r8.getMeasuredWidth()
            int r9 = r9 - r10
            int r10 = r8.getMeasuredWidth()
            int r7 = r7 + r10
            goto L5b
        L49:
            int r9 = r8.getWidth()
            int r9 = r9 + r4
            goto L5e
        L4f:
            int r9 = r8.getMeasuredWidth()
            int r9 = r5 - r9
            int r9 = r9 / 2
            int r9 = java.lang.Math.max(r9, r4)
        L5b:
            r11 = r9
            r9 = r4
            r4 = r11
        L5e:
            int r4 = r4 + r0
            int r10 = r8.getLeft()
            int r4 = r4 - r10
            if (r4 == 0) goto L69
            r8.offsetLeftAndRight(r4)
        L69:
            r4 = r9
        L6a:
            int r3 = r3 + 1
            goto L1d
        L6d:
            r12.b(r13, r14, r15)
            androidx.viewpager.widget.ViewPager$f r13 = r12.fa
            if (r13 == 0) goto La1
            int r13 = r12.getScrollX()
            int r14 = r12.getChildCount()
        L7c:
            if (r1 >= r14) goto La1
            android.view.View r15 = r12.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r0 = r15.getLayoutParams()
            androidx.viewpager.widget.ViewPager$LayoutParams r0 = (androidx.viewpager.widget.ViewPager.LayoutParams) r0
            boolean r0 = r0.f663a
            if (r0 == 0) goto L8d
            goto L9e
        L8d:
            int r0 = r15.getLeft()
            int r0 = r0 - r13
            float r0 = (float) r0
            int r3 = r12.getClientWidth()
            float r3 = (float) r3
            float r0 = r0 / r3
            androidx.viewpager.widget.ViewPager$f r3 = r12.fa
            r3.a(r15, r0)
        L9e:
            int r1 = r1 + 1
            goto L7c
        La1:
            r12.W = r2
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.viewpager.widget.ViewPager.a(int, float, int):void");
    }

    void a(int i, int i2, int i3) {
        int scrollX;
        if (getChildCount() == 0) {
            setScrollingCacheEnabled(false);
            return;
        }
        Scroller scroller = this.n;
        if ((scroller == null || scroller.isFinished()) ? false : true) {
            scrollX = this.o ? this.n.getCurrX() : this.n.getStartX();
            this.n.abortAnimation();
            setScrollingCacheEnabled(false);
        } else {
            scrollX = getScrollX();
        }
        int i4 = scrollX;
        int scrollY = getScrollY();
        int i5 = i - i4;
        int i6 = i2 - scrollY;
        if (i5 == 0 && i6 == 0) {
            a(false);
            e();
            setScrollState(0);
            return;
        }
        setScrollingCacheEnabled(true);
        setScrollState(2);
        int clientWidth = getClientWidth();
        int i7 = clientWidth / 2;
        float f2 = clientWidth;
        float f3 = i7;
        float fA = f3 + (a(Math.min(1.0f, (Math.abs(i5) * 1.0f) / f2)) * f3);
        int iAbs = Math.abs(i3);
        int iMin = Math.min(iAbs > 0 ? Math.round(Math.abs(fA / iAbs) * 1000.0f) * 4 : (int) (((Math.abs(i5) / ((f2 * this.i.b(this.j)) + this.q)) + 1.0f) * 100.0f), 600);
        this.o = false;
        this.n.startScroll(i4, scrollY, i5, i6, iMin);
        n.l(this);
    }

    public void a(int i, boolean z) {
        this.A = false;
        a(i, z, false);
    }

    void a(int i, boolean z, boolean z2) {
        a(i, z, z2, 0);
    }

    void a(int i, boolean z, boolean z2, int i2) {
        androidx.viewpager.widget.a aVar = this.i;
        if (aVar == null || aVar.a() <= 0) {
            setScrollingCacheEnabled(false);
            return;
        }
        if (!z2 && this.j == i && this.f662f.size() != 0) {
            setScrollingCacheEnabled(false);
            return;
        }
        if (i < 0) {
            i = 0;
        } else if (i >= this.i.a()) {
            i = this.i.a() - 1;
        }
        int i3 = this.B;
        int i4 = this.j;
        if (i > i4 + i3 || i < i4 - i3) {
            for (int i5 = 0; i5 < this.f662f.size(); i5++) {
                this.f662f.get(i5).f674c = true;
            }
        }
        boolean z3 = this.j != i;
        if (!this.U) {
            c(i);
            a(i, z, i2, z3);
        } else {
            this.j = i;
            if (z3) {
                d(i);
            }
            requestLayout();
        }
    }

    public void a(d dVar) {
        if (this.ea == null) {
            this.ea = new ArrayList();
        }
        this.ea.add(dVar);
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0068  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0094  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean a(int r7) {
        /*
            Method dump skipped, instruction units count: 210
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.viewpager.widget.ViewPager.a(int):boolean");
    }

    public boolean a(KeyEvent keyEvent) {
        int i;
        if (keyEvent.getAction() == 0) {
            int keyCode = keyEvent.getKeyCode();
            if (keyCode != 21) {
                if (keyCode != 22) {
                    if (keyCode == 61) {
                        if (keyEvent.hasNoModifiers()) {
                            return a(2);
                        }
                        if (keyEvent.hasModifiers(1)) {
                            return a(1);
                        }
                    }
                } else {
                    if (keyEvent.hasModifiers(2)) {
                        return d();
                    }
                    i = 66;
                }
            } else {
                if (keyEvent.hasModifiers(2)) {
                    return c();
                }
                i = 17;
            }
            return a(i);
        }
        return false;
    }

    protected boolean a(View view, boolean z, int i, int i2, int i3) {
        int i4;
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            int scrollX = view.getScrollX();
            int scrollY = view.getScrollY();
            for (int childCount = viewGroup.getChildCount() - 1; childCount >= 0; childCount--) {
                View childAt = viewGroup.getChildAt(childCount);
                int i5 = i2 + scrollX;
                if (i5 >= childAt.getLeft() && i5 < childAt.getRight() && (i4 = i3 + scrollY) >= childAt.getTop() && i4 < childAt.getBottom() && a(childAt, true, i, i5 - childAt.getLeft(), i4 - childAt.getTop())) {
                    return true;
                }
            }
        }
        return z && view.canScrollHorizontally(-i);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void addFocusables(ArrayList<View> arrayList, int i, int i2) {
        b bVarB;
        int size = arrayList.size();
        int descendantFocusability = getDescendantFocusability();
        if (descendantFocusability != 393216) {
            for (int i3 = 0; i3 < getChildCount(); i3++) {
                View childAt = getChildAt(i3);
                if (childAt.getVisibility() == 0 && (bVarB = b(childAt)) != null && bVarB.f673b == this.j) {
                    childAt.addFocusables(arrayList, i, i2);
                }
            }
        }
        if ((descendantFocusability != 262144 || size == arrayList.size()) && isFocusable()) {
            if (((i2 & 1) == 1 && isInTouchMode() && !isFocusableInTouchMode()) || arrayList == null) {
                return;
            }
            arrayList.add(this);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void addTouchables(ArrayList<View> arrayList) {
        b bVarB;
        for (int i = 0; i < getChildCount(); i++) {
            View childAt = getChildAt(i);
            if (childAt.getVisibility() == 0 && (bVarB = b(childAt)) != null && bVarB.f673b == this.j) {
                childAt.addTouchables(arrayList);
            }
        }
    }

    @Override // android.view.ViewGroup
    public void addView(View view, int i, ViewGroup.LayoutParams layoutParams) {
        if (!checkLayoutParams(layoutParams)) {
            layoutParams = generateLayoutParams(layoutParams);
        }
        LayoutParams layoutParams2 = (LayoutParams) layoutParams;
        layoutParams2.f663a |= c(view);
        if (!this.y) {
            super.addView(view, i, layoutParams);
        } else {
            if (layoutParams2 != null && layoutParams2.f663a) {
                throw new IllegalStateException("Cannot add pager decor view during layout");
            }
            layoutParams2.f666d = true;
            addViewInLayout(view, i, layoutParams);
        }
    }

    b b(int i) {
        for (int i2 = 0; i2 < this.f662f.size(); i2++) {
            b bVar = this.f662f.get(i2);
            if (bVar.f673b == i) {
                return bVar;
            }
        }
        return null;
    }

    b b(View view) {
        for (int i = 0; i < this.f662f.size(); i++) {
            b bVar = this.f662f.get(i);
            if (this.i.a(view, bVar.f672a)) {
                return bVar;
            }
        }
        return null;
    }

    void b() {
        setWillNotDraw(false);
        setDescendantFocusability(262144);
        setFocusable(true);
        Context context = getContext();
        this.n = new Scroller(context, f659c);
        ViewConfiguration viewConfiguration = ViewConfiguration.get(context);
        float f2 = context.getResources().getDisplayMetrics().density;
        this.G = viewConfiguration.getScaledPagingTouchSlop();
        this.N = (int) (400.0f * f2);
        this.O = viewConfiguration.getScaledMaximumFlingVelocity();
        this.S = new EdgeEffect(context);
        this.T = new EdgeEffect(context);
        this.P = (int) (25.0f * f2);
        this.Q = (int) (2.0f * f2);
        this.E = (int) (f2 * 16.0f);
        n.a(this, new c());
        if (n.c(this) == 0) {
            n.c(this, 1);
        }
        n.a(this, new androidx.viewpager.widget.g(this));
    }

    public void b(d dVar) {
        List<d> list = this.ea;
        if (list != null) {
            list.remove(dVar);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:27:0x0066, code lost:
    
        r8 = null;
     */
    /* JADX WARN: Removed duplicated region for block: B:63:0x00e1 A[PHI: r7 r10 r15
  0x00e1: PHI (r7v14 float) = (r7v12 float), (r7v13 float), (r7v5 float) binds: [B:62:0x00df, B:59:0x00d1, B:53:0x00c3] A[DONT_GENERATE, DONT_INLINE]
  0x00e1: PHI (r10v4 int) = (r10v3 int), (r10v2 int), (r10v8 int) binds: [B:62:0x00df, B:59:0x00d1, B:53:0x00c3] A[DONT_GENERATE, DONT_INLINE]
  0x00e1: PHI (r15v6 int) = (r15v4 int), (r15v5 int), (r15v10 int) binds: [B:62:0x00df, B:59:0x00d1, B:53:0x00c3] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:64:0x00ea A[PHI: r7 r10 r15
  0x00ea: PHI (r7v17 float) = (r7v12 float), (r7v13 float), (r7v5 float) binds: [B:62:0x00df, B:59:0x00d1, B:53:0x00c3] A[DONT_GENERATE, DONT_INLINE]
  0x00ea: PHI (r10v7 int) = (r10v3 int), (r10v2 int), (r10v8 int) binds: [B:62:0x00df, B:59:0x00d1, B:53:0x00c3] A[DONT_GENERATE, DONT_INLINE]
  0x00ea: PHI (r15v9 int) = (r15v4 int), (r15v5 int), (r15v10 int) binds: [B:62:0x00df, B:59:0x00d1, B:53:0x00c3] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    void c(int r18) {
        /*
            Method dump skipped, instruction units count: 586
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.viewpager.widget.ViewPager.c(int):void");
    }

    boolean c() {
        int i = this.j;
        if (i <= 0) {
            return false;
        }
        a(i - 1, true);
        return true;
    }

    @Override // android.view.View
    public boolean canScrollHorizontally(int i) {
        if (this.i == null) {
            return false;
        }
        int clientWidth = getClientWidth();
        int scrollX = getScrollX();
        return i < 0 ? scrollX > ((int) (((float) clientWidth) * this.u)) : i > 0 && scrollX < ((int) (((float) clientWidth) * this.v));
    }

    @Override // android.view.ViewGroup
    protected boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return (layoutParams instanceof LayoutParams) && super.checkLayoutParams(layoutParams);
    }

    @Override // android.view.View
    public void computeScroll() {
        this.o = true;
        if (this.n.isFinished() || !this.n.computeScrollOffset()) {
            a(true);
            return;
        }
        int scrollX = getScrollX();
        int scrollY = getScrollY();
        int currX = this.n.getCurrX();
        int currY = this.n.getCurrY();
        if (scrollX != currX || scrollY != currY) {
            scrollTo(currX, currY);
            if (!f(currX)) {
                this.n.abortAnimation();
                scrollTo(0, currY);
            }
        }
        n.l(this);
    }

    boolean d() {
        androidx.viewpager.widget.a aVar = this.i;
        if (aVar == null || this.j >= aVar.a() - 1) {
            return false;
        }
        a(this.j + 1, true);
        return true;
    }

    @Override // android.view.ViewGroup, android.view.View
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        return super.dispatchKeyEvent(keyEvent) || a(keyEvent);
    }

    @Override // android.view.View
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        b bVarB;
        if (accessibilityEvent.getEventType() == 4096) {
            return super.dispatchPopulateAccessibilityEvent(accessibilityEvent);
        }
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            if (childAt.getVisibility() == 0 && (bVarB = b(childAt)) != null && bVarB.f673b == this.j && childAt.dispatchPopulateAccessibilityEvent(accessibilityEvent)) {
                return true;
            }
        }
        return false;
    }

    @Override // android.view.View
    public void draw(Canvas canvas) {
        androidx.viewpager.widget.a aVar;
        super.draw(canvas);
        int overScrollMode = getOverScrollMode();
        boolean zDraw = false;
        if (overScrollMode == 0 || (overScrollMode == 1 && (aVar = this.i) != null && aVar.a() > 1)) {
            if (!this.S.isFinished()) {
                int iSave = canvas.save();
                int height = (getHeight() - getPaddingTop()) - getPaddingBottom();
                int width = getWidth();
                canvas.rotate(270.0f);
                canvas.translate((-height) + getPaddingTop(), this.u * width);
                this.S.setSize(height, width);
                zDraw = false | this.S.draw(canvas);
                canvas.restoreToCount(iSave);
            }
            if (!this.T.isFinished()) {
                int iSave2 = canvas.save();
                int width2 = getWidth();
                int height2 = (getHeight() - getPaddingTop()) - getPaddingBottom();
                canvas.rotate(90.0f);
                canvas.translate(-getPaddingTop(), (-(this.v + 1.0f)) * width2);
                this.T.setSize(height2, width2);
                zDraw |= this.T.draw(canvas);
                canvas.restoreToCount(iSave2);
            }
        } else {
            this.S.finish();
            this.T.finish();
        }
        if (zDraw) {
            n.l(this);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        Drawable drawable = this.r;
        if (drawable == null || !drawable.isStateful()) {
            return;
        }
        drawable.setState(getDrawableState());
    }

    void e() {
        c(this.j);
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
        return generateDefaultLayoutParams();
    }

    public androidx.viewpager.widget.a getAdapter() {
        return this.i;
    }

    @Override // android.view.ViewGroup
    protected int getChildDrawingOrder(int i, int i2) {
        if (this.ha == 2) {
            i2 = (i - 1) - i2;
        }
        return ((LayoutParams) this.ia.get(i2).getLayoutParams()).f668f;
    }

    public int getCurrentItem() {
        return this.j;
    }

    public int getOffscreenPageLimit() {
        return this.B;
    }

    public int getPageMargin() {
        return this.q;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.U = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        removeCallbacks(this.ja);
        Scroller scroller = this.n;
        if (scroller != null && !scroller.isFinished()) {
            this.n.abortAnimation();
        }
        super.onDetachedFromWindow();
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        float f2;
        float f3;
        super.onDraw(canvas);
        if (this.q <= 0 || this.r == null || this.f662f.size() <= 0 || this.i == null) {
            return;
        }
        int scrollX = getScrollX();
        float width = getWidth();
        float f4 = this.q / width;
        int i = 0;
        b bVar = this.f662f.get(0);
        float f5 = bVar.f676e;
        int size = this.f662f.size();
        int i2 = bVar.f673b;
        int i3 = this.f662f.get(size - 1).f673b;
        while (i2 < i3) {
            while (i2 > bVar.f673b && i < size) {
                i++;
                bVar = this.f662f.get(i);
            }
            if (i2 == bVar.f673b) {
                float f6 = bVar.f676e;
                float f7 = bVar.f675d;
                f2 = (f6 + f7) * width;
                f5 = f6 + f7 + f4;
            } else {
                float fB = this.i.b(i2);
                f2 = (f5 + fB) * width;
                f5 += fB + f4;
            }
            if (this.q + f2 > scrollX) {
                f3 = f4;
                this.r.setBounds(Math.round(f2), this.s, Math.round(this.q + f2), this.t);
                this.r.draw(canvas);
            } else {
                f3 = f4;
            }
            if (f2 > scrollX + r2) {
                return;
            }
            i2++;
            f4 = f3;
        }
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction() & 255;
        if (action == 3 || action == 1) {
            i();
            return false;
        }
        if (action != 0) {
            if (this.C) {
                return true;
            }
            if (this.D) {
                return false;
            }
        }
        if (action == 0) {
            float x = motionEvent.getX();
            this.J = x;
            this.H = x;
            float y = motionEvent.getY();
            this.K = y;
            this.I = y;
            this.L = motionEvent.getPointerId(0);
            this.D = false;
            this.o = true;
            this.n.computeScrollOffset();
            if (this.ka != 2 || Math.abs(this.n.getFinalX() - this.n.getCurrX()) <= this.Q) {
                a(false);
                this.C = false;
            } else {
                this.n.abortAnimation();
                this.A = false;
                e();
                this.C = true;
                c(true);
                setScrollState(1);
            }
        } else if (action == 2) {
            int i = this.L;
            if (i != -1) {
                int iFindPointerIndex = motionEvent.findPointerIndex(i);
                float x2 = motionEvent.getX(iFindPointerIndex);
                float f2 = x2 - this.H;
                float fAbs = Math.abs(f2);
                float y2 = motionEvent.getY(iFindPointerIndex);
                float fAbs2 = Math.abs(y2 - this.K);
                if (f2 != 0.0f && !a(this.H, f2) && a(this, false, (int) f2, (int) x2, (int) y2)) {
                    this.H = x2;
                    this.I = y2;
                    this.D = true;
                    return false;
                }
                if (fAbs > this.G && fAbs * 0.5f > fAbs2) {
                    this.C = true;
                    c(true);
                    setScrollState(1);
                    this.H = f2 > 0.0f ? this.J + this.G : this.J - this.G;
                    this.I = y2;
                    setScrollingCacheEnabled(true);
                } else if (fAbs2 > this.G) {
                    this.D = true;
                }
                if (this.C && b(x2)) {
                    n.l(this);
                }
            }
        } else if (action == 6) {
            a(motionEvent);
        }
        if (this.M == null) {
            this.M = VelocityTracker.obtain();
        }
        this.M.addMovement(motionEvent);
        return this.C;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        boolean z2;
        b bVarB;
        int iMax;
        int iMax2;
        int childCount = getChildCount();
        int i5 = i3 - i;
        int i6 = i4 - i2;
        int paddingLeft = getPaddingLeft();
        int paddingTop = getPaddingTop();
        int paddingRight = getPaddingRight();
        int paddingBottom = getPaddingBottom();
        int scrollX = getScrollX();
        int measuredHeight = paddingBottom;
        int i7 = 0;
        int measuredHeight2 = paddingTop;
        int measuredWidth = paddingLeft;
        for (int i8 = 0; i8 < childCount; i8++) {
            View childAt = getChildAt(i8);
            if (childAt.getVisibility() != 8) {
                LayoutParams layoutParams = (LayoutParams) childAt.getLayoutParams();
                if (layoutParams.f663a) {
                    int i9 = layoutParams.f664b;
                    int i10 = i9 & 7;
                    int i11 = i9 & 112;
                    if (i10 == 1) {
                        iMax = Math.max((i5 - childAt.getMeasuredWidth()) / 2, measuredWidth);
                    } else if (i10 == 3) {
                        iMax = measuredWidth;
                        measuredWidth = childAt.getMeasuredWidth() + measuredWidth;
                    } else if (i10 != 5) {
                        iMax = measuredWidth;
                    } else {
                        iMax = (i5 - paddingRight) - childAt.getMeasuredWidth();
                        paddingRight += childAt.getMeasuredWidth();
                    }
                    if (i11 == 16) {
                        iMax2 = Math.max((i6 - childAt.getMeasuredHeight()) / 2, measuredHeight2);
                    } else if (i11 == 48) {
                        iMax2 = measuredHeight2;
                        measuredHeight2 = childAt.getMeasuredHeight() + measuredHeight2;
                    } else if (i11 != 80) {
                        iMax2 = measuredHeight2;
                    } else {
                        iMax2 = (i6 - measuredHeight) - childAt.getMeasuredHeight();
                        measuredHeight += childAt.getMeasuredHeight();
                    }
                    int i12 = iMax + scrollX;
                    childAt.layout(i12, iMax2, childAt.getMeasuredWidth() + i12, iMax2 + childAt.getMeasuredHeight());
                    i7++;
                }
            }
        }
        int i13 = (i5 - measuredWidth) - paddingRight;
        for (int i14 = 0; i14 < childCount; i14++) {
            View childAt2 = getChildAt(i14);
            if (childAt2.getVisibility() != 8) {
                LayoutParams layoutParams2 = (LayoutParams) childAt2.getLayoutParams();
                if (!layoutParams2.f663a && (bVarB = b(childAt2)) != null) {
                    float f2 = i13;
                    int i15 = ((int) (bVarB.f676e * f2)) + measuredWidth;
                    if (layoutParams2.f666d) {
                        layoutParams2.f666d = false;
                        childAt2.measure(View.MeasureSpec.makeMeasureSpec((int) (f2 * layoutParams2.f665c), 1073741824), View.MeasureSpec.makeMeasureSpec((i6 - measuredHeight2) - measuredHeight, 1073741824));
                    }
                    childAt2.layout(i15, measuredHeight2, childAt2.getMeasuredWidth() + i15, childAt2.getMeasuredHeight() + measuredHeight2);
                }
            }
        }
        this.s = measuredHeight2;
        this.t = i6 - measuredHeight;
        this.aa = i7;
        if (this.U) {
            z2 = false;
            a(this.j, false, 0, false);
        } else {
            z2 = false;
        }
        this.U = z2;
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x0084  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x008b  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0090  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0095  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00a4  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00aa  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected void onMeasure(int r14, int r15) {
        /*
            Method dump skipped, instruction units count: 246
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.viewpager.widget.ViewPager.onMeasure(int, int):void");
    }

    @Override // android.view.ViewGroup
    protected boolean onRequestFocusInDescendants(int i, Rect rect) {
        int i2;
        int i3;
        b bVarB;
        int childCount = getChildCount();
        int i4 = -1;
        if ((i & 2) != 0) {
            i4 = childCount;
            i2 = 0;
            i3 = 1;
        } else {
            i2 = childCount - 1;
            i3 = -1;
        }
        while (i2 != i4) {
            View childAt = getChildAt(i2);
            if (childAt.getVisibility() == 0 && (bVarB = b(childAt)) != null && bVarB.f673b == this.j && childAt.requestFocus(i, rect)) {
                return true;
            }
            i2 += i3;
        }
        return false;
    }

    @Override // android.view.View
    public void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof SavedState)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        SavedState savedState = (SavedState) parcelable;
        super.onRestoreInstanceState(savedState.a());
        androidx.viewpager.widget.a aVar = this.i;
        if (aVar != null) {
            aVar.a(savedState.f670d, savedState.f671e);
            a(savedState.f669c, false, true);
        } else {
            this.k = savedState.f669c;
            this.l = savedState.f670d;
            this.m = savedState.f671e;
        }
    }

    @Override // android.view.View
    public Parcelable onSaveInstanceState() {
        SavedState savedState = new SavedState(super.onSaveInstanceState());
        savedState.f669c = this.j;
        androidx.viewpager.widget.a aVar = this.i;
        if (aVar != null) {
            savedState.f670d = aVar.b();
        }
        return savedState;
    }

    @Override // android.view.View
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        if (i != i3) {
            int i5 = this.q;
            a(i, i3, i5, i5);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:61:0x0151  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean onTouchEvent(android.view.MotionEvent r8) {
        /*
            Method dump skipped, instruction units count: 342
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.viewpager.widget.ViewPager.onTouchEvent(android.view.MotionEvent):boolean");
    }

    @Override // android.view.ViewGroup, android.view.ViewManager
    public void removeView(View view) {
        if (this.y) {
            removeViewInLayout(view);
        } else {
            super.removeView(view);
        }
    }

    public void setAdapter(androidx.viewpager.widget.a aVar) {
        androidx.viewpager.widget.a aVar2 = this.i;
        if (aVar2 != null) {
            aVar2.b((DataSetObserver) null);
            this.i.b((ViewGroup) this);
            for (int i = 0; i < this.f662f.size(); i++) {
                b bVar = this.f662f.get(i);
                this.i.a((ViewGroup) this, bVar.f673b, bVar.f672a);
            }
            this.i.a((ViewGroup) this);
            this.f662f.clear();
            h();
            this.j = 0;
            scrollTo(0, 0);
        }
        androidx.viewpager.widget.a aVar3 = this.i;
        this.i = aVar;
        this.f661e = 0;
        if (this.i != null) {
            if (this.p == null) {
                this.p = new g();
            }
            this.i.b(this.p);
            this.A = false;
            boolean z = this.U;
            this.U = true;
            this.f661e = this.i.a();
            if (this.k >= 0) {
                this.i.a(this.l, this.m);
                a(this.k, false, true);
                this.k = -1;
                this.l = null;
                this.m = null;
            } else if (z) {
                requestLayout();
            } else {
                e();
            }
        }
        List<d> list = this.ea;
        if (list == null || list.isEmpty()) {
            return;
        }
        int size = this.ea.size();
        for (int i2 = 0; i2 < size; i2++) {
            this.ea.get(i2).a(this, aVar3, aVar);
        }
    }

    public void setCurrentItem(int i) {
        this.A = false;
        a(i, !this.U, false);
    }

    public void setOffscreenPageLimit(int i) {
        if (i < 1) {
            Log.w("ViewPager", "Requested offscreen page limit " + i + " too small; defaulting to 1");
            i = 1;
        }
        if (i != this.B) {
            this.B = i;
            e();
        }
    }

    @Deprecated
    public void setOnPageChangeListener(e eVar) {
        this.ca = eVar;
    }

    public void setPageMargin(int i) {
        int i2 = this.q;
        this.q = i;
        int width = getWidth();
        a(width, width, i, i2);
        requestLayout();
    }

    public void setPageMarginDrawable(int i) {
        setPageMarginDrawable(androidx.core.content.a.b(getContext(), i));
    }

    public void setPageMarginDrawable(Drawable drawable) {
        this.r = drawable;
        if (drawable != null) {
            refreshDrawableState();
        }
        setWillNotDraw(drawable == null);
        invalidate();
    }

    void setScrollState(int i) {
        if (this.ka == i) {
            return;
        }
        this.ka = i;
        if (this.fa != null) {
            b(i != 0);
        }
        e(i);
    }

    @Override // android.view.View
    protected boolean verifyDrawable(Drawable drawable) {
        return super.verifyDrawable(drawable) || drawable == this.r;
    }
}
