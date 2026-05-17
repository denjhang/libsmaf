package com.google.android.gms.common.images;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import c.a.a.a.d.b.d;
import com.google.android.gms.common.internal.C0064b;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected int f1182a;

    final void a(Context context, Bitmap bitmap, boolean z) {
        C0064b.a(bitmap);
        a(new BitmapDrawable(context.getResources(), bitmap), z, false, true);
    }

    final void a(Context context, d dVar, boolean z) {
        int i = this.f1182a;
        a(i != 0 ? context.getResources().getDrawable(i) : null, z, false, false);
    }

    protected abstract void a(Drawable drawable, boolean z, boolean z2, boolean z3);
}
