package jp.co.ymm.android.ringtone.b;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.b.u;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class l extends u {
    l(File file) {
        this(file, new j());
    }

    l(File file, u.b bVar) {
        super(file, bVar);
    }

    l(File file, byte[] bArr) throws IOException {
        this(file, new k());
        FileOutputStream fileOutputStream = new FileOutputStream(n());
        try {
            fileOutputStream.write(bArr);
        } finally {
            fileOutputStream.close();
        }
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    long h() throws IOException {
        if (n().exists()) {
            return n().length();
        }
        InputStream inputStreamA = g().a(n());
        jp.co.ymm.android.ringtone.util.g.a(inputStreamA != null);
        try {
            return inputStreamA.available();
        } finally {
            inputStreamA.close();
        }
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    c.b i() {
        return jp.co.ymm.android.ringtone.util.z.a(g().a(n()));
    }

    @Override // jp.co.ymm.android.ringtone.b.c
    public boolean isSecure() {
        return false;
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    void l() {
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    boolean m() {
        return true;
    }

    @Override // jp.co.ymm.android.ringtone.b.u
    Class<?> o() {
        return l.class;
    }
}
