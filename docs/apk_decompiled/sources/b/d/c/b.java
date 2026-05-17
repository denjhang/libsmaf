package b.d.c;

import android.util.Log;
import java.io.Writer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b extends Writer {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f747a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private StringBuilder f748b = new StringBuilder(128);

    public b(String str) {
        this.f747a = str;
    }

    private void a() {
        if (this.f748b.length() > 0) {
            Log.d(this.f747a, this.f748b.toString());
            StringBuilder sb = this.f748b;
            sb.delete(0, sb.length());
        }
    }

    @Override // java.io.Writer, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        a();
    }

    @Override // java.io.Writer, java.io.Flushable
    public void flush() {
        a();
    }

    @Override // java.io.Writer
    public void write(char[] cArr, int i, int i2) {
        for (int i3 = 0; i3 < i2; i3++) {
            char c2 = cArr[i + i3];
            if (c2 == '\n') {
                a();
            } else {
                this.f748b.append(c2);
            }
        }
    }
}
