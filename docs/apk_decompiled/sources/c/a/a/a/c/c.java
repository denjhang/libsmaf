package c.a.a.a.c;

import android.content.Context;
import android.os.IBinder;
import com.google.android.gms.common.g;
import com.google.android.gms.common.internal.r;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class c<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f821a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private T f822b;

    public static class a extends Exception {
        public a(String str) {
            super(str);
        }

        public a(String str, Throwable th) {
            super(str, th);
        }
    }

    protected c(String str) {
        this.f821a = str;
    }

    protected final T a(Context context) throws a {
        if (this.f822b == null) {
            r.a(context);
            Context contextB = g.b(context);
            if (contextB == null) {
                throw new a("Could not get remote context.");
            }
            try {
                this.f822b = a((IBinder) contextB.getClassLoader().loadClass(this.f821a).newInstance());
            } catch (ClassNotFoundException e2) {
                throw new a("Could not load creator class.", e2);
            } catch (IllegalAccessException e3) {
                throw new a("Could not access creator.", e3);
            } catch (InstantiationException e4) {
                throw new a("Could not instantiate creator.", e4);
            }
        }
        return this.f822b;
    }

    protected abstract T a(IBinder iBinder);
}
