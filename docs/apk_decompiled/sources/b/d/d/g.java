package b.d.d;

import android.view.View;
import android.view.ViewParent;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ViewParent f772a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private ViewParent f773b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final View f774c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f775d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int[] f776e;

    public g(View view) {
        this.f774c = view;
    }

    private void a(int i, ViewParent viewParent) {
        if (i == 0) {
            this.f772a = viewParent;
        } else {
            if (i != 1) {
                return;
            }
            this.f773b = viewParent;
        }
    }

    private ViewParent d(int i) {
        if (i == 0) {
            return this.f772a;
        }
        if (i != 1) {
            return null;
        }
        return this.f773b;
    }

    public void a(boolean z) {
        if (this.f775d) {
            n.n(this.f774c);
        }
        this.f775d = z;
    }

    public boolean a() {
        return a(0);
    }

    public boolean a(float f2, float f3) {
        ViewParent viewParentD;
        if (!b() || (viewParentD = d(0)) == null) {
            return false;
        }
        return p.a(viewParentD, this.f774c, f2, f3);
    }

    public boolean a(float f2, float f3, boolean z) {
        ViewParent viewParentD;
        if (!b() || (viewParentD = d(0)) == null) {
            return false;
        }
        return p.a(viewParentD, this.f774c, f2, f3, z);
    }

    public boolean a(int i) {
        return d(i) != null;
    }

    public boolean a(int i, int i2) {
        if (a(i2)) {
            return true;
        }
        if (!b()) {
            return false;
        }
        View view = this.f774c;
        for (ViewParent parent = this.f774c.getParent(); parent != null; parent = parent.getParent()) {
            if (p.b(parent, view, this.f774c, i, i2)) {
                a(i2, parent);
                p.a(parent, view, this.f774c, i, i2);
                return true;
            }
            if (parent instanceof View) {
                view = (View) parent;
            }
        }
        return false;
    }

    public boolean a(int i, int i2, int i3, int i4, int[] iArr) {
        return a(i, i2, i3, i4, iArr, 0);
    }

    public boolean a(int i, int i2, int i3, int i4, int[] iArr, int i5) {
        ViewParent viewParentD;
        int i6;
        int i7;
        if (!b() || (viewParentD = d(i5)) == null) {
            return false;
        }
        if (i == 0 && i2 == 0 && i3 == 0 && i4 == 0) {
            if (iArr != null) {
                iArr[0] = 0;
                iArr[1] = 0;
            }
            return false;
        }
        if (iArr != null) {
            this.f774c.getLocationInWindow(iArr);
            i6 = iArr[0];
            i7 = iArr[1];
        } else {
            i6 = 0;
            i7 = 0;
        }
        p.a(viewParentD, this.f774c, i, i2, i3, i4, i5);
        if (iArr != null) {
            this.f774c.getLocationInWindow(iArr);
            iArr[0] = iArr[0] - i6;
            iArr[1] = iArr[1] - i7;
        }
        return true;
    }

    public boolean a(int i, int i2, int[] iArr, int[] iArr2) {
        return a(i, i2, iArr, iArr2, 0);
    }

    public boolean a(int i, int i2, int[] iArr, int[] iArr2, int i3) {
        ViewParent viewParentD;
        int i4;
        int i5;
        if (!b() || (viewParentD = d(i3)) == null) {
            return false;
        }
        if (i == 0 && i2 == 0) {
            if (iArr2 != null) {
                iArr2[0] = 0;
                iArr2[1] = 0;
            }
            return false;
        }
        if (iArr2 != null) {
            this.f774c.getLocationInWindow(iArr2);
            i4 = iArr2[0];
            i5 = iArr2[1];
        } else {
            i4 = 0;
            i5 = 0;
        }
        if (iArr == null) {
            if (this.f776e == null) {
                this.f776e = new int[2];
            }
            iArr = this.f776e;
        }
        iArr[0] = 0;
        iArr[1] = 0;
        p.a(viewParentD, this.f774c, i, i2, iArr, i3);
        if (iArr2 != null) {
            this.f774c.getLocationInWindow(iArr2);
            iArr2[0] = iArr2[0] - i4;
            iArr2[1] = iArr2[1] - i5;
        }
        return (iArr[0] == 0 && iArr[1] == 0) ? false : true;
    }

    public boolean b() {
        return this.f775d;
    }

    public boolean b(int i) {
        return a(i, 0);
    }

    public void c() {
        c(0);
    }

    public void c(int i) {
        ViewParent viewParentD = d(i);
        if (viewParentD != null) {
            p.a(viewParentD, this.f774c, i);
            a(i, (ViewParent) null);
        }
    }
}
