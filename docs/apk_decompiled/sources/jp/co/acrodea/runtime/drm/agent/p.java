package jp.co.acrodea.runtime.drm.agent;

import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.SocketTimeoutException;
import org.apache.http.HttpStatus;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class p extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ m f3379a;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private ServerSocket f3381c;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f3380b = false;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private long f3382d = 0;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private byte[] f3383e = new byte[jp.co.acrodea.runtime.drm.h.CLIENT_AUTOGEN_KEYBIT];

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private String f3384f = null;

    public p(m mVar) {
        this.f3379a = mVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x01cd, code lost:
    
        r9 = r9 + r13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x01ce, code lost:
    
        r2.write(r18.f3383e, 0, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x01d4, code lost:
    
        r5 = r5 - r13;
     */
    /* JADX WARN: Removed duplicated region for block: B:117:0x0230 A[Catch: IOException -> 0x0233, TRY_ENTER, TRY_LEAVE, TryCatch #7 {IOException -> 0x0233, blocks: (B:117:0x0230, B:79:0x01bc), top: B:149:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:151:0x0229 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:160:0x0241 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:166:0x023a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:189:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(java.net.Socket r19) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 583
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.acrodea.runtime.drm.agent.p.a(java.net.Socket):void");
    }

    public void a() {
        synchronized (this.f3379a.h) {
            this.f3380b = true;
        }
    }

    public synchronized void b() {
        synchronized (this) {
            if (this.f3381c != null) {
                try {
                    this.f3381c.close();
                } catch (IOException unused) {
                }
            }
        }
        synchronized (this.f3379a.k) {
            this.f3379a.k.notify();
        }
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        Socket socketAccept;
        if (this.f3380b) {
            return;
        }
        try {
            this.f3381c = new ServerSocket();
            this.f3381c.bind(new InetSocketAddress(InetAddress.getLocalHost(), 0), 10);
            int localPort = this.f3381c.getLocalPort();
            this.f3381c.setSoTimeout(HttpStatus.SC_INTERNAL_SERVER_ERROR);
            this.f3384f = r.a(26);
            this.f3379a.a(3, "http://localhost:" + Integer.toString(localPort) + '/' + this.f3384f);
            while (!this.f3380b) {
                try {
                    socketAccept = this.f3381c.accept();
                } catch (SocketTimeoutException unused) {
                }
                if (this.f3380b) {
                    break;
                } else {
                    new q(this, socketAccept).start();
                }
            }
        } catch (IOException e2) {
            this.f3379a.a(1, "Internal Server Error: " + e2.getMessage());
        }
        b();
    }
}
