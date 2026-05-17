package jp.co.acrodea.runtime.drm.agent;

import java.io.IOException;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.atomic.AtomicInteger;
import jp.co.acrodea.drm.DRMRandomAccessRead;
import jp.co.acrodea.drm.URIEventListener;
import jp.co.acrodea.drm.URIStreamServer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class m implements Runnable, URIStreamServer {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private URIEventListener f3370a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private p f3371b;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private DRMRandomAccessRead f3375f;
    private long i;
    private String j;
    private boolean o;
    private long g = 0;
    private Object h = new Object();
    private int m = 0;
    private AtomicInteger n = new AtomicInteger();
    private Object k = new Object();
    private Object l = new Object();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Queue<o> f3373d = new ConcurrentLinkedQueue();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Queue<o> f3374e = new ConcurrentLinkedQueue();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private Thread f3372c = new Thread(this);

    public m(URIEventListener uRIEventListener, DRMRandomAccessRead dRMRandomAccessRead, long j, String str) {
        this.f3370a = uRIEventListener;
        this.f3375f = dRMRandomAccessRead;
        this.i = j;
        this.j = str;
        this.f3372c.start();
        this.f3371b = new p(this);
        this.f3371b.start();
    }

    public void a(int i, String str) {
        o oVar = new o(i, str);
        synchronized (this.l) {
            ((i == 11 || i == 13 || i == 12) ? this.f3374e : this.f3373d).add(oVar);
        }
        synchronized (this.k) {
            this.k.notify();
        }
    }

    @Override // jp.co.acrodea.drm.URIStreamServer, java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        if (this.m == 7) {
            return;
        }
        this.f3371b.a();
        synchronized (this.l) {
            this.f3374e.clear();
            this.f3373d.clear();
            this.f3374e.add(new o(13, null));
            this.f3374e.add(new o(-1, null));
        }
        synchronized (this.k) {
            this.k.notify();
        }
    }

    protected void finalize() {
        this.o = true;
        try {
            close();
        } catch (IOException unused) {
        }
    }

    @Override // jp.co.acrodea.drm.URIStreamServer
    public int getConnectionNum() {
        return this.n.get();
    }

    @Override // jp.co.acrodea.drm.URIStreamServer
    public URIEventListener getListener() {
        return this.f3370a;
    }

    @Override // jp.co.acrodea.drm.URIStreamServer
    public int getStatus() {
        return this.m;
    }

    @Override // jp.co.acrodea.drm.URIStreamServer
    public void resume() throws IOException {
        int i = this.m;
        if (i == 7) {
            throw new IOException("Already closed.");
        }
        if (i == 8) {
            throw new IOException("Error status.");
        }
        if (i == 6 || i == 5) {
            throw new IOException("Already shutdowned.");
        }
        a(12, (String) null);
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0056  */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void run() {
        /*
            Method dump skipped, instruction units count: 304
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.agent.m.run():void");
    }

    @Override // jp.co.acrodea.drm.URIStreamServer
    public void shutdown() throws IOException {
        int i = this.m;
        if (i == 7) {
            throw new IOException("Already closed.");
        }
        if (i == 8) {
            new n(this).start();
        } else {
            a(13, (String) null);
        }
    }

    @Override // jp.co.acrodea.drm.URIStreamServer
    public void suspend() throws IOException {
        int i = this.m;
        if (i == 7) {
            throw new IOException("Already closed.");
        }
        if (i == 8) {
            throw new IOException("Error status.");
        }
        if (i == 6 || i == 5) {
            throw new IOException("Already shutdowned.");
        }
        a(11, (String) null);
    }
}
