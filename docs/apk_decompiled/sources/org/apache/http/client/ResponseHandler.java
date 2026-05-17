package org.apache.http.client;

import org.apache.http.HttpResponse;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface ResponseHandler<T> {
    T handleResponse(HttpResponse httpResponse);
}
