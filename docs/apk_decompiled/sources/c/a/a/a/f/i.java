package c.a.a.a.f;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Executor f856a = new a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static final Executor f857b = new y();

    private static final class a implements Executor {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Handler f858a = new Handler(Looper.getMainLooper());

        @Override // java.util.concurrent.Executor
        public final void execute(Runnable runnable) {
            this.f858a.post(runnable);
        }
    }
}
