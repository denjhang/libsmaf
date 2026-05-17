package b.b;

import java.util.Map;

/* JADX INFO: Add missing generic type declarations: [E] */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c<E> extends g<E, E> {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ d f711d;

    c(d dVar) {
        this.f711d = dVar;
    }

    @Override // b.b.g
    protected int a(Object obj) {
        return this.f711d.indexOf(obj);
    }

    @Override // b.b.g
    protected Object a(int i, int i2) {
        return this.f711d.h[i];
    }

    @Override // b.b.g
    protected E a(int i, E e2) {
        throw new UnsupportedOperationException("not a map");
    }

    @Override // b.b.g
    protected void a() {
        this.f711d.clear();
    }

    @Override // b.b.g
    protected void a(int i) {
        this.f711d.e(i);
    }

    @Override // b.b.g
    protected void a(E e2, E e3) {
        this.f711d.add(e2);
    }

    @Override // b.b.g
    protected int b(Object obj) {
        return this.f711d.indexOf(obj);
    }

    @Override // b.b.g
    protected Map<E, E> b() {
        throw new UnsupportedOperationException("not a map");
    }

    @Override // b.b.g
    protected int c() {
        return this.f711d.i;
    }
}
