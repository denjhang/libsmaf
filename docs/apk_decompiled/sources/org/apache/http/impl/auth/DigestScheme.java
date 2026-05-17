package org.apache.http.impl.auth;

import java.security.MessageDigest;
import java.security.SecureRandom;
import java.util.ArrayList;
import java.util.Formatter;
import java.util.Locale;
import java.util.StringTokenizer;
import org.apache.http.Header;
import org.apache.http.HttpRequest;
import org.apache.http.annotation.NotThreadSafe;
import org.apache.http.auth.AuthenticationException;
import org.apache.http.auth.Credentials;
import org.apache.http.auth.MalformedChallengeException;
import org.apache.http.auth.params.AuthParams;
import org.apache.http.message.BasicHeaderValueFormatter;
import org.apache.http.message.BasicNameValuePair;
import org.apache.http.message.BufferedHeader;
import org.apache.http.util.CharArrayBuffer;
import org.apache.http.util.EncodingUtils;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@NotThreadSafe
public class DigestScheme extends RFC2617Scheme {
    private static final char[] HEXADECIMAL = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    private static final int QOP_AUTH = 2;
    private static final int QOP_AUTH_INT = 1;
    private static final int QOP_MISSING = 0;
    private static final int QOP_UNKNOWN = -1;
    private String a1;
    private String a2;
    private String cnonce;
    private boolean complete = false;
    private String lastNonce;
    private long nounceCount;

    public static String createCnonce() {
        byte[] bArr = new byte[8];
        new SecureRandom().nextBytes(bArr);
        return encode(bArr);
    }

    private Header createDigestHeader(Credentials credentials) throws AuthenticationException {
        String str;
        byte b2;
        byte b3;
        String str2;
        String str3;
        String str4;
        String parameter = getParameter("uri");
        String parameter2 = getParameter("realm");
        String parameter3 = getParameter("nonce");
        String parameter4 = getParameter("opaque");
        String parameter5 = getParameter("methodname");
        String parameter6 = getParameter("algorithm");
        if (parameter == null) {
            throw new IllegalStateException("URI may not be null");
        }
        if (parameter2 == null) {
            throw new IllegalStateException("Realm may not be null");
        }
        if (parameter3 == null) {
            throw new IllegalStateException("Nonce may not be null");
        }
        String parameter7 = getParameter("qop");
        if (parameter7 != null) {
            str = "opaque";
            StringTokenizer stringTokenizer = new StringTokenizer(parameter7, ",");
            while (true) {
                if (!stringTokenizer.hasMoreTokens()) {
                    b3 = -1;
                    break;
                }
                if (stringTokenizer.nextToken().trim().equals("auth")) {
                    b3 = 2;
                    break;
                }
            }
            b2 = -1;
        } else {
            str = "opaque";
            b2 = -1;
            b3 = 0;
        }
        if (b3 == b2) {
            throw new AuthenticationException("None of the qop methods is supported: " + parameter7);
        }
        if (parameter6 == null) {
            parameter6 = "MD5";
        }
        String parameter8 = getParameter("charset");
        if (parameter8 == null) {
            parameter8 = "ISO-8859-1";
        }
        String str5 = parameter6.equalsIgnoreCase("MD5-sess") ? "MD5" : parameter6;
        try {
            MessageDigest messageDigestCreateMessageDigest = createMessageDigest(str5);
            String name = credentials.getUserPrincipal().getName();
            String password = credentials.getPassword();
            if (parameter3.equals(this.lastNonce)) {
                str2 = parameter;
                this.nounceCount++;
            } else {
                str2 = parameter;
                this.nounceCount = 1L;
                this.cnonce = null;
                this.lastNonce = parameter3;
            }
            StringBuilder sb = new StringBuilder(256);
            new Formatter(sb, Locale.US).format("%08x", Long.valueOf(this.nounceCount));
            String string = sb.toString();
            if (this.cnonce == null) {
                this.cnonce = createCnonce();
            }
            this.a1 = null;
            this.a2 = null;
            if (parameter6.equalsIgnoreCase("MD5-sess")) {
                sb.setLength(0);
                sb.append(name);
                sb.append(':');
                sb.append(parameter2);
                sb.append(':');
                sb.append(password);
                String strEncode = encode(messageDigestCreateMessageDigest.digest(EncodingUtils.getBytes(sb.toString(), parameter8)));
                sb.setLength(0);
                sb.append(strEncode);
                sb.append(':');
                str3 = parameter3;
                sb.append(str3);
                sb.append(':');
                sb.append(this.cnonce);
                this.a1 = sb.toString();
            } else {
                str3 = parameter3;
                sb.setLength(0);
                sb.append(name);
                sb.append(':');
                sb.append(parameter2);
                sb.append(':');
                sb.append(password);
                this.a1 = sb.toString();
            }
            String strEncode2 = encode(messageDigestCreateMessageDigest.digest(EncodingUtils.getBytes(this.a1, parameter8)));
            if (b3 != 2 && b3 == 1) {
                throw new AuthenticationException("qop-int method is not suppported");
            }
            StringBuilder sb2 = new StringBuilder();
            sb2.append(parameter5);
            sb2.append(':');
            sb2.append(str2);
            this.a2 = sb2.toString();
            String strEncode3 = encode(messageDigestCreateMessageDigest.digest(EncodingUtils.getBytes(this.a2, parameter8)));
            if (b3 == 0) {
                sb.setLength(0);
                sb.append(strEncode2);
                sb.append(':');
                sb.append(str3);
            } else {
                sb.setLength(0);
                sb.append(strEncode2);
                sb.append(':');
                sb.append(str3);
                sb.append(':');
                sb.append(string);
                sb.append(':');
                sb.append(this.cnonce);
                sb.append(':');
                sb.append(b3 == 1 ? "auth-int" : "auth");
            }
            sb.append(':');
            sb.append(strEncode3);
            String strEncode4 = encode(messageDigestCreateMessageDigest.digest(EncodingUtils.getAsciiBytes(sb.toString())));
            CharArrayBuffer charArrayBuffer = new CharArrayBuffer(128);
            charArrayBuffer.append(isProxy() ? "Proxy-Authorization" : "Authorization");
            charArrayBuffer.append(": Digest ");
            ArrayList arrayList = new ArrayList(20);
            arrayList.add(new BasicNameValuePair("username", name));
            arrayList.add(new BasicNameValuePair("realm", parameter2));
            arrayList.add(new BasicNameValuePair("nonce", str3));
            arrayList.add(new BasicNameValuePair("uri", str2));
            arrayList.add(new BasicNameValuePair("response", strEncode4));
            if (b3 != 0) {
                str4 = "qop";
                arrayList.add(new BasicNameValuePair(str4, b3 == 1 ? "auth-int" : "auth"));
                arrayList.add(new BasicNameValuePair("nc", string));
                arrayList.add(new BasicNameValuePair("cnonce", this.cnonce));
            } else {
                str4 = "qop";
            }
            if (parameter6 != null) {
                arrayList.add(new BasicNameValuePair("algorithm", parameter6));
            }
            if (parameter4 != null) {
                arrayList.add(new BasicNameValuePair(str, parameter4));
            }
            for (int i = 0; i < arrayList.size(); i++) {
                BasicNameValuePair basicNameValuePair = (BasicNameValuePair) arrayList.get(i);
                if (i > 0) {
                    charArrayBuffer.append(", ");
                }
                BasicHeaderValueFormatter.DEFAULT.formatNameValuePair(charArrayBuffer, basicNameValuePair, !("nc".equals(basicNameValuePair.getName()) || str4.equals(basicNameValuePair.getName())));
            }
            return new BufferedHeader(charArrayBuffer);
        } catch (UnsupportedDigestAlgorithmException unused) {
            throw new AuthenticationException("Unsuppported digest algorithm: " + str5);
        }
    }

