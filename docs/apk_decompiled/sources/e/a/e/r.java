package e.a.e;

import e.a.e.d;
import f.B;
import f.z;
import java.io.Closeable;
import java.io.IOException;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class r implements Closeable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final Logger f3075a = Logger.getLogger(e.class.getName());

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final f.h f3076b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final a f3077c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final boolean f3078d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final d.a f3079e;

    static final class a implements z {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final f.h f3080a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        int f3081b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        byte f3082c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        int f3083d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        int f3084e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        short f3085f;

        a(f.h hVar) {
            this.f3080a = hVar;
        }

        private void a() throws IOException {
            int i = this.f3083d;
            int iA = r.a(this.f3080a);
            this.f3084e = iA;
            this.f3081b = iA;
            byte b2 = (byte) (this.f3080a.readByte() & 255);
            this.f3082c = (byte) (this.f3080a.readByte() & 255);
            if (r.f3075a.isLoggable(Level.FINE)) {
                r.f3075a.fine(e.a(true, this.f3083d, this.f3081b, b2, this.f3082c));
            }
            this.f3083d = this.f3080a.readInt() & Integer.MAX_VALUE;
            if (b2 != 9) {
                e.b("%s != TYPE_CONTINUATION", Byte.valueOf(b2));
                throw null;
            }
            if (this.f3083d == i) {
                return;
            }
            e.b("TYPE_CONTINUATION streamId changed", new Object[0]);
            throw null;
        }

        @Override // f.z
        public long a(f.f fVar, long j) throws IOException {
            while (true) {
                int i = this.f3084e;
                if (i != 0) {
                    long jA = this.f3080a.a(fVar, Math.min(j, i));
                    if (jA == -1) {
                        return -1L;
                    }
                    this.f3084e = (int) (((long) this.f3084e) - jA);
                    return jA;
                }
                this.f3080a.skip(this.f3085f);
                this.f3085f = (short) 0;
                if ((this.f3082c & 4) != 0) {
                    return -1L;
                }
                a();
            }
        }

        @Override // f.z, java.io.Closeable, java.lang.AutoCloseable
        public void close() {
        }

        @Override // f.z
        public B p() {
            return this.f3080a.p();
        }
    }

    interface b {
        void a();

        void a(int i, int i2, int i3, boolean z);

        void a(int i, int i2, List<c> list);

        void a(int i, long j);

        void a(int i, e.a.e.b bVar);

        void a(int i, e.a.e.b bVar, f.i iVar);

        void a(boolean z, int i, int i2);

        void a(boolean z, int i, int i2, List<c> list);

        void a(boolean z, int i, f.h hVar, int i2);

        void a(boolean z, x xVar);
    }

    r(f.h hVar, boolean z) {
        this.f3076b = hVar;
        this.f3078d = z;
        this.f3077c = new a(this.f3076b);
        this.f3079e = new d.a(4096, this.f3077c);
    }

    static int a(int i, byte b2, short s) throws IOException {
        if ((b2 & 8) != 0) {
            i--;
        }
        if (s <= i) {
            return (short) (i - s);
        }
        e.b("PROTOCOL_ERROR padding %s > remaining length %s", Short.valueOf(s), Integer.valueOf(i));
        throw null;
    }

    static int a(f.h hVar) {
        return (hVar.readByte() & 255) | ((hVar.readByte() & 255) << 16) | ((hVar.readByte() & 255) << 8);
    }

    private List<c> a(int i, short s, byte b2, int i2) {
        a aVar = this.f3077c;
        aVar.f3084e = i;
        aVar.f3081b = i;
        aVar.f3085f = s;
        aVar.f3082c = b2;
        aVar.f3083d = i2;
        this.f3079e.c();
        return this.f3079e.a();
    }

    private void a(b bVar, int i) {
        int i2 = this.f3076b.readInt();
        bVar.a(i, i2 & Integer.MAX_VALUE, (this.f3076b.readByte() & 255) + 1, (Integer.MIN_VALUE & i2) != 0);
    }

    private void a(b bVar, int i, byte b2, int i2) throws IOException {
        if (i2 == 0) {
            e.b("PROTOCOL_ERROR: TYPE_DATA streamId == 0", new Object[0]);
            throw null;
        }
        boolean z = (b2 & 1) != 0;
        if ((b2 & 32) != 0) {
            e.b("PROTOCOL_ERROR: FLAG_COMPRESSED without SETTINGS_COMPRESS_DATA", new Object[0]);
            throw null;
        }
        short s = (b2 & 8) != 0 ? (short) (this.f3076b.readByte() & 255) : (short) 0;
        bVar.a(z, i2, this.f3076b, a(i, b2, s));
        this.f3076b.skip(s);
    }

    private void b(b bVar, int i, byte b2, int i2) throws IOException {
        if (i < 8) {
            e.b("TYPE_GOAWAY length < 8: %s", Integer.valueOf(i));
            throw null;
        }
        if (i2 != 0) {
            e.b("TYPE_GOAWAY streamId != 0", new Object[0]);
            throw null;
        }
        int i3 = this.f3076b.readInt();
        int i4 = this.f3076b.readInt();
        int i5 = i - 8;
        e.a.e.b bVarA = e.a.e.b.a(i4);
        if (bVarA == null) {
            e.b("TYPE_GOAWAY unexpected error code: %d", Integer.valueOf(i4));
            throw null;
        }
        f.i iVarB = f.i.f3244b;
        if (i5 > 0) {
            iVarB = this.f3076b.b(i5);
        }
        bVar.a(i3, bVarA, iVarB);
    }

    private void c(b bVar, int i, byte b2, int i2) throws IOException {
        if (i2 == 0) {
            e.b("PROTOCOL_ERROR: TYPE_HEADERS streamId == 0", new Object[0]);
            throw null;
        }
        boolean z = (b2 & 1) != 0;
        short s = (b2 & 8) != 0 ? (short) (this.f3076b.readByte() & 255) : (short) 0;
        if ((b2 & 32) != 0) {
            a(bVar, i2);
            i -= 5;
        }
        bVar.a(z, i2, -1, a(a(i, b2, s), s, b2, i2));
    }

    private void d(b bVar, int i, byte b2, int i2) throws IOException {
        if (i != 8) {
            e.b("TYPE_PING length != 8: %s", Integer.valueOf(i));
            throw null;
        }
        if (i2 != 0) {
            e.b("TYPE_PING streamId != 0", new Object[0]);
            throw null;
        }
        bVar.a((b2 & 1) != 0, this.f3076b.readInt(), this.f3076b.readInt());
    }

    private void e(b bVar, int i, byte b2, int i2) throws IOException {
        if (i != 5) {
            e.b("TYPE_PRIORITY length: %d != 5", Integer.valueOf(i));
            throw null;
        }
        if (i2 != 0) {
            a(bVar, i2);
        } else {
            e.b("TYPE_PRIORITY streamId == 0", new Object[0]);
            throw null;
        }
    }

    private void f(b bVar, int i, byte b2, int i2) throws IOException {
        if (i2 == 0) {
            e.b("PROTOCOL_ERROR: TYPE_PUSH_PROMISE streamId == 0", new Object[0]);
            throw null;
        }
        short s = (b2 & 8) != 0 ? (short) (this.f3076b.readByte() & 255) : (short) 0;
        bVar.a(i2, this.f3076b.readInt() & Integer.MAX_VALUE, a(a(i - 4, b2, s), s, b2, i2));
    }

    private void g(b bVar, int i, byte b2, int i2) throws IOException {
        if (i != 4) {
            e.b("TYPE_RST_STREAM length: %d != 4", Integer.valueOf(i));
            throw null;
        }
        if (i2 == 0) {
            e.b("TYPE_RST_STREAM streamId == 0", new Object[0]);
            throw null;
        }
        int i3 = this.f3076b.readInt();
        e.a.e.b bVarA = e.a.e.b.a(i3);
        if (bVarA != null) {
            bVar.a(i2, bVarA);
        } else {
            e.b("TYPE_RST_STREAM unexpected error code: %d", Integer.valueOf(i3));
            throw null;
        }
    }

    private void h(b bVar, int i, byte b2, int i2) throws IOException {
        if (i2 != 0) {
            e.b("TYPE_SETTINGS streamId != 0", new Object[0]);
            throw null;
        }
        if ((b2 & 1) != 0) {
            if (i == 0) {
                bVar.a();
                return;
            } else {
                e.b("FRAME_SIZE_ERROR ack frame should be empty!", new Object[0]);
                throw null;
            }
        }
        if (i % 6 != 0) {
            e.b("TYPE_SETTINGS length %% 6 != 0: %s", Integer.valueOf(i));
            throw null;
        }
        x xVar = new x();
        for (int i3 = 0; i3 < i; i3 += 6) {
            int i4 = this.f3076b.readShort() & 65535;
            int i5 = this.f3076b.readInt();
            switch (i4) {
                case 2:
                    if (i5 != 0 && i5 != 1) {
                        e.b("PROTOCOL_ERROR SETTINGS_ENABLE_PUSH != 0 or 1", new Object[0]);
                        throw null;
                    }
                    break;
                    break;
                case 3:
                    i4 = 4;
                    break;
                case 4:
                    i4 = 7;
                    if (i5 < 0) {
                        e.b("PROTOCOL_ERROR SETTINGS_INITIAL_WINDOW_SIZE > 2^31 - 1", new Object[0]);
                        throw null;
                    }
                    break;
                    break;
                case 5:
                    if (i5 < 16384 || i5 > 16777215) {
                        e.b("PROTOCOL_ERROR SETTINGS_MAX_FRAME_SIZE: %s", Integer.valueOf(i5));
                        throw null;
                    }
                    break;
                    break;
            }
            xVar.a(i4, i5);
        }
        bVar.a(false, xVar);
    }

    private void i(b bVar, int i, byte b2, int i2) throws IOException {
        if (i != 4) {
            e.b("TYPE_WINDOW_UPDATE length !=4: %s", Integer.valueOf(i));
            throw null;
        }
        long j = ((long) this.f3076b.readInt()) & 2147483647L;
        if (j != 0) {
            bVar.a(i2, j);
        } else {
            e.b("windowSizeIncrement was 0", Long.valueOf(j));
            throw null;
        }
    }

    public void a(b bVar) throws IOException {
        if (this.f3078d) {
            if (a(true, bVar)) {
                return;
            }
            e.b("Required SETTINGS preface not received", new Object[0]);
            throw null;
        }
        f.i iVarB = this.f3076b.b(e.f3017a.e());
        if (f3075a.isLoggable(Level.FINE)) {
            f3075a.fine(e.a.e.a("<< CONNECTION %s", iVarB.b()));
        }
        if (e.f3017a.equals(iVarB)) {
            return;
        }
        e.b("Expected a connection header but was %s", iVarB.h());
        throw null;
    }

    public boolean a(boolean z, b bVar) throws IOException {
        try {
            this.f3076b.e(9L);
            int iA = a(this.f3076b);
            if (iA < 0 || iA > 16384) {
                e.b("FRAME_SIZE_ERROR: %s", Integer.valueOf(iA));
                throw null;
            }
            byte b2 = (byte) (this.f3076b.readByte() & 255);
            if (z && b2 != 4) {
                e.b("Expected a SETTINGS frame but was %s", Byte.valueOf(b2));
                throw null;
            }
            byte b3 = (byte) (this.f3076b.readByte() & 255);
            int i = this.f3076b.readInt() & Integer.MAX_VALUE;
            if (f3075a.isLoggable(Level.FINE)) {
                f3075a.fine(e.a(true, i, iA, b2, b3));
            }
            switch (b2) {
                case 0:
                    a(bVar, iA, b3, i);
                    return true;
                case 1:
                    c(bVar, iA, b3, i);
                    return true;
                case 2:
                    e(bVar, iA, b3, i);
                    return true;
                case 3:
                    g(bVar, iA, b3, i);
                    return true;
                case 4:
                    h(bVar, iA, b3, i);
                    return true;
                case 5:
                    f(bVar, iA, b3, i);
                    return true;
                case 6:
                    d(bVar, iA, b3, i);
                    return true;
                case 7:
                    b(bVar, iA, b3, i);
                    return true;
                case 8:
                    i(bVar, iA, b3, i);
                    return true;
                default:
                    this.f3076b.skip(iA);
                    return true;
            }
        } catch (IOException unused) {
            return false;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.f3076b.close();
    }
}
