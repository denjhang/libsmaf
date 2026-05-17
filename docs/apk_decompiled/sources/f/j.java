package f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class j implements y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final y f3248a;

    public j(y yVar) {
        if (yVar == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.f3248a = yVar;
    }

    @Override // f.y
    public void b(f fVar, long j) {
        this.f3248a.b(fVar, j);
    }

    @Override // f.y, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f3248a.close();
    }

    @Override // f.y, java.io.Flushable
    public void flush() {
        this.f3248a.flush();
    }

    @Override // f.y
    public B p() {
        return this.f3248a.p();
    }

    public String toString() {
        return getClass().getSimpleName() + "(" + this.f3248a.toString() + ")";
    }
}
