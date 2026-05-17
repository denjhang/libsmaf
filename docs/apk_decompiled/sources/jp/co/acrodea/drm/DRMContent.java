package jp.co.acrodea.drm;

import java.io.Closeable;
import java.io.InputStream;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface DRMContent extends Closeable {
    @Override // java.io.Closeable, java.lang.AutoCloseable
    void close();

    URIStreamServer createURIStreamServer(URIEventListener uRIEventListener, String str);

    InputStream getContentInputStream();

    long getContentLength();

    String getContentMIMEType();

    DRMRandomAccessRead getContentRandomAccessRead();

    boolean validateContent();
}
