package jp.co.acrodea.drm;

import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.util.Collections;
import java.util.Enumeration;
import java.util.LinkedHashMap;
import java.util.Vector;
import java.util.zip.Inflater;
import java.util.zip.ZipEntry;
import java.util.zip.ZipException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ZipRA implements Closeable {
    private DRMRandomAccessRead arc_reader;
    private long archiver;
    private LinkedHashMap<String, c> file_map;
    private Vector<Inflater> inflater_stack;
    private boolean is_error;
    private boolean is_opened;
    private Object lock = this;

    static {
        System.loadLibrary("acdrm");
    }

    public ZipRA(DRMRandomAccessRead dRMRandomAccessRead) throws IOException {
        if (dRMRandomAccessRead == null) {
            throw new NullPointerException();
        }
        this.archiver = 0L;
        this.arc_reader = dRMRandomAccessRead;
        this.is_error = false;
        try {
            openZip();
            int totalNum = getTotalNum();
            this.file_map = new LinkedHashMap<>(totalNum);
            for (int i = 0; i < totalNum; i++) {
                String filename = getFilename(i);
                if (filename == null) {
                    this.is_error = true;
                    throw new ZipException();
                }
                c cVar = new c(filename);
                cVar.a(i);
                cVar.setMethod(getCompMethod(i));
                cVar.setCompressedSize(getCompSize(i));
                cVar.setSize(getUncompSize(i));
                this.file_map.put(filename, cVar);
            }
            this.inflater_stack = new Vector<>();
            this.is_opened = true;
        } catch (ZipException unused) {
            this.is_error = true;
            throw new ZipException();
        } catch (IOException unused2) {
            this.is_error = true;
            throw new IOException();
        }
    }

    private void a() {
        if (this.is_error) {
            throw new IllegalStateException("Invalid archive");
        }
        if (!this.is_opened) {
            throw new IllegalStateException("Already closed");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Inflater inflater) {
        synchronized (this.lock) {
            this.inflater_stack.add(inflater);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() throws IOException {
        if (!this.is_opened) {
            throw new IOException("Already closed");
        }
    }

    private Inflater c() {
        if (this.inflater_stack.isEmpty()) {
            return new Inflater(true);
        }
        Vector<Inflater> vector = this.inflater_stack;
        return vector.remove(vector.size() - 1);
    }

    private native void closeZip();

    private native int getCompMethod(int i);

    private native int getCompSize(int i);

    private native String getFilename(int i);

    private native int getTotalNum();

    private native int getUncompSize(int i);

    private native void openZip();

    private native void setFilePosition(int i);

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        synchronized (this.lock) {
            if (this.is_opened) {
                this.is_opened = false;
                closeZip();
            }
        }
    }

    public Enumeration<? extends ZipEntry> entries() {
        a();
        return Collections.enumeration(this.file_map.values());
    }

    protected void finalize() {
        close();
    }

    public ZipEntry getEntry(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        a();
        return this.file_map.get(str);
    }

    public InputStream getInputStream(ZipEntry zipEntry) throws ZipException {
        InputStream bVar;
        if (zipEntry == null) {
            throw new NullPointerException();
        }
        a();
        c cVar = this.file_map.get(zipEntry.getName());
        if (cVar == null) {
            throw new ZipException();
        }
        synchronized (this.lock) {
            int iA = cVar.a();
            int method = cVar.getMethod();
            long compressedSize = cVar.getCompressedSize();
            long size = cVar.getSize();
            if (iA < 0) {
                throw new ZipException();
            }
            if (method != 8) {
                if (method != 0) {
                    throw new ZipException("Unknown compression method");
                }
                compressedSize = size;
            }
            setFilePosition(iA);
            d dVar = new d(this, compressedSize);
            bVar = method == 8 ? new b(this, dVar, c()) : dVar;
        }
        return bVar;
    }

    public int size() {
        int totalNum;
        a();
        synchronized (this.lock) {
            totalNum = getTotalNum();
        }
        return totalNum;
    }
}
