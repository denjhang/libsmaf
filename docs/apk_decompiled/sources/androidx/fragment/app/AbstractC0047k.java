package androidx.fragment.app;

import android.app.Activity;
import android.content.Context;
import android.os.Handler;
import android.view.LayoutInflater;
import java.io.FileDescriptor;
import java.io.PrintWriter;

/* JADX INFO: renamed from: androidx.fragment.app.k, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractC0047k<E> extends AbstractC0045i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Activity f381a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Context f382b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Handler f383c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final int f384d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final s f385e;

    AbstractC0047k(Activity activity, Context context, Handler handler, int i) {
        this.f385e = new s();
        this.f381a = activity;
        b.d.c.h.a(context, "context == null");
        this.f382b = context;
        b.d.c.h.a(handler, "handler == null");
        this.f383c = handler;
        this.f384d = i;
    }

    AbstractC0047k(FragmentActivity fragmentActivity) {
        this(fragmentActivity, fragmentActivity, fragmentActivity.f317c, 0);
    }

    abstract void a(Fragment fragment);

    public abstract void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr);

    Activity b() {
        return this.f381a;
    }

    public abstract boolean b(Fragment fragment);

    Context c() {
        return this.f382b;
    }

    s d() {
        return this.f385e;
    }

    Handler e() {
        return this.f383c;
    }

    public abstract LayoutInflater f();

    public abstract int g();

    public abstract boolean h();

    public abstract void i();
}
