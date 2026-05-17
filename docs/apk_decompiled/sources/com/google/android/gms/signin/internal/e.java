package com.google.android.gms.signin.internal;

import android.os.Parcel;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.api.Status;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class e extends c.a.a.a.d.b.b implements d {
    public e() {
        super("com.google.android.gms.signin.internal.ISignInCallbacks");
    }

    @Override // c.a.a.a.d.b.b
    protected boolean a(int i, Parcel parcel, Parcel parcel2, int i2) {
        if (i == 3) {
            a((ConnectionResult) c.a.a.a.d.b.c.a(parcel, ConnectionResult.CREATOR), (zaa) c.a.a.a.d.b.c.a(parcel, zaa.CREATOR));
        } else if (i == 4) {
            a((Status) c.a.a.a.d.b.c.a(parcel, Status.CREATOR));
        } else if (i == 6) {
            b((Status) c.a.a.a.d.b.c.a(parcel, Status.CREATOR));
        } else if (i == 7) {
            a((Status) c.a.a.a.d.b.c.a(parcel, Status.CREATOR), (GoogleSignInAccount) c.a.a.a.d.b.c.a(parcel, GoogleSignInAccount.CREATOR));
        } else {
            if (i != 8) {
                return false;
            }
            a((zaj) c.a.a.a.d.b.c.a(parcel, zaj.CREATOR));
        }
        parcel2.writeNoException();
        return true;
    }
}
