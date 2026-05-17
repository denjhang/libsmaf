package f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class w {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static v f3278a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    static long f3279b;

    private w() {
    }

    static v a() {
        synchronized (w.class) {
            if (f3278a == null) {
                return new v();
            }
            v vVar = f3278a;
            f3278a = vVar.f3277f;
            vVar.f3277f = null;
            f3279b -= 8192;
            return vVar;
        }
    }

    static void a(v vVar) {
        if (vVar.f3277f != null || vVar.g != null) {
            throw new IllegalArgumentException();
        }
        if (vVar.f3275d) {
            return;
        }
        synchronized (w.class) {
            if (f3279b + 8192 > 65536) {
                return;
            }
            f3279b += 8192;
            vVar.f3277f = f3278a;
            vVar.f3274c = 0;
            vVar.f3273b = 0;
            f3278a = vVar;
        }
    }
}
