package androidx.media;

import android.media.AudioAttributes;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class AudioAttributesImplApi21Parcelizer {
    public static C0052b read(androidx.versionedparcelable.b bVar) {
        C0052b c0052b = new C0052b();
        c0052b.f523a = (AudioAttributes) bVar.a(c0052b.f523a, 1);
        c0052b.f524b = bVar.a(c0052b.f524b, 2);
        return c0052b;
    }

    public static void write(C0052b c0052b, androidx.versionedparcelable.b bVar) {
        bVar.a(false, false);
        bVar.b(c0052b.f523a, 1);
        bVar.b(c0052b.f524b, 2);
    }
}
