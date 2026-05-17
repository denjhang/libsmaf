package com.google.android.gms.common.util;

import java.util.regex.Pattern;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Pattern f1368a = Pattern.compile("\\$\\{(.*?)\\}");

    public static boolean a(String str) {
        return str == null || str.trim().isEmpty();
    }
}
