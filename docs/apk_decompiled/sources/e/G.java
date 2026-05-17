package e;

import java.io.IOException;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class G implements InterfaceC0413f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final E f2839a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final e.a.c.k f2840b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private w f2841c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final H f2842d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final boolean f2843e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private boolean f2844f;

    final class a extends e.a.b {

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final InterfaceC0414g f2845b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        final /* synthetic */ G f2846c;

        @Override // e.a.b
        protected void b() {
            IOException e2;
            K kA;
            boolean z = true;
            try {
                try {
                    kA = this.f2846c.a();
                } catch (IOException e3) {
                    e2 = e3;
                    z = false;
                }
                try {
                    if (this.f2846c.f2840b.a()) {
                        this.f2845b.a(this.f2846c, new IOException("Canceled"));
                    } else {
                        this.f2845b.a(this.f2846c, kA);
                    }
                } catch (IOException e4) {
                    e2 = e4;
                    if (z) {
                        e.a.f.f.a().a(4, "Callback failure for " + this.f2846c.d(), e2);
                    } else {
                        this.f2846c.f2841c.a(this.f2846c, e2);
                        this.f2845b.a(this.f2846c, e2);
                    }
                }
            } finally {
                this.f2846c.f2839a.h().a(this);
            }
        }

        G c() {
            return this.f2846c;
        }

        String d() {
            return this.f2846c.f2842d.g().g();
        }
    }

    private G(E e2, H h, boolean z) {
        this.f2839a = e2;
        this.f2842d = h;
        this.f2843e = z;
        this.f2840b = new e.a.c.k(e2, z);
    }

    static G a(E e2, H h, boolean z) {
        G g = new G(e2, h, z);
        g.f2841c = e2.j().a(g);
        return g;
    }

    private void e() {
        this.f2840b.a(e.a.f.f.a().a("response.body().close()"));
    }

    K a() {
        ArrayList arrayList = new ArrayList();
        arrayList.addAll(this.f2839a.n());
        arrayList.add(this.f2840b);
        arrayList.add(new e.a.c.a(this.f2839a.g()));
        arrayList.add(new e.a.a.b(this.f2839a.o()));
        arrayList.add(new e.a.b.a(this.f2839a));
        if (!this.f2843e) {
            arrayList.addAll(this.f2839a.p());
        }
        arrayList.add(new e.a.c.b(this.f2843e));
        return new e.a.c.h(arrayList, null, null, null, 0, this.f2842d, this, this.f2841c, this.f2839a.d(), this.f2839a.v(), this.f2839a.z()).a(this.f2842d);
    }

    public boolean b() {
        return this.f2840b.a();
    }

    String c() {
        return this.f2842d.g().l();
    }

    /* JADX INFO: renamed from: clone, reason: merged with bridge method [inline-methods] */
    public G m1clone() {
        return a(this.f2839a, this.f2842d, this.f2843e);
    }

    String d() {
        StringBuilder sb = new StringBuilder();
        sb.append(b() ? "canceled " : "");
        sb.append(this.f2843e ? "web socket" : "call");
        sb.append(" to ");
        sb.append(c());
        return sb.toString();
    }

    @Override // e.InterfaceC0413f
    public K execute() {
        synchronized (this) {
            if (this.f2844f) {
                throw new IllegalStateException("Already Executed");
            }
            this.f2844f = true;
        }
        e();
        this.f2841c.b(this);
        try {
            try {
                this.f2839a.h().a(this);
                K kA = a();
                if (kA != null) {
                    return kA;
                }
                throw new IOException("Canceled");
            } catch (IOException e2) {
                this.f2841c.a(this, e2);
                throw e2;
            }
        } finally {
            this.f2839a.h().b(this);
        }
    }
}
