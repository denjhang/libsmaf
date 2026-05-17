package jp.co.acrodea.drm.dumb;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import jp.co.acrodea.drm.DRMContent;
import jp.co.acrodea.drm.DRMRandomAccessRead;
import jp.co.acrodea.drm.URIEventListener;
import jp.co.acrodea.drm.URIStreamServer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements DRMContent {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f3304a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private File f3305b;

    public b(a aVar, File file) {
        this.f3304a = aVar;
        this.f3305b = file;
    }

    @Override // jp.co.acrodea.drm.DRMContent, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public URIStreamServer createURIStreamServer(URIEventListener uRIEventListener, String str) {
        throw new UnsupportedOperationException();
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public InputStream getContentInputStream() {
        return new FileInputStream(this.f3305b);
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public long getContentLength() throws IOException {
        if (this.f3305b.isFile()) {
            return this.f3305b.length();
        }
        throw new IOException("Not a file");
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public String getContentMIMEType() {
        return "application/octet-stream";
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public DRMRandomAccessRead getContentRandomAccessRead() {
        throw new UnsupportedOperationException();
    }

    @Override // jp.co.acrodea.drm.DRMContent
    public boolean validateContent() {
        return false;
    }
}
