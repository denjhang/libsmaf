package org.apache.http.client.utils;

import java.io.UnsupportedEncodingException;
import java.net.URI;
import java.net.URLDecoder;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import org.apache.http.Header;
import org.apache.http.HeaderElement;
import org.apache.http.HttpEntity;
import org.apache.http.NameValuePair;
import org.apache.http.annotation.Immutable;
import org.apache.http.message.BasicNameValuePair;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class URLEncodedUtils {
    public static final String CONTENT_TYPE = "application/x-www-form-urlencoded";
    private static final String NAME_VALUE_SEPARATOR = "=";
    private static final String PARAMETER_SEPARATOR = "&";

    private static String decode(String str, String str2) {
        if (str2 == null) {
            str2 = "ISO-8859-1";
        }
        try {
            return URLDecoder.decode(str, str2);
        } catch (UnsupportedEncodingException e2) {
            throw new IllegalArgumentException(e2);
        }
    }

    private static String encode(String str, String str2) {
        if (str2 == null) {
            str2 = "ISO-8859-1";
        }
        try {
            return URLEncoder.encode(str, str2);
        } catch (UnsupportedEncodingException e2) {
            throw new IllegalArgumentException(e2);
        }
    }

    public static String format(List<? extends NameValuePair> list, String str) {
        StringBuilder sb = new StringBuilder();
        for (NameValuePair nameValuePair : list) {
            String strEncode = encode(nameValuePair.getName(), str);
            String value = nameValuePair.getValue();
            String strEncode2 = value != null ? encode(value, str) : "";
            if (sb.length() > 0) {
                sb.append(PARAMETER_SEPARATOR);
            }
            sb.append(strEncode);
            sb.append(NAME_VALUE_SEPARATOR);
            sb.append(strEncode2);
        }
        return sb.toString();
    }

    public static boolean isEncoded(HttpEntity httpEntity) {
        Header contentType = httpEntity.getContentType();
        if (contentType != null) {
            HeaderElement[] elements = contentType.getElements();
            if (elements.length > 0) {
                return elements[0].getName().equalsIgnoreCase(CONTENT_TYPE);
            }
        }
        return false;
    }

    public static List<NameValuePair> parse(URI uri, String str) {
        List<NameValuePair> listEmptyList = Collections.emptyList();
        String rawQuery = uri.getRawQuery();
        if (rawQuery == null || rawQuery.length() <= 0) {
            return listEmptyList;
        }
        ArrayList arrayList = new ArrayList();
        parse(arrayList, new Scanner(rawQuery), str);
        return arrayList;
    }

    /* JADX WARN: Removed duplicated region for block: B:9:0x0026  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.util.List<org.apache.http.NameValuePair> parse(org.apache.http.HttpEntity r5) {
        /*
            java.util.List r0 = java.util.Collections.emptyList()
            org.apache.http.Header r1 = r5.getContentType()
            r2 = 0
            if (r1 == 0) goto L26
            org.apache.http.HeaderElement[] r1 = r1.getElements()
            int r3 = r1.length
            if (r3 <= 0) goto L26
            r3 = 0
            r1 = r1[r3]
            java.lang.String r3 = r1.getName()
            java.lang.String r4 = "charset"
            org.apache.http.NameValuePair r1 = r1.getParameterByName(r4)
            if (r1 == 0) goto L27
            java.lang.String r2 = r1.getValue()
            goto L27
        L26:
            r3 = r2
        L27:
            if (r3 == 0) goto L4c
            java.lang.String r1 = "application/x-www-form-urlencoded"
            boolean r1 = r3.equalsIgnoreCase(r1)
            if (r1 == 0) goto L4c
            java.lang.String r1 = "ASCII"
            java.lang.String r5 = org.apache.http.util.EntityUtils.toString(r5, r1)
            if (r5 == 0) goto L4c
            int r1 = r5.length()
            if (r1 <= 0) goto L4c
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Scanner r1 = new java.util.Scanner
            r1.<init>(r5)
            parse(r0, r1, r2)
        L4c:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: org.apache.http.client.utils.URLEncodedUtils.parse(org.apache.http.HttpEntity):java.util.List");
    }

    public static void parse(List<NameValuePair> list, Scanner scanner, String str) {
        scanner.useDelimiter(PARAMETER_SEPARATOR);
        while (scanner.hasNext()) {
            String[] strArrSplit = scanner.next().split(NAME_VALUE_SEPARATOR);
            if (strArrSplit.length == 0 || strArrSplit.length > 2) {
                throw new IllegalArgumentException("bad parameter");
            }
            String strDecode = decode(strArrSplit[0], str);
            String strDecode2 = null;
            if (strArrSplit.length == 2) {
                strDecode2 = decode(strArrSplit[1], str);
            }
            list.add(new BasicNameValuePair(strDecode, strDecode2));
        }
    }
}
