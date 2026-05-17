package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import com.google.android.gms.common.internal.safeparcel.a;
import com.google.android.gms.internal.measurement.C0230wb;
import com.google.android.gms.internal.measurement.InterfaceC0213tc;
import com.google.android.gms.internal.measurement.Q;
import com.google.android.gms.internal.measurement.T;
import com.google.android.gms.internal.measurement.V;
import com.google.android.gms.internal.measurement.Z;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.zip.GZIPInputStream;
import java.util.zip.GZIPOutputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class ie extends AbstractC0257ae {
    ie(ee eeVar) {
        super(eeVar);
    }

    static int a(V.a aVar, String str) {
        if (aVar == null) {
            return -1;
        }
        for (int i = 0; i < aVar.o(); i++) {
            if (str.equals(aVar.d(i).q())) {
                return i;
            }
        }
        return -1;
    }

    static com.google.android.gms.internal.measurement.T a(com.google.android.gms.internal.measurement.Q q, String str) {
        for (com.google.android.gms.internal.measurement.T t : q.o()) {
            if (t.o().equals(str)) {
                return t;
            }
        }
        return null;
    }

    static <Builder extends InterfaceC0213tc> Builder a(Builder builder, byte[] bArr) {
        C0230wb c0230wbB = C0230wb.b();
        if (c0230wbB != null) {
            builder.a(bArr, c0230wbB);
            return builder;
        }
        builder.a(bArr);
        return builder;
    }

    private static String a(boolean z, boolean z2, boolean z3) {
        StringBuilder sb = new StringBuilder();
        if (z) {
            sb.append("Dynamic ");
        }
        if (z2) {
            sb.append("Sequence ");
        }
        if (z3) {
            sb.append("Session-Scoped ");
        }
        return sb.toString();
    }

    static List<Long> a(BitSet bitSet) {
        int length = (bitSet.length() + 63) / 64;
        ArrayList arrayList = new ArrayList(length);
        for (int i = 0; i < length; i++) {
            long j = 0;
            for (int i2 = 0; i2 < 64; i2++) {
                int i3 = (i << 6) + i2;
                if (i3 < bitSet.length()) {
                    if (bitSet.get(i3)) {
                        j |= 1 << i2;
                    }
                }
            }
            arrayList.add(Long.valueOf(j));
        }
        return arrayList;
    }

    static void a(Q.a aVar, String str, Object obj) {
        List<com.google.android.gms.internal.measurement.T> listK = aVar.k();
        int i = 0;
        while (true) {
            if (i >= listK.size()) {
                i = -1;
                break;
            } else if (str.equals(listK.get(i).o())) {
                break;
            } else {
                i++;
            }
        }
        T.a aVarV = com.google.android.gms.internal.measurement.T.v();
        aVarV.a(str);
        if (obj instanceof Long) {
            aVarV.a(((Long) obj).longValue());
        } else if (obj instanceof String) {
            aVarV.b((String) obj);
        } else if (obj instanceof Double) {
            aVarV.a(((Double) obj).doubleValue());
        }
        if (i >= 0) {
            aVar.a(i, aVarV);
        } else {
            aVar.a(aVarV);
        }
    }

    private static void a(StringBuilder sb, int i) {
        for (int i2 = 0; i2 < i; i2++) {
            sb.append("  ");
        }
    }

    private final void a(StringBuilder sb, int i, com.google.android.gms.internal.measurement.B b2) {
        if (b2 == null) {
            return;
        }
        a(sb, i);
        sb.append("filter {\n");
        if (b2.s()) {
            a(sb, i, "complement", Boolean.valueOf(b2.t()));
        }
        a(sb, i, "param_name", j().b(b2.u()));
        int i2 = i + 1;
        com.google.android.gms.internal.measurement.E eP = b2.p();
        if (eP != null) {
            a(sb, i2);
            sb.append("string_filter");
            sb.append(" {\n");
            if (eP.o()) {
                a(sb, i2, "match_type", eP.p().name());
            }
            a(sb, i2, "expression", eP.r());
            if (eP.s()) {
                a(sb, i2, "case_sensitive", Boolean.valueOf(eP.t()));
            }
            if (eP.v() > 0) {
                a(sb, i2 + 1);
                sb.append("expression_list {\n");
                for (String str : eP.u()) {
                    a(sb, i2 + 2);
                    sb.append(str);
                    sb.append("\n");
                }
                sb.append("}\n");
            }
            a(sb, i2);
            sb.append("}\n");
        }
        a(sb, i2, "number_filter", b2.r());
        a(sb, i);
        sb.append("}\n");
    }

    private final void a(StringBuilder sb, int i, String str, com.google.android.gms.internal.measurement.C c2) {
        if (c2 == null) {
            return;
        }
        a(sb, i);
        sb.append(str);
        sb.append(" {\n");
        if (c2.o()) {
            a(sb, i, "comparison_type", c2.p().name());
        }
        if (c2.q()) {
            a(sb, i, "match_as_float", Boolean.valueOf(c2.r()));
        }
        a(sb, i, "comparison_value", c2.t());
        a(sb, i, "min_comparison_value", c2.v());
        a(sb, i, "max_comparison_value", c2.x());
        a(sb, i);
        sb.append("}\n");
    }

    private static void a(StringBuilder sb, int i, String str, com.google.android.gms.internal.measurement.X x, String str2) {
        if (x == null) {
            return;
        }
        a(sb, 3);
        sb.append(str);
        sb.append(" {\n");
        if (x.r() != 0) {
            a(sb, 4);
            sb.append("results: ");
            int i2 = 0;
            for (Long l : x.q()) {
                int i3 = i2 + 1;
                if (i2 != 0) {
                    sb.append(", ");
                }
                sb.append(l);
                i2 = i3;
            }
            sb.append('\n');
        }
        if (x.p() != 0) {
            a(sb, 4);
            sb.append("status: ");
            int i4 = 0;
            for (Long l2 : x.o()) {
                int i5 = i4 + 1;
                if (i4 != 0) {
                    sb.append(", ");
                }
                sb.append(l2);
                i4 = i5;
            }
            sb.append('\n');
        }
        if (x.t() != 0) {
            a(sb, 4);
            sb.append("dynamic_filter_timestamps: {");
            int i6 = 0;
            for (com.google.android.gms.internal.measurement.P p : x.s()) {
                int i7 = i6 + 1;
                if (i6 != 0) {
                    sb.append(", ");
                }
                sb.append(p.o() ? Integer.valueOf(p.p()) : null);
                sb.append(":");
                sb.append(p.q() ? Long.valueOf(p.r()) : null);
                i6 = i7;
            }
            sb.append("}\n");
        }
        if (x.v() != 0) {
            a(sb, 4);
            sb.append("sequence_filter_timestamps: {");
            int i8 = 0;
            for (com.google.android.gms.internal.measurement.Y y : x.u()) {
                int i9 = i8 + 1;
                if (i8 != 0) {
                    sb.append(", ");
                }
                sb.append(y.o() ? Integer.valueOf(y.p()) : null);
                sb.append(": [");
                Iterator<Long> it = y.q().iterator();
                int i10 = 0;
                while (it.hasNext()) {
                    long jLongValue = it.next().longValue();
                    int i11 = i10 + 1;
                    if (i10 != 0) {
                        sb.append(", ");
                    }
                    sb.append(jLongValue);
                    i10 = i11;
                }
                sb.append("]");
                i8 = i9;
            }
            sb.append("}\n");
        }
        a(sb, 3);
        sb.append("}\n");
    }

    private static void a(StringBuilder sb, int i, String str, Object obj) {
        if (obj == null) {
            return;
        }
        a(sb, i + 1);
        sb.append(str);
        sb.append(": ");
        sb.append(obj);
        sb.append('\n');
    }

    static boolean a(String str) {
        return str != null && str.matches("([+-])?([0-9]+\\.?[0-9]*|[0-9]*\\.?[0-9]+)") && str.length() <= 310;
    }

    static boolean a(List<Long> list, int i) {
        if (i < (list.size() << 6)) {
            return ((1 << (i % 64)) & list.get(i / 64).longValue()) != 0;
        }
        return false;
    }

    static Object b(com.google.android.gms.internal.measurement.Q q, String str) {
        com.google.android.gms.internal.measurement.T tA = a(q, str);
        if (tA == null) {
            return null;
        }
        if (tA.p()) {
            return tA.q();
        }
        if (tA.r()) {
            return Long.valueOf(tA.s());
        }
        if (tA.t()) {
            return Double.valueOf(tA.u());
        }
        return null;
    }

    final long a(byte[] bArr) {
        com.google.android.gms.common.internal.r.a(bArr);
        k().h();
        MessageDigest messageDigestV = le.v();
        if (messageDigestV != null) {
            return le.a(messageDigestV.digest(bArr));
        }
        d().t().a("Failed to get MD5");
        return 0L;
    }

    final <T extends Parcelable> T a(byte[] bArr, Parcelable.Creator<T> creator) {
        if (bArr == null) {
            return null;
        }
        Parcel parcelObtain = Parcel.obtain();
        try {
            parcelObtain.unmarshall(bArr, 0, bArr.length);
            parcelObtain.setDataPosition(0);
            return creator.createFromParcel(parcelObtain);
        } catch (a.C0028a unused) {
            d().t().a("Failed to load parcelable from buffer");
            return null;
        } finally {
            parcelObtain.recycle();
        }
    }

    final String a(com.google.android.gms.internal.measurement.A a2) {
        if (a2 == null) {
            return "null";
        }
        StringBuilder sb = new StringBuilder();
        sb.append("\nevent_filter {\n");
        if (a2.o()) {
            a(sb, 0, "filter_id", Integer.valueOf(a2.p()));
        }
        a(sb, 0, "event_name", j().a(a2.q()));
        String strA = a(a2.v(), a2.w(), a2.y());
        if (!strA.isEmpty()) {
            a(sb, 0, "filter_type", strA);
        }
        a(sb, 1, "event_count_filter", a2.u());
        sb.append("  filters {\n");
        Iterator<com.google.android.gms.internal.measurement.B> it = a2.r().iterator();
        while (it.hasNext()) {
            a(sb, 2, it.next());
        }
        a(sb, 1);
        sb.append("}\n}\n");
        return sb.toString();
    }

    final String a(com.google.android.gms.internal.measurement.D d2) {
        if (d2 == null) {
            return "null";
        }
        StringBuilder sb = new StringBuilder();
        sb.append("\nproperty_filter {\n");
        if (d2.o()) {
            a(sb, 0, "filter_id", Integer.valueOf(d2.p()));
        }
        a(sb, 0, "property_name", j().c(d2.q()));
        String strA = a(d2.s(), d2.t(), d2.v());
        if (!strA.isEmpty()) {
            a(sb, 0, "filter_type", strA);
        }
        a(sb, 1, d2.r());
        sb.append("}\n");
        return sb.toString();
    }

    final String a(com.google.android.gms.internal.measurement.U u) {
        List<com.google.android.gms.internal.measurement.T> listO;
        if (u == null) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        sb.append("\nbatch {\n");
        for (com.google.android.gms.internal.measurement.V v : u.o()) {
            if (v != null) {
                a(sb, 1);
                sb.append("bundle {\n");
                if (v.o()) {
                    a(sb, 1, "protocol_version", Integer.valueOf(v.P()));
                }
                a(sb, 1, "platform", v.ka());
                if (v.sa()) {
                    a(sb, 1, "gmp_version", Long.valueOf(v.p()));
                }
                if (v.q()) {
                    a(sb, 1, "uploading_gmp_version", Long.valueOf(v.r()));
                }
                if (v.S()) {
                    a(sb, 1, "dynamite_version", Long.valueOf(v.T()));
                }
                if (v.J()) {
                    a(sb, 1, "config_version", Long.valueOf(v.K()));
                }
                a(sb, 1, "gmp_app_id", v.B());
                a(sb, 1, "admob_app_id", v.R());
                a(sb, 1, "app_id", v.qa());
                a(sb, 1, "app_version", v.ra());
                if (v.G()) {
                    a(sb, 1, "app_version_major", Integer.valueOf(v.H()));
                }
                a(sb, 1, "firebase_instance_id", v.F());
                if (v.w()) {
                    a(sb, 1, "dev_cert_hash", Long.valueOf(v.x()));
                }
                a(sb, 1, "app_store", v.pa());
                if (v.aa()) {
                    a(sb, 1, "upload_timestamp_millis", Long.valueOf(v.ba()));
                }
                if (v.ca()) {
                    a(sb, 1, "start_timestamp_millis", Long.valueOf(v.da()));
                }
                if (v.ea()) {
                    a(sb, 1, "end_timestamp_millis", Long.valueOf(v.fa()));
                }
                if (v.ga()) {
                    a(sb, 1, "previous_bundle_start_timestamp_millis", Long.valueOf(v.ha()));
                }
                if (v.ia()) {
                    a(sb, 1, "previous_bundle_end_timestamp_millis", Long.valueOf(v.ja()));
                }
                a(sb, 1, "app_instance_id", v.v());
                a(sb, 1, "resettable_device_id", v.s());
                a(sb, 1, "device_id", v.I());
                a(sb, 1, "ds_id", v.N());
                if (v.t()) {
                    a(sb, 1, "limited_ad_tracking", Boolean.valueOf(v.u()));
                }
                a(sb, 1, "os_version", v.la());
                a(sb, 1, "device_model", v.a());
                a(sb, 1, "user_default_language", v.ma());
                if (v.na()) {
                    a(sb, 1, "time_zone_offset_minutes", Integer.valueOf(v.oa()));
                }
                if (v.y()) {
                    a(sb, 1, "bundle_sequential_index", Integer.valueOf(v.z()));
                }
                if (v.C()) {
                    a(sb, 1, "service_upload", Boolean.valueOf(v.D()));
                }
                a(sb, 1, "health_monitor", v.A());
                if (v.L() && v.M() != 0) {
                    a(sb, 1, "android_id", Long.valueOf(v.M()));
                }
                if (v.O()) {
                    a(sb, 1, "retry_counter", Integer.valueOf(v.Q()));
                }
                List<com.google.android.gms.internal.measurement.Z> listY = v.Y();
                if (listY != null) {
                    for (com.google.android.gms.internal.measurement.Z z : listY) {
                        if (z != null) {
                            a(sb, 2);
                            sb.append("user_property {\n");
                            a(sb, 2, "set_timestamp_millis", z.o() ? Long.valueOf(z.p()) : null);
                            a(sb, 2, "name", j().c(z.q()));
                            a(sb, 2, "string_value", z.s());
                            a(sb, 2, "int_value", z.t() ? Long.valueOf(z.u()) : null);
                            a(sb, 2, "double_value", z.v() ? Double.valueOf(z.w()) : null);
                            a(sb, 2);
                            sb.append("}\n");
                        }
                    }
                }
                List<com.google.android.gms.internal.measurement.O> listE = v.E();
                String strQa = v.qa();
                if (listE != null) {
                    for (com.google.android.gms.internal.measurement.O o : listE) {
                        if (o != null) {
                            a(sb, 2);
                            sb.append("audience_membership {\n");
                            if (o.o()) {
                                a(sb, 2, "audience_id", Integer.valueOf(o.p()));
                            }
                            if (o.t()) {
                                a(sb, 2, "new_audience", Boolean.valueOf(o.u()));
                            }
                            a(sb, 2, "current_data", o.q(), strQa);
                            a(sb, 2, "previous_data", o.s(), strQa);
                            a(sb, 2);
                            sb.append("}\n");
                        }
                    }
                }
                List<com.google.android.gms.internal.measurement.Q> listW = v.W();
                if (listW != null) {
                    for (com.google.android.gms.internal.measurement.Q q : listW) {
                        if (q != null) {
                            a(sb, 2);
                            sb.append("event {\n");
                            a(sb, 2, "name", j().a(q.q()));
                            if (q.r()) {
                                a(sb, 2, "timestamp_millis", Long.valueOf(q.s()));
                            }
                            if (q.t()) {
                                a(sb, 2, "previous_timestamp_millis", Long.valueOf(q.u()));
                            }
                            if (q.v()) {
                                a(sb, 2, "count", Integer.valueOf(q.w()));
                            }
                            if (q.p() != 0 && (listO = q.o()) != null) {
                                for (com.google.android.gms.internal.measurement.T t : listO) {
                                    if (t != null) {
                                        a(sb, 3);
                                        sb.append("param {\n");
                                        a(sb, 3, "name", j().b(t.o()));
                                        a(sb, 3, "string_value", t.q());
                                        a(sb, 3, "int_value", t.r() ? Long.valueOf(t.s()) : null);
                                        a(sb, 3, "double_value", t.t() ? Double.valueOf(t.u()) : null);
                                        a(sb, 3);
                                        sb.append("}\n");
                                    }
                                }
                            }
                            a(sb, 2);
                            sb.append("}\n");
                        }
                    }
                }
                a(sb, 1);
                sb.append("}\n");
            }
        }
        sb.append("}\n");
        return sb.toString();
    }

    final List<Long> a(List<Long> list, List<Integer> list2) {
        int i;
        ArrayList arrayList = new ArrayList(list);
        for (Integer num : list2) {
            if (num.intValue() < 0) {
                d().w().a("Ignoring negative bit index to be cleared", num);
            } else {
                int iIntValue = num.intValue() / 64;
                if (iIntValue >= arrayList.size()) {
                    d().w().a("Ignoring bit index greater than bitSet size", num, Integer.valueOf(arrayList.size()));
                } else {
                    arrayList.set(iIntValue, Long.valueOf(((Long) arrayList.get(iIntValue)).longValue() & ((1 << (num.intValue() % 64)) ^ (-1))));
                }
            }
        }
        int size = arrayList.size();
        int size2 = arrayList.size() - 1;
        while (true) {
            int i2 = size2;
            i = size;
            size = i2;
            if (size < 0 || ((Long) arrayList.get(size)).longValue() != 0) {
                break;
            }
            size2 = size - 1;
        }
        return arrayList.subList(0, i);
    }

    final void a(T.a aVar, Object obj) {
        com.google.android.gms.common.internal.r.a(obj);
        aVar.k();
        aVar.l();
        aVar.m();
        if (obj instanceof String) {
            aVar.b((String) obj);
            return;
        }
        if (obj instanceof Long) {
            aVar.a(((Long) obj).longValue());
        } else if (obj instanceof Double) {
            aVar.a(((Double) obj).doubleValue());
        } else {
            d().t().a("Ignoring invalid (type) event param value", obj);
        }
    }

    final void a(Z.a aVar, Object obj) {
        com.google.android.gms.common.internal.r.a(obj);
        aVar.k();
        aVar.l();
        aVar.m();
        if (obj instanceof String) {
            aVar.b((String) obj);
            return;
        }
        if (obj instanceof Long) {
            aVar.b(((Long) obj).longValue());
        } else if (obj instanceof Double) {
            aVar.a(((Double) obj).doubleValue());
        } else {
            d().t().a("Ignoring invalid (type) user attribute value", obj);
        }
    }

    final boolean a(long j, long j2) {
        return j == 0 || j2 <= 0 || Math.abs(g().a() - j) > j2;
    }

    final boolean a(zzan zzanVar, zzm zzmVar) {
        com.google.android.gms.common.internal.r.a(zzanVar);
        com.google.android.gms.common.internal.r.a(zzmVar);
        if (com.google.android.gms.internal.measurement.Nd.a() && m().a(C0324o.Ua)) {
            return (TextUtils.isEmpty(zzmVar.f2517b) && TextUtils.isEmpty(zzmVar.r)) ? false : true;
        }
        if (!TextUtils.isEmpty(zzmVar.f2517b) || !TextUtils.isEmpty(zzmVar.r)) {
            return true;
        }
        f();
        return false;
    }

    final byte[] b(byte[] bArr) throws IOException {
        try {
            ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bArr);
            GZIPInputStream gZIPInputStream = new GZIPInputStream(byteArrayInputStream);
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            byte[] bArr2 = new byte[jp.co.acrodea.runtime.drm.h.CLIENT_AUTOGEN_KEYBIT];
            while (true) {
                int i = gZIPInputStream.read(bArr2);
                if (i <= 0) {
                    gZIPInputStream.close();
                    byteArrayInputStream.close();
                    return byteArrayOutputStream.toByteArray();
                }
                byteArrayOutputStream.write(bArr2, 0, i);
            }
        } catch (IOException e2) {
            d().t().a("Failed to ungzip content", e2);
            throw e2;
        }
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Xb c() {
        return super.c();
    }

    final byte[] c(byte[] bArr) throws IOException {
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
            gZIPOutputStream.write(bArr);
            gZIPOutputStream.close();
            byteArrayOutputStream.close();
            return byteArrayOutputStream.toByteArray();
        } catch (IOException e2) {
            d().t().a("Failed to gzip content", e2);
            throw e2;
        }
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ C0365wb d() {
        return super.d();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ Context e() {
        return super.e();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ ye f() {
        return super.f();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc, com.google.android.gms.measurement.internal.InterfaceC0371xc
    public final /* bridge */ /* synthetic */ com.google.android.gms.common.util.e g() {
        return super.g();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ void h() {
        super.h();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0294i i() {
        return super.i();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ C0355ub j() {
        return super.j();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ le k() {
        return super.k();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ Kb l() {
        return super.l();
    }

    @Override // com.google.android.gms.measurement.internal.C0361vc
    public final /* bridge */ /* synthetic */ ze m() {
        return super.m();
    }

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ ie o() {
        return super.o();
    }

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ C0269d p() {
        return super.p();
    }

    @Override // com.google.android.gms.measurement.internal.ce
    public final /* bridge */ /* synthetic */ Vb q() {
        return super.q();
    }

    @Override // com.google.android.gms.measurement.internal.AbstractC0257ae
    protected final boolean u() {
        return false;
    }

    final List<Integer> v() {
        Map<String, String> mapA = C0324o.a(this.f2209b.e());
        if (mapA == null || mapA.size() == 0) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        int iIntValue = C0324o.T.a(null).intValue();
        for (Map.Entry<String, String> entry : mapA.entrySet()) {
            if (entry.getKey().startsWith("measurement.id.")) {
                try {
                    int i = Integer.parseInt(entry.getValue());
                    if (i != 0) {
                        arrayList.add(Integer.valueOf(i));
                        if (arrayList.size() >= iIntValue) {
                            d().w().a("Too many experiment IDs. Number of IDs", Integer.valueOf(arrayList.size()));
                            break;
                        }
                        continue;
                    } else {
                        continue;
                    }
                } catch (NumberFormatException e2) {
                    d().w().a("Experiment ID NumberFormatException", e2);
                }
            }
        }
        if (arrayList.size() == 0) {
            return null;
        }
        return arrayList;
    }
}
