package com.google.android.apps.analytics;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f930a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f931b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f932c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final int f933d;

    public b(int i, String str, String str2, int i2) {
        if (i2 != 1 && i2 != 2 && i2 != 3) {
            throw new IllegalArgumentException("Invalid Scope:" + i2);
        }
        if (i < 1 || i > 50) {
            throw new IllegalArgumentException("Index must be between 1 and 50, inclusive.");
        }
        if (str == null || str.length() == 0) {
            throw new IllegalArgumentException("Invalid argument for name:  Cannot be empty");
        }
        if (str2 == null || str2.length() == 0) {
            throw new IllegalArgumentException("Invalid argument for value:  Cannot be empty");
        }
        int length = a.a(str + str2).length();
        if (length > 64) {
            throw new IllegalArgumentException("Encoded form of name and value must not exceed 64 characters combined.  Character length: " + length);
        }
        this.f933d = i;
        this.f930a = i2;
        this.f931b = str;
        this.f932c = str2;
    }

    public int a() {
        return this.f933d;
    }

    public String b() {
        return this.f931b;
    }

    public int c() {
        return this.f930a;
    }

    public String d() {
        return this.f932c;
    }
}
