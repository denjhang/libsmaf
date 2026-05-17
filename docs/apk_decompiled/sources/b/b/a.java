package b.b;

import java.util.Map;

/* JADX INFO: Add missing generic type declarations: [V, K] */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a<K, V> extends g<K, V> {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ b f710d;

    a(b bVar) {
        this.f710d = bVar;
    }

    @Override // b.b.g
    protected int a(Object obj) {
        return this.f710d.a(obj);
    }

    @Override // b.b.g
    protected Object a(int i, int i2) {
        return this.f710d.f741f[(i << 1) + i2];
    }

    @Override // b.b.g
    protected V a(int i, V v) {
        return this.f710d.a(i, v);
    }

    @Override // b.b.g
    protected void a() {
        this.f710d.clear();
    }

    @Override // b.b.g
    protected void a(int i) {
        this.f710d.c(i);
    }

    @Override // b.b.g
    protected void a(K k, V v) {
        this.f710d.put(k, v);
    }

    @Override // b.b.g
    protected int b(Object obj) {
        return this.f710d.b(obj);
    }

    @Override // b.b.g
    protected Map<K, V> b() {
        return this.f710d;
    }

    @Override // b.b.g
    protected int c() {
        return this.f710d.g;
    }
}
