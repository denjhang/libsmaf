package com.google.android.gms.common.server.response;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.SparseArray;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.common.internal.safeparcel.a;
import com.google.android.gms.common.server.response.FastJsonResponse;
import com.google.android.gms.common.util.l;
import com.google.android.gms.common.util.m;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class SafeParcelResponse extends FastSafeParcelableJsonResponse {
    public static final Parcelable.Creator<SafeParcelResponse> CREATOR = new e();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1319a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Parcel f1320b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int f1321c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final zak f1322d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final String f1323e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f1324f;
    private int g;

    SafeParcelResponse(int i, Parcel parcel, zak zakVar) {
        this.f1319a = i;
        r.a(parcel);
        this.f1320b = parcel;
        this.f1321c = 2;
        this.f1322d = zakVar;
        zak zakVar2 = this.f1322d;
        this.f1323e = zakVar2 == null ? null : zakVar2.b();
        this.f1324f = 2;
    }

    private static void a(StringBuilder sb, int i, Object obj) {
        switch (i) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                sb.append(obj);
                return;
            case 7:
                sb.append("\"");
                sb.append(l.a(obj.toString()));
                sb.append("\"");
                return;
            case 8:
                sb.append("\"");
                sb.append(com.google.android.gms.common.util.c.a((byte[]) obj));
                sb.append("\"");
                return;
            case 9:
                sb.append("\"");
                sb.append(com.google.android.gms.common.util.c.b((byte[]) obj));
                sb.append("\"");
                return;
            case 10:
                m.a(sb, (HashMap) obj);
                return;
            case 11:
                throw new IllegalArgumentException("Method does not accept concrete type.");
            default:
                StringBuilder sb2 = new StringBuilder(26);
                sb2.append("Unknown type = ");
                sb2.append(i);
                throw new IllegalArgumentException(sb2.toString());
        }
    }

    private final void a(StringBuilder sb, Map<String, FastJsonResponse.Field<?, ?>> map, Parcel parcel) {
        Object objC;
        String strA;
        String str;
        Object objValueOf;
        Object objA;
        SparseArray sparseArray = new SparseArray();
        for (Map.Entry<String, FastJsonResponse.Field<?, ?>> entry : map.entrySet()) {
            sparseArray.put(entry.getValue().a(), entry);
        }
        sb.append('{');
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        boolean z = false;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            Map.Entry entry2 = (Map.Entry) sparseArray.get(com.google.android.gms.common.internal.safeparcel.a.a(iA));
            if (entry2 != null) {
                if (z) {
                    sb.append(",");
                }
                String str2 = (String) entry2.getKey();
                FastJsonResponse.Field<?, ?> field = (FastJsonResponse.Field) entry2.getValue();
                sb.append("\"");
                sb.append(str2);
                sb.append("\":");
                if (field.b()) {
                    int i = field.f1316d;
                    switch (i) {
                        case 0:
                            objValueOf = Integer.valueOf(com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA));
                            objA = FastJsonResponse.a(field, objValueOf);
                            b(sb, field, objA);
                            break;
                        case 1:
                            objValueOf = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA);
                            objA = FastJsonResponse.a(field, objValueOf);
                            b(sb, field, objA);
                            break;
                        case 2:
                            objValueOf = Long.valueOf(com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA));
                            objA = FastJsonResponse.a(field, objValueOf);
                            b(sb, field, objA);
                            break;
                        case 3:
                            objValueOf = Float.valueOf(com.google.android.gms.common.internal.safeparcel.a.v(parcel, iA));
                            objA = FastJsonResponse.a(field, objValueOf);
                            b(sb, field, objA);
                            break;
                        case 4:
                            objValueOf = Double.valueOf(com.google.android.gms.common.internal.safeparcel.a.t(parcel, iA));
                            objA = FastJsonResponse.a(field, objValueOf);
                            b(sb, field, objA);
                            break;
                        case 5:
                            objValueOf = com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA);
                            objA = FastJsonResponse.a(field, objValueOf);
                            b(sb, field, objA);
                            break;
                        case 6:
                            objValueOf = Boolean.valueOf(com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA));
                            objA = FastJsonResponse.a(field, objValueOf);
                            b(sb, field, objA);
                            break;
                        case 7:
                            objValueOf = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                            objA = FastJsonResponse.a(field, objValueOf);
                            b(sb, field, objA);
                            break;
                        case 8:
                        case 9:
                            objA = FastJsonResponse.a(field, com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA));
                            b(sb, field, objA);
                            break;
                        case 10:
                            Bundle bundleF = com.google.android.gms.common.internal.safeparcel.a.f(parcel, iA);
                            HashMap map2 = new HashMap();
                            for (String str3 : bundleF.keySet()) {
                                map2.put(str3, bundleF.getString(str3));
                            }
                            objA = FastJsonResponse.a(field, map2);
                            b(sb, field, objA);
                            break;
                        case 11:
                            throw new IllegalArgumentException("Method does not accept concrete type.");
                        default:
                            StringBuilder sb2 = new StringBuilder(36);
                            sb2.append("Unknown field out type = ");
                            sb2.append(i);
                            throw new IllegalArgumentException(sb2.toString());
                    }
                } else {
                    if (field.f1317e) {
                        sb.append("[");
                        switch (field.f1316d) {
                            case 0:
                                com.google.android.gms.common.util.b.a(sb, com.google.android.gms.common.internal.safeparcel.a.j(parcel, iA));
                                break;
                            case 1:
                                com.google.android.gms.common.util.b.a(sb, com.google.android.gms.common.internal.safeparcel.a.d(parcel, iA));
                                break;
                            case 2:
                                com.google.android.gms.common.util.b.a(sb, com.google.android.gms.common.internal.safeparcel.a.k(parcel, iA));
                                break;
                            case 3:
                                com.google.android.gms.common.util.b.a(sb, com.google.android.gms.common.internal.safeparcel.a.i(parcel, iA));
                                break;
                            case 4:
                                com.google.android.gms.common.util.b.a(sb, com.google.android.gms.common.internal.safeparcel.a.h(parcel, iA));
                                break;
                            case 5:
                                com.google.android.gms.common.util.b.a(sb, com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA));
                                break;
                            case 6:
                                com.google.android.gms.common.util.b.a(sb, com.google.android.gms.common.internal.safeparcel.a.e(parcel, iA));
                                break;
                            case 7:
                                com.google.android.gms.common.util.b.a(sb, com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA));
                                break;
                            case 8:
                            case 9:
                            case 10:
                                throw new UnsupportedOperationException("List of type BASE64, BASE64_URL_SAFE, or STRING_MAP is not supported");
                            case 11:
                                Parcel[] parcelArrM = com.google.android.gms.common.internal.safeparcel.a.m(parcel, iA);
                                int length = parcelArrM.length;
                                for (int i2 = 0; i2 < length; i2++) {
                                    if (i2 > 0) {
                                        sb.append(",");
                                    }
                                    parcelArrM[i2].setDataPosition(0);
                                    a(sb, field.c(), parcelArrM[i2]);
                                }
                                break;
                            default:
                                throw new IllegalStateException("Unknown field type out.");
                        }
                        str = "]";
                    } else {
                        switch (field.f1316d) {
                            case 0:
                                sb.append(com.google.android.gms.common.internal.safeparcel.a.y(parcel, iA));
                                break;
                            case 1:
                                objC = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA);
                                sb.append(objC);
                                break;
                            case 2:
                                sb.append(com.google.android.gms.common.internal.safeparcel.a.A(parcel, iA));
                                break;
                            case 3:
                                sb.append(com.google.android.gms.common.internal.safeparcel.a.v(parcel, iA));
                                break;
                            case 4:
                                sb.append(com.google.android.gms.common.internal.safeparcel.a.t(parcel, iA));
                                break;
                            case 5:
                                objC = com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA);
                                sb.append(objC);
                                break;
                            case 6:
                                sb.append(com.google.android.gms.common.internal.safeparcel.a.r(parcel, iA));
                                break;
                            case 7:
                                String strN = com.google.android.gms.common.internal.safeparcel.a.n(parcel, iA);
                                sb.append("\"");
                                strA = l.a(strN);
                                sb.append(strA);
                                sb.append("\"");
                                break;
                            case 8:
                                byte[] bArrG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                                sb.append("\"");
                                strA = com.google.android.gms.common.util.c.a(bArrG);
                                sb.append(strA);
                                sb.append("\"");
                                break;
                            case 9:
                                byte[] bArrG2 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                                sb.append("\"");
                                strA = com.google.android.gms.common.util.c.b(bArrG2);
                                sb.append(strA);
                                sb.append("\"");
                                break;
                            case 10:
                                Bundle bundleF2 = com.google.android.gms.common.internal.safeparcel.a.f(parcel, iA);
                                Set<String> setKeySet = bundleF2.keySet();
                                setKeySet.size();
                                sb.append("{");
                                boolean z2 = true;
                                for (String str4 : setKeySet) {
                                    if (!z2) {
                                        sb.append(",");
                                    }
                                    sb.append("\"");
                                    sb.append(str4);
                                    sb.append("\"");
                                    sb.append(":");
                                    sb.append("\"");
                                    sb.append(l.a(bundleF2.getString(str4)));
                                    sb.append("\"");
                                    z2 = false;
                                }
                                str = "}";
                                break;
                            case 11:
                                Parcel parcelL = com.google.android.gms.common.internal.safeparcel.a.l(parcel, iA);
                                parcelL.setDataPosition(0);
                                a(sb, field.c(), parcelL);
                                break;
                            default:
                                throw new IllegalStateException("Unknown field type out");
                        }
                    }
                    sb.append(str);
                }
                z = true;
            }
        }
        if (parcel.dataPosition() == iB) {
            sb.append('}');
            return;
        }
        StringBuilder sb3 = new StringBuilder(37);
        sb3.append("Overread allowed size end=");
        sb3.append(iB);
        throw new a.C0028a(sb3.toString(), parcel);
    }

    private final Parcel b() {
        int i = this.f1324f;
        if (i != 0) {
            if (i == 1) {
            }
            return this.f1320b;
        }
        this.g = com.google.android.gms.common.internal.safeparcel.b.a(this.f1320b);
        com.google.android.gms.common.internal.safeparcel.b.a(this.f1320b, this.g);
        this.f1324f = 2;
        return this.f1320b;
    }

    private final void b(StringBuilder sb, FastJsonResponse.Field<?, ?> field, Object obj) {
        if (!field.f1315c) {
            a(sb, field.f1314b, obj);
            return;
        }
        ArrayList arrayList = (ArrayList) obj;
        sb.append("[");
        int size = arrayList.size();
        for (int i = 0; i < size; i++) {
            if (i != 0) {
                sb.append(",");
            }
            a(sb, field.f1314b, arrayList.get(i));
        }
        sb.append("]");
    }

    @Override // com.google.android.gms.common.server.response.FastSafeParcelableJsonResponse, com.google.android.gms.common.server.response.FastJsonResponse
    public Object a(String str) {
        throw new UnsupportedOperationException("Converting to JSON does not require this method.");
    }

    @Override // com.google.android.gms.common.server.response.FastJsonResponse
    public Map<String, FastJsonResponse.Field<?, ?>> a() {
        zak zakVar = this.f1322d;
        if (zakVar == null) {
            return null;
        }
        return zakVar.a(this.f1323e);
    }

    @Override // com.google.android.gms.common.server.response.FastSafeParcelableJsonResponse, com.google.android.gms.common.server.response.FastJsonResponse
    public boolean b(String str) {
        throw new UnsupportedOperationException("Converting to JSON does not require this method.");
    }

    @Override // com.google.android.gms.common.server.response.FastJsonResponse
    public String toString() {
        r.a(this.f1322d, "Cannot convert to JSON on client side.");
        Parcel parcelB = b();
        parcelB.setDataPosition(0);
        StringBuilder sb = new StringBuilder(100);
        a(sb, this.f1322d.a(this.f1323e), parcelB);
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        zak zakVar;
        int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1319a);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, b(), false);
        int i2 = this.f1321c;
        if (i2 == 0) {
            zakVar = null;
        } else {
            if (i2 != 1 && i2 != 2) {
                StringBuilder sb = new StringBuilder(34);
                sb.append("Invalid creation type: ");
                sb.append(i2);
                throw new IllegalStateException(sb.toString());
            }
            zakVar = this.f1322d;
        }
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, (Parcelable) zakVar, i, false);
        com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
    }
}
