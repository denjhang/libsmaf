package e.a.e;

import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g extends e.a.b {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f3030b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ b f3031c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ m f3032d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    g(m mVar, String str, Object[] objArr, int i, b bVar) {
        super(str, objArr);
        this.f3032d = mVar;
        this.f3030b = i;
        this.f3031c = bVar;
    }

    @Override // e.a.b
    public void b() {
        try {
            this.f3032d.b(this.f3030b, this.f3031c);
        } catch (IOException unused) {
            this.f3032d.e();
        }
    }
}
