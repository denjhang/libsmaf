package com.google.android.gms.common;

import android.app.Dialog;
import android.content.DialogInterface;
import android.os.Bundle;
import androidx.fragment.app.AbstractC0048l;
import androidx.fragment.app.DialogInterfaceOnCancelListenerC0039c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class j extends DialogInterfaceOnCancelListenerC0039c {
    private Dialog ha = null;
    private DialogInterface.OnCancelListener ia = null;

    public static j a(Dialog dialog, DialogInterface.OnCancelListener onCancelListener) {
        j jVar = new j();
        com.google.android.gms.common.internal.r.a(dialog, "Cannot display null dialog");
        Dialog dialog2 = dialog;
        dialog2.setOnCancelListener(null);
        dialog2.setOnDismissListener(null);
        jVar.ha = dialog2;
        if (onCancelListener != null) {
            jVar.ia = onCancelListener;
        }
        return jVar;
    }

    @Override // androidx.fragment.app.DialogInterfaceOnCancelListenerC0039c
    public void a(AbstractC0048l abstractC0048l, String str) {
        super.a(abstractC0048l, str);
    }

    @Override // androidx.fragment.app.DialogInterfaceOnCancelListenerC0039c
    public Dialog n(Bundle bundle) {
        if (this.ha == null) {
            h(false);
        }
        return this.ha;
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public void onCancel(DialogInterface dialogInterface) {
        DialogInterface.OnCancelListener onCancelListener = this.ia;
        if (onCancelListener != null) {
            onCancelListener.onCancel(dialogInterface);
        }
    }
}
