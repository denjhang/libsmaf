package com.google.android.gms.common.internal;

import android.accounts.Account;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.k, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface InterfaceC0073k extends IInterface {

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.k$a */
    public static abstract class a extends c.a.a.a.d.c.b implements InterfaceC0073k {

        /* JADX INFO: renamed from: com.google.android.gms.common.internal.k$a$a, reason: collision with other inner class name */
        public static class C0027a extends c.a.a.a.d.c.a implements InterfaceC0073k {
            C0027a(IBinder iBinder) {
                super(iBinder, "com.google.android.gms.common.internal.IAccountAccessor");
            }

            @Override // com.google.android.gms.common.internal.InterfaceC0073k
            public final Account a() {
                Parcel parcelA = a(2, h());
                Account account = (Account) c.a.a.a.d.c.c.a(parcelA, Account.CREATOR);
                parcelA.recycle();
                return account;
            }
        }

        public static InterfaceC0073k a(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.common.internal.IAccountAccessor");
            return iInterfaceQueryLocalInterface instanceof InterfaceC0073k ? (InterfaceC0073k) iInterfaceQueryLocalInterface : new C0027a(iBinder);
        }
    }

    Account a();
}
