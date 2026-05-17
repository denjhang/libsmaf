package com.google.firebase.components;

import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class r extends s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final List<e<?>> f2583a;

    public r(List<e<?>> list) {
        super("Dependency cycle detected: " + Arrays.toString(list.toArray()));
        this.f2583a = list;
    }
}
