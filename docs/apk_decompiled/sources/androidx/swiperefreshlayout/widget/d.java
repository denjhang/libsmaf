package androidx.swiperefreshlayout.widget;

import android.animation.Animator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.Drawable;
import android.view.animation.Interpolator;
import android.view.animation.LinearInterpolator;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class d extends Drawable implements Animatable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Interpolator f619a = new LinearInterpolator();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Interpolator f620b = new b.f.a.a.a();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final int[] f621c = {-16777216};

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final a f622d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private float f623e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Resources f624f;
    private Animator g;
    float h;
    boolean i;

    /* JADX INFO: Access modifiers changed from: private */
    static class a {
        int[] i;
        int j;
        float k;
        float l;
        float m;
        boolean n;
        Path o;
        float q;
        int r;
        int s;
        int u;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final RectF f625a = new RectF();

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final Paint f626b = new Paint();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        final Paint f627c = new Paint();

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        final Paint f628d = new Paint();

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        float f629e = 0.0f;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        float f630f = 0.0f;
        float g = 0.0f;
        float h = 5.0f;
        float p = 1.0f;
        int t = 255;

        a() {
            this.f626b.setStrokeCap(Paint.Cap.SQUARE);
            this.f626b.setAntiAlias(true);
            this.f626b.setStyle(Paint.Style.STROKE);
            this.f627c.setStyle(Paint.Style.FILL);
            this.f627c.setAntiAlias(true);
            this.f628d.setColor(0);
        }

        int a() {
            return this.t;
        }

        void a(float f2) {
            if (f2 != this.p) {
                this.p = f2;
            }
        }

        void a(float f2, float f3) {
            this.r = (int) f2;
            this.s = (int) f3;
        }

        void a(int i) {
            this.t = i;
        }

        void a(Canvas canvas, float f2, float f3, RectF rectF) {
            if (this.n) {
                Path path = this.o;
                if (path == null) {
                    this.o = new Path();
                    this.o.setFillType(Path.FillType.EVEN_ODD);
                } else {
                    path.reset();
                }
                float fMin = Math.min(rectF.width(), rectF.height()) / 2.0f;
                float f4 = (this.r * this.p) / 2.0f;
                this.o.moveTo(0.0f, 0.0f);
                this.o.lineTo(this.r * this.p, 0.0f);
                Path path2 = this.o;
                float f5 = this.r;
                float f6 = this.p;
                path2.lineTo((f5 * f6) / 2.0f, this.s * f6);
                this.o.offset((fMin + rectF.centerX()) - f4, rectF.centerY() + (this.h / 2.0f));
                this.o.close();
                this.f627c.setColor(this.u);
                this.f627c.setAlpha(this.t);
                canvas.save();
                canvas.rotate(f2 + f3, rectF.centerX(), rectF.centerY());
                canvas.drawPath(this.o, this.f627c);
                canvas.restore();
            }
        }

        void a(Canvas canvas, Rect rect) {
            RectF rectF = this.f625a;
            float f2 = this.q;
            float fMin = (this.h / 2.0f) + f2;
            if (f2 <= 0.0f) {
                fMin = (Math.min(rect.width(), rect.height()) / 2.0f) - Math.max((this.r * this.p) / 2.0f, this.h / 2.0f);
            }
            rectF.set(rect.centerX() - fMin, rect.centerY() - fMin, rect.centerX() + fMin, rect.centerY() + fMin);
            float f3 = this.f629e;
            float f4 = this.g;
            float f5 = (f3 + f4) * 360.0f;
            float f6 = ((this.f630f + f4) * 360.0f) - f5;
            this.f626b.setColor(this.u);
            this.f626b.setAlpha(this.t);
            float f7 = this.h / 2.0f;
            rectF.inset(f7, f7);
            canvas.drawCircle(rectF.centerX(), rectF.centerY(), rectF.width() / 2.0f, this.f628d);
            float f8 = -f7;
            rectF.inset(f8, f8);
            canvas.drawArc(rectF, f5, f6, false, this.f626b);
            a(canvas, f5, f6, rectF);
        }

        void a(ColorFilter colorFilter) {
            this.f626b.setColorFilter(colorFilter);
        }

        void a(boolean z) {
            if (this.n != z) {
                this.n = z;
            }
        }

        void a(int[] iArr) {
            this.i = iArr;
            c(0);
        }

        float b() {
            return this.f630f;
        }

        void b(float f2) {
            this.q = f2;
        }

        void b(int i) {
            this.u = i;
        }

        int c() {
            return this.i[d()];
        }

        void c(float f2) {
            this.f630f = f2;
        }

        void c(int i) {
            this.j = i;
            this.u = this.i[this.j];
        }

        int d() {
            return (this.j + 1) % this.i.length;
        }

        void d(float f2) {
            this.g = f2;
        }

        float e() {
            return this.f629e;
        }

        void e(float f2) {
            this.f629e = f2;
        }

        int f() {
            return this.i[this.j];
        }

        void f(float f2) {
            this.h = f2;
            this.f626b.setStrokeWidth(f2);
        }

        float g() {
            return this.l;
        }

        float h() {
            return this.m;
        }

        float i() {
            return this.k;
        }

        void j() {
            c(d());
        }

        void k() {
            this.k = 0.0f;
            this.l = 0.0f;
            this.m = 0.0f;
            e(0.0f);
            c(0.0f);
            d(0.0f);
        }

        void l() {
            this.k = this.f629e;
            this.l = this.f630f;
            this.m = this.g;
        }
    }

    public d(Context context) {
        b.d.c.h.a(context);
        this.f624f = context.getResources();
        this.f622d = new a();
        this.f622d.a(f621c);
        c(2.5f);
        a();
    }

    private int a(float f2, int i, int i2) {
        return ((((i >> 24) & 255) + ((int) ((((i2 >> 24) & 255) - r0) * f2))) << 24) | ((((i >> 16) & 255) + ((int) ((((i2 >> 16) & 255) - r1) * f2))) << 16) | ((((i >> 8) & 255) + ((int) ((((i2 >> 8) & 255) - r2) * f2))) << 8) | ((i & 255) + ((int) (f2 * ((i2 & 255) - r8))));
    }

    private void a() {
        a aVar = this.f622d;
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        valueAnimatorOfFloat.addUpdateListener(new b(this, aVar));
        valueAnimatorOfFloat.setRepeatCount(-1);
        valueAnimatorOfFloat.setRepeatMode(1);
        valueAnimatorOfFloat.setInterpolator(f619a);
        valueAnimatorOfFloat.addListener(new c(this, aVar));
        this.g = valueAnimatorOfFloat;
    }

    private void a(float f2, float f3, float f4, float f5) {
        a aVar = this.f622d;
        float f6 = this.f624f.getDisplayMetrics().density;
        aVar.f(f3 * f6);
        aVar.b(f2 * f6);
        aVar.c(0);
        aVar.a(f4 * f6, f5 * f6);
    }

    private void b(float f2, a aVar) {
        a(f2, aVar);
        float fFloor = (float) (Math.floor(aVar.h() / 0.8f) + 1.0d);
        aVar.e(aVar.i() + (((aVar.g() - 0.01f) - aVar.i()) * f2));
        aVar.c(aVar.g());
        aVar.d(aVar.h() + ((fFloor - aVar.h()) * f2));
    }

    private void d(float f2) {
        this.f623e = f2;
    }

    public void a(float f2) {
        this.f622d.a(f2);
        invalidateSelf();
    }

    public void a(float f2, float f3) {
        this.f622d.e(f2);
        this.f622d.c(f3);
        invalidateSelf();
    }

    void a(float f2, a aVar) {
        aVar.b(f2 > 0.75f ? a((f2 - 0.75f) / 0.25f, aVar.f(), aVar.c()) : aVar.f());
    }

    void a(float f2, a aVar, boolean z) {
        float fI;
        float interpolation;
        if (this.i) {
            b(f2, aVar);
            return;
        }
        if (f2 != 1.0f || z) {
            float fH = aVar.h();
            if (f2 < 0.5f) {
                float fI2 = aVar.i();
                fI = (f620b.getInterpolation(f2 / 0.5f) * 0.79f) + 0.01f + fI2;
                interpolation = fI2;
            } else {
                fI = aVar.i() + 0.79f;
                interpolation = fI - (((1.0f - f620b.getInterpolation((f2 - 0.5f) / 0.5f)) * 0.79f) + 0.01f);
            }
            float f3 = fH + (0.20999998f * f2);
            float f4 = (f2 + this.h) * 216.0f;
            aVar.e(interpolation);
            aVar.c(fI);
            aVar.d(f3);
            d(f4);
        }
    }

    public void a(int i) {
        float f2;
        float f3;
        float f4;
        float f5;
        if (i == 0) {
            f2 = 11.0f;
            f3 = 3.0f;
            f4 = 12.0f;
            f5 = 6.0f;
        } else {
            f2 = 7.5f;
            f3 = 2.5f;
            f4 = 10.0f;
            f5 = 5.0f;
        }
        a(f2, f3, f4, f5);
        invalidateSelf();
    }

    public void a(boolean z) {
        this.f622d.a(z);
        invalidateSelf();
    }

    public void a(int... iArr) {
        this.f622d.a(iArr);
        this.f622d.c(0);
        invalidateSelf();
    }

    public void b(float f2) {
        this.f622d.d(f2);
        invalidateSelf();
    }

    public void c(float f2) {
        this.f622d.f(f2);
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public void draw(Canvas canvas) {
        Rect bounds = getBounds();
        canvas.save();
        canvas.rotate(this.f623e, bounds.exactCenterX(), bounds.exactCenterY());
        this.f622d.a(canvas, bounds);
        canvas.restore();
    }

    @Override // android.graphics.drawable.Drawable
    public int getAlpha() {
        return this.f622d.a();
    }

    @Override // android.graphics.drawable.Drawable
    public int getOpacity() {
        return -3;
    }

    @Override // android.graphics.drawable.Animatable
    public boolean isRunning() {
        return this.g.isRunning();
    }

    @Override // android.graphics.drawable.Drawable
    public void setAlpha(int i) {
        this.f622d.a(i);
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public void setColorFilter(ColorFilter colorFilter) {
        this.f622d.a(colorFilter);
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Animatable
    public void start() {
        Animator animator;
        long j;
        this.g.cancel();
        this.f622d.l();
        if (this.f622d.b() != this.f622d.e()) {
            this.i = true;
            animator = this.g;
            j = 666;
        } else {
            this.f622d.c(0);
            this.f622d.k();
            animator = this.g;
            j = 1332;
        }
        animator.setDuration(j);
        this.g.start();
    }

    @Override // android.graphics.drawable.Animatable
    public void stop() {
        this.g.cancel();
        d(0.0f);
        this.f622d.a(false);
        this.f622d.c(0);
        this.f622d.k();
        invalidateSelf();
    }
}
