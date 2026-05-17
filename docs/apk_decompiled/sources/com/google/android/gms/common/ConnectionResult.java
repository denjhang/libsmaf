package com.google.android.gms.common;

import android.app.PendingIntent;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.C0079q;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import org.apache.http.conn.params.ConnManagerParams;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.LangUtils;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class ConnectionResult extends AbstractSafeParcelable {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f1003b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int f1004c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final PendingIntent f1005d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final String f1006e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final ConnectionResult f1002a = new ConnectionResult(0);
    public static final Parcelable.Creator<ConnectionResult> CREATOR = new k();

    public ConnectionResult(int i) {
        this(i, null, null);
    }

    ConnectionResult(int i, int i2, PendingIntent pendingIntent, String str) {
        this.f1003b = i;
        this.f1004c = i2;
        this.f1005d = pendingIntent;
        this.f1006e = str;
    }

    public ConnectionResult(int i, PendingIntent pendingIntent) {
        this(i, pendingIntent, null);
    }

    public ConnectionResult(int i, PendingIntent pendingIntent, String str) {
        this(1, i, pendingIntent, str);
    }

    static String a(int i) {
        if (i == 99) {
            return "UNFINISHED";
        }
        if (i == 1500) {
            return "DRIVE_EXTERNAL_STORAGE_REQUIRED";
        }
        switch (i) {
            case -1:
                return "UNKNOWN";
            case 0:
                return "SUCCESS";
            case 1:
                return "SERVICE_MISSING";
            case 2:
                return "SERVICE_VERSION_UPDATE_REQUIRED";
            case 3:
                return "SERVICE_DISABLED";
            case 4:
                return "SIGN_IN_REQUIRED";
            case 5:
                return "INVALID_ACCOUNT";
            case 6:
                return "RESOLUTION_REQUIRED";
            case 7:
                return "NETWORK_ERROR";
            case 8:
                return "INTERNAL_ERROR";
            case 9:
                return "SERVICE_INVALID";
            case 10:
                return "DEVELOPER_ERROR";
            case 11:
                return "LICENSE_CHECK_FAILED";
            default:
                switch (i) {
                    case HTTP.CR /* 13 */:
                        return "CANCELED";
                    case 14:
                        return "TIMEOUT";
                    case 15:
                        return "INTERRUPTED";
                    case 16:
                        return "API_UNAVAILABLE";
                    case LangUtils.HASH_SEED /* 17 */:
                        return "SIGN_IN_FAILED";
                    case 18:
                        return "SERVICE_UPDATING";
                    case 19:
                        return "SERVICE_MISSING_PERMISSION";
                    case ConnManagerParams.DEFAULT_MAX_TOTAL_CONNECTIONS /* 20 */:
                        return "RESTRICTED_PROFILE";
                    case 21:
                        return "API_VERSION_UPDATE_REQUIRED";
                    default:
                        StringBuilder sb = new StringBuilder(31);
                        sb.append("UNKNOWN_ERROR_CODE(");
                        sb.append(i);
                        sb.append(")");
                        return sb.toString();
                }
        }
    }

    public final int a() {
        return this.f1004c;
    }

    public final String b() {
        return this.f1006e;
    }

    public final PendingIntent c() {
        return this.f1005d;
    }

    public final boolean d() {
        return (this.f1004c == 0 || this.f1005d == null) ? false : true;
    }

    public final boolean e() {
        return this.f1004c == 0;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof ConnectionResult)) {
            return false;
        }
        ConnectionResult connectionResult = (ConnectionResult) obj;
        return this.f1004c == connectionResult.f1004c && C0079q.a(this.f1005d, connectionResult.f1005d) && C0079q.a(this.f1006e, connectionResult.f1006e);
    }

    public final int hashCode() {
        return C0079q.a(Integer.valueOf(this.f1004c), this.f1005d, this.f1006e);
    }

    public final String toString() {
        C0079q.a aVarA = C0079q.a(this);
        aVarA.a("statusCode", a(this.f1004c));
        aVarA.a("resolution", this.f1005d);
        aVarA.a("message", this.f1006e);
        return aVarA.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1003b);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, a());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable) c(), i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, b(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
