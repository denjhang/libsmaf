package c.a.a.a.d.d;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class k extends g {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final j f842b = new j();

    k() {
    }

    @Override // c.a.a.a.d.d.g
    public final void a(Throwable th, Throwable th2) {
        if (th2 == th) {
            throw new IllegalArgumentException("Self suppression is not allowed.", th2);
        }
        if (th2 == null) {
            throw new NullPointerException("The suppressed exception cannot be null.");
        }
        this.f842b.a(th, true).add(th2);
    }
}
