package b.d.c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class f<T> implements e<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object[] f751a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f752b;

    public f(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("The max pool size must be > 0");
        }
        this.f751a = new Object[i];
    }

    private boolean b(T t) {
        for (int i = 0; i < this.f752b; i++) {
            if (this.f751a[i] == t) {
                return true;
            }
        }
        return false;
    }

    @Override // b.d.c.e
    public T a() {
        int i = this.f752b;
        if (i <= 0) {
            return null;
        }
        int i2 = i - 1;
        Object[] objArr = this.f751a;
        T t = (T) objArr[i2];
        objArr[i2] = null;
        this.f752b = i - 1;
        return t;
    }

    @Override // b.d.c.e
    public boolean a(T t) {
        if (b(t)) {
            throw new IllegalStateException("Already in the pool!");
        }
        int i = this.f752b;
        Object[] objArr = this.f751a;
        if (i >= objArr.length) {
            return false;
        }
        objArr[i] = t;
        this.f752b = i + 1;
        return true;
    }
}
