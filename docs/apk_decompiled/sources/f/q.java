package f;

import java.io.IOException;
import java.net.Socket;
import java.net.SocketTimeoutException;
import java.util.logging.Level;
import java.util.logging.Logger;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class q extends C0426c {
    final /* synthetic */ Socket k;

    q(Socket socket) {
        this.k = socket;
    }

    @Override // f.C0426c
    protected IOException b(IOException iOException) {
        SocketTimeoutException socketTimeoutException = new SocketTimeoutException("timeout");
        if (iOException != null) {
            socketTimeoutException.initCause(iOException);
        }
        return socketTimeoutException;
    }

    @Override // f.C0426c
    protected void j() {
        Level level;
        StringBuilder sb;
        Logger logger;
        Throwable th;
        try {
            this.k.close();
        } catch (AssertionError e2) {
            if (!r.a(e2)) {
                throw e2;
            }
            Logger logger2 = r.f3264a;
            level = Level.WARNING;
            sb = new StringBuilder();
            th = e2;
            logger = logger2;
            sb.append("Failed to close timed out socket ");
            sb.append(this.k);
            logger.log(level, sb.toString(), th);
        } catch (Exception e3) {
            Logger logger3 = r.f3264a;
            level = Level.WARNING;
            sb = new StringBuilder();
            th = e3;
            logger = logger3;
            sb.append("Failed to close timed out socket ");
            sb.append(this.k);
            logger.log(level, sb.toString(), th);
        }
    }
}
