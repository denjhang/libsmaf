package b.d.d;

import android.animation.ValueAnimator;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.util.SparseArray;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.WindowInsets;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.WeakHashMap;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class n {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static WeakHashMap<View, String> f781b;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static ThreadLocal<Rect> f784e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AtomicInteger f780a = new AtomicInteger(1);

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static WeakHashMap<View, Object> f782c = null;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static boolean f783d = false;

    public interface a {
        boolean onUnhandledKeyEvent(View view, KeyEvent keyEvent);
    }

    static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final ArrayList<WeakReference<View>> f785a = new ArrayList<>();

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private WeakHashMap<View, Boolean> f786b = null;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private SparseArray<WeakReference<View>> f787c = null;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private WeakReference<KeyEvent> f788d = null;

        b() {
        }

        private SparseArray<WeakReference<View>> a() {
            if (this.f787c == null) {
                this.f787c = new SparseArray<>();
            }
            return this.f787c;
        }

        static b a(View view) {
            b bVar = (b) view.getTag(b.d.b.tag_unhandled_key_event_manager);
            if (bVar != null) {
                return bVar;
            }
            b bVar2 = new b();
            view.setTag(b.d.b.tag_unhandled_key_event_manager, bVar2);
            return bVar2;
        }

        private View b(View view, KeyEvent keyEvent) {
            WeakHashMap<View, Boolean> weakHashMap = this.f786b;
            if (weakHashMap != null && weakHashMap.containsKey(view)) {
                if (view instanceof ViewGroup) {
                    ViewGroup viewGroup = (ViewGroup) view;
                    for (int childCount = viewGroup.getChildCount() - 1; childCount >= 0; childCount--) {
                        View viewB = b(viewGroup.getChildAt(childCount), keyEvent);
                        if (viewB != null) {
                            return viewB;
                        }
                    }
                }
                if (c(view, keyEvent)) {
                    return view;
                }
            }
            return null;
        }

        private void b() {
            WeakHashMap<View, Boolean> weakHashMap = this.f786b;
            if (weakHashMap != null) {
                weakHashMap.clear();
            }
            if (f785a.isEmpty()) {
                return;
            }
            synchronized (f785a) {
                if (this.f786b == null) {
                    this.f786b = new WeakHashMap<>();
                }
                for (int size = f785a.size() - 1; size >= 0; size--) {
                    View view = f785a.get(size).get();
                    if (view == null) {
                        f785a.remove(size);
                    } else {
                        this.f786b.put(view, Boolean.TRUE);
                        for (ViewParent parent = view.getParent(); parent instanceof View; parent = parent.getParent()) {
                            this.f786b.put((View) parent, Boolean.TRUE);
                        }
                    }
                }
            }
        }

        private boolean c(View view, KeyEvent keyEvent) {
            ArrayList arrayList = (ArrayList) view.getTag(b.d.b.tag_unhandled_key_listeners);
            if (arrayList == null) {
                return false;
            }
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                if (((a) arrayList.get(size)).onUnhandledKeyEvent(view, keyEvent)) {
                    return true;
                }
            }
            return false;
        }

        boolean a(KeyEvent keyEvent) {
            int iIndexOfKey;
            WeakReference<KeyEvent> weakReference = this.f788d;
            if (weakReference != null && weakReference.get() == keyEvent) {
                return false;
            }
            this.f788d = new WeakReference<>(keyEvent);
            WeakReference<View> weakReferenceValueAt = null;
            SparseArray<WeakReference<View>> sparseArrayA = a();
            if (keyEvent.getAction() == 1 && (iIndexOfKey = sparseArrayA.indexOfKey(keyEvent.getKeyCode())) >= 0) {
                weakReferenceValueAt = sparseArrayA.valueAt(iIndexOfKey);
                sparseArrayA.removeAt(iIndexOfKey);
            }
            if (weakReferenceValueAt == null) {
                weakReferenceValueAt = sparseArrayA.get(keyEvent.getKeyCode());
            }
            if (weakReferenceValueAt == null) {
                return false;
            }
            View view = weakReferenceValueAt.get();
            if (view != null && n.i(view)) {
                c(view, keyEvent);
            }
            return true;
        }

        boolean a(View view, KeyEvent keyEvent) {
            if (keyEvent.getAction() == 0) {
                b();
            }
            View viewB = b(view, keyEvent);
            if (keyEvent.getAction() == 0) {
                int keyCode = keyEvent.getKeyCode();
                if (viewB != null && !KeyEvent.isModifierKey(keyCode)) {
                    a().put(keyCode, new WeakReference<>(viewB));
                }
            }
            return viewB != null;
        }
    }

    public static float a(View view) {
        if (Build.VERSION.SDK_INT >= 21) {
            return view.getElevation();
        }
        return 0.0f;
    }

    private static Rect a() {
        if (f784e == null) {
            f784e = new ThreadLocal<>();
        }
        Rect rect = f784e.get();
        if (rect == null) {
            rect = new Rect();
            f784e.set(rect);
        }
        rect.setEmpty();
        return rect;
    }

    public static q a(View view, q qVar) {
        if (Build.VERSION.SDK_INT < 21) {
            return qVar;
        }
        WindowInsets windowInsets = (WindowInsets) q.a(qVar);
        WindowInsets windowInsetsDispatchApplyWindowInsets = view.dispatchApplyWindowInsets(windowInsets);
        if (windowInsetsDispatchApplyWindowInsets != windowInsets) {
            windowInsets = new WindowInsets(windowInsetsDispatchApplyWindowInsets);
        }
        return q.a(windowInsets);
    }

    public static void a(View view, float f2) {
        if (Build.VERSION.SDK_INT >= 21) {
            view.setElevation(f2);
        }
    }

    public static void a(View view, int i) {
        int i2 = Build.VERSION.SDK_INT;
        if (i2 >= 23) {
            view.offsetLeftAndRight(i);
            return;
        }
        if (i2 < 21) {
            d(view, i);
            return;
        }
        Rect rectA = a();
        boolean z = false;
        Object parent = view.getParent();
        if (parent instanceof View) {
            View view2 = (View) parent;
            rectA.set(view2.getLeft(), view2.getTop(), view2.getRight(), view2.getBottom());
            z = !rectA.intersects(view.getLeft(), view.getTop(), view.getRight(), view.getBottom());
        }
        d(view, i);
        if (z && rectA.intersect(view.getLeft(), view.getTop(), view.getRight(), view.getBottom())) {
            ((View) parent).invalidate(rectA);
        }
    }

    public static void a(View view, int i, int i2, int i3, int i4) {
        if (Build.VERSION.SDK_INT >= 16) {
            view.postInvalidateOnAnimation(i, i2, i3, i4);
        } else {
            view.postInvalidate(i, i2, i3, i4);
        }
    }

    public static void a(View view, Paint paint) {
        if (Build.VERSION.SDK_INT >= 17) {
            view.setLayerPaint(paint);
        } else {
            view.setLayerType(view.getLayerType(), paint);
            view.invalidate();
        }
    }

    public static void a(View view, Drawable drawable) {
        if (Build.VERSION.SDK_INT >= 16) {
            view.setBackground(drawable);
        } else {
            view.setBackgroundDrawable(drawable);
        }
    }

    public static void a(View view, b.d.d.a aVar) {
        view.setAccessibilityDelegate(aVar == null ? null : aVar.a());
    }

    public static void a(View view, k kVar) {
        if (Build.VERSION.SDK_INT >= 21) {
            if (kVar == null) {
                view.setOnApplyWindowInsetsListener(null);
            } else {
                view.setOnApplyWindowInsetsListener(new m(kVar));
            }
        }
    }

    public static void a(View view, Runnable runnable) {
        if (Build.VERSION.SDK_INT >= 16) {
            view.postOnAnimation(runnable);
        } else {
            view.postDelayed(runnable, ValueAnimator.getFrameDelay());
        }
    }

    public static void a(View view, String str) {
        if (Build.VERSION.SDK_INT >= 21) {
            view.setTransitionName(str);
            return;
        }
        if (f781b == null) {
            f781b = new WeakHashMap<>();
        }
        f781b.put(view, str);
    }

    static boolean a(View view, KeyEvent keyEvent) {
        if (Build.VERSION.SDK_INT >= 28) {
            return false;
        }
        return b.a(view).a(view, keyEvent);
    }

    public static q b(View view, q qVar) {
        if (Build.VERSION.SDK_INT < 21) {
            return qVar;
        }
        WindowInsets windowInsets = (WindowInsets) q.a(qVar);
        WindowInsets windowInsetsOnApplyWindowInsets = view.onApplyWindowInsets(windowInsets);
        if (windowInsetsOnApplyWindowInsets != windowInsets) {
            windowInsets = new WindowInsets(windowInsetsOnApplyWindowInsets);
        }
        return q.a(windowInsets);
    }

    public static void b(View view, int i) {
        int i2 = Build.VERSION.SDK_INT;
        if (i2 >= 23) {
            view.offsetTopAndBottom(i);
            return;
        }
        if (i2 < 21) {
            e(view, i);
            return;
        }
        Rect rectA = a();
        boolean z = false;
        Object parent = view.getParent();
        if (parent instanceof View) {
            View view2 = (View) parent;
            rectA.set(view2.getLeft(), view2.getTop(), view2.getRight(), view2.getBottom());
            z = !rectA.intersects(view.getLeft(), view.getTop(), view.getRight(), view.getBottom());
        }
        e(view, i);
        if (z && rectA.intersect(view.getLeft(), view.getTop(), view.getRight(), view.getBottom())) {
            ((View) parent).invalidate(rectA);
        }
    }

    public static boolean b(View view) {
        if (Build.VERSION.SDK_INT >= 16) {
            return view.getFitsSystemWindows();
        }
        return false;
    }

    static boolean b(View view, KeyEvent keyEvent) {
        if (Build.VERSION.SDK_INT >= 28) {
            return false;
        }
        return b.a(view).a(keyEvent);
    }

    public static int c(View view) {
        if (Build.VERSION.SDK_INT >= 16) {
            return view.getImportantForAccessibility();
        }
        return 0;
    }

    public static void c(View view, int i) {
        int i2 = Build.VERSION.SDK_INT;
        if (i2 < 19) {
            if (i2 < 16) {
                return;
            }
            if (i == 4) {
                i = 2;
            }
        }
        view.setImportantForAccessibility(i);
    }

    public static int d(View view) {
        if (Build.VERSION.SDK_INT >= 17) {
            return view.getLayoutDirection();
        }
        return 0;
    }

    private static void d(View view, int i) {
        view.offsetLeftAndRight(i);
        if (view.getVisibility() == 0) {
            o(view);
            Object parent = view.getParent();
            if (parent instanceof View) {
                o((View) parent);
            }
        }
    }

    public static ViewParent e(View view) {
        return Build.VERSION.SDK_INT >= 16 ? view.getParentForAccessibility() : view.getParent();
    }

    private static void e(View view, int i) {
        view.offsetTopAndBottom(i);
        if (view.getVisibility() == 0) {
            o(view);
            Object parent = view.getParent();
            if (parent instanceof View) {
                o((View) parent);
            }
        }
    }

    public static String f(View view) {
        if (Build.VERSION.SDK_INT >= 21) {
            return view.getTransitionName();
        }
        WeakHashMap<View, String> weakHashMap = f781b;
        if (weakHashMap == null) {
            return null;
        }
        return weakHashMap.get(view);
    }

    public static float g(View view) {
        if (Build.VERSION.SDK_INT >= 21) {
            return view.getZ();
        }
        return 0.0f;
    }

    public static boolean h(View view) {
        if (Build.VERSION.SDK_INT >= 16) {
            return view.hasOverlappingRendering();
        }
        return true;
    }

    public static boolean i(View view) {
        return Build.VERSION.SDK_INT >= 19 ? view.isAttachedToWindow() : view.getWindowToken() != null;
    }

    public static boolean j(View view) {
        return Build.VERSION.SDK_INT >= 19 ? view.isLaidOut() : view.getWidth() > 0 && view.getHeight() > 0;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean k(View view) {
        if (Build.VERSION.SDK_INT >= 21) {
            return view.isNestedScrollingEnabled();
        }
        if (view instanceof f) {
            return ((f) view).isNestedScrollingEnabled();
        }
        return false;
    }

    public static void l(View view) {
        if (Build.VERSION.SDK_INT >= 16) {
            view.postInvalidateOnAnimation();
        } else {
            view.postInvalidate();
        }
    }

    public static void m(View view) {
        int i = Build.VERSION.SDK_INT;
        if (i >= 20) {
            view.requestApplyInsets();
        } else if (i >= 16) {
            view.requestFitSystemWindows();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void n(View view) {
        if (Build.VERSION.SDK_INT >= 21) {
            view.stopNestedScroll();
        } else if (view instanceof f) {
            ((f) view).stopNestedScroll();
        }
    }

    private static void o(View view) {
        float translationY = view.getTranslationY();
        view.setTranslationY(1.0f + translationY);
        view.setTranslationY(translationY);
    }
}
