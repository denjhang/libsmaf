package com.google.android.gms.common.internal;

import android.content.Context;
import android.os.IBinder;
import android.os.IInterface;
import android.view.View;
import c.a.a.a.c.c;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.s, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0080s extends c.a.a.a.c.c<InterfaceC0078p> {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final C0080s f1279c = new C0080s();

    private C0080s() {
        super("com.google.android.gms.common.ui.SignInButtonCreatorImpl");
    }

    public static View a(Context context, int i, int i2) {
        return f1279c.b(context, i, i2);
    }

    private final View b(Context context, int i, int i2) throws c.a {
        try {
            SignInButtonConfig signInButtonConfig = new SignInButtonConfig(i, i2, null);
            return (View) c.a.a.a.c.b.a(a(context).a(c.a.a.a.c.b.a(context), signInButtonConfig));
        } catch (Exception e2) {
            StringBuilder sb = new StringBuilder(64);
            sb.append("Could not get button with size ");
            sb.append(i);
            sb.append(" and color ");
            sb.append(i2);
            throw new c.a(sb.toString(), e2);
        }
    }

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // c.a.a.a.c.c
    public final InterfaceC0078p a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.common.internal.ISignInButtonCreator");
        return iInterfaceQueryLocalInterface instanceof InterfaceC0078p ? (InterfaceC0078p) iInterfaceQueryLocalInterface : new A(iBinder);
    }
}
