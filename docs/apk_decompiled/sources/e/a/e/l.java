package e.a.e;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class l extends e.a.b {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f3048b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ b f3049c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ m f3050d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    l(m mVar, String str, Object[] objArr, int i, b bVar) {
        super(str, objArr);
        this.f3050d = mVar;
        this.f3048b = i;
        this.f3049c = bVar;
    }

    @Override // e.a.b
    public void b() {
        this.f3050d.k.a(this.f3048b, this.f3049c);
        synchronized (this.f3050d) {
            this.f3050d.u.remove(Integer.valueOf(this.f3048b));
        }
    }
}
