package com.google.android.gms.dynamite;

import android.content.Context;
import com.google.android.gms.dynamite.DynamiteModule;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class b implements DynamiteModule.b {
    b() {
    }

    @Override // com.google.android.gms.dynamite.DynamiteModule.b
    public final DynamiteModule.b.C0029b a(Context context, String str, DynamiteModule.b.a aVar) {
        DynamiteModule.b.C0029b c0029b = new DynamiteModule.b.C0029b();
        c0029b.f1385b = aVar.a(context, str, true);
        if (c0029b.f1385b != 0) {
            c0029b.f1386c = 1;
        } else {
            c0029b.f1384a = aVar.a(context, str);
            if (c0029b.f1384a != 0) {
                c0029b.f1386c = -1;
            }
        }
        return c0029b;
    }
}
