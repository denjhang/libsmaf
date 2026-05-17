package e.a.e;

import java.io.IOException;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i extends e.a.b {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f3036b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ List f3037c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ m f3038d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    i(m mVar, String str, Object[] objArr, int i, List list) {
        super(str, objArr);
        this.f3038d = mVar;
        this.f3036b = i;
        this.f3037c = list;
    }

    @Override // e.a.b
    public void b() {
        if (this.f3038d.k.a(this.f3036b, this.f3037c)) {
            try {
                this.f3038d.s.a(this.f3036b, b.CANCEL);
                synchronized (this.f3038d) {
                    this.f3038d.u.remove(Integer.valueOf(this.f3036b));
                }
            } catch (IOException unused) {
            }
        }
    }
}