    private static MessageDigest createMessageDigest(String str) {
        try {
            return MessageDigest.getInstance(str);
        } catch (Exception unused) {
            throw new UnsupportedDigestAlgorithmException("Unsupported algorithm in HTTP Digest authentication: " + str);
        }
    }

    private static String encode(byte[] bArr) {
        int length = bArr.length;
        char[] cArr = new char[length * 2];
        for (int i = 0; i < length; i++) {
            int i2 = bArr[i] & 15;
            int i3 = (bArr[i] & 240) >> 4;
            int i4 = i * 2;
            char[] cArr2 = HEXADECIMAL;
            cArr[i4] = cArr2[i3];
            cArr[i4 + 1] = cArr2[i2];
        }
        return new String(cArr);
    }

    @Override // org.apache.http.auth.AuthScheme
    public Header authenticate(Credentials credentials, HttpRequest httpRequest) {
        if (credentials == null) {
            throw new IllegalArgumentException("Credentials may not be null");
        }
        if (httpRequest == null) {
            throw new IllegalArgumentException("HTTP request may not be null");
        }
        getParameters().put("methodname", httpRequest.getRequestLine().getMethod());
        getParameters().put("uri", httpRequest.getRequestLine().getUri());
        if (getParameter("charset") == null) {
            getParameters().put("charset", AuthParams.getCredentialCharset(httpRequest.getParams()));
        }
        return createDigestHeader(credentials);
    }

    String getA1() {
        return this.a1;
    }

    String getA2() {
        return this.a2;
    }

    String getCnonce() {
        return this.cnonce;
    }

    @Override // org.apache.http.auth.AuthScheme
    public String getSchemeName() {
        return "digest";
    }

    @Override // org.apache.http.auth.AuthScheme
    public boolean isComplete() {
        if ("true".equalsIgnoreCase(getParameter("stale"))) {
            return false;
        }
        return this.complete;
    }

    @Override // org.apache.http.auth.AuthScheme
    public boolean isConnectionBased() {
        return false;
    }

    public void overrideParamter(String str, String str2) {
        getParameters().put(str, str2);
    }

    @Override // org.apache.http.impl.auth.AuthSchemeBase, org.apache.http.auth.AuthScheme
    public void processChallenge(Header header) throws MalformedChallengeException {
        super.processChallenge(header);
        if (getParameter("realm") == null) {
            throw new MalformedChallengeException("missing realm in challenge");
        }
        if (getParameter("nonce") == null) {
            throw new MalformedChallengeException("missing nonce in challenge");
        }
        this.complete = true;
    }
}
