package androidx.fragment.app;

import android.animation.Animator;
import android.app.Activity;
import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.Looper;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.SparseArray;
import android.view.ContextMenu;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import androidx.lifecycle.f;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.InvocationTargetException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class Fragment implements ComponentCallbacks, View.OnCreateContextMenuListener, androidx.lifecycle.h, androidx.lifecycle.v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final b.b.h<String, Class<?>> f304a = new b.b.h<>();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static final Object f305b = new Object();
    int A;
    String B;
    boolean C;
    boolean D;
    boolean E;
    boolean F;
    boolean G;
    boolean I;
    ViewGroup J;
    View K;
    View L;
    boolean M;
    a O;
    boolean P;
    boolean Q;
    float R;
    LayoutInflater S;
    boolean T;
    androidx.lifecycle.j V;
    androidx.lifecycle.h W;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    Bundle f307d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    SparseArray<Parcelable> f308e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    Boolean f309f;
    String h;
    Bundle i;
    Fragment j;
    int l;
    boolean m;
    boolean n;
    boolean o;
    boolean p;
    boolean q;
    boolean r;
    int s;
    s t;
    AbstractC0047k u;
    s v;
    t w;
    androidx.lifecycle.u x;
    Fragment y;
    int z;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    int f306c = 0;
    int g = -1;
    int k = -1;
    boolean H = true;
    boolean N = true;
    androidx.lifecycle.j U = new androidx.lifecycle.j(this);
    androidx.lifecycle.o<androidx.lifecycle.h> X = new androidx.lifecycle.o<>();

    public static class SavedState implements Parcelable {
        public static final Parcelable.Creator<SavedState> CREATOR = new C0043g();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Bundle f310a;

        SavedState(Parcel parcel, ClassLoader classLoader) {
            Bundle bundle;
            this.f310a = parcel.readBundle();
            if (classLoader == null || (bundle = this.f310a) == null) {
                return;
            }
            bundle.setClassLoader(classLoader);
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            parcel.writeBundle(this.f310a);
        }
    }

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        View f311a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        Animator f312b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f313c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        int f314d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        int f315e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        int f316f;
        Object g = null;
        Object h;
        Object i;
        Object j;
        Object k;
        Object l;
        Boolean m;
        Boolean n;
        androidx.core.app.i o;
        androidx.core.app.i p;
        boolean q;
        c r;
        boolean s;

        a() {
            Object obj = Fragment.f305b;
            this.h = obj;
            this.i = null;
            this.j = obj;
            this.k = null;
            this.l = obj;
            this.o = null;
            this.p = null;
        }
    }

    public static class b extends RuntimeException {
        public b(String str, Exception exc) {
            super(str, exc);
        }
    }

    interface c {
        void a();

        void b();
    }

    public static Fragment a(Context context, String str, Bundle bundle) {
        try {
            Class<?> clsLoadClass = f304a.get(str);
            if (clsLoadClass == null) {
                clsLoadClass = context.getClassLoader().loadClass(str);
                f304a.put(str, clsLoadClass);
            }
            Fragment fragment = (Fragment) clsLoadClass.getConstructor(new Class[0]).newInstance(new Object[0]);
            if (bundle != null) {
                bundle.setClassLoader(fragment.getClass().getClassLoader());
                fragment.m(bundle);
            }
            return fragment;
        } catch (ClassNotFoundException e2) {
            throw new b("Unable to instantiate fragment " + str + ": make sure class name exists, is public, and has an empty constructor that is public", e2);
        } catch (IllegalAccessException e3) {
            throw new b("Unable to instantiate fragment " + str + ": make sure class name exists, is public, and has an empty constructor that is public", e3);
        } catch (InstantiationException e4) {
            throw new b("Unable to instantiate fragment " + str + ": make sure class name exists, is public, and has an empty constructor that is public", e4);
        } catch (NoSuchMethodException e5) {
            throw new b("Unable to instantiate fragment " + str + ": could not find Fragment constructor", e5);
        } catch (InvocationTargetException e6) {
            throw new b("Unable to instantiate fragment " + str + ": calling Fragment constructor caused an exception", e6);
        }
    }

    static boolean a(Context context, String str) {
        try {
            Class<?> clsLoadClass = f304a.get(str);
            if (clsLoadClass == null) {
                clsLoadClass = context.getClassLoader().loadClass(str);
                f304a.put(str, clsLoadClass);
            }
            return Fragment.class.isAssignableFrom(clsLoadClass);
        } catch (ClassNotFoundException unused) {
            return false;
        }
    }

    private a aa() {
        if (this.O == null) {
            this.O = new a();
        }
        return this.O;
    }

    void A() {
        if (this.u == null) {
            throw new IllegalStateException("Fragment has not been attached yet.");
        }
        this.v = new s();
        this.v.a(this.u, new C0041e(this), this);
    }

    public final boolean B() {
        return this.D;
    }

    boolean C() {
        a aVar = this.O;
        if (aVar == null) {
            return false;
        }
        return aVar.s;
    }

    final boolean D() {
        return this.s > 0;
    }

    boolean E() {
        a aVar = this.O;
        if (aVar == null) {
            return false;
        }
        return aVar.q;
    }

    public final boolean F() {
        s sVar = this.t;
        if (sVar == null) {
            return false;
        }
        return sVar.d();
    }

    void G() {
        s sVar = this.v;
        if (sVar != null) {
            sVar.s();
        }
    }

    public void H() {
        this.I = true;
        FragmentActivity fragmentActivityD = d();
        boolean z = fragmentActivityD != null && fragmentActivityD.isChangingConfigurations();
        androidx.lifecycle.u uVar = this.x;
        if (uVar == null || z) {
            return;
        }
        uVar.a();
    }

    public void I() {
    }

    public void J() {
        this.I = true;
    }

    public void K() {
        this.I = true;
    }

    public void L() {
        this.I = true;
    }

    public void M() {
        this.I = true;
    }

    public void N() {
        this.I = true;
    }

    public void O() {
        this.I = true;
    }

    AbstractC0048l P() {
        return this.v;
    }

    void Q() {
        this.U.b(f.a.ON_DESTROY);
        s sVar = this.v;
        if (sVar != null) {
            sVar.h();
        }
        this.f306c = 0;
        this.I = false;
        this.T = false;
        H();
        if (this.I) {
            this.v = null;
            return;
        }
        throw new N("Fragment " + this + " did not call through to super.onDestroy()");
    }

    void R() {
        if (this.K != null) {
            this.V.b(f.a.ON_DESTROY);
        }
        s sVar = this.v;
        if (sVar != null) {
            sVar.i();
        }
        this.f306c = 1;
        this.I = false;
        J();
        if (this.I) {
            b.g.a.a.a(this).a();
            this.r = false;
        } else {
            throw new N("Fragment " + this + " did not call through to super.onDestroyView()");
        }
    }

    void S() {
        this.I = false;
        K();
        this.S = null;
        if (!this.I) {
            throw new N("Fragment " + this + " did not call through to super.onDetach()");
        }
        s sVar = this.v;
        if (sVar != null) {
            if (this.F) {
                sVar.h();
                this.v = null;
                return;
            }
            throw new IllegalStateException("Child FragmentManager of " + this + " was not  destroyed and this fragment is not retaining instance");
        }
    }

    void T() {
        onLowMemory();
        s sVar = this.v;
        if (sVar != null) {
            sVar.j();
        }
    }

    void U() {
        if (this.K != null) {
            this.V.b(f.a.ON_PAUSE);
        }
        this.U.b(f.a.ON_PAUSE);
        s sVar = this.v;
        if (sVar != null) {
            sVar.k();
        }
        this.f306c = 3;
        this.I = false;
        L();
        if (this.I) {
            return;
        }
        throw new N("Fragment " + this + " did not call through to super.onPause()");
    }

    void V() {
        s sVar = this.v;
        if (sVar != null) {
            sVar.s();
            this.v.p();
        }
        this.f306c = 4;
        this.I = false;
        M();
        if (!this.I) {
            throw new N("Fragment " + this + " did not call through to super.onResume()");
        }
        s sVar2 = this.v;
        if (sVar2 != null) {
            sVar2.l();
            this.v.p();
        }
        this.U.b(f.a.ON_RESUME);
        if (this.K != null) {
            this.V.b(f.a.ON_RESUME);
        }
    }

    void W() {
        s sVar = this.v;
        if (sVar != null) {
            sVar.s();
            this.v.p();
        }
        this.f306c = 3;
        this.I = false;
        N();
        if (!this.I) {
            throw new N("Fragment " + this + " did not call through to super.onStart()");
        }
        s sVar2 = this.v;
        if (sVar2 != null) {
            sVar2.m();
        }
        this.U.b(f.a.ON_START);
        if (this.K != null) {
            this.V.b(f.a.ON_START);
        }
    }

    void X() {
        if (this.K != null) {
            this.V.b(f.a.ON_STOP);
        }
        this.U.b(f.a.ON_STOP);
        s sVar = this.v;
        if (sVar != null) {
            sVar.n();
        }
        this.f306c = 2;
        this.I = false;
        O();
        if (this.I) {
            return;
        }
        throw new N("Fragment " + this + " did not call through to super.onStop()");
    }

    public final Context Y() {
        Context contextJ = j();
        if (contextJ != null) {
            return contextJ;
        }
        throw new IllegalStateException("Fragment " + this + " not attached to a context.");
    }

    public void Z() {
        s sVar = this.t;
        if (sVar == null || sVar.s == null) {
            aa().q = false;
        } else if (Looper.myLooper() != this.t.s.e().getLooper()) {
            this.t.s.e().postAtFrontOfQueue(new RunnableC0040d(this));
        } else {
            c();
        }
    }

    @Deprecated
    public LayoutInflater a(Bundle bundle) {
        AbstractC0047k abstractC0047k = this.u;
        if (abstractC0047k == null) {
            throw new IllegalStateException("onGetLayoutInflater() cannot be executed until the Fragment is attached to the FragmentManager.");
        }
        LayoutInflater layoutInflaterF = abstractC0047k.f();
        i();
        s sVar = this.v;
        sVar.q();
        b.d.d.d.a(layoutInflaterF, sVar);
        return layoutInflaterF;
    }

    public View a(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        return null;
    }

    public Animation a(int i, boolean z, int i2) {
        return null;
    }

    Fragment a(String str) {
        if (str.equals(this.h)) {
            return this;
        }
        s sVar = this.v;
        if (sVar != null) {
            return sVar.b(str);
        }
        return null;
    }

    @Override // androidx.lifecycle.h
    public androidx.lifecycle.f a() {
        return this.U;
    }

    void a(int i) {
        if (this.O == null && i == 0) {
            return;
        }
        aa().f314d = i;
    }

    void a(int i, int i2) {
        if (this.O == null && i == 0 && i2 == 0) {
            return;
        }
        aa();
        a aVar = this.O;
        aVar.f315e = i;
        aVar.f316f = i2;
    }

    public void a(int i, int i2, Intent intent) {
    }

    final void a(int i, Fragment fragment) {
        StringBuilder sb;
        String str;
        this.g = i;
        if (fragment != null) {
            sb = new StringBuilder();
            sb.append(fragment.h);
            str = ":";
        } else {
            sb = new StringBuilder();
            str = "android:fragment:";
        }
        sb.append(str);
        sb.append(this.g);
        this.h = sb.toString();
    }

    public void a(int i, String[] strArr, int[] iArr) {
    }

    void a(Animator animator) {
        aa().f312b = animator;
    }

    @Deprecated
    public void a(Activity activity) {
        this.I = true;
    }

    @Deprecated
    public void a(Activity activity, AttributeSet attributeSet, Bundle bundle) {
        this.I = true;
    }

    public void a(Context context) {
        this.I = true;
        AbstractC0047k abstractC0047k = this.u;
        Activity activityB = abstractC0047k == null ? null : abstractC0047k.b();
        if (activityB != null) {
            this.I = false;
            a(activityB);
        }
    }

    public void a(Context context, AttributeSet attributeSet, Bundle bundle) {
        this.I = true;
        AbstractC0047k abstractC0047k = this.u;
        Activity activityB = abstractC0047k == null ? null : abstractC0047k.b();
        if (activityB != null) {
            this.I = false;
            a(activityB, attributeSet, bundle);
        }
    }

    void a(Configuration configuration) {
        onConfigurationChanged(configuration);
        s sVar = this.v;
        if (sVar != null) {
            sVar.a(configuration);
        }
    }

    public void a(Menu menu) {
    }

    public void a(Menu menu, MenuInflater menuInflater) {
    }

    void a(View view) {
        aa().f311a = view;
    }

    public void a(View view, Bundle bundle) {
    }

    void a(c cVar) {
        aa();
        c cVar2 = this.O.r;
        if (cVar == cVar2) {
            return;
        }
        if (cVar != null && cVar2 != null) {
            throw new IllegalStateException("Trying to set a replacement startPostponedEnterTransition on " + this);
        }
        a aVar = this.O;
        if (aVar.q) {
            aVar.r = cVar;
        }
        if (cVar != null) {
            cVar.a();
        }
    }

    public void a(Fragment fragment) {
    }

    public void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        printWriter.print(str);
        printWriter.print("mFragmentId=#");
        printWriter.print(Integer.toHexString(this.z));
        printWriter.print(" mContainerId=#");
        printWriter.print(Integer.toHexString(this.A));
        printWriter.print(" mTag=");
        printWriter.println(this.B);
        printWriter.print(str);
        printWriter.print("mState=");
        printWriter.print(this.f306c);
        printWriter.print(" mIndex=");
        printWriter.print(this.g);
        printWriter.print(" mWho=");
        printWriter.print(this.h);
        printWriter.print(" mBackStackNesting=");
        printWriter.println(this.s);
        printWriter.print(str);
        printWriter.print("mAdded=");
        printWriter.print(this.m);
        printWriter.print(" mRemoving=");
        printWriter.print(this.n);
        printWriter.print(" mFromLayout=");
        printWriter.print(this.o);
        printWriter.print(" mInLayout=");
        printWriter.println(this.p);
        printWriter.print(str);
        printWriter.print("mHidden=");
        printWriter.print(this.C);
        printWriter.print(" mDetached=");
        printWriter.print(this.D);
        printWriter.print(" mMenuVisible=");
        printWriter.print(this.H);
        printWriter.print(" mHasMenu=");
        printWriter.println(this.G);
        printWriter.print(str);
        printWriter.print("mRetainInstance=");
        printWriter.print(this.E);
        printWriter.print(" mRetaining=");
        printWriter.print(this.F);
        printWriter.print(" mUserVisibleHint=");
        printWriter.println(this.N);
        if (this.t != null) {
            printWriter.print(str);
            printWriter.print("mFragmentManager=");
            printWriter.println(this.t);
        }
        if (this.u != null) {
            printWriter.print(str);
            printWriter.print("mHost=");
            printWriter.println(this.u);
        }
        if (this.y != null) {
            printWriter.print(str);
            printWriter.print("mParentFragment=");
            printWriter.println(this.y);
        }
        if (this.i != null) {
            printWriter.print(str);
            printWriter.print("mArguments=");
            printWriter.println(this.i);
        }
        if (this.f307d != null) {
            printWriter.print(str);
            printWriter.print("mSavedFragmentState=");
            printWriter.println(this.f307d);
        }
        if (this.f308e != null) {
            printWriter.print(str);
            printWriter.print("mSavedViewState=");
            printWriter.println(this.f308e);
        }
        if (this.j != null) {
            printWriter.print(str);
            printWriter.print("mTarget=");
            printWriter.print(this.j);
            printWriter.print(" mTargetRequestCode=");
            printWriter.println(this.l);
        }
        if (p() != 0) {
            printWriter.print(str);
            printWriter.print("mNextAnim=");
            printWriter.println(p());
        }
        if (this.J != null) {
            printWriter.print(str);
            printWriter.print("mContainer=");
            printWriter.println(this.J);
        }
        if (this.K != null) {
            printWriter.print(str);
            printWriter.print("mView=");
            printWriter.println(this.K);
        }
        if (this.L != null) {
            printWriter.print(str);
            printWriter.print("mInnerView=");
            printWriter.println(this.K);
        }
        if (g() != null) {
            printWriter.print(str);
            printWriter.print("mAnimatingAway=");
            printWriter.println(g());
            printWriter.print(str);
            printWriter.print("mStateAfterAnimating=");
            printWriter.println(x());
        }
        if (j() != null) {
            b.g.a.a.a(this).a(str, fileDescriptor, printWriter, strArr);
        }
        if (this.v != null) {
            printWriter.print(str);
            printWriter.println("Child " + this.v + ":");
            this.v.a(str + "  ", fileDescriptor, printWriter, strArr);
        }
    }

    public void a(boolean z) {
    }

    public boolean a(MenuItem menuItem) {
        return false;
    }

    public Animator b(int i, boolean z, int i2) {
        return null;
    }

    @Override // androidx.lifecycle.v
    public androidx.lifecycle.u b() {
        if (j() == null) {
            throw new IllegalStateException("Can't access ViewModels from detached fragment");
        }
        if (this.x == null) {
            this.x = new androidx.lifecycle.u();
        }
        return this.x;
    }

    void b(int i) {
        aa().f313c = i;
    }

    public void b(Bundle bundle) {
        this.I = true;
    }

    void b(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        s sVar = this.v;
        if (sVar != null) {
            sVar.s();
        }
        this.r = true;
        this.W = new C0042f(this);
        this.V = null;
        this.K = a(layoutInflater, viewGroup, bundle);
        if (this.K != null) {
            this.W.a();
            this.X.a(this.W);
        } else {
            if (this.V != null) {
                throw new IllegalStateException("Called getViewLifecycleOwner() but onCreateView() returned null");
            }
            this.W = null;
        }
    }

    public void b(Menu menu) {
    }

    public void b(boolean z) {
    }

    boolean b(Menu menu, MenuInflater menuInflater) {
        boolean z = false;
        if (this.C) {
            return false;
        }
        if (this.G && this.H) {
            a(menu, menuInflater);
            z = true;
        }
        s sVar = this.v;
        return sVar != null ? z | sVar.a(menu, menuInflater) : z;
    }

    public boolean b(MenuItem menuItem) {
        return false;
    }

    void c() {
        a aVar = this.O;
        c cVar = null;
        if (aVar != null) {
            aVar.q = false;
            c cVar2 = aVar.r;
            aVar.r = null;
            cVar = cVar2;
        }
        if (cVar != null) {
            cVar.b();
        }
    }

    public void c(Bundle bundle) {
        this.I = true;
        k(bundle);
        s sVar = this.v;
        if (sVar == null || sVar.c(1)) {
            return;
        }
        this.v.g();
    }

    void c(Menu menu) {
        if (this.C) {
            return;
        }
        if (this.G && this.H) {
            a(menu);
        }
        s sVar = this.v;
        if (sVar != null) {
            sVar.a(menu);
        }
    }

    public void c(boolean z) {
    }

    boolean c(MenuItem menuItem) {
        if (this.C) {
            return false;
        }
        if (a(menuItem)) {
            return true;
        }
        s sVar = this.v;
        return sVar != null && sVar.a(menuItem);
    }

    public LayoutInflater d(Bundle bundle) {
        return a(bundle);
    }

    public final FragmentActivity d() {
        AbstractC0047k abstractC0047k = this.u;
        if (abstractC0047k == null) {
            return null;
        }
        return (FragmentActivity) abstractC0047k.b();
    }

    void d(boolean z) {
        b(z);
        s sVar = this.v;
        if (sVar != null) {
            sVar.a(z);
        }
    }

    boolean d(Menu menu) {
        boolean z = false;
        if (this.C) {
            return false;
        }
        if (this.G && this.H) {
            b(menu);
            z = true;
        }
        s sVar = this.v;
        return sVar != null ? z | sVar.b(menu) : z;
    }

    boolean d(MenuItem menuItem) {
        if (this.C) {
            return false;
        }
        if (this.G && this.H && b(menuItem)) {
            return true;
        }
        s sVar = this.v;
        return sVar != null && sVar.b(menuItem);
    }

    public void e(Bundle bundle) {
    }

    void e(boolean z) {
        c(z);
        s sVar = this.v;
        if (sVar != null) {
            sVar.b(z);
        }
    }

    public boolean e() {
        Boolean bool;
        a aVar = this.O;
        if (aVar == null || (bool = aVar.n) == null) {
            return true;
        }
        return bool.booleanValue();
    }

    public final boolean equals(Object obj) {
        return super.equals(obj);
    }

    public void f(Bundle bundle) {
        this.I = true;
    }

    void f(boolean z) {
        aa().s = z;
    }

    public boolean f() {
        Boolean bool;
        a aVar = this.O;
        if (aVar == null || (bool = aVar.m) == null) {
            return true;
        }
        return bool.booleanValue();
    }

    View g() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        return aVar.f311a;
    }

    void g(Bundle bundle) {
        s sVar = this.v;
        if (sVar != null) {
            sVar.s();
        }
        this.f306c = 2;
        this.I = false;
        b(bundle);
        if (this.I) {
            s sVar2 = this.v;
            if (sVar2 != null) {
                sVar2.f();
                return;
            }
            return;
        }
        throw new N("Fragment " + this + " did not call through to super.onActivityCreated()");
    }

    Animator h() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        return aVar.f312b;
    }

    void h(Bundle bundle) {
        s sVar = this.v;
        if (sVar != null) {
            sVar.s();
        }
        this.f306c = 1;
        this.I = false;
        c(bundle);
        this.T = true;
        if (this.I) {
            this.U.b(f.a.ON_CREATE);
            return;
        }
        throw new N("Fragment " + this + " did not call through to super.onCreate()");
    }

    public final int hashCode() {
        return super.hashCode();
    }

    LayoutInflater i(Bundle bundle) {
        this.S = d(bundle);
        return this.S;
    }

    public final AbstractC0048l i() {
        if (this.v == null) {
            A();
            int i = this.f306c;
            if (i >= 4) {
                this.v.l();
            } else if (i >= 3) {
                this.v.m();
            } else if (i >= 2) {
                this.v.f();
            } else if (i >= 1) {
                this.v.g();
            }
        }
        return this.v;
    }

    public Context j() {
        AbstractC0047k abstractC0047k = this.u;
        if (abstractC0047k == null) {
            return null;
        }
        return abstractC0047k.c();
    }

    void j(Bundle bundle) {
        Parcelable parcelableV;
        e(bundle);
        s sVar = this.v;
        if (sVar == null || (parcelableV = sVar.v()) == null) {
            return;
        }
        bundle.putParcelable("android:support:fragments", parcelableV);
    }

    public Object k() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        return aVar.g;
    }

    void k(Bundle bundle) {
        Parcelable parcelable;
        if (bundle == null || (parcelable = bundle.getParcelable("android:support:fragments")) == null) {
            return;
        }
        if (this.v == null) {
            A();
        }
        this.v.a(parcelable, this.w);
        this.w = null;
        this.v.g();
    }

    androidx.core.app.i l() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        return aVar.o;
    }

    final void l(Bundle bundle) {
        SparseArray<Parcelable> sparseArray = this.f308e;
        if (sparseArray != null) {
            this.L.restoreHierarchyState(sparseArray);
            this.f308e = null;
        }
        this.I = false;
        f(bundle);
        if (this.I) {
            if (this.K != null) {
                this.V.b(f.a.ON_CREATE);
            }
        } else {
            throw new N("Fragment " + this + " did not call through to super.onViewStateRestored()");
        }
    }

    public Object m() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        return aVar.i;
    }

    public void m(Bundle bundle) {
        if (this.g >= 0 && F()) {
            throw new IllegalStateException("Fragment already active and state has been saved");
        }
        this.i = bundle;
    }

    androidx.core.app.i n() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        return aVar.p;
    }

    public final AbstractC0048l o() {
        return this.t;
    }

    @Override // android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        this.I = true;
    }

    @Override // android.view.View.OnCreateContextMenuListener
    public void onCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        d().onCreateContextMenu(contextMenu, view, contextMenuInfo);
    }

    @Override // android.content.ComponentCallbacks
    public void onLowMemory() {
        this.I = true;
    }

    int p() {
        a aVar = this.O;
        if (aVar == null) {
            return 0;
        }
        return aVar.f314d;
    }

    int q() {
        a aVar = this.O;
        if (aVar == null) {
            return 0;
        }
        return aVar.f315e;
    }

    int r() {
        a aVar = this.O;
        if (aVar == null) {
            return 0;
        }
        return aVar.f316f;
    }

    public Object s() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        Object obj = aVar.j;
        return obj == f305b ? m() : obj;
    }

    public final Resources t() {
        return Y().getResources();
    }

    public String toString() {
        StringBuilder sb = new StringBuilder(128);
        b.d.c.a.a(this, sb);
        if (this.g >= 0) {
            sb.append(" #");
            sb.append(this.g);
        }
        if (this.z != 0) {
            sb.append(" id=0x");
            sb.append(Integer.toHexString(this.z));
        }
        if (this.B != null) {
            sb.append(" ");
            sb.append(this.B);
        }
        sb.append('}');
        return sb.toString();
    }

    public Object u() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        Object obj = aVar.h;
        return obj == f305b ? k() : obj;
    }

    public Object v() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        return aVar.k;
    }

    public Object w() {
        a aVar = this.O;
        if (aVar == null) {
            return null;
        }
        Object obj = aVar.l;
        return obj == f305b ? v() : obj;
    }

    int x() {
        a aVar = this.O;
        if (aVar == null) {
            return 0;
        }
        return aVar.f313c;
    }

    public View y() {
        return this.K;
    }

    void z() {
        this.g = -1;
        this.h = null;
        this.m = false;
        this.n = false;
        this.o = false;
        this.p = false;
        this.q = false;
        this.s = 0;
        this.t = null;
        this.v = null;
        this.u = null;
        this.z = 0;
        this.A = 0;
        this.B = null;
        this.C = false;
        this.D = false;
        this.F = false;
    }
}
