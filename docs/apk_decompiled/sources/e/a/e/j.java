package e.a.e;

import java.io.IOException;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class j extends e.a.b {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f3039b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ List f3040c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ boolean f3041d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ m f3042e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    j(m mVar, String str, Object[] objArr, int i, List list, boolean z) {
        super(str, objArr);
        this.f3042e = mVar;
        this.f3039b = i;
        this.f3040c = list;
        this.f3041d = z;
    }

    @Override // e.a.b
    public void b() {
        boolean zA = this.f3042e.k.a(this.f3039b, this.f3040c, this.f3041d);
        if (zA) {
            try {
                this.f3042e.s.a(this.f3039b, b.CANCEL);
            } catch (IOException unused) {
                return;
            }
        }
        if (zA || this.f3041d) {
            synchronized (this.f3042e) {
                this.f3042e.u.remove(Integer.valueOf(this.f3039b));
            }
        }
    }
}
