package com.google.android.gms.common.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ClientIdentity extends AbstractSafeParcelable {
    public static final Parcelable.Creator<ClientIdentity> CREATOR = new w();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1191a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f1192b;

    public ClientIdentity(int i, String str) {
        this.f1191a = i;
        this.f1192b = str;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj != null && (obj instanceof ClientIdentity)) {
            ClientIdentity clientIdentity = (ClientIdentity) obj;
            if (clientIdentity.f1191a == this.f1191a && C0079q.a(clientIdentity.f1192b, this.f1192b)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return this.f1191a;
    }

    public String toString() {
        int i = this.f1191a;
        String str = this.f1192b;
        StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 12);
        sb.append(i);
        sb.append(":");
        sb.append(str);
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1191a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1192b, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
