package e.a.e;

import e.a.e.m;
import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class q extends e.a.b {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ x f3073b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ m.d f3074c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    q(m.d dVar, String str, Object[] objArr, x xVar) {
        super(str, objArr);
        this.f3074c = dVar;
        this.f3073b = xVar;
    }

    @Override // e.a.b
    public void b() {
        try {
            m.this.s.a(this.f3073b);
        } catch (IOException unused) {
            m.this.e();
        }
    }
}
