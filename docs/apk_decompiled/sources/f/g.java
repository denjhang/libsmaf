package f;

import java.nio.channels.WritableByteChannel;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface g extends y, WritableByteChannel {
    g d(String str);

    g f(long j);

    @Override // f.y, java.io.Flushable
    void flush();

    f o();

    g w();

    g write(byte[] bArr);

    g write(byte[] bArr, int i, int i2);

    g writeByte(int i);

    g writeInt(int i);

    g writeShort(int i);
}
