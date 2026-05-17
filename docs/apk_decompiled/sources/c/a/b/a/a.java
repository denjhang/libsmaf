package c.a.b.a;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Class<T> f899a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final T f900b;

    public T a() {
        return this.f900b;
    }

    public Class<T> b() {
        return this.f899a;
    }

    public String toString() {
        return String.format("Event{type: %s, payload: %s}", this.f899a, this.f900b);
    }
}
