package androidx.core.graphics.drawable;

import android.content.res.ColorStateList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class IconCompatParcelizer {
    public static IconCompat read(androidx.versionedparcelable.b bVar) {
        IconCompat iconCompat = new IconCompat();
        iconCompat.f210b = bVar.a(iconCompat.f210b, 1);
        iconCompat.f212d = bVar.a(iconCompat.f212d, 2);
        iconCompat.f213e = bVar.a(iconCompat.f213e, 3);
        iconCompat.f214f = bVar.a(iconCompat.f214f, 4);
        iconCompat.g = bVar.a(iconCompat.g, 5);
        iconCompat.h = (ColorStateList) bVar.a(iconCompat.h, 6);
        iconCompat.j = bVar.a(iconCompat.j, 7);
        iconCompat.c();
        return iconCompat;
    }

    public static void write(IconCompat iconCompat, androidx.versionedparcelable.b bVar) {
        bVar.a(true, true);
        iconCompat.a(bVar.c());
        bVar.b(iconCompat.f210b, 1);
        bVar.b(iconCompat.f212d, 2);
        bVar.b(iconCompat.f213e, 3);
        bVar.b(iconCompat.f214f, 4);
        bVar.b(iconCompat.g, 5);
        bVar.b(iconCompat.h, 6);
        bVar.b(iconCompat.j, 7);
    }
}
