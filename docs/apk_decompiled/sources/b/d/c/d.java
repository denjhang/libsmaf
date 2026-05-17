package b.d.c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class d<F, S> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final F f749a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public final S f750b;

    public d(F f2, S s) {
        this.f749a = f2;
        this.f750b = s;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof d)) {
            return false;
        }
        d dVar = (d) obj;
        return c.a(dVar.f749a, this.f749a) && c.a(dVar.f750b, this.f750b);
    }

    public int hashCode() {
        F f2 = this.f749a;
        int iHashCode = f2 == null ? 0 : f2.hashCode();
        S s = this.f750b;
        return iHashCode ^ (s != null ? s.hashCode() : 0);
    }

    public String toString() {
        return "Pair{" + String.valueOf(this.f749a) + " " + String.valueOf(this.f750b) + "}";
    }
}
