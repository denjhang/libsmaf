package e;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class J {
    public static J a(C c2, byte[] bArr) {
        return a(c2, bArr, 0, bArr.length);
    }

    public static J a(C c2, byte[] bArr, int i, int i2) {
        if (bArr == null) {
            throw new NullPointerException("content == null");
        }
        e.a.e.a(bArr.length, i, i2);
        return new I(c2, i2, bArr, i);
    }

    public abstract long a();

    public abstract void a(f.g gVar);

    public abstract C b();
}
