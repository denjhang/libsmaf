package com.google.android.gms.dynamite;

import android.content.Context;
import com.google.android.gms.dynamite.DynamiteModule;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class f implements DynamiteModule.b {
    f() {
    }

    @Override // com.google.android.gms.dynamite.DynamiteModule.b
    public final DynamiteModule.b.C0029b a(Context context, String str, DynamiteModule.b.a aVar) {
        int i;
        DynamiteModule.b.C0029b c0029b = new DynamiteModule.b.C0029b();
        c0029b.f1384a = aVar.a(context, str);
        c0029b.f1385b = aVar.a(context, str, true);
        if (c0029b.f1384a == 0 && c0029b.f1385b == 0) {
            i = 0;
        } else {
            if (c0029b.f1385b >= c0029b.f1384a) {
                c0029b.f1386c = 1;
                return c0029b;
            }
            i = -1;
        }
        c0029b.f1386c = i;
        return c0029b;
    }
}
