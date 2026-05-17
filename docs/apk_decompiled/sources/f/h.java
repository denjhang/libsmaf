package f;

import java.io.InputStream;
import java.nio.channels.ReadableByteChannel;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface h extends z, ReadableByteChannel {
    long a(byte b2);

    String a(Charset charset);

    boolean a(long j, i iVar);

    i b(long j);

    String c(long j);

    byte[] d(long j);

    void e(long j);

    f o();

    boolean q();

    String r();

    byte readByte();

    void readFully(byte[] bArr);

    int readInt();

    short readShort();

    int s();

    void skip(long j);

    short t();

    long u();

    InputStream v();
}
