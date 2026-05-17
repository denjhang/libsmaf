package e;

import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.List;
import org.apache.http.client.utils.URLEncodedUtils;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class x extends J {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final C f3214a = C.a(URLEncodedUtils.CONTENT_TYPE);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final List<String> f3215b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final List<String> f3216c;

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<String> f3217a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final List<String> f3218b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final Charset f3219c;

        public a() {
            this(null);
        }

        public a(Charset charset) {
            this.f3217a = new ArrayList();
            this.f3218b = new ArrayList();
            this.f3219c = charset;
        }

        public a a(String str, String str2) {
            if (str == null) {
                throw new NullPointerException("name == null");
            }
            if (str2 == null) {
                throw new NullPointerException("value == null");
            }
            this.f3217a.add(A.a(str, " \"':;<=>@[]^`{}|/\\?#&!$(),~", false, false, true, true, this.f3219c));
            this.f3218b.add(A.a(str2, " \"':;<=>@[]^`{}|/\\?#&!$(),~", false, false, true, true, this.f3219c));
            return this;
        }

        public x a() {
            return new x(this.f3217a, this.f3218b);
        }
    }

    x(List<String> list, List<String> list2) {
        this.f3215b = e.a.e.a(list);
        this.f3216c = e.a.e.a(list2);
    }

    private long a(f.g gVar, boolean z) {
        f.f fVar = z ? new f.f() : gVar.o();
        int size = this.f3215b.size();
        for (int i = 0; i < size; i++) {
            if (i > 0) {
                fVar.writeByte(38);
            }
            fVar.d(this.f3215b.get(i));
            fVar.writeByte(61);
            fVar.d(this.f3216c.get(i));
        }
        if (!z) {
            return 0L;
        }
        long size2 = fVar.size();
        fVar.b();
        return size2;
    }

    @Override // e.J
    public long a() {
        return a((f.g) null, true);
    }

    @Override // e.J
    public void a(f.g gVar) {
        a(gVar, false);
    }

    @Override // e.J
    public C b() {
        return f3214a;
    }
}
