package e;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class I extends J {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ C f2858a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ int f2859b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ byte[] f2860c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ int f2861d;

    I(C c2, int i, byte[] bArr, int i2) {
        this.f2858a = c2;
        this.f2859b = i;
        this.f2860c = bArr;
        this.f2861d = i2;
    }

    @Override // e.J
    public long a() {
        return this.f2859b;
    }

    @Override // e.J
    public void a(f.g gVar) {
        gVar.write(this.f2860c, this.f2861d, this.f2859b);
    }

    @Override // e.J
    public C b() {
        return this.f2858a;
    }
}
