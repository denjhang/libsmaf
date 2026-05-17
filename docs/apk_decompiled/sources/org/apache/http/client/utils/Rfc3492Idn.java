package org.apache.http.client.utils;

import java.util.StringTokenizer;
import org.apache.http.annotation.Immutable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class Rfc3492Idn implements Idn {
    private static final String ACE_PREFIX = "xn--";
    private static final int base = 36;
    private static final int damp = 700;
    private static final char delimiter = '-';
    private static final int initial_bias = 72;
    private static final int initial_n = 128;
    private static final int skew = 38;
    private static final int tmax = 26;
    private static final int tmin = 1;

    private int adapt(int i, int i2, boolean z) {
        int i3 = z ? i / damp : i / 2;
        int i4 = i3 + (i3 / i2);
        int i5 = 0;
        while (i4 > 455) {
            i4 /= 35;
            i5 += base;
        }
        return i5 + ((i4 * base) / (i4 + skew));
    }

    private int digit(char c2) {
        if (c2 >= 'A' && c2 <= 'Z') {
            return c2 - 'A';
        }
        if (c2 >= 'a' && c2 <= 'z') {
            return c2 - 'a';
        }
        if (c2 >= '0' && c2 <= '9') {
            return (c2 - '0') + tmax;
        }
        throw new IllegalArgumentException("illegal digit: " + c2);
    }

    protected String decode(String str) {
        StringBuilder sb = new StringBuilder(str.length());
        int iLastIndexOf = str.lastIndexOf(45);
        int length = initial_n;
        int iAdapt = initial_bias;
        if (iLastIndexOf != -1) {
            sb.append(str.subSequence(0, iLastIndexOf));
            str = str.substring(iLastIndexOf + 1);
        }
        int i = 0;
        while (str.length() > 0) {
            int i2 = i;
            int i3 = 1;
            int i4 = base;
            while (str.length() != 0) {
                char cCharAt = str.charAt(0);
                str = str.substring(1);
                int iDigit = digit(cCharAt);
                i2 += iDigit * i3;
                int i5 = i4 <= iAdapt + 1 ? 1 : i4 >= iAdapt + tmax ? tmax : i4 - iAdapt;
                if (iDigit < i5) {
                    break;
                }
                i3 *= 36 - i5;
                i4 += base;
            }
            iAdapt = adapt(i2 - i, sb.length() + 1, i == 0);
            length += i2 / (sb.length() + 1);
            int length2 = i2 % (sb.length() + 1);
            sb.insert(length2, (char) length);
            i = length2 + 1;
        }
        return sb.toString();
    }

    @Override // org.apache.http.client.utils.Idn
    public String toUnicode(String str) {
        StringBuilder sb = new StringBuilder(str.length());
        StringTokenizer stringTokenizer = new StringTokenizer(str, ".");
        while (stringTokenizer.hasMoreTokens()) {
            String strNextToken = stringTokenizer.nextToken();
            if (sb.length() > 0) {
                sb.append('.');
            }
            if (strNextToken.startsWith(ACE_PREFIX)) {
                strNextToken = decode(strNextToken.substring(4));
            }
            sb.append(strNextToken);
        }
        return sb.toString();
    }
}
