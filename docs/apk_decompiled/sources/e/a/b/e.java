package e.a.b;

import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class e extends RuntimeException {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Method f2919a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private IOException f2920b;

    static {
        Method declaredMethod;
        try {
            declaredMethod = Throwable.class.getDeclaredMethod("addSuppressed", Throwable.class);
        } catch (Exception unused) {
            declaredMethod = null;
        }
        f2919a = declaredMethod;
    }

    public e(IOException iOException) {
        super(iOException);
        this.f2920b = iOException;
    }

    private void a(IOException iOException, IOException iOException2) {
        Method method = f2919a;
        if (method != null) {
            try {
                method.invoke(iOException, iOException2);
            } catch (IllegalAccessException | InvocationTargetException unused) {
            }
        }
    }

    public IOException a() {
        return this.f2920b;
    }

    public void a(IOException iOException) {
        a(iOException, this.f2920b);
        this.f2920b = iOException;
    }
}
