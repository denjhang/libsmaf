package e.a.c;

import e.C;
import e.M;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class i extends M {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f2949a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final long f2950b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final f.h f2951c;

    public i(String str, long j, f.h hVar) {
        this.f2949a = str;
        this.f2950b = j;
        this.f2951c = hVar;
    }

    @Override // e.M
    public long b() {
        return this.f2950b;
    }

    @Override // e.M
    public C c() {
        String str = this.f2949a;
        if (str != null) {
            return C.a(str);
        }
        return null;
    }

    @Override // e.M
    public f.h d() {
        return this.f2951c;
    }
}
