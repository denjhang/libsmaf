package b.a.a.a;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class e extends f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f693a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final ExecutorService f694b = Executors.newFixedThreadPool(2, new d(this));

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private volatile Handler f695c;

    @Override // b.a.a.a.f
    public void a(Runnable runnable) {
        this.f694b.execute(runnable);
    }

    @Override // b.a.a.a.f
    public boolean a() {
        return Looper.getMainLooper().getThread() == Thread.currentThread();
    }

    @Override // b.a.a.a.f
    public void b(Runnable runnable) {
        if (this.f695c == null) {
            synchronized (this.f693a) {
                if (this.f695c == null) {
                    this.f695c = new Handler(Looper.getMainLooper());
                }
            }
        }
        this.f695c.post(runnable);
    }
}
