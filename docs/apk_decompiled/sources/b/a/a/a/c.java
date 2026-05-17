package b.a.a.a;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c extends f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile c f686a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Executor f687b = new a();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final Executor f688c = new b();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private f f690e = new e();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private f f689d = this.f690e;

    private c() {
    }

    public static c b() {
        if (f686a != null) {
            return f686a;
        }
        synchronized (c.class) {
            if (f686a == null) {
                f686a = new c();
            }
        }
        return f686a;
    }

    @Override // b.a.a.a.f
    public void a(Runnable runnable) {
        this.f689d.a(runnable);
    }

    @Override // b.a.a.a.f
    public boolean a() {
        return this.f689d.a();
    }

    @Override // b.a.a.a.f
    public void b(Runnable runnable) {
        this.f689d.b(runnable);
    }
}
