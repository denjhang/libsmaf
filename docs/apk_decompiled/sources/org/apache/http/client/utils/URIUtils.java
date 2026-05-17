package org.apache.http.client.utils;

import java.net.URI;
import java.net.URISyntaxException;
import java.util.Stack;
import org.apache.http.HttpHost;
import org.apache.http.annotation.Immutable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class URIUtils {
    private URIUtils() {
    }

    public static URI createURI(String str, String str2, int i, String str3, String str4, String str5) {
        StringBuilder sb = new StringBuilder();
        if (str2 != null) {
            if (str != null) {
                sb.append(str);
                sb.append("://");
            }
            sb.append(str2);
            if (i > 0) {
                sb.append(':');
                sb.append(i);
            }
        }
        if (str3 == null || !str3.startsWith("/")) {
            sb.append('/');
        }
        if (str3 != null) {
            sb.append(str3);
        }
        if (str4 != null) {
            sb.append('?');
            sb.append(str4);
        }
        if (str5 != null) {
            sb.append('#');
            sb.append(str5);
        }
        return new URI(sb.toString());
    }

    public static HttpHost extractHost(URI uri) {
        int iIndexOf;
        if (uri == null || !uri.isAbsolute()) {
            return null;
        }
        int port = uri.getPort();
        String host = uri.getHost();
        if (host == null && (host = uri.getAuthority()) != null) {
            int iIndexOf2 = host.indexOf(64);
            if (iIndexOf2 >= 0) {
                int i = iIndexOf2 + 1;
                host = host.length() > i ? host.substring(i) : null;
            }
            if (host != null && (iIndexOf = host.indexOf(58)) >= 0) {
                int i2 = iIndexOf + 1;
                if (i2 < host.length()) {
                    port = Integer.parseInt(host.substring(i2));
                }
                host = host.substring(0, iIndexOf);
            }
        }
        String scheme = uri.getScheme();
        if (host != null) {
            return new HttpHost(host, port, scheme);
        }
        return null;
    }

    private static String normalizePath(String str) {
        if (str == null) {
            return null;
        }
        int i = 0;
        while (i < str.length() && str.charAt(i) == '/') {
            i++;
        }
        return i > 1 ? str.substring(i - 1) : str;
    }

    private static URI removeDotSegments(URI uri) {
        String path = uri.getPath();
        if (path == null || path.indexOf("/.") == -1) {
            return uri;
        }
        String[] strArrSplit = path.split("/");
        Stack<String> stack = new Stack();
        for (int i = 0; i < strArrSplit.length; i++) {
            if (strArrSplit[i].length() != 0 && !".".equals(strArrSplit[i])) {
                if (!"..".equals(strArrSplit[i])) {
                    stack.push(strArrSplit[i]);
                } else if (!stack.isEmpty()) {
                    stack.pop();
                }
            }
        }
        StringBuilder sb = new StringBuilder();
        for (String str : stack) {
            sb.append('/');
            sb.append(str);
        }
        try {
            return new URI(uri.getScheme(), uri.getAuthority(), sb.toString(), uri.getQuery(), uri.getFragment());
        } catch (URISyntaxException e2) {
            throw new IllegalArgumentException(e2);
        }
    }

    public static URI resolve(URI uri, String str) {
        return resolve(uri, URI.create(str));
    }

    public static URI resolve(URI uri, URI uri2) {
        if (uri == null) {
            throw new IllegalArgumentException("Base URI may nor be null");
        }
        if (uri2 == null) {
            throw new IllegalArgumentException("Reference URI may nor be null");
        }
        String string = uri2.toString();
        if (string.startsWith("?")) {
            return resolveReferenceStartingWithQueryString(uri, uri2);
        }
        boolean z = string.length() == 0;
        if (z) {
            uri2 = URI.create("#");
        }
        URI uriResolve = uri.resolve(uri2);
        if (z) {
            String string2 = uriResolve.toString();
            uriResolve = URI.create(string2.substring(0, string2.indexOf(35)));
        }
        return removeDotSegments(uriResolve);
    }

    private static URI resolveReferenceStartingWithQueryString(URI uri, URI uri2) {
        String string = uri.toString();
        if (string.indexOf(63) > -1) {
            string = string.substring(0, string.indexOf(63));
        }
        return URI.create(string + uri2.toString());
    }

    public static URI rewriteURI(URI uri, HttpHost httpHost) {
        return rewriteURI(uri, httpHost, false);
    }

    public static URI rewriteURI(URI uri, HttpHost httpHost, boolean z) {
        if (uri == null) {
            throw new IllegalArgumentException("URI may nor be null");
        }
        if (httpHost != null) {
            return createURI(httpHost.getSchemeName(), httpHost.getHostName(), httpHost.getPort(), normalizePath(uri.getRawPath()), uri.getRawQuery(), z ? null : uri.getRawFragment());
        }
        return createURI(null, null, -1, normalizePath(uri.getRawPath()), uri.getRawQuery(), z ? null : uri.getRawFragment());
    }
}
