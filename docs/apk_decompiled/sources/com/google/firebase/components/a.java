package com.google.firebase.components;

import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class a implements f {
    a() {
    }

    @Override // com.google.firebase.components.f
    public <T> T a(Class<T> cls) {
        c.a.b.b.a<T> aVarB = b(cls);
        if (aVarB == null) {
            return null;
        }
        return aVarB.get();
    }

    @Override // com.google.firebase.components.f
    public <T> Set<T> d(Class<T> cls) {
        return c(cls).get();
    }
}
