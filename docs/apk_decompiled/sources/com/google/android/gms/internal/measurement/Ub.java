package com.google.android.gms.internal.measurement;

import java.io.IOException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class Ub extends IOException {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private InterfaceC0219uc f1580a;

    public Ub(String str) {
        super(str);
        this.f1580a = null;
    }

    static Ub a() {
        return new Ub("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
    }

    static Ub b() {
        return new Ub("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
    }

    static Ub c() {
        return new Ub("Protocol message contained an invalid tag (zero).");
    }

    static Tb d() {
        return new Tb("Protocol message tag had invalid wire type.");
    }

    static Ub e() {
        return new Ub("Failed to parse the message.");
    }

    static Ub f() {
        return new Ub("Protocol message had invalid UTF-8.");
    }
}
