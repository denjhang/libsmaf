package com.google.firebase.components;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final /* synthetic */ class k implements c.a.b.b.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final n f2566a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final e f2567b;

    private k(n nVar, e eVar) {
        this.f2566a = nVar;
        this.f2567b = eVar;
    }

    public static c.a.b.b.a a(n nVar, e eVar) {
        return new k(nVar, eVar);
    }

    @Override // c.a.b.b.a
    public Object get() {
        n nVar = this.f2566a;
        e eVar = this.f2567b;
        return eVar.b().a(new x(eVar, nVar));
    }
}
