package com.google.android.apps.analytics;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f941a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f942b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f943c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final String f944d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final double f945e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final long f946f;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f947a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final String f948b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final double f949c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final long f950d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private String f951e = null;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private String f952f = null;

        public a(String str, String str2, double d2, long j) {
            if (str == null || str.trim().length() == 0) {
                throw new IllegalArgumentException("orderId must not be empty or null");
            }
            if (str2 == null || str2.trim().length() == 0) {
                throw new IllegalArgumentException("itemSKU must not be empty or null");
            }
            this.f947a = str;
            this.f948b = str2;
            this.f949c = d2;
            this.f950d = j;
        }

        public a a(String str) {
            this.f952f = str;
            return this;
        }

        public h a() {
            return new h(this);
        }

        public a b(String str) {
            this.f951e = str;
            return this;
        }
    }

    private h(a aVar) {
        this.f941a = aVar.f947a;
        this.f942b = aVar.f948b;
        this.f945e = aVar.f949c;
        this.f946f = aVar.f950d;
        this.f943c = aVar.f951e;
        this.f944d = aVar.f952f;
    }

    String a() {
        return this.f944d;
    }

    long b() {
        return this.f946f;
    }

    String c() {
        return this.f943c;
    }

    double d() {
        return this.f945e;
    }

    String e() {
        return this.f942b;
    }

    String f() {
        return this.f941a;
    }
}
