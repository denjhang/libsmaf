package com.google.android.gms.internal.measurement;

import java.io.Serializable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ma {
    public static <T> Ia<T> a(Ia<T> ia) {
        return ((ia instanceof Oa) || (ia instanceof La)) ? ia : ia instanceof Serializable ? new La(ia) : new Oa(ia);
    }

    public static <T> Ia<T> a(T t) {
        return new Na(t);
    }
}
