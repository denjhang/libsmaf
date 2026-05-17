package e.a.e;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final f.i f2997a = f.i.b(":");

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static final f.i f2998b = f.i.b(":status");

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public static final f.i f2999c = f.i.b(":method");

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public static final f.i f3000d = f.i.b(":path");

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public static final f.i f3001e = f.i.b(":scheme");

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public static final f.i f3002f = f.i.b(":authority");
    public final f.i g;
    public final f.i h;
    final int i;

    public c(f.i iVar, f.i iVar2) {
        this.g = iVar;
        this.h = iVar2;
        this.i = iVar.e() + 32 + iVar2.e();
    }

    public c(f.i iVar, String str) {
        this(iVar, f.i.b(str));
    }

    public c(String str, String str2) {
        this(f.i.b(str), f.i.b(str2));
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return this.g.equals(cVar.g) && this.h.equals(cVar.h);
    }

    public int hashCode() {
        return ((527 + this.g.hashCode()) * 31) + this.h.hashCode();
    }

    public String toString() {
        return e.a.e.a("%s: %s", this.g.h(), this.h.h());
    }
}
