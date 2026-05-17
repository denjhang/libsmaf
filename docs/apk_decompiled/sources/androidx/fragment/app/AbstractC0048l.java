package androidx.fragment.app;

import android.content.Context;
import android.os.Bundle;
import android.view.View;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.List;

/* JADX INFO: renamed from: androidx.fragment.app.l, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractC0048l {

    /* JADX INFO: renamed from: androidx.fragment.app.l$a */
    public interface a {
    }

    /* JADX INFO: renamed from: androidx.fragment.app.l$b */
    public static abstract class b {
        public abstract void a(AbstractC0048l abstractC0048l, Fragment fragment);

        public abstract void a(AbstractC0048l abstractC0048l, Fragment fragment, Context context);

        public abstract void a(AbstractC0048l abstractC0048l, Fragment fragment, Bundle bundle);

        public abstract void a(AbstractC0048l abstractC0048l, Fragment fragment, View view, Bundle bundle);

        public abstract void b(AbstractC0048l abstractC0048l, Fragment fragment);

        public abstract void b(AbstractC0048l abstractC0048l, Fragment fragment, Context context);

        public abstract void b(AbstractC0048l abstractC0048l, Fragment fragment, Bundle bundle);

        public abstract void c(AbstractC0048l abstractC0048l, Fragment fragment);

        public abstract void c(AbstractC0048l abstractC0048l, Fragment fragment, Bundle bundle);

        public abstract void d(AbstractC0048l abstractC0048l, Fragment fragment);

        public abstract void d(AbstractC0048l abstractC0048l, Fragment fragment, Bundle bundle);

        public abstract void e(AbstractC0048l abstractC0048l, Fragment fragment);

        public abstract void f(AbstractC0048l abstractC0048l, Fragment fragment);

        public abstract void g(AbstractC0048l abstractC0048l, Fragment fragment);
    }

    /* JADX INFO: renamed from: androidx.fragment.app.l$c */
    public interface c {
        void onBackStackChanged();
    }

    public abstract Fragment a(String str);

    public abstract x a();

    public abstract void a(int i, int i2);

    public abstract void a(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr);

    public abstract boolean b();

    public abstract List<Fragment> c();

    public abstract boolean d();

    public abstract boolean e();
}
