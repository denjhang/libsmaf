package b.d.d;

import android.os.Build;
import android.view.WindowInsets;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f789a;

    private q(Object obj) {
        this.f789a = obj;
    }

    static q a(Object obj) {
        if (obj == null) {
            return null;
        }
        return new q(obj);
    }

    static Object a(q qVar) {
        if (qVar == null) {
            return null;
        }
        return qVar.f789a;
    }

    public int a() {
        if (Build.VERSION.SDK_INT >= 20) {
            return ((WindowInsets) this.f789a).getSystemWindowInsetBottom();
        }
        return 0;
    }

    public q a(int i, int i2, int i3, int i4) {
        if (Build.VERSION.SDK_INT >= 20) {
            return new q(((WindowInsets) this.f789a).replaceSystemWindowInsets(i, i2, i3, i4));
        }
        return null;
    }

    public int b() {
        if (Build.VERSION.SDK_INT >= 20) {
            return ((WindowInsets) this.f789a).getSystemWindowInsetLeft();
        }
        return 0;
    }

    public int c() {
        if (Build.VERSION.SDK_INT >= 20) {
            return ((WindowInsets) this.f789a).getSystemWindowInsetRight();
        }
        return 0;
    }

    public int d() {
        if (Build.VERSION.SDK_INT >= 20) {
            return ((WindowInsets) this.f789a).getSystemWindowInsetTop();
        }
        return 0;
    }

    public boolean e() {
        if (Build.VERSION.SDK_INT >= 21) {
            return ((WindowInsets) this.f789a).isConsumed();
        }
        return false;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || q.class != obj.getClass()) {
            return false;
        }
        q qVar = (q) obj;
        Object obj2 = this.f789a;
        return obj2 == null ? qVar.f789a == null : obj2.equals(qVar.f789a);
    }

    public int hashCode() {
        Object obj = this.f789a;
        if (obj == null) {
            return 0;
        }
        return obj.hashCode();
    }
}
