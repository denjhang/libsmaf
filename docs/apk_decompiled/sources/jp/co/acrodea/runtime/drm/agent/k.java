package jp.co.acrodea.runtime.drm.agent;

import java.io.File;
import java.io.IOException;
import java.nio.BufferOverflowException;
import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import jp.co.acrodea.runtime.drm.AcDRMUtil;
import jp.co.acrodea.runtime.drm.x;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final byte[] f3361a = {82, 79, 76, 49};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static Object f3362b = new Object();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static HashMap<File, k> f3363c = new HashMap<>();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private File f3364d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private x f3365e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Map<UUID, l> f3366f;

    private k(File file) throws IOException {
        this.f3364d = file;
        try {
            this.f3365e = AcDRMUtil.a().a("__darm__", this.f3364d);
            this.f3366f = null;
        } catch (IllegalArgumentException unused) {
            throw new IOException("Initialization failure");
        } catch (jp.co.acrodea.runtime.drm.o unused2) {
            throw new IOException("Initialization failure");
        }
    }

    private Map<UUID, l> a(byte[] bArr) throws IOException {
        try {
            byte[] bArr2 = new byte[4];
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
            byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
            byteBufferWrap.get(bArr2);
            if (!Arrays.equals(bArr2, f3361a)) {
                throw new IOException("Data format error");
            }
            int i = byteBufferWrap.getInt();
            HashMap map = new HashMap(i);
            for (int i2 = 0; i2 < i; i2++) {
                UUID uuid = new UUID(byteBufferWrap.getLong(), byteBufferWrap.getLong());
                byte b2 = byteBufferWrap.get();
                l lVar = new l();
                boolean z = true;
                if (b2 == 1) {
                    if (byteBufferWrap.get() == 0) {
                        z = false;
                    }
                    lVar.f3367a = z;
                    lVar.f3368b = new Date(byteBufferWrap.getLong());
                    lVar.f3369c = byteBufferWrap.getInt();
                }
                map.put(uuid, lVar);
            }
            return map;
        } catch (BufferUnderflowException unused) {
            throw new IOException("Internal error");
        }
    }

    public static k a(File file) {
        k kVar;
        synchronized (f3363c) {
            kVar = f3363c.get(file);
            if (kVar == null) {
                kVar = new k(file);
                f3363c.put(file, kVar);
            }
        }
        return kVar;
    }

    private void a(Map<UUID, l> map) throws IOException {
        try {
            this.f3365e.a("rl", b(map));
        } catch (jp.co.acrodea.runtime.drm.o unused) {
            throw new IOException("Security failure");
        }
    }

    private Map<UUID, l> b() throws IOException {
        try {
            byte[] bArrA_ = this.f3365e.a_("rl");
            if (bArrA_ != null) {
                return a(bArrA_);
            }
            return null;
        } catch (jp.co.acrodea.runtime.drm.o unused) {
            throw new IOException("Security failure");
        }
    }

    private byte[] b(Map<UUID, l> map) throws IOException {
        int i = 0;
        int i2 = 0;
        for (Map.Entry<UUID, l> entry : map.entrySet()) {
            if (entry.getKey() != null) {
                i2++;
                i += 17;
                if (entry.getValue() != null) {
                    i += 13;
                }
            }
        }
        int i3 = i + 8;
        try {
            byte[] bArr = new byte[i3];
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
            byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
            byteBufferWrap.put(f3361a);
            byteBufferWrap.putInt(i2);
            for (Map.Entry<UUID, l> entry2 : map.entrySet()) {
                UUID key = entry2.getKey();
                if (key != null) {
                    byteBufferWrap.putLong(key.getMostSignificantBits());
                    byteBufferWrap.putLong(key.getLeastSignificantBits());
                    l value = entry2.getValue();
                    if (value != null) {
                        byteBufferWrap.put((byte) 1);
                        if (value.f3367a) {
                            byteBufferWrap.put((byte) 1);
                        } else {
                            byteBufferWrap.put((byte) 0);
                        }
                        byteBufferWrap.putLong(value.f3368b.getTime());
                        byteBufferWrap.putInt(value.f3369c);
                    } else {
                        byteBufferWrap.put((byte) 0);
                    }
                }
            }
            if (byteBufferWrap.position() == i3) {
                return bArr;
            }
            byte[] bArr2 = new byte[byteBufferWrap.position()];
            System.arraycopy(bArr, 0, bArr2, 0, byteBufferWrap.position());
            return bArr2;
        } catch (BufferOverflowException unused) {
            throw new IOException("Internal error");
        }
    }

    public l a(UUID uuid) {
        l lVar;
        synchronized (f3362b) {
            try {
                this.f3366f = b();
            } catch (IOException unused) {
            }
            if (this.f3366f == null) {
                this.f3366f = new HashMap();
            }
            lVar = this.f3366f.get(uuid);
            if (lVar == null) {
                lVar = new l();
                lVar.f3368b = new Date();
                this.f3366f.put(uuid, lVar);
            }
            lVar.f3369c++;
            a(this.f3366f);
        }
        return lVar;
    }

    public void a() {
        synchronized (f3362b) {
            this.f3366f = null;
        }
    }

    public l b(UUID uuid) {
        if (this.f3366f == null) {
            synchronized (f3362b) {
                try {
                    this.f3366f = b();
                } catch (IOException unused) {
                }
                if (this.f3366f == null) {
                    this.f3366f = new HashMap();
                }
            }
        }
        return this.f3366f.get(uuid);
    }

    public void c(UUID uuid) {
        synchronized (f3362b) {
            try {
                this.f3366f = b();
            } catch (IOException unused) {
            }
            if (this.f3366f == null) {
                this.f3366f = new HashMap();
            }
            l lVar = this.f3366f.get(uuid);
            if (lVar == null) {
                lVar = new l();
                lVar.f3368b = new Date();
            }
            lVar.f3367a = true;
            a(this.f3366f);
        }
    }
}
