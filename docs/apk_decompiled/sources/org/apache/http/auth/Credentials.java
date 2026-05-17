package org.apache.http.auth;

import java.security.Principal;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface Credentials {
    String getPassword();

    Principal getUserPrincipal();
}
