package b.d.c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class g<T> extends f<T> {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Object f753c;

    public g(int i) {
        super(i);
        this.f753c = new Object();
    }

    @Override // b.d.c.f, b.d.c.e
    public T a() {
        T t;
        synchronized (this.f753c) {
            t = (T) super.a();
        }
        return t;
    }

    @Override // b.d.c.f, b.d.c.e
    public boolean a(T t) {
        boolean zA;
        synchronized (this.f753c) {
            zA = super.a(t);
        }
        return zA;
    }
}
