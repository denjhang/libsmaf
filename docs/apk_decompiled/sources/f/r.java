package f;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.logging.Logger;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class r {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final Logger f3264a = Logger.getLogger(r.class.getName());

    private r() {
    }

    public static g a(y yVar) {
        return new s(yVar);
    }

    public static h a(z zVar) {
        return new u(zVar);
    }

    private static y a(OutputStream outputStream, B b2) {
        if (outputStream == null) {
            throw new IllegalArgumentException("out == null");
        }
        if (b2 != null) {
            return new o(b2, outputStream);
        }
        throw new IllegalArgumentException("timeout == null");
    }

    public static y a(Socket socket) throws IOException {
        if (socket == null) {
            throw new IllegalArgumentException("socket == null");
        }
        if (socket.getOutputStream() == null) {
            throw new IOException("socket's output stream == null");
        }
        C0426c c0426cC = c(socket);
        return c0426cC.a(a(socket.getOutputStream(), c0426cC));
    }

    public static z a(InputStream inputStream) {
        return a(inputStream, new B());
    }

    private static z a(InputStream inputStream, B b2) {
        if (inputStream == null) {
            throw new IllegalArgumentException("in == null");
        }
        if (b2 != null) {
            return new p(b2, inputStream);
        }
        throw new IllegalArgumentException("timeout == null");
    }

    static boolean a(AssertionError assertionError) {
        return (assertionError.getCause() == null || assertionError.getMessage() == null || !assertionError.getMessage().contains("getsockname failed")) ? false : true;
    }

    public static z b(Socket socket) throws IOException {
        if (socket == null) {
            throw new IllegalArgumentException("socket == null");
        }
        if (socket.getInputStream() == null) {
            throw new IOException("socket's input stream == null");
        }
        C0426c c0426cC = c(socket);
        return c0426cC.a(a(socket.getInputStream(), c0426cC));
    }

    private static C0426c c(Socket socket) {
        return new q(socket);
    }
}
