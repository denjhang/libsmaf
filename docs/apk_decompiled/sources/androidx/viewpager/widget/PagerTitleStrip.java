package androidx.viewpager.widget;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.database.DataSetObserver;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.text.method.SingleLineTransformationMethod;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.TextView;
import androidx.viewpager.widget.ViewPager;
import java.lang.ref.WeakReference;
import java.util.Locale;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@ViewPager.a
public class PagerTitleStrip extends ViewGroup {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int[] f648a = {R.attr.textAppearance, R.attr.textSize, R.attr.textColor, R.attr.gravity};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final int[] f649b = {R.attr.textAllCaps};

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    ViewPager f650c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    TextView f651d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    TextView f652e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    TextView f653f;
    private int g;
    float h;
    private int i;
    private int j;
    private boolean k;
    private boolean l;
    private final a m;
    private WeakReference<androidx.viewpager.widget.a> n;
    private int o;
    int p;

    private class a extends DataSetObserver implements ViewPager.e, ViewPager.d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f654a;

        a() {
        }

        @Override // androidx.viewpager.widget.ViewPager.e
        public void a(int i) {
            this.f654a = i;
        }

        @Override // androidx.viewpager.widget.ViewPager.e
        public void a(int i, float f2, int i2) {
            if (f2 > 0.5f) {
                i++;
            }
            PagerTitleStrip.this.a(i, f2, false);
        }

        @Override // androidx.viewpager.widget.ViewPager.d
        public void a(ViewPager viewPager, androidx.viewpager.widget.a aVar, androidx.viewpager.widget.a aVar2) {
            PagerTitleStrip.this.a(aVar, aVar2);
        }

        @Override // androidx.viewpager.widget.ViewPager.e
        public void b(int i) {
            if (this.f654a == 0) {
                PagerTitleStrip pagerTitleStrip = PagerTitleStrip.this;
                pagerTitleStrip.a(pagerTitleStrip.f650c.getCurrentItem(), PagerTitleStrip.this.f650c.getAdapter());
                float f2 = PagerTitleStrip.this.h;
                if (f2 < 0.0f) {
                    f2 = 0.0f;
                }
                PagerTitleStrip pagerTitleStrip2 = PagerTitleStrip.this;
                pagerTitleStrip2.a(pagerTitleStrip2.f650c.getCurrentItem(), f2, true);
            }
        }

