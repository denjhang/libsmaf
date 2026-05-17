package com.google.android.gms.common.server.response;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.C0079q;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.server.converter.zaa;
import com.google.android.gms.common.util.l;
import com.google.android.gms.common.util.m;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class FastJsonResponse {

    public static class Field<I, O> extends AbstractSafeParcelable {
        public static final com.google.android.gms.common.server.response.a CREATOR = new com.google.android.gms.common.server.response.a();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f1313a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        protected final int f1314b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        protected final boolean f1315c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        protected final int f1316d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        protected final boolean f1317e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        protected final String f1318f;
        protected final int g;
        protected final Class<? extends FastJsonResponse> h;
        private final String i;
        private zak j;
        private a<I, O> k;

        Field(int i, int i2, boolean z, int i3, boolean z2, String str, int i4, String str2, zaa zaaVar) {
            this.f1313a = i;
            this.f1314b = i2;
            this.f1315c = z;
            this.f1316d = i3;
            this.f1317e = z2;
            this.f1318f = str;
            this.g = i4;
            if (str2 == null) {
                this.h = null;
                this.i = null;
            } else {
                this.h = SafeParcelResponse.class;
                this.i = str2;
            }
            if (zaaVar == null) {
                this.k = null;
            } else {
                this.k = (a<I, O>) zaaVar.a();
            }
        }

        private final String d() {
            String str = this.i;
            if (str == null) {
                return null;
            }
            return str;
        }

        private final zaa e() {
            a<I, O> aVar = this.k;
            if (aVar == null) {
                return null;
            }
            return zaa.a(aVar);
        }

        public int a() {
            return this.g;
        }

        public final I a(O o) {
            return this.k.a(o);
        }

        public final void a(zak zakVar) {
            this.j = zakVar;
        }

        public final boolean b() {
            return this.k != null;
        }

        public final Map<String, Field<?, ?>> c() {
            r.a(this.i);
            r.a(this.j);
            return this.j.a(this.i);
        }

        public String toString() {
            C0079q.a aVarA = C0079q.a(this);
            aVarA.a("versionCode", Integer.valueOf(this.f1313a));
            aVarA.a("typeIn", Integer.valueOf(this.f1314b));
            aVarA.a("typeInArray", Boolean.valueOf(this.f1315c));
            aVarA.a("typeOut", Integer.valueOf(this.f1316d));
            aVarA.a("typeOutArray", Boolean.valueOf(this.f1317e));
            aVarA.a("outputFieldName", this.f1318f);
            aVarA.a("safeParcelFieldId", Integer.valueOf(this.g));
            aVarA.a("concreteTypeName", d());
            Class<? extends FastJsonResponse> cls = this.h;
            if (cls != null) {
                aVarA.a("concreteType.class", cls.getCanonicalName());
            }
            a<I, O> aVar = this.k;
            if (aVar != null) {
                aVarA.a("converterName", aVar.getClass().getCanonicalName());
            }
            return aVarA.toString();
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            int iA = com.google.android.gms.common.internal.safeparcel.b.a(parcel);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 1, this.f1313a);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 2, this.f1314b);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 3, this.f1315c);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 4, this.f1316d);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 5, this.f1317e);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 6, this.f1318f, false);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 7, a());
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 8, d(), false);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, 9, (Parcelable) e(), i, false);
            com.google.android.gms.common.internal.safeparcel.b.a(parcel, iA);
        }
    }

    public interface a<I, O> {
        I a(O o);
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected static <O, I> I a(Field<I, O> field, Object obj) {
        return ((Field) field).k != null ? field.a(obj) : obj;
    }

    private static void a(StringBuilder sb, Field field, Object obj) {
        String string;
        int i = field.f1314b;
        if (i == 11) {
            string = field.h.cast(obj).toString();
        } else if (i != 7) {
            sb.append(obj);
            return;
        } else {
            string = "\"";
            sb.append("\"");
            sb.append(l.a((String) obj));
        }
        sb.append(string);
    }

    protected Object a(Field field) {
        String str = field.f1318f;
        if (field.h == null) {
            return a(str);
        }
        r.a(a(str) == null, "Concrete field shouldn't be value object: %s", field.f1318f);
        boolean z = field.f1317e;
        try {
            char upperCase = Character.toUpperCase(str.charAt(0));
            String strSubstring = str.substring(1);
            StringBuilder sb = new StringBuilder(String.valueOf(strSubstring).length() + 4);
            sb.append("get");
            sb.append(upperCase);
            sb.append(strSubstring);
            return getClass().getMethod(sb.toString(), new Class[0]).invoke(this, new Object[0]);
        } catch (Exception e2) {
            throw new RuntimeException(e2);
        }
    }

    protected abstract Object a(String str);

    public abstract Map<String, Field<?, ?>> a();

    protected boolean b(Field field) {
        if (field.f1316d != 11) {
            return b(field.f1318f);
        }
        if (field.f1317e) {
            String str = field.f1318f;
            throw new UnsupportedOperationException("Concrete type arrays not supported");
        }
        String str2 = field.f1318f;
        throw new UnsupportedOperationException("Concrete types not supported");
    }

    protected abstract boolean b(String str);

    public String toString() {
        String str;
        String strA;
        Map<String, Field<?, ?>> mapA = a();
        StringBuilder sb = new StringBuilder(100);
        for (String str2 : mapA.keySet()) {
            Field<?, ?> field = mapA.get(str2);
            if (b(field)) {
                Object objA = a(field, a(field));
                if (sb.length() == 0) {
                    sb.append("{");
                } else {
                    sb.append(",");
                }
                sb.append("\"");
                sb.append(str2);
                sb.append("\":");
                if (objA != null) {
                    switch (field.f1316d) {
                        case 8:
                            sb.append("\"");
                            strA = com.google.android.gms.common.util.c.a((byte[]) objA);
                            sb.append(strA);
                            sb.append("\"");
                            break;
                        case 9:
                            sb.append("\"");
                            strA = com.google.android.gms.common.util.c.b((byte[]) objA);
                            sb.append(strA);
                            sb.append("\"");
                            break;
                        case 10:
                            m.a(sb, (HashMap) objA);
                            break;
                        default:
                            if (field.f1315c) {
                                ArrayList arrayList = (ArrayList) objA;
                                sb.append("[");
                                int size = arrayList.size();
                                for (int i = 0; i < size; i++) {
                                    if (i > 0) {
                                        sb.append(",");
                                    }
                                    Object obj = arrayList.get(i);
                                    if (obj != null) {
                                        a(sb, field, obj);
                                    }
                                }
                                str = "]";
                            } else {
                                a(sb, field, objA);
                            }
                            break;
                    }
                } else {
                    str = "null";
                }
                sb.append(str);
            }
        }
        sb.append(sb.length() > 0 ? "}" : "{}");
        return sb.toString();
    }
}
