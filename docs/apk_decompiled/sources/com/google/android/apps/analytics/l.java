package com.google.android.apps.analytics;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f965a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final String f966b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final double f967c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final double f968d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final double f969e;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f970a;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final double f972c;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private String f971b = null;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private double f973d = 0.0d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private double f974e = 0.0d;

        public a(String str, double d2) {
            if (str == null || str.trim().length() == 0) {
                throw new IllegalArgumentException("orderId must not be empty or null");
            }
            this.f970a = str;
            this.f972c = d2;
        }

        public a a(double d2) {
            this.f974e = d2;
            return this;
        }

        public a a(String str) {
            this.f971b = str;
            return this;
        }

        public l a() {
            return new l(this);
        }

        public a b(double d2) {
            this.f973d = d2;
            return this;
        }
    }

    private l(a aVar) {
        this.f965a = aVar.f970a;
        this.f967c = aVar.f972c;
        this.f966b = aVar.f971b;
        this.f968d = aVar.f973d;
        this.f969e = aVar.f974e;
    }

    String a() {
        return this.f965a;
    }

    double b() {
        return this.f969e;
    }

    String c() {
        return this.f966b;
    }

    double d() {
        return this.f967c;
    }

    double e() {
        return this.f968d;
    }
}
