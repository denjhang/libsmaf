package org.apache.http.conn;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface ConnectionReleaseTrigger {
    void abortConnection();

    void releaseConnection();
}
