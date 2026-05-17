package jp.co.acrodea.drm;

import java.io.Closeable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface URIStreamServer extends Closeable {
    public static final int STATUS_CLOSED = 7;
    public static final int STATUS_ERROR = 8;
    public static final int STATUS_OPENING = 0;
    public static final int STATUS_READY = 1;
    public static final int STATUS_RESUMING = 4;
    public static final int STATUS_SHUTDOWNED = 6;
    public static final int STATUS_SHUTDOWNING = 5;
    public static final int STATUS_SUSPENDED = 3;
    public static final int STATUS_SUSPENDING = 2;

    @Override // java.io.Closeable, java.lang.AutoCloseable
    void close();

    int getConnectionNum();

    URIEventListener getListener();

    int getStatus();

    void resume();

    void shutdown();

    void suspend();
}