        @Override // android.database.DataSetObserver
        public void onChanged() {
            PagerTitleStrip pagerTitleStrip = PagerTitleStrip.this;
            pagerTitleStrip.a(pagerTitleStrip.f650c.getCurrentItem(), PagerTitleStrip.this.f650c.getAdapter());
            float f2 = PagerTitleStrip.this.h;
            if (f2 < 0.0f) {
                f2 = 0.0f;
            }
            PagerTitleStrip pagerTitleStrip2 = PagerTitleStrip.this;
            pagerTitleStrip2.a(pagerTitleStrip2.f650c.getCurrentItem(), f2, true);
        }
    }

    private static class b extends SingleLineTransformationMethod {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Locale f656a;

        b(Context context) {
            this.f656a = context.getResources().getConfiguration().locale;
        }

        @Override // android.text.method.ReplacementTransformationMethod, android.text.method.TransformationMethod
        public CharSequence getTransformation(CharSequence charSequence, View view) {
            CharSequence transformation = super.getTransformation(charSequence, view);
            if (transformation != null) {
                return transformation.toString().toUpperCase(this.f656a);
            }
            return null;
        }
    }

    public PagerTitleStrip(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.g = -1;
        this.h = -1.0f;
        this.m = new a();
        TextView textView = new TextView(context);
        this.f651d = textView;
        addView(textView);
        TextView textView2 = new TextView(context);
        this.f652e = textView2;
        addView(textView2);
        TextView textView3 = new TextView(context);
        this.f653f = textView3;
        addView(textView3);
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, f648a);
        boolean z = false;
        int resourceId = typedArrayObtainStyledAttributes.getResourceId(0, 0);
        if (resourceId != 0) {
            androidx.core.widget.f.a(this.f651d, resourceId);
            androidx.core.widget.f.a(this.f652e, resourceId);
            androidx.core.widget.f.a(this.f653f, resourceId);
        }
        int dimensionPixelSize = typedArrayObtainStyledAttributes.getDimensionPixelSize(1, 0);
        if (dimensionPixelSize != 0) {
            a(0, dimensionPixelSize);
        }
        if (typedArrayObtainStyledAttributes.hasValue(2)) {
            int color = typedArrayObtainStyledAttributes.getColor(2, 0);
            this.f651d.setTextColor(color);
            this.f652e.setTextColor(color);
            this.f653f.setTextColor(color);
        }
        this.j = typedArrayObtainStyledAttributes.getInteger(3, 80);
        typedArrayObtainStyledAttributes.recycle();
        this.p = this.f652e.getTextColors().getDefaultColor();
        setNonPrimaryAlpha(0.6f);
        this.f651d.setEllipsize(TextUtils.TruncateAt.END);
        this.f652e.setEllipsize(TextUtils.TruncateAt.END);
        this.f653f.setEllipsize(TextUtils.TruncateAt.END);
        if (resourceId != 0) {
            TypedArray typedArrayObtainStyledAttributes2 = context.obtainStyledAttributes(resourceId, f649b);
            z = typedArrayObtainStyledAttributes2.getBoolean(0, false);
            typedArrayObtainStyledAttributes2.recycle();
        }
        if (z) {
            setSingleLineAllCaps(this.f651d);
            setSingleLineAllCaps(this.f652e);
            setSingleLineAllCaps(this.f653f);
        } else {
            this.f651d.setSingleLine();
            this.f652e.setSingleLine();
            this.f653f.setSingleLine();
        }
        this.i = (int) (context.getResources().getDisplayMetrics().density * 16.0f);
    }

    private static void setSingleLineAllCaps(TextView textView) {
        textView.setTransformationMethod(new b(textView.getContext()));
    }

    public void a(int i, float f2) {
        this.f651d.setTextSize(i, f2);
        this.f652e.setTextSize(i, f2);
        this.f653f.setTextSize(i, f2);
    }

    void a(int i, float f2, boolean z) {
        int i2;
        int i3;
        int i4;
        int i5;
        if (i != this.g) {
            a(i, this.f650c.getAdapter());
        } else if (!z && f2 == this.h) {
            return;
        }
        this.l = true;
        int measuredWidth = this.f651d.getMeasuredWidth();
        int measuredWidth2 = this.f652e.getMeasuredWidth();
        int measuredWidth3 = this.f653f.getMeasuredWidth();
        int i6 = measuredWidth2 / 2;
        int width = getWidth();
        int height = getHeight();
        int paddingLeft = getPaddingLeft();
        int paddingRight = getPaddingRight();
        int paddingTop = getPaddingTop();
        int paddingBottom = getPaddingBottom();
        int i7 = paddingRight + i6;
        int i8 = (width - (paddingLeft + i6)) - i7;
        float f3 = 0.5f + f2;
        if (f3 > 1.0f) {
            f3 -= 1.0f;
        }
        int i9 = ((width - i7) - ((int) (i8 * f3))) - i6;
        int i10 = measuredWidth2 + i9;
        int baseline = this.f651d.getBaseline();
        int baseline2 = this.f652e.getBaseline();
        int baseline3 = this.f653f.getBaseline();
        int iMax = Math.max(Math.max(baseline, baseline2), baseline3);
        int i11 = iMax - baseline;
        int i12 = iMax - baseline2;
        int i13 = iMax - baseline3;
        int iMax2 = Math.max(Math.max(this.f651d.getMeasuredHeight() + i11, this.f652e.getMeasuredHeight() + i12), this.f653f.getMeasuredHeight() + i13);
        int i14 = this.j & 112;
        if (i14 == 16) {
            i2 = (((height - paddingTop) - paddingBottom) - iMax2) / 2;
        } else {
            if (i14 != 80) {
                i3 = i11 + paddingTop;
                i4 = i12 + paddingTop;
                i5 = paddingTop + i13;
                TextView textView = this.f652e;
                textView.layout(i9, i4, i10, textView.getMeasuredHeight() + i4);
                int iMin = Math.min(paddingLeft, (i9 - this.i) - measuredWidth);
                TextView textView2 = this.f651d;
                textView2.layout(iMin, i3, measuredWidth + iMin, textView2.getMeasuredHeight() + i3);
                int iMax3 = Math.max((width - paddingRight) - measuredWidth3, i10 + this.i);
                TextView textView3 = this.f653f;
                textView3.layout(iMax3, i5, iMax3 + measuredWidth3, textView3.getMeasuredHeight() + i5);
                this.h = f2;
                this.l = false;
            }
            i2 = (height - paddingBottom) - iMax2;
        }
        i3 = i11 + i2;
        i4 = i12 + i2;
        i5 = i2 + i13;
        TextView textView4 = this.f652e;
        textView4.layout(i9, i4, i10, textView4.getMeasuredHeight() + i4);
        int iMin2 = Math.min(paddingLeft, (i9 - this.i) - measuredWidth);
        TextView textView22 = this.f651d;
        textView22.layout(iMin2, i3, measuredWidth + iMin2, textView22.getMeasuredHeight() + i3);
        int iMax32 = Math.max((width - paddingRight) - measuredWidth3, i10 + this.i);
        TextView textView32 = this.f653f;
        textView32.layout(iMax32, i5, iMax32 + measuredWidth3, textView32.getMeasuredHeight() + i5);
        this.h = f2;
        this.l = false;
    }

    void a(int i, androidx.viewpager.widget.a aVar) {
        int iA = aVar != null ? aVar.a() : 0;
        this.k = true;
        CharSequence charSequenceA = null;
        this.f651d.setText((i < 1 || aVar == null) ? null : aVar.a(i - 1));
        this.f652e.setText((aVar == null || i >= iA) ? null : aVar.a(i));
        int i2 = i + 1;
        if (i2 < iA && aVar != null) {
            charSequenceA = aVar.a(i2);
        }
        this.f653f.setText(charSequenceA);
        int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(Math.max(0, (int) (((getWidth() - getPaddingLeft()) - getPaddingRight()) * 0.8f)), Integer.MIN_VALUE);
        int iMakeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(Math.max(0, (getHeight() - getPaddingTop()) - getPaddingBottom()), Integer.MIN_VALUE);
        this.f651d.measure(iMakeMeasureSpec, iMakeMeasureSpec2);
        this.f652e.measure(iMakeMeasureSpec, iMakeMeasureSpec2);
        this.f653f.measure(iMakeMeasureSpec, iMakeMeasureSpec2);
        this.g = i;
        if (!this.l) {
            a(i, this.h, false);
        }
        this.k = false;
    }

    void a(androidx.viewpager.widget.a aVar, androidx.viewpager.widget.a aVar2) {
        if (aVar != null) {
            aVar.c(this.m);
            this.n = null;
        }
        if (aVar2 != null) {
            aVar2.a((DataSetObserver) this.m);
            this.n = new WeakReference<>(aVar2);
        }
        ViewPager viewPager = this.f650c;
        if (viewPager != null) {
            this.g = -1;
            this.h = -1.0f;
            a(viewPager.getCurrentItem(), aVar2);
            requestLayout();
        }
    }

    int getMinHeight() {
        Drawable background = getBackground();
        if (background != null) {
            return background.getIntrinsicHeight();
        }
        return 0;
    }

    public int getTextSpacing() {
        return this.i;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        ViewParent parent = getParent();
        if (!(parent instanceof ViewPager)) {
            throw new IllegalStateException("PagerTitleStrip must be a direct child of a ViewPager.");
        }
        ViewPager viewPager = (ViewPager) parent;
        androidx.viewpager.widget.a adapter = viewPager.getAdapter();
        viewPager.a((ViewPager.e) this.m);
        viewPager.a((ViewPager.d) this.m);
        this.f650c = viewPager;
        WeakReference<androidx.viewpager.widget.a> weakReference = this.n;
        a(weakReference != null ? weakReference.get() : null, adapter);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ViewPager viewPager = this.f650c;
        if (viewPager != null) {
            a(viewPager.getAdapter(), (androidx.viewpager.widget.a) null);
            this.f650c.a((ViewPager.e) null);
            this.f650c.b(this.m);
            this.f650c = null;
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        if (this.f650c != null) {
            float f2 = this.h;
            if (f2 < 0.0f) {
                f2 = 0.0f;
            }
            a(this.g, f2, true);
        }
    }

    @Override // android.view.View
    protected void onMeasure(int i, int i2) {
        int iMax;
        if (View.MeasureSpec.getMode(i) != 1073741824) {
            throw new IllegalStateException("Must measure with an exact width");
        }
        int paddingTop = getPaddingTop() + getPaddingBottom();
        int childMeasureSpec = ViewGroup.getChildMeasureSpec(i2, paddingTop, -2);
        int size = View.MeasureSpec.getSize(i);
        int childMeasureSpec2 = ViewGroup.getChildMeasureSpec(i, (int) (size * 0.2f), -2);
        this.f651d.measure(childMeasureSpec2, childMeasureSpec);
        this.f652e.measure(childMeasureSpec2, childMeasureSpec);
        this.f653f.measure(childMeasureSpec2, childMeasureSpec);
        if (View.MeasureSpec.getMode(i2) == 1073741824) {
            iMax = View.MeasureSpec.getSize(i2);
        } else {
            iMax = Math.max(getMinHeight(), this.f652e.getMeasuredHeight() + paddingTop);
        }
        setMeasuredDimension(size, View.resolveSizeAndState(iMax, i2, this.f652e.getMeasuredState() << 16));
    }

    @Override // android.view.View, android.view.ViewParent
    public void requestLayout() {
        if (this.k) {
            return;
        }
        super.requestLayout();
    }

    public void setGravity(int i) {
        this.j = i;
        requestLayout();
    }

    public void setNonPrimaryAlpha(float f2) {
        this.o = ((int) (f2 * 255.0f)) & 255;
        int i = (this.o << 24) | (this.p & 16777215);
        this.f651d.setTextColor(i);
        this.f653f.setTextColor(i);
    }

    public void setTextColor(int i) {
        this.p = i;
        this.f652e.setTextColor(i);
        int i2 = (this.o << 24) | (this.p & 16777215);
        this.f651d.setTextColor(i2);
        this.f653f.setTextColor(i2);
    }

    public void setTextSpacing(int i) {
        this.i = i;
        requestLayout();
    }
}
