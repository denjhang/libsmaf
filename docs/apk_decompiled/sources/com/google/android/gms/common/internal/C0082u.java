package com.google.android.gms.common.internal;

import android.content.Context;
import android.content.res.Resources;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.u, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class C0082u {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Resources f1280a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f1281b;

    public C0082u(Context context) {
        r.a(context);
        this.f1280a = context.getResources();
        this.f1281b = this.f1280a.getResourcePackageName(com.google.android.gms.common.i.common_google_play_services_unknown_issue);
    }

    public String a(String str) {
        int identifier = this.f1280a.getIdentifier(str, "string", this.f1281b);
        if (identifier == 0) {
            return null;
        }
        return this.f1280a.getString(identifier);
    }
}
