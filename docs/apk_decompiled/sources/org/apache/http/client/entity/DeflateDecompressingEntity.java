package org.apache.http.client.entity;

import java.io.IOException;
import java.io.InputStream;
import java.io.PushbackInputStream;
import java.util.zip.DataFormatException;
import java.util.zip.Inflater;
import java.util.zip.InflaterInputStream;
import org.apache.http.Header;
import org.apache.http.HttpEntity;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class DeflateDecompressingEntity extends DecompressingEntity {
    public DeflateDecompressingEntity(HttpEntity httpEntity) {
        super(httpEntity);
    }

    @Override // org.apache.http.entity.HttpEntityWrapper, org.apache.http.HttpEntity
    public Header getContentEncoding() {
        return null;
    }

    @Override // org.apache.http.entity.HttpEntityWrapper, org.apache.http.HttpEntity
    public long getContentLength() {
        return -1L;
    }

    @Override // org.apache.http.client.entity.DecompressingEntity
    InputStream getDecompressingInputStream(InputStream inputStream) throws IOException {
        int iInflate;
        byte[] bArr = new byte[6];
        PushbackInputStream pushbackInputStream = new PushbackInputStream(inputStream, bArr.length);
        int i = pushbackInputStream.read(bArr);
        if (i == -1) {
            throw new IOException("Unable to read the response");
        }
        byte[] bArr2 = new byte[1];
        Inflater inflater = new Inflater();
        while (true) {
            try {
                iInflate = inflater.inflate(bArr2);
                if (iInflate != 0) {
                    break;
                }
                if (inflater.finished()) {
                    throw new IOException("Unable to read the response");
                }
                if (inflater.needsDictionary()) {
                    break;
                }
                if (inflater.needsInput()) {
                    inflater.setInput(bArr);
                }
            } catch (DataFormatException unused) {
                pushbackInputStream.unread(bArr, 0, i);
                return new InflaterInputStream(pushbackInputStream, new Inflater(true));
            }
        }
        if (iInflate == -1) {
            throw new IOException("Unable to read the response");
        }
        pushbackInputStream.unread(bArr, 0, i);
        return new InflaterInputStream(pushbackInputStream);
    }
}
