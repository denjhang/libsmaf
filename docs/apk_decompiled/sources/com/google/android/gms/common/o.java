package com.google.android.gms.common;

import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.common.internal.L;
import com.google.android.gms.common.internal.M;
import java.io.UnsupportedEncodingException;
import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class o extends M {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f1296a;

    protected o(byte[] bArr) {
        com.google.android.gms.common.internal.r.a(bArr.length == 25);
        this.f1296a = Arrays.hashCode(bArr);
    }

    protected static byte[] b(String str) {
        try {
            return str.getBytes("ISO-8859-1");
        } catch (UnsupportedEncodingException e2) {
            throw new AssertionError(e2);
        }
    }

    abstract byte[] e();

    public boolean equals(Object obj) {
        c.a.a.a.c.a aVarM;
        if (obj != null && (obj instanceof L)) {
            try {
                L l = (L) obj;
                if (l.x() == hashCode() && (aVarM = l.m()) != null) {
                    return Arrays.equals(e(), (byte[]) c.a.a.a.c.b.a(aVarM));
                }
                return false;
            } catch (RemoteException e2) {
                Log.e("GoogleCertificates", "Failed to get Google certificates from remote", e2);
            }
        }
        return false;
    }

    public int hashCode() {
        return this.f1296a;
    }

    @Override // com.google.android.gms.common.internal.L
    public final c.a.a.a.c.a m() {
        return c.a.a.a.c.b.a(e());
    }

    @Override // com.google.android.gms.common.internal.L
    public final int x() {
        return hashCode();
    }
}
