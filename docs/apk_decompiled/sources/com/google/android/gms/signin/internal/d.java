package com.google.android.gms.signin.internal;

import android.os.IInterface;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.api.Status;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface d extends IInterface {
    void a(ConnectionResult connectionResult, zaa zaaVar);

    void a(Status status);

    void a(Status status, GoogleSignInAccount googleSignInAccount);

    void a(zaj zajVar);

    void b(Status status);
}
