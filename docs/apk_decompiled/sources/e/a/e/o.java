package e.a.e;

import e.a.e.m;
import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class o extends e.a.b {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ s f3070b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ m.d f3071c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    o(m.d dVar, String str, Object[] objArr, s sVar) {
        super(str, objArr);
        this.f3071c = dVar;
        this.f3070b = sVar;
    }

    @Override // e.a.b
    public void b() {
        try {
            m.this.f3053c.a(this.f3070b);
        } catch (IOException e2) {
            e.a.f.f.a().a(4, "Http2Connection.Listener failure for " + m.this.f3055e, e2);
            try {
                this.f3070b.a(b.PROTOCOL_ERROR);
            } catch (IOException unused) {
            }
        }
    }
}
