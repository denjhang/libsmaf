package e.a.e;

import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h extends e.a.b {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f3033b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ long f3034c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ m f3035d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    h(m mVar, String str, Object[] objArr, int i, long j) {
        super(str, objArr);
        this.f3035d = mVar;
        this.f3033b = i;
        this.f3034c = j;
    }

    @Override // e.a.b
    public void b() {
        try {
            this.f3035d.s.a(this.f3033b, this.f3034c);
        } catch (IOException unused) {
            this.f3035d.e();
        }
    }
}
