package e;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: renamed from: e.j, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0417j {
    final String jb;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final Comparator<String> f3175a = new C0416i();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Map<String, C0417j> f3176b = new TreeMap(f3175a);

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    public static final C0417j f3177c = a("SSL_RSA_WITH_NULL_MD5", 1);

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    public static final C0417j f3178d = a("SSL_RSA_WITH_NULL_SHA", 2);

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public static final C0417j f3179e = a("SSL_RSA_EXPORT_WITH_RC4_40_MD5", 3);

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    public static final C0417j f3180f = a("SSL_RSA_WITH_RC4_128_MD5", 4);
    public static final C0417j g = a("SSL_RSA_WITH_RC4_128_SHA", 5);
    public static final C0417j h = a("SSL_RSA_EXPORT_WITH_DES40_CBC_SHA", 8);
    public static final C0417j i = a("SSL_RSA_WITH_DES_CBC_SHA", 9);
    public static final C0417j j = a("SSL_RSA_WITH_3DES_EDE_CBC_SHA", 10);
    public static final C0417j k = a("SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA", 17);
    public static final C0417j l = a("SSL_DHE_DSS_WITH_DES_CBC_SHA", 18);
    public static final C0417j m = a("SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA", 19);
    public static final C0417j n = a("SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA", 20);
    public static final C0417j o = a("SSL_DHE_RSA_WITH_DES_CBC_SHA", 21);
    public static final C0417j p = a("SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA", 22);
    public static final C0417j q = a("SSL_DH_anon_EXPORT_WITH_RC4_40_MD5", 23);
    public static final C0417j r = a("SSL_DH_anon_WITH_RC4_128_MD5", 24);
    public static final C0417j s = a("SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA", 25);
    public static final C0417j t = a("SSL_DH_anon_WITH_DES_CBC_SHA", 26);
    public static final C0417j u = a("SSL_DH_anon_WITH_3DES_EDE_CBC_SHA", 27);
    public static final C0417j v = a("TLS_KRB5_WITH_DES_CBC_SHA", 30);
    public static final C0417j w = a("TLS_KRB5_WITH_3DES_EDE_CBC_SHA", 31);
    public static final C0417j x = a("TLS_KRB5_WITH_RC4_128_SHA", 32);
    public static final C0417j y = a("TLS_KRB5_WITH_DES_CBC_MD5", 34);
    public static final C0417j z = a("TLS_KRB5_WITH_3DES_EDE_CBC_MD5", 35);
    public static final C0417j A = a("TLS_KRB5_WITH_RC4_128_MD5", 36);
    public static final C0417j B = a("TLS_KRB5_EXPORT_WITH_DES_CBC_40_SHA", 38);
    public static final C0417j C = a("TLS_KRB5_EXPORT_WITH_RC4_40_SHA", 40);
    public static final C0417j D = a("TLS_KRB5_EXPORT_WITH_DES_CBC_40_MD5", 41);
    public static final C0417j E = a("TLS_KRB5_EXPORT_WITH_RC4_40_MD5", 43);
    public static final C0417j F = a("TLS_RSA_WITH_AES_128_CBC_SHA", 47);
    public static final C0417j G = a("TLS_DHE_DSS_WITH_AES_128_CBC_SHA", 50);
    public static final C0417j H = a("TLS_DHE_RSA_WITH_AES_128_CBC_SHA", 51);
    public static final C0417j I = a("TLS_DH_anon_WITH_AES_128_CBC_SHA", 52);
    public static final C0417j J = a("TLS_RSA_WITH_AES_256_CBC_SHA", 53);
    public static final C0417j K = a("TLS_DHE_DSS_WITH_AES_256_CBC_SHA", 56);
    public static final C0417j L = a("TLS_DHE_RSA_WITH_AES_256_CBC_SHA", 57);
    public static final C0417j M = a("TLS_DH_anon_WITH_AES_256_CBC_SHA", 58);
    public static final C0417j N = a("TLS_RSA_WITH_NULL_SHA256", 59);
    public static final C0417j O = a("TLS_RSA_WITH_AES_128_CBC_SHA256", 60);
    public static final C0417j P = a("TLS_RSA_WITH_AES_256_CBC_SHA256", 61);
    public static final C0417j Q = a("TLS_DHE_DSS_WITH_AES_128_CBC_SHA256", 64);
    public static final C0417j R = a("TLS_RSA_WITH_CAMELLIA_128_CBC_SHA", 65);
    public static final C0417j S = a("TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA", 68);
    public static final C0417j T = a("TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA", 69);
    public static final C0417j U = a("TLS_DHE_RSA_WITH_AES_128_CBC_SHA256", 103);
    public static final C0417j V = a("TLS_DHE_DSS_WITH_AES_256_CBC_SHA256", 106);
    public static final C0417j W = a("TLS_DHE_RSA_WITH_AES_256_CBC_SHA256", 107);
    public static final C0417j X = a("TLS_DH_anon_WITH_AES_128_CBC_SHA256", 108);
    public static final C0417j Y = a("TLS_DH_anon_WITH_AES_256_CBC_SHA256", 109);
    public static final C0417j Z = a("TLS_RSA_WITH_CAMELLIA_256_CBC_SHA", 132);
    public static final C0417j aa = a("TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA", 135);
    public static final C0417j ba = a("TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA", 136);
    public static final C0417j ca = a("TLS_PSK_WITH_RC4_128_SHA", 138);
    public static final C0417j da = a("TLS_PSK_WITH_3DES_EDE_CBC_SHA", 139);
    public static final C0417j ea = a("TLS_PSK_WITH_AES_128_CBC_SHA", 140);
    public static final C0417j fa = a("TLS_PSK_WITH_AES_256_CBC_SHA", 141);
    public static final C0417j ga = a("TLS_RSA_WITH_SEED_CBC_SHA", 150);
    public static final C0417j ha = a("TLS_RSA_WITH_AES_128_GCM_SHA256", 156);
    public static final C0417j ia = a("TLS_RSA_WITH_AES_256_GCM_SHA384", 157);
    public static final C0417j ja = a("TLS_DHE_RSA_WITH_AES_128_GCM_SHA256", 158);
    public static final C0417j ka = a("TLS_DHE_RSA_WITH_AES_256_GCM_SHA384", 159);
    public static final C0417j la = a("TLS_DHE_DSS_WITH_AES_128_GCM_SHA256", 162);
    public static final C0417j ma = a("TLS_DHE_DSS_WITH_AES_256_GCM_SHA384", 163);
    public static final C0417j na = a("TLS_DH_anon_WITH_AES_128_GCM_SHA256", 166);
    public static final C0417j oa = a("TLS_DH_anon_WITH_AES_256_GCM_SHA384", 167);
    public static final C0417j pa = a("TLS_EMPTY_RENEGOTIATION_INFO_SCSV", 255);
    public static final C0417j qa = a("TLS_FALLBACK_SCSV", 22016);
    public static final C0417j ra = a("TLS_ECDH_ECDSA_WITH_NULL_SHA", 49153);
    public static final C0417j sa = a("TLS_ECDH_ECDSA_WITH_RC4_128_SHA", 49154);
    public static final C0417j ta = a("TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA", 49155);
    public static final C0417j ua = a("TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA", 49156);
    public static final C0417j va = a("TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA", 49157);
    public static final C0417j wa = a("TLS_ECDHE_ECDSA_WITH_NULL_SHA", 49158);
    public static final C0417j xa = a("TLS_ECDHE_ECDSA_WITH_RC4_128_SHA", 49159);
    public static final C0417j ya = a("TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA", 49160);
    public static final C0417j za = a("TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA", 49161);
    public static final C0417j Aa = a("TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA", 49162);
    public static final C0417j Ba = a("TLS_ECDH_RSA_WITH_NULL_SHA", 49163);
    public static final C0417j Ca = a("TLS_ECDH_RSA_WITH_RC4_128_SHA", 49164);
    public static final C0417j Da = a("TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA", 49165);
    public static final C0417j Ea = a("TLS_ECDH_RSA_WITH_AES_128_CBC_SHA", 49166);
    public static final C0417j Fa = a("TLS_ECDH_RSA_WITH_AES_256_CBC_SHA", 49167);
    public static final C0417j Ga = a("TLS_ECDHE_RSA_WITH_NULL_SHA", 49168);
    public static final C0417j Ha = a("TLS_ECDHE_RSA_WITH_RC4_128_SHA", 49169);
    public static final C0417j Ia = a("TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA", 49170);
    public static final C0417j Ja = a("TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA", 49171);
    public static final C0417j Ka = a("TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA", 49172);
    public static final C0417j La = a("TLS_ECDH_anon_WITH_NULL_SHA", 49173);
    public static final C0417j Ma = a("TLS_ECDH_anon_WITH_RC4_128_SHA", 49174);
    public static final C0417j Na = a("TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA", 49175);
    public static final C0417j Oa = a("TLS_ECDH_anon_WITH_AES_128_CBC_SHA", 49176);
    public static final C0417j Pa = a("TLS_ECDH_anon_WITH_AES_256_CBC_SHA", 49177);
    public static final C0417j Qa = a("TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256", 49187);
    public static final C0417j Ra = a("TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384", 49188);
    public static final C0417j Sa = a("TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256", 49189);
    public static final C0417j Ta = a("TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384", 49190);
    public static final C0417j Ua = a("TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256", 49191);
    public static final C0417j Va = a("TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384", 49192);
    public static final C0417j Wa = a("TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256", 49193);
    public static final C0417j Xa = a("TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384", 49194);
    public static final C0417j Ya = a("TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256", 49195);
    public static final C0417j Za = a("TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384", 49196);
    public static final C0417j _a = a("TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256", 49197);
    public static final C0417j ab = a("TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384", 49198);
    public static final C0417j bb = a("TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256", 49199);
    public static final C0417j cb = a("TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384", 49200);
    public static final C0417j db = a("TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256", 49201);
    public static final C0417j eb = a("TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384", 49202);
    public static final C0417j fb = a("TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA", 49205);
    public static final C0417j gb = a("TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA", 49206);
    public static final C0417j hb = a("TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256", 52392);
    public static final C0417j ib = a("TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256", 52393);

    private C0417j(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.jb = str;
    }

    public static synchronized C0417j a(String str) {
        C0417j c0417j;
        c0417j = f3176b.get(str);
        if (c0417j == null) {
            c0417j = new C0417j(str);
            f3176b.put(str, c0417j);
        }
        return c0417j;
    }

    private static C0417j a(String str, int i2) {
        return a(str);
    }

    static List<C0417j> a(String... strArr) {
        ArrayList arrayList = new ArrayList(strArr.length);
        for (String str : strArr) {
            arrayList.add(a(str));
        }
        return Collections.unmodifiableList(arrayList);
    }

    public String toString() {
        return this.jb;
    }
}
