package c.a.b.d;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class a extends e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f917a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f918b;

    a(String str, String str2) {
        if (str == null) {
            throw new NullPointerException("Null libraryName");
        }
        this.f917a = str;
        if (str2 == null) {
            throw new NullPointerException("Null version");
        }
        this.f918b = str2;
    }

    @Override // c.a.b.d.e
    public String a() {
        return this.f917a;
    }

    @Override // c.a.b.d.e
    public String b() {
        return this.f918b;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return this.f917a.equals(eVar.a()) && this.f918b.equals(eVar.b());
    }

    public int hashCode() {
        return ((this.f917a.hashCode() ^ 1000003) * 1000003) ^ this.f918b.hashCode();
    }

    public String toString() {
        return "LibraryVersion{libraryName=" + this.f917a + ", version=" + this.f918b + "}";
    }
}
