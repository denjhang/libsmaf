package jp.co.ymm.android.ringtone.b;

import java.util.Collection;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String[] f3512a = {"SDFF", "SDFM"};

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3513a = null;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f3514b = null;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public Collection<String> f3515c = null;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public String f3516d = null;
    }

    public enum b {
        SMAF,
        OGG,
        MP3,
        MP4
    }

    int a();

    a a(a aVar);

    boolean b();

    String c();

    boolean d();

    boolean e();

    byte[] f();

    a getAttributes();

    b getType();

    boolean isSecure();
}
