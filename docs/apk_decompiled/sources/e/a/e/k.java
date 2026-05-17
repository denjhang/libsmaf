package e.a.e;

import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class k extends e.a.b {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f3043b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ f.f f3044c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ int f3045d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ boolean f3046e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ m f3047f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    k(m mVar, String str, Object[] objArr, int i, f.f fVar, int i2, boolean z) {
        super(str, objArr);
        this.f3047f = mVar;
        this.f3043b = i;
        this.f3044c = fVar;
        this.f3045d = i2;
        this.f3046e = z;
    }

    @Override // e.a.b
    public void b() {
        try {
            boolean zA = this.f3047f.k.a(this.f3043b, this.f3044c, this.f3045d, this.f3046e);
            if (zA) {
                this.f3047f.s.a(this.f3043b, b.CANCEL);
            }
            if (zA || this.f3046e) {
                synchronized (this.f3047f) {
                    this.f3047f.u.remove(Integer.valueOf(this.f3043b));
                }
            }
        } catch (IOException unused) {
        }
    }
}
