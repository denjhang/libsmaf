package org.apache.http.impl.cookie;

import java.util.ArrayList;
import org.apache.http.HeaderElement;
import org.apache.http.NameValuePair;
import org.apache.http.annotation.Immutable;
import org.apache.http.message.BasicHeaderElement;
import org.apache.http.message.ParserCursor;
import org.apache.http.util.CharArrayBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class NetscapeDraftHeaderParser {
    public static final NetscapeDraftHeaderParser DEFAULT = new NetscapeDraftHeaderParser();

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0021, code lost:
    
        r5 = false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private org.apache.http.NameValuePair parseNameValuePair(org.apache.http.util.CharArrayBuffer r9, org.apache.http.message.ParserCursor r10) {
        /*
            r8 = this;
            int r0 = r10.getPos()
            int r1 = r10.getPos()
            int r2 = r10.getUpperBound()
        Lc:
            r3 = 59
            r4 = 1
            if (r0 >= r2) goto L21
            char r5 = r9.charAt(r0)
            r6 = 61
            if (r5 != r6) goto L1a
            goto L21
        L1a:
            if (r5 != r3) goto L1e
            r5 = 1
            goto L22
        L1e:
            int r0 = r0 + 1
            goto Lc
        L21:
            r5 = 0
        L22:
            if (r0 != r2) goto L2a
            java.lang.String r1 = r9.substringTrimmed(r1, r2)
            r5 = 1
            goto L30
        L2a:
            java.lang.String r1 = r9.substringTrimmed(r1, r0)
            int r0 = r0 + 1
        L30:
            if (r5 == 0) goto L3c
            r10.updatePos(r0)
            org.apache.http.message.BasicNameValuePair r9 = new org.apache.http.message.BasicNameValuePair
            r10 = 0
            r9.<init>(r1, r10)
            return r9
        L3c:
            r6 = r0
        L3d:
            if (r6 >= r2) goto L49
            char r7 = r9.charAt(r6)
            if (r7 != r3) goto L46
            goto L4a
        L46:
            int r6 = r6 + 1
            goto L3d
        L49:
            r4 = r5
        L4a:
            if (r0 >= r6) goto L59
            char r2 = r9.charAt(r0)
            boolean r2 = org.apache.http.protocol.HTTP.isWhitespace(r2)
            if (r2 == 0) goto L59
            int r0 = r0 + 1
            goto L4a
        L59:
            r2 = r6
        L5a:
            if (r2 <= r0) goto L6b
            int r3 = r2 + (-1)
            char r3 = r9.charAt(r3)
            boolean r3 = org.apache.http.protocol.HTTP.isWhitespace(r3)
            if (r3 == 0) goto L6b
            int r2 = r2 + (-1)
            goto L5a
        L6b:
            java.lang.String r9 = r9.substring(r0, r2)
            if (r4 == 0) goto L73
            int r6 = r6 + 1
        L73:
            r10.updatePos(r6)
            org.apache.http.message.BasicNameValuePair r10 = new org.apache.http.message.BasicNameValuePair
            r10.<init>(r1, r9)
            return r10
        */
        throw new UnsupportedOperationException("Method not decompiled: org.apache.http.impl.cookie.NetscapeDraftHeaderParser.parseNameValuePair(org.apache.http.util.CharArrayBuffer, org.apache.http.message.ParserCursor):org.apache.http.NameValuePair");
    }

    public HeaderElement parseHeader(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        if (charArrayBuffer == null) {
            throw new IllegalArgumentException("Char array buffer may not be null");
        }
        if (parserCursor == null) {
            throw new IllegalArgumentException("Parser cursor may not be null");
        }
        NameValuePair nameValuePair = parseNameValuePair(charArrayBuffer, parserCursor);
        ArrayList arrayList = new ArrayList();
        while (!parserCursor.atEnd()) {
            arrayList.add(parseNameValuePair(charArrayBuffer, parserCursor));
        }
        return new BasicHeaderElement(nameValuePair.getName(), nameValuePair.getValue(), (NameValuePair[]) arrayList.toArray(new NameValuePair[arrayList.size()]));
    }
}
