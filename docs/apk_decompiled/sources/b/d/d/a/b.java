package b.d.d.a;

import android.graphics.Rect;
import android.os.Build;
import android.view.View;
import android.view.accessibility.AccessibilityNodeInfo;
import jp.co.acrodea.runtime.drm.h;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final AccessibilityNodeInfo f757a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public int f758b = -1;

    public static class a {
        public static final a A;
        public static final a B;
        public static final a C;
        public static final a D;
        public static final a E;
        public static final a F;
        public static final a G;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final a f759a = new a(1, null);

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public static final a f760b = new a(2, null);

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public static final a f761c = new a(4, null);

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public static final a f762d = new a(8, null);

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        public static final a f763e = new a(16, null);

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        public static final a f764f = new a(32, null);
        public static final a g = new a(64, null);
        public static final a h = new a(128, null);
        public static final a i = new a(256, null);
        public static final a j = new a(512, null);
        public static final a k = new a(h.CLIENT_AUTOGEN_KEYBIT, null);
        public static final a l = new a(2048, null);
        public static final a m = new a(4096, null);
        public static final a n = new a(8192, null);
        public static final a o = new a(16384, null);
        public static final a p = new a(32768, null);
        public static final a q = new a(65536, null);
        public static final a r = new a(131072, null);
        public static final a s = new a(262144, null);
        public static final a t = new a(524288, null);
        public static final a u = new a(1048576, null);
        public static final a v = new a(2097152, null);
        public static final a w;
        public static final a x;
        public static final a y;
        public static final a z;
        final Object H;

        static {
            w = new a(Build.VERSION.SDK_INT >= 23 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SHOW_ON_SCREEN : null);
            x = new a(Build.VERSION.SDK_INT >= 23 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_TO_POSITION : null);
            y = new a(Build.VERSION.SDK_INT >= 23 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_UP : null);
            z = new a(Build.VERSION.SDK_INT >= 23 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_LEFT : null);
            A = new a(Build.VERSION.SDK_INT >= 23 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_DOWN : null);
            B = new a(Build.VERSION.SDK_INT >= 23 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_RIGHT : null);
            C = new a(Build.VERSION.SDK_INT >= 23 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_CONTEXT_CLICK : null);
            D = new a(Build.VERSION.SDK_INT >= 24 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SET_PROGRESS : null);
            E = new a(Build.VERSION.SDK_INT >= 26 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_MOVE_WINDOW : null);
            F = new a(Build.VERSION.SDK_INT >= 28 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_SHOW_TOOLTIP : null);
            G = new a(Build.VERSION.SDK_INT >= 28 ? AccessibilityNodeInfo.AccessibilityAction.ACTION_HIDE_TOOLTIP : null);
        }

        public a(int i2, CharSequence charSequence) {
            this(Build.VERSION.SDK_INT >= 21 ? new AccessibilityNodeInfo.AccessibilityAction(i2, charSequence) : null);
        }

        a(Object obj) {
            this.H = obj;
        }
    }

    private b(AccessibilityNodeInfo accessibilityNodeInfo) {
        this.f757a = accessibilityNodeInfo;
    }

    public static b a(AccessibilityNodeInfo accessibilityNodeInfo) {
        return new b(accessibilityNodeInfo);
    }

    public static b a(b bVar) {
        return a(AccessibilityNodeInfo.obtain(bVar.f757a));
    }

    private static String c(int i) {
        if (i == 1) {
            return "ACTION_FOCUS";
        }
        if (i == 2) {
            return "ACTION_CLEAR_FOCUS";
        }
        switch (i) {
            case 4:
                return "ACTION_SELECT";
            case 8:
                return "ACTION_CLEAR_SELECTION";
            case 16:
                return "ACTION_CLICK";
            case HTTP.SP /* 32 */:
                return "ACTION_LONG_CLICK";
            case 64:
                return "ACTION_ACCESSIBILITY_FOCUS";
            case 128:
                return "ACTION_CLEAR_ACCESSIBILITY_FOCUS";
            case 256:
                return "ACTION_NEXT_AT_MOVEMENT_GRANULARITY";
            case 512:
                return "ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY";
            case h.CLIENT_AUTOGEN_KEYBIT /* 1024 */:
                return "ACTION_NEXT_HTML_ELEMENT";
            case 2048:
                return "ACTION_PREVIOUS_HTML_ELEMENT";
            case 4096:
                return "ACTION_SCROLL_FORWARD";
            case 8192:
                return "ACTION_SCROLL_BACKWARD";
            case 16384:
                return "ACTION_COPY";
            case 32768:
                return "ACTION_PASTE";
            case 65536:
                return "ACTION_CUT";
            case 131072:
                return "ACTION_SET_SELECTION";
            default:
                return "ACTION_UNKNOWN";
        }
    }

    public int a() {
        return this.f757a.getActions();
    }

    public void a(int i) {
        this.f757a.addAction(i);
    }

    public void a(Rect rect) {
        this.f757a.getBoundsInParent(rect);
    }

    public void a(View view) {
        this.f757a.addChild(view);
    }

    public void a(CharSequence charSequence) {
        this.f757a.setClassName(charSequence);
    }

    public void a(boolean z) {
        if (Build.VERSION.SDK_INT >= 16) {
            this.f757a.setAccessibilityFocused(z);
        }
    }

    public boolean a(a aVar) {
        if (Build.VERSION.SDK_INT >= 21) {
            return this.f757a.removeAction((AccessibilityNodeInfo.AccessibilityAction) aVar.H);
        }
        return false;
    }

    public CharSequence b() {
        return this.f757a.getClassName();
    }

    public void b(int i) {
        if (Build.VERSION.SDK_INT >= 16) {
            this.f757a.setMovementGranularities(i);
        }
    }

    public void b(Rect rect) {
        this.f757a.getBoundsInScreen(rect);
    }

    public void b(View view) {
        this.f757a.setParent(view);
    }

    public void b(CharSequence charSequence) {
        this.f757a.setContentDescription(charSequence);
    }

    public void b(boolean z) {
        this.f757a.setClickable(z);
    }

    public CharSequence c() {
        return this.f757a.getContentDescription();
    }

    public void c(Rect rect) {
        this.f757a.setBoundsInParent(rect);
    }

    public void c(View view) {
        this.f757a.setSource(view);
    }

    public void c(CharSequence charSequence) {
        this.f757a.setPackageName(charSequence);
    }

    public void c(boolean z) {
        this.f757a.setEnabled(z);
    }

    public int d() {
        if (Build.VERSION.SDK_INT >= 16) {
            return this.f757a.getMovementGranularities();
        }
        return 0;
    }

    public void d(Rect rect) {
        this.f757a.setBoundsInScreen(rect);
    }

    public void d(boolean z) {
        this.f757a.setFocusable(z);
    }

    public CharSequence e() {
        return this.f757a.getPackageName();
    }

    public void e(boolean z) {
        this.f757a.setFocused(z);
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || b.class != obj.getClass()) {
            return false;
        }
        b bVar = (b) obj;
        AccessibilityNodeInfo accessibilityNodeInfo = this.f757a;
        if (accessibilityNodeInfo == null) {
            if (bVar.f757a != null) {
                return false;
            }
        } else if (!accessibilityNodeInfo.equals(bVar.f757a)) {
            return false;
        }
        return true;
    }

    public CharSequence f() {
        return this.f757a.getText();
    }

    public void f(boolean z) {
        this.f757a.setLongClickable(z);
    }

    public String g() {
        if (Build.VERSION.SDK_INT >= 18) {
            return this.f757a.getViewIdResourceName();
        }
        return null;
    }

    public void g(boolean z) {
        this.f757a.setScrollable(z);
    }

    public void h(boolean z) {
        this.f757a.setSelected(z);
    }

    public boolean h() {
        if (Build.VERSION.SDK_INT >= 16) {
            return this.f757a.isAccessibilityFocused();
        }
        return false;
    }

    public int hashCode() {
        AccessibilityNodeInfo accessibilityNodeInfo = this.f757a;
        if (accessibilityNodeInfo == null) {
            return 0;
        }
        return accessibilityNodeInfo.hashCode();
    }

    public void i(boolean z) {
        if (Build.VERSION.SDK_INT >= 16) {
            this.f757a.setVisibleToUser(z);
        }
    }

    public boolean i() {
        return this.f757a.isCheckable();
    }

    public boolean j() {
        return this.f757a.isChecked();
    }

    public boolean k() {
        return this.f757a.isClickable();
    }

    public boolean l() {
        return this.f757a.isEnabled();
    }

    public boolean m() {
        return this.f757a.isFocusable();
    }

    public boolean n() {
        return this.f757a.isFocused();
    }

    public boolean o() {
        return this.f757a.isLongClickable();
    }

    public boolean p() {
        return this.f757a.isPassword();
    }

    public boolean q() {
        return this.f757a.isScrollable();
    }

    public boolean r() {
        return this.f757a.isSelected();
    }

    public boolean s() {
        if (Build.VERSION.SDK_INT >= 16) {
            return this.f757a.isVisibleToUser();
        }
        return false;
    }

    public void t() {
        this.f757a.recycle();
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(super.toString());
        Rect rect = new Rect();
        a(rect);
        sb.append("; boundsInParent: " + rect);
        b(rect);
        sb.append("; boundsInScreen: " + rect);
        sb.append("; packageName: ");
        sb.append(e());
        sb.append("; className: ");
        sb.append(b());
        sb.append("; text: ");
        sb.append(f());
        sb.append("; contentDescription: ");
        sb.append(c());
        sb.append("; viewId: ");
        sb.append(g());
        sb.append("; checkable: ");
        sb.append(i());
        sb.append("; checked: ");
        sb.append(j());
        sb.append("; focusable: ");
        sb.append(m());
        sb.append("; focused: ");
        sb.append(n());
        sb.append("; selected: ");
        sb.append(r());
        sb.append("; clickable: ");
        sb.append(k());
        sb.append("; longClickable: ");
        sb.append(o());
        sb.append("; enabled: ");
        sb.append(l());
        sb.append("; password: ");
        sb.append(p());
        sb.append("; scrollable: " + q());
        sb.append("; [");
        int iA = a();
        while (iA != 0) {
            int iNumberOfTrailingZeros = 1 << Integer.numberOfTrailingZeros(iA);
            iA &= iNumberOfTrailingZeros ^ (-1);
            sb.append(c(iNumberOfTrailingZeros));
            if (iA != 0) {
                sb.append(", ");
            }
        }
        sb.append("]");
        return sb.toString();
    }

    public AccessibilityNodeInfo u() {
        return this.f757a;
    }
}
