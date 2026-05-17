package com.google.android.gms.internal.measurement;

import java.io.Serializable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class Ha<T> implements Serializable {
    Ha() {
    }

    public static <T> Ha<T> a(T t) {
        Ga.a(t);
        return new Ka(t);
    }

    public static <T> Ha<T> c() {
        return Fa.f1452a;
    }

    public abstract boolean a();

    public abstract T b();
}
