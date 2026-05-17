package com.google.android.gms.internal.measurement;

import android.net.Uri;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.qa, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0194qa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Map<String, Map<String, String>> f1790a;

    C0194qa(Map<String, Map<String, String>> map) {
        this.f1790a = map;
    }

    static C0194qa a() {
        return new C0194qa(null);
    }

    final String a(Uri uri, String str, String str2, String str3) {
        if (this.f1790a == null) {
            return null;
        }
        if (uri != null) {
            str = uri.toString();
        } else if (str == null) {
            return null;
        }
        Map<String, String> map = this.f1790a.get(str);
        if (map == null) {
            return null;
        }
        if (str2 != null) {
            String strValueOf = String.valueOf(str2);
            String strValueOf2 = String.valueOf(str3);
            str3 = strValueOf2.length() != 0 ? strValueOf.concat(strValueOf2) : new String(strValueOf);
        }
        return map.get(str3);
    }
}
