package jp.co.acrodea.runtime.drm;

import java.io.BufferedInputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import jp.co.acrodea.drm.DRMInfo;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class q extends p implements DRMInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final byte[] f3424a = {65, 68, 69, 50};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final byte[] f3425b = {65, 67, 68, 67};

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private UUID f3426c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private UUID f3427d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Date f3428e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private String f3429f;
    private String g;
    private String h;
    private String i;
    private String j;
    private Map<String, String> k = new HashMap();

    protected q() {
    }

    public UUID a() {
        return this.f3426c;
    }

    protected boolean a(BufferedInputStream bufferedInputStream) throws IOException {
        byte[] bArr;
        int i;
        d dVar = new d(bufferedInputStream);
        byte[] bArr2 = new byte[8];
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr2);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        byte[] bArr3 = new byte[4096];
        this.f3426c = null;
        this.f3427d = null;
        this.f3428e = null;
        this.f3429f = null;
        this.g = null;
        this.h = null;
        this.i = null;
        this.j = null;
        this.k.clear();
        dVar.mark(4);
        dVar.a(bArr2, 0, 4);
        int i2 = 0;
        while (i2 < 4 && bArr2[i2] == f3425b[i2]) {
            i2++;
        }
        if (i2 == 4) {
            dVar.a(bArr2, 0, 4);
            int i3 = byteBufferWrap.getInt();
            if (i3 < 42) {
                throw new IOException("Invalid DRM header");
            }
            byteBufferWrap.clear();
            if (dVar.a(32L) != 32) {
                throw new IOException("Invalid DRM header");
            }
            dVar.a(bArr2, 0, 2);
            char c2 = byteBufferWrap.getChar();
            byteBufferWrap.clear();
            char c3 = (char) (c2 + 1);
            if (c2 < 0) {
                throw new IOException("Invalid DRM header");
            }
            bArr = bArr3;
            dVar.a(c3);
            if (i3 <= c3 + '*' + 1 || (i = dVar.read()) == 0) {
                return true;
            }
            if (i != 2) {
                throw new IOException("Invalid DRM header");
            }
            dVar.mark(4);
            dVar.a(bArr2, 0, 4);
        } else {
            bArr = bArr3;
        }
        int i4 = 0;
        while (i4 < 4) {
            byte[] bArr4 = bArr;
            if (bArr2[i4] != f3424a[i4]) {
                dVar.reset();
                return false;
            }
            i4++;
            bArr = bArr4;
        }
        dVar.a(bArr2, 0, 8);
        long j = byteBufferWrap.getLong();
        byteBufferWrap.clear();
        dVar.a(bArr2, 0, 8);
        long j2 = byteBufferWrap.getLong();
        byteBufferWrap.clear();
        this.f3426c = new UUID(j, j2);
        dVar.a(bArr2, 0, 8);
        long j3 = byteBufferWrap.getLong();
        byteBufferWrap.clear();
        dVar.a(bArr2, 0, 8);
        long j4 = byteBufferWrap.getLong();
        byteBufferWrap.clear();
        this.f3427d = new UUID(j3, j4);
        dVar.a(bArr2, 0, 8);
        long j5 = byteBufferWrap.getLong();
        byteBufferWrap.clear();
        this.f3428e = new Date(j5);
        dVar.a(bArr2, 0, 2);
        char c4 = byteBufferWrap.getChar();
        if (c4 < 0 || c4 > 4096) {
            throw new IOException("Invalid extention header");
        }
        byte[] bArr5 = bArr;
        dVar.a(bArr5, 0, c4);
        this.f3429f = new String(bArr5, 0, c4, HTTP.UTF_8);
        dVar.read();
        byteBufferWrap.clear();
        dVar.a(bArr2, 0, 2);
        char c5 = byteBufferWrap.getChar();
        if (c5 < 0 || c5 > 4096) {
            throw new IOException("Invalid extention header");
        }
        dVar.a(bArr5, 0, c5);
        this.g = new String(bArr5, 0, c5, HTTP.UTF_8);
        dVar.read();
        byteBufferWrap.clear();
        dVar.a(bArr2, 0, 2);
        char c6 = byteBufferWrap.getChar();
        if (c6 < 0 || c6 > 4096) {
            throw new IOException("Invalid extention header");
        }
        dVar.a(bArr5, 0, c6);
        this.h = new String(bArr5, 0, c6, HTTP.UTF_8);
        dVar.read();
        byteBufferWrap.clear();
        dVar.a(bArr2, 0, 2);
        char c7 = byteBufferWrap.getChar();
        if (c7 < 0 || c7 > 4096) {
            throw new IOException("Invalid extention header");
        }
        dVar.a(bArr5, 0, c7);
        this.i = new String(bArr5, 0, c7, HTTP.UTF_8);
        dVar.read();
        byteBufferWrap.clear();
        dVar.a(bArr2, 0, 2);
        char c8 = byteBufferWrap.getChar();
        if (c8 < 0 || c8 > 4096) {
            throw new IOException("Invalid extention header");
        }
        dVar.a(bArr5, 0, c8);
        this.j = new String(bArr5, 0, c8, HTTP.UTF_8);
        dVar.read();
        byteBufferWrap.clear();
        dVar.a(bArr2, 0, 4);
        int i5 = byteBufferWrap.getInt();
        byteBufferWrap.clear();
        if (i5 < 0) {
            throw new IOException("Invalid extention header");
        }
        for (int i6 = 0; i6 < i5; i6++) {
            dVar.a(bArr2, 0, 2);
            char c9 = byteBufferWrap.getChar();
            if (c9 < 0 || c9 > 4096) {
                throw new IOException("Invalid extention header");
            }
            dVar.a(bArr5, 0, c9);
            String str = new String(bArr5, 0, c9, HTTP.UTF_8);
            dVar.read();
            byteBufferWrap.clear();
            dVar.a(bArr2, 0, 2);
            char c10 = byteBufferWrap.getChar();
            if (c10 < 0 || c10 > 4096) {
                throw new IOException("Invalid extention header");
            }
            dVar.a(bArr5, 0, c10);
            String str2 = new String(bArr5, 0, c10, HTTP.UTF_8);
            dVar.read();
            byteBufferWrap.clear();
            this.k.put(str, str2);
        }
        return true;
    }

    public UUID b() {
        return this.f3427d;
    }

    public Date c() {
        return this.f3428e;
    }

    public String d() {
        return this.k.get(new String());
    }

    @Override // jp.co.acrodea.drm.DRMInfo
    public String getContentId() {
        return this.g;
    }

    @Override // jp.co.acrodea.drm.DRMInfo
    public String getParentId() {
        return this.h;
    }

    @Override // jp.co.acrodea.drm.DRMInfo
    public String getServiceId() {
        return this.f3429f;
    }

    @Override // jp.co.acrodea.drm.DRMInfo
    public String getTitle(String str) {
        String str2 = (str == null || str.length() == 0) ? null : this.k.get(str);
        if (str2 != null) {
            return str2;
        }
        String str3 = this.k.get("en_US");
        if (str3 != null) {
            return str3;
        }
        for (Map.Entry<String, String> entry : this.k.entrySet()) {
            String key = entry.getKey();
            if (key != null && key.length() != 0) {
                return entry.getValue();
            }
        }
        return str3;
    }

    @Override // jp.co.acrodea.drm.DRMInfo
    public String getURI() {
        return this.j;
    }

    @Override // jp.co.acrodea.drm.DRMInfo
    public String getVersionName() {
        return this.i;
    }
}
