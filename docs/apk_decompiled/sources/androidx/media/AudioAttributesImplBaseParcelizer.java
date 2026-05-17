package androidx.media;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class AudioAttributesImplBaseParcelizer {
    public static c read(androidx.versionedparcelable.b bVar) {
        c cVar = new c();
        cVar.f525a = bVar.a(cVar.f525a, 1);
        cVar.f526b = bVar.a(cVar.f526b, 2);
        cVar.f527c = bVar.a(cVar.f527c, 3);
        cVar.f528d = bVar.a(cVar.f528d, 4);
        return cVar;
    }

    public static void write(c cVar, androidx.versionedparcelable.b bVar) {
        bVar.a(false, false);
        bVar.b(cVar.f525a, 1);
        bVar.b(cVar.f526b, 2);
        bVar.b(cVar.f527c, 3);
        bVar.b(cVar.f528d, 4);
    }
}
