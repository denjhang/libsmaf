package androidx.fragment.app;

import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.res.Configuration;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.Window;
import androidx.core.app.ComponentActivity;
import androidx.core.app.a;
import androidx.lifecycle.f;
import java.io.FileDescriptor;
import java.io.PrintWriter;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class FragmentActivity extends ComponentActivity implements androidx.lifecycle.v, a.InterfaceC0008a, a.c {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private androidx.lifecycle.u f319e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    boolean f320f;
    boolean g;
    boolean i;
    boolean j;
    int k;
    b.b.i<String> l;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final Handler f317c = new HandlerC0044h(this);

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final C0046j f318d = C0046j.a(new a());
    boolean h = true;

    class a extends AbstractC0047k<FragmentActivity> {
        public a() {
            super(FragmentActivity.this);
        }

        @Override // androidx.fragment.app.AbstractC0045i
        public View a(int i) {
            return FragmentActivity.this.findViewById(i);
        }

        @Override // androidx.fragment.app.AbstractC0047k
        public void a(Fragment fragment) {
            FragmentActivity.this.a(fragment);
        }

        @Override // androidx.fragment.app.AbstractC0047k
        public void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
            FragmentActivity.this.dump(str, fileDescriptor, printWriter, strArr);
        }

        @Override // androidx.fragment.app.AbstractC0045i
        public boolean a() {
            Window window = FragmentActivity.this.getWindow();
            return (window == null || window.peekDecorView() == null) ? false : true;
        }

        @Override // androidx.fragment.app.AbstractC0047k
        public boolean b(Fragment fragment) {
            return !FragmentActivity.this.isFinishing();
        }

        @Override // androidx.fragment.app.AbstractC0047k
        public LayoutInflater f() {
            return FragmentActivity.this.getLayoutInflater().cloneInContext(FragmentActivity.this);
        }

        @Override // androidx.fragment.app.AbstractC0047k
        public int g() {
            Window window = FragmentActivity.this.getWindow();
            if (window == null) {
                return 0;
            }
            return window.getAttributes().windowAnimations;
        }

        @Override // androidx.fragment.app.AbstractC0047k
        public boolean h() {
            return FragmentActivity.this.getWindow() != null;
        }

        @Override // androidx.fragment.app.AbstractC0047k
        public void i() {
            FragmentActivity.this.f();
        }
    }

    static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        Object f322a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        androidx.lifecycle.u f323b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        t f324c;

        b() {
        }
    }

    static void a(int i) {
        if ((i & (-65536)) != 0) {
            throw new IllegalArgumentException("Can only use lower 16 bits for requestCode");
        }
    }

    private static boolean a(AbstractC0048l abstractC0048l, f.b bVar) {
        boolean zA = false;
        for (Fragment fragment : abstractC0048l.c()) {
            if (fragment != null) {
                if (fragment.a().a().a(f.b.STARTED)) {
                    fragment.U.a(bVar);
                    zA = true;
                }
                AbstractC0048l abstractC0048lP = fragment.P();
                if (abstractC0048lP != null) {
                    zA |= a(abstractC0048lP, bVar);
                }
            }
        }
        return zA;
    }

    private void g() {
        while (a(c(), f.b.CREATED)) {
        }
    }

    final View a(View view, String str, Context context, AttributeSet attributeSet) {
        return this.f318d.a(view, str, context, attributeSet);
    }

    @Override // androidx.core.app.ComponentActivity, androidx.lifecycle.h
    public androidx.lifecycle.f a() {
        return super.a();
    }

    public void a(Fragment fragment) {
    }

    protected boolean a(View view, Menu menu) {
        return super.onPreparePanel(0, view, menu);
    }

    @Override // androidx.lifecycle.v
    public androidx.lifecycle.u b() {
        if (getApplication() == null) {
            throw new IllegalStateException("Your activity is not yet attached to the Application instance. You can't request ViewModel before onCreate call.");
        }
        if (this.f319e == null) {
            b bVar = (b) getLastNonConfigurationInstance();
            if (bVar != null) {
                this.f319e = bVar.f323b;
            }
            if (this.f319e == null) {
                this.f319e = new androidx.lifecycle.u();
            }
        }
        return this.f319e;
    }

    public AbstractC0048l c() {
        return this.f318d.j();
    }

    protected void d() {
        this.f318d.f();
    }

    @Override // android.app.Activity
    public void dump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        super.dump(str, fileDescriptor, printWriter, strArr);
        printWriter.print(str);
        printWriter.print("Local FragmentActivity ");
        printWriter.print(Integer.toHexString(System.identityHashCode(this)));
        printWriter.println(" State:");
        String str2 = str + "  ";
        printWriter.print(str2);
        printWriter.print("mCreated=");
        printWriter.print(this.f320f);
        printWriter.print(" mResumed=");
        printWriter.print(this.g);
        printWriter.print(" mStopped=");
        printWriter.print(this.h);
        if (getApplication() != null) {
            b.g.a.a.a(this).a(str2, fileDescriptor, printWriter, strArr);
        }
        this.f318d.j().a(str, fileDescriptor, printWriter, strArr);
    }

    public Object e() {
        return null;
    }

    @Deprecated
    public void f() {
        invalidateOptionsMenu();
    }

    @Override // android.app.Activity
    protected void onActivityResult(int i, int i2, Intent intent) {
        this.f318d.k();
        int i3 = i >> 16;
        if (i3 == 0) {
            a.b bVarA = androidx.core.app.a.a();
            if (bVarA == null || !bVarA.a(this, i, i2, intent)) {
                super.onActivityResult(i, i2, intent);
                return;
            }
            return;
        }
        int i4 = i3 - 1;
        String strB = this.l.b(i4);
        this.l.d(i4);
        if (strB == null) {
            Log.w("FragmentActivity", "Activity result delivered for unknown Fragment.");
            return;
        }
        Fragment fragmentA = this.f318d.a(strB);
        if (fragmentA != null) {
            fragmentA.a(i & 65535, i2, intent);
            return;
        }
        Log.w("FragmentActivity", "Activity result no fragment exists for who: " + strB);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        AbstractC0048l abstractC0048lJ = this.f318d.j();
        boolean zD = abstractC0048lJ.d();
        if (!zD || Build.VERSION.SDK_INT > 25) {
            if (zD || !abstractC0048lJ.e()) {
                super.onBackPressed();
            }
        }
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        this.f318d.k();
        this.f318d.a(configuration);
    }

    @Override // androidx.core.app.ComponentActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        androidx.lifecycle.u uVar;
        this.f318d.a((Fragment) null);
        super.onCreate(bundle);
        b bVar = (b) getLastNonConfigurationInstance();
        if (bVar != null && (uVar = bVar.f323b) != null && this.f319e == null) {
            this.f319e = uVar;
        }
        if (bundle != null) {
            this.f318d.a(bundle.getParcelable("android:support:fragments"), bVar != null ? bVar.f324c : null);
            if (bundle.containsKey("android:support:next_request_index")) {
                this.k = bundle.getInt("android:support:next_request_index");
                int[] intArray = bundle.getIntArray("android:support:request_indicies");
                String[] stringArray = bundle.getStringArray("android:support:request_fragment_who");
                if (intArray == null || stringArray == null || intArray.length != stringArray.length) {
                    Log.w("FragmentActivity", "Invalid requestCode mapping in savedInstanceState.");
                } else {
                    this.l = new b.b.i<>(intArray.length);
                    for (int i = 0; i < intArray.length; i++) {
                        this.l.b(intArray[i], stringArray[i]);
                    }
                }
            }
        }
        if (this.l == null) {
            this.l = new b.b.i<>();
            this.k = 0;
        }
        this.f318d.b();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public boolean onCreatePanelMenu(int i, Menu menu) {
        return i == 0 ? super.onCreatePanelMenu(i, menu) | this.f318d.a(menu, getMenuInflater()) : super.onCreatePanelMenu(i, menu);
    }

    @Override // android.app.Activity, android.view.LayoutInflater.Factory2
    public View onCreateView(View view, String str, Context context, AttributeSet attributeSet) {
        View viewA = a(view, str, context, attributeSet);
        return viewA == null ? super.onCreateView(view, str, context, attributeSet) : viewA;
    }

    @Override // android.app.Activity, android.view.LayoutInflater.Factory
    public View onCreateView(String str, Context context, AttributeSet attributeSet) {
        View viewA = a(null, str, context, attributeSet);
        return viewA == null ? super.onCreateView(str, context, attributeSet) : viewA;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        if (this.f319e != null && !isChangingConfigurations()) {
            this.f319e.a();
        }
        this.f318d.c();
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public void onLowMemory() {
        super.onLowMemory();
        this.f318d.d();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public boolean onMenuItemSelected(int i, MenuItem menuItem) {
        if (super.onMenuItemSelected(i, menuItem)) {
            return true;
        }
        if (i == 0) {
            return this.f318d.b(menuItem);
        }
        if (i != 6) {
            return false;
        }
        return this.f318d.a(menuItem);
    }

    @Override // android.app.Activity
    public void onMultiWindowModeChanged(boolean z) {
        this.f318d.a(z);
    }

    @Override // android.app.Activity
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        this.f318d.k();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public void onPanelClosed(int i, Menu menu) {
        if (i == 0) {
            this.f318d.a(menu);
        }
        super.onPanelClosed(i, menu);
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        this.g = false;
        if (this.f317c.hasMessages(2)) {
            this.f317c.removeMessages(2);
            d();
        }
        this.f318d.e();
    }

    @Override // android.app.Activity
    public void onPictureInPictureModeChanged(boolean z) {
        this.f318d.b(z);
    }

    @Override // android.app.Activity
    protected void onPostResume() {
        super.onPostResume();
        this.f317c.removeMessages(2);
        d();
        this.f318d.i();
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public boolean onPreparePanel(int i, View view, Menu menu) {
        return (i != 0 || menu == null) ? super.onPreparePanel(i, view, menu) : a(view, menu) | this.f318d.b(menu);
    }

    @Override // android.app.Activity
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        this.f318d.k();
        int i2 = (i >> 16) & 65535;
        if (i2 != 0) {
            int i3 = i2 - 1;
            String strB = this.l.b(i3);
            this.l.d(i3);
            if (strB == null) {
                Log.w("FragmentActivity", "Activity result delivered for unknown Fragment.");
                return;
            }
            Fragment fragmentA = this.f318d.a(strB);
            if (fragmentA != null) {
                fragmentA.a(i & 65535, strArr, iArr);
                return;
            }
            Log.w("FragmentActivity", "Activity result no fragment exists for who: " + strB);
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        this.f317c.sendEmptyMessage(2);
        this.g = true;
        this.f318d.i();
    }

    @Override // android.app.Activity
    public final Object onRetainNonConfigurationInstance() {
        Object objE = e();
        t tVarL = this.f318d.l();
        if (tVarL == null && this.f319e == null && objE == null) {
            return null;
        }
        b bVar = new b();
        bVar.f322a = objE;
        bVar.f323b = this.f319e;
        bVar.f324c = tVarL;
        return bVar;
    }

    @Override // androidx.core.app.ComponentActivity, android.app.Activity
    protected void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        g();
        Parcelable parcelableM = this.f318d.m();
        if (parcelableM != null) {
            bundle.putParcelable("android:support:fragments", parcelableM);
        }
        if (this.l.c() > 0) {
            bundle.putInt("android:support:next_request_index", this.k);
            int[] iArr = new int[this.l.c()];
            String[] strArr = new String[this.l.c()];
            for (int i = 0; i < this.l.c(); i++) {
                iArr[i] = this.l.c(i);
                strArr[i] = this.l.e(i);
            }
            bundle.putIntArray("android:support:request_indicies", iArr);
            bundle.putStringArray("android:support:request_fragment_who", strArr);
        }
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        this.h = false;
        if (!this.f320f) {
            this.f320f = true;
            this.f318d.a();
        }
        this.f318d.k();
        this.f318d.i();
        this.f318d.g();
    }

    @Override // android.app.Activity
    public void onStateNotSaved() {
        this.f318d.k();
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        this.h = true;
        g();
        this.f318d.h();
    }

    @Override // android.app.Activity
    public void startActivityForResult(Intent intent, int i) {
        if (!this.j && i != -1) {
            a(i);
        }
        super.startActivityForResult(intent, i);
    }

    @Override // android.app.Activity
    public void startActivityForResult(Intent intent, int i, Bundle bundle) {
        if (!this.j && i != -1) {
            a(i);
        }
        super.startActivityForResult(intent, i, bundle);
    }

    @Override // android.app.Activity
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) throws IntentSender.SendIntentException {
        if (!this.i && i != -1) {
            a(i);
        }
        super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4);
    }

    @Override // android.app.Activity
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) throws IntentSender.SendIntentException {
        if (!this.i && i != -1) {
            a(i);
        }
        super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
    }
}
