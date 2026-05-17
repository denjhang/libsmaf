package f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class k implements z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final z f3249a;

    public k(z zVar) {
        if (zVar == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.f3249a = zVar;
    }

    public final z a() {
        return this.f3249a;
    }

    @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f3249a.close();
    }

    @Override // f.z
    public B p() {
        return this.f3249a.p();
    }

    public String toString() {
        return getClass().getSimpleName() + "(" + this.f3249a.toString() + ")";
    }
}
