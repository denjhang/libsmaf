package e;

import java.nio.charset.Charset;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Pattern f2815a = Pattern.compile("([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)/([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)");

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Pattern f2816b = Pattern.compile(";\\s*(?:([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)=(?:([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)|\"([^\"]*)\"))?");

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final String f2817c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final String f2818d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final String f2819e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final String f2820f;

    private C(String str, String str2, String str3, String str4) {
        this.f2817c = str;
        this.f2818d = str2;
        this.f2819e = str3;
        this.f2820f = str4;
    }

    public static C a(String str) {
        Matcher matcher = f2815a.matcher(str);
        if (!matcher.lookingAt()) {
            return null;
        }
        String lowerCase = matcher.group(1).toLowerCase(Locale.US);
        String lowerCase2 = matcher.group(2).toLowerCase(Locale.US);
        Matcher matcher2 = f2816b.matcher(str);
        String str2 = null;
        for (int iEnd = matcher.end(); iEnd < str.length(); iEnd = matcher2.end()) {
            matcher2.region(iEnd, str.length());
            if (!matcher2.lookingAt()) {
                return null;
            }
            String strGroup = matcher2.group(1);
            if (strGroup != null && strGroup.equalsIgnoreCase("charset")) {
                String strGroup2 = matcher2.group(2);
                if (strGroup2 == null) {
                    strGroup2 = matcher2.group(3);
                } else if (strGroup2.startsWith("'") && strGroup2.endsWith("'") && strGroup2.length() > 2) {
                    strGroup2 = strGroup2.substring(1, strGroup2.length() - 1);
                }
                if (str2 != null && !strGroup2.equalsIgnoreCase(str2)) {
                    return null;
                }
                str2 = strGroup2;
            }
        }
        return new C(str, lowerCase, lowerCase2, str2);
    }

    public Charset a(Charset charset) {
        try {
            return this.f2820f != null ? Charset.forName(this.f2820f) : charset;
        } catch (IllegalArgumentException unused) {
            return charset;
        }
    }

    public boolean equals(Object obj) {
        return (obj instanceof C) && ((C) obj).f2817c.equals(this.f2817c);
    }

    public int hashCode() {
        return this.f2817c.hashCode();
    }

    public String toString() {
        return this.f2817c;
    }
}
