package b.f.a.a;

import android.view.animation.Interpolator;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class b implements Interpolator {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final float[] f798a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final float f799b;

    protected b(float[] fArr) {
        this.f798a = fArr;
        this.f799b = 1.0f / (this.f798a.length - 1);
    }

    @Override // android.animation.TimeInterpolator
    public float getInterpolation(float f2) {
        if (f2 >= 1.0f) {
            return 1.0f;
        }
        if (f2 <= 0.0f) {
            return 0.0f;
        }
        float[] fArr = this.f798a;
        int iMin = Math.min((int) ((fArr.length - 1) * f2), fArr.length - 2);
        float f3 = this.f799b;
        float f4 = (f2 - (iMin * f3)) / f3;
        float[] fArr2 = this.f798a;
        return fArr2[iMin] + (f4 * (fArr2[iMin + 1] - fArr2[iMin]));
    }
}
