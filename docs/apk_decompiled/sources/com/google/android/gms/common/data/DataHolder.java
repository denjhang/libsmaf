package com.google.android.gms.common.data;

import android.database.CursorWindow;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.Log;
import com.google.android.gms.common.annotation.KeepName;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import java.io.Closeable;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@KeepName
public final class DataHolder extends AbstractSafeParcelable implements Closeable {
    public static final Parcelable.Creator<DataHolder> CREATOR = new c();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final a f1140a = new b(new String[0], null);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f1141b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String[] f1142c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Bundle f1143d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final CursorWindow[] f1144e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final int f1145f;
    private final Bundle g;
    private int[] h;
    private int i;
    private boolean j = false;
    private boolean k = true;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String[] f1146a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final ArrayList<HashMap<String, Object>> f1147b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final String f1148c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final HashMap<Object, Integer> f1149d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private boolean f1150e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private String f1151f;

        private a(String[] strArr, String str) {
            r.a(strArr);
            this.f1146a = strArr;
            this.f1147b = new ArrayList<>();
            this.f1148c = str;
            this.f1149d = new HashMap<>();
            this.f1150e = false;
            this.f1151f = null;
        }

        /* synthetic */ a(String[] strArr, String str, b bVar) {
            this(strArr, null);
        }
    }

    DataHolder(int i, String[] strArr, CursorWindow[] cursorWindowArr, int i2, Bundle bundle) {
        this.f1141b = i;
        this.f1142c = strArr;
        this.f1144e = cursorWindowArr;
        this.f1145f = i2;
        this.g = bundle;
    }

    public final Bundle a() {
        return this.g;
    }

    public final int b() {
        return this.f1145f;
    }

    public final void c() {
        this.f1143d = new Bundle();
        int i = 0;
        int i2 = 0;
        while (true) {
            String[] strArr = this.f1142c;
            if (i2 >= strArr.length) {
                break;
            }
            this.f1143d.putInt(strArr[i2], i2);
            i2++;
        }
        this.h = new int[this.f1144e.length];
        int numRows = 0;
        while (true) {
            CursorWindow[] cursorWindowArr = this.f1144e;
            if (i >= cursorWindowArr.length) {
                this.i = numRows;
                return;
            }
            this.h[i] = numRows;
            numRows += this.f1144e[i].getNumRows() - (numRows - cursorWindowArr[i].getStartPosition());
            i++;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        synchronized (this) {
            if (!this.j) {
                this.j = true;
                for (int i = 0; i < this.f1144e.length; i++) {
                    this.f1144e[i].close();
                }
            }
        }
    }

    protected final void finalize() throws Throwable {
        try {
            if (this.k && this.f1144e.length > 0 && !isClosed()) {
                close();
                String string = toString();
                StringBuilder sb = new StringBuilder(String.valueOf(string).length() + 178);
                sb.append("Internal data leak within a DataBuffer object detected!  Be sure to explicitly call release() on all DataBuffer extending objects when you are done with them. (internal object: ");
                sb.append(string);
                sb.append(")");
                Log.e("DataBuffer", sb.toString());
            }
        } finally {
            super.finalize();
        }
    }

    public final boolean isClosed() {
        boolean z;
        synchronized (this) {
            z = this.j;
        }
        return z;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1142c, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, (Parcelable[]) this.f1144e, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, b());
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, a(), false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1000, this.f1141b);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
        if ((i & 1) != 0) {
            close();
        }
    }
}
