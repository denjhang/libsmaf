package c.a.a.a.f;

import java.util.concurrent.CancellationException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class v implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ g f887a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final /* synthetic */ u f888b;

    v(u uVar, g gVar) {
        this.f888b = uVar;
        this.f887a = gVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            g gVarA = this.f888b.f885b.a(this.f887a.b());
            if (gVarA == null) {
                this.f888b.a((Exception) new NullPointerException("Continuation returned null"));
                return;
            }
            gVarA.a(i.f857b, (d) this.f888b);
            gVarA.a(i.f857b, (c) this.f888b);
            gVarA.a(i.f857b, (b) this.f888b);
        } catch (e e2) {
            if (e2.getCause() instanceof Exception) {
                this.f888b.a((Exception) e2.getCause());
            } else {
                this.f888b.a((Exception) e2);
            }
        } catch (CancellationException unused) {
            this.f888b.a();
        } catch (Exception e3) {
            this.f888b.a(e3);
        }
    }
}
