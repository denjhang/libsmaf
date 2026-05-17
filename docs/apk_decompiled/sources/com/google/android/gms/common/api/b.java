package com.google.android.gms.common.api;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b extends Exception {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final Status f1035a;

    public b(Status status) {
        int iA = status.a();
        String strB = status.b() != null ? status.b() : "";
        StringBuilder sb = new StringBuilder(String.valueOf(strB).length() + 13);
        sb.append(iA);
        sb.append(": ");
        sb.append(strB);
        super(sb.toString());
        this.f1035a = status;
    }
}
