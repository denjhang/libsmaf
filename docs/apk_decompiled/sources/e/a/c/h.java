package e.a.c;

import e.B;
import e.H;
import e.InterfaceC0413f;
import e.InterfaceC0418k;
import e.K;
import e.w;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class h implements B.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final List<B> f2943a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final e.a.b.g f2944b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final c f2945c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final e.a.b.c f2946d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final int f2947e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final H f2948f;
    private final InterfaceC0413f g;
    private final w h;
    private final int i;
    private final int j;
    private final int k;
    private int l;

    public h(List<B> list, e.a.b.g gVar, c cVar, e.a.b.c cVar2, int i, H h, InterfaceC0413f interfaceC0413f, w wVar, int i2, int i3, int i4) {
        this.f2943a = list;
        this.f2946d = cVar2;
        this.f2944b = gVar;
        this.f2945c = cVar;
        this.f2947e = i;
        this.f2948f = h;
        this.g = interfaceC0413f;
        this.h = wVar;
        this.i = i2;
        this.j = i3;
        this.k = i4;
    }

    @Override // e.B.a
    public int a() {
        return this.j;
    }

    @Override // e.B.a
    public K a(H h) {
        return a(h, this.f2944b, this.f2945c, this.f2946d);
    }

    public K a(H h, e.a.b.g gVar, c cVar, e.a.b.c cVar2) {
        if (this.f2947e >= this.f2943a.size()) {
            throw new AssertionError();
        }
        this.l++;
        if (this.f2945c != null && !this.f2946d.a(h.g())) {
            throw new IllegalStateException("network interceptor " + this.f2943a.get(this.f2947e - 1) + " must retain the same host and port");
        }
        if (this.f2945c != null && this.l > 1) {
            throw new IllegalStateException("network interceptor " + this.f2943a.get(this.f2947e - 1) + " must call proceed() exactly once");
        }
        h hVar = new h(this.f2943a, gVar, cVar, cVar2, this.f2947e + 1, h, this.g, this.h, this.i, this.j, this.k);
        B b2 = this.f2943a.get(this.f2947e);
        K kA = b2.a(hVar);
        if (cVar != null && this.f2947e + 1 < this.f2943a.size() && hVar.l != 1) {
            throw new IllegalStateException("network interceptor " + b2 + " must call proceed() exactly once");
        }
        if (kA == null) {
            throw new NullPointerException("interceptor " + b2 + " returned null");
        }
        if (kA.a() != null) {
            return kA;
        }
        throw new IllegalStateException("interceptor " + b2 + " returned a response with no body");
    }

    @Override // e.B.a
    public int b() {
        return this.k;
    }

    @Override // e.B.a
    public int c() {
        return this.i;
    }

    @Override // e.B.a
    public H d() {
        return this.f2948f;
    }

    public InterfaceC0413f e() {
        return this.g;
    }

    public InterfaceC0418k f() {
        return this.f2946d;
    }

    public w g() {
        return this.h;
    }

    public c h() {
        return this.f2945c;
    }

    public e.a.b.g i() {
        return this.f2944b;
    }
}
