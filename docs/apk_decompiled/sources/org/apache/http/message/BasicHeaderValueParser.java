package org.apache.http.message;

import java.util.ArrayList;
import org.apache.http.HeaderElement;
import org.apache.http.NameValuePair;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.CharArrayBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class BasicHeaderValueParser implements HeaderValueParser {
    public static final BasicHeaderValueParser DEFAULT = new BasicHeaderValueParser();
    private static final char PARAM_DELIMITER = ';';
    private static final char ELEM_DELIMITER = ',';
    private static final char[] ALL_DELIMITERS = {PARAM_DELIMITER, ELEM_DELIMITER};

    private static boolean isOneOf(char c2, char[] cArr) {
        if (cArr != null) {
            for (char c3 : cArr) {
                if (c2 == c3) {
                    return true;
                }
            }
        }
        return false;
    }

    public static final HeaderElement[] parseElements(String str, HeaderValueParser headerValueParser) {
        if (str == null) {
            throw new IllegalArgumentException("Value to parse may not be null");
        }
        if (headerValueParser == null) {
            headerValueParser = DEFAULT;
        }
        CharArrayBuffer charArrayBuffer = new CharArrayBuffer(str.length());
        charArrayBuffer.append(str);
        return headerValueParser.parseElements(charArrayBuffer, new ParserCursor(0, str.length()));
    }

    public static final HeaderElement parseHeaderElement(String str, HeaderValueParser headerValueParser) {
        if (str == null) {
            throw new IllegalArgumentException("Value to parse may not be null");
        }
        if (headerValueParser == null) {
            headerValueParser = DEFAULT;
        }
        CharArrayBuffer charArrayBuffer = new CharArrayBuffer(str.length());
        charArrayBuffer.append(str);
        return headerValueParser.parseHeaderElement(charArrayBuffer, new ParserCursor(0, str.length()));
    }

    public static final NameValuePair parseNameValuePair(String str, HeaderValueParser headerValueParser) {
        if (str == null) {
            throw new IllegalArgumentException("Value to parse may not be null");
        }
        if (headerValueParser == null) {
            headerValueParser = DEFAULT;
        }
        CharArrayBuffer charArrayBuffer = new CharArrayBuffer(str.length());
        charArrayBuffer.append(str);
        return headerValueParser.parseNameValuePair(charArrayBuffer, new ParserCursor(0, str.length()));
    }

    public static final NameValuePair[] parseParameters(String str, HeaderValueParser headerValueParser) {
        if (str == null) {
            throw new IllegalArgumentException("Value to parse may not be null");
        }
        if (headerValueParser == null) {
            headerValueParser = DEFAULT;
        }
        CharArrayBuffer charArrayBuffer = new CharArrayBuffer(str.length());
        charArrayBuffer.append(str);
        return headerValueParser.parseParameters(charArrayBuffer, new ParserCursor(0, str.length()));
    }

    protected HeaderElement createHeaderElement(String str, String str2, NameValuePair[] nameValuePairArr) {
        return new BasicHeaderElement(str, str2, nameValuePairArr);
    }

    protected NameValuePair createNameValuePair(String str, String str2) {
        return new BasicNameValuePair(str, str2);
    }

    @Override // org.apache.http.message.HeaderValueParser
    public HeaderElement[] parseElements(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        if (charArrayBuffer == null) {
            throw new IllegalArgumentException("Char array buffer may not be null");
        }
        if (parserCursor == null) {
            throw new IllegalArgumentException("Parser cursor may not be null");
        }
        ArrayList arrayList = new ArrayList();
        while (!parserCursor.atEnd()) {
            HeaderElement headerElement = parseHeaderElement(charArrayBuffer, parserCursor);
            if (headerElement.getName().length() != 0 || headerElement.getValue() != null) {
                arrayList.add(headerElement);
            }
        }
        return (HeaderElement[]) arrayList.toArray(new HeaderElement[arrayList.size()]);
    }

    @Override // org.apache.http.message.HeaderValueParser
    public HeaderElement parseHeaderElement(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        if (charArrayBuffer == null) {
            throw new IllegalArgumentException("Char array buffer may not be null");
        }
        if (parserCursor == null) {
            throw new IllegalArgumentException("Parser cursor may not be null");
        }
        NameValuePair nameValuePair = parseNameValuePair(charArrayBuffer, parserCursor);
        NameValuePair[] parameters = null;
        if (!parserCursor.atEnd() && charArrayBuffer.charAt(parserCursor.getPos() - 1) != ',') {
            parameters = parseParameters(charArrayBuffer, parserCursor);
        }
        return createHeaderElement(nameValuePair.getName(), nameValuePair.getValue(), parameters);
    }

    @Override // org.apache.http.message.HeaderValueParser
    public NameValuePair parseNameValuePair(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        return parseNameValuePair(charArrayBuffer, parserCursor, ALL_DELIMITERS);
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x0028, code lost:
    
        r5 = false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public org.apache.http.NameValuePair parseNameValuePair(org.apache.http.util.CharArrayBuffer r13, org.apache.http.message.ParserCursor r14, char[] r15) {
        /*
            r12 = this;
            if (r13 == 0) goto Lb9
            if (r14 == 0) goto Lb1
            int r0 = r14.getPos()
            int r1 = r14.getPos()
            int r2 = r14.getUpperBound()
        L10:
            r3 = 0
            r4 = 1
            if (r0 >= r2) goto L28
            char r5 = r13.charAt(r0)
            r6 = 61
            if (r5 != r6) goto L1d
            goto L28
        L1d:
            boolean r5 = isOneOf(r5, r15)
            if (r5 == 0) goto L25
            r5 = 1
            goto L29
        L25:
            int r0 = r0 + 1
            goto L10
        L28:
            r5 = 0
        L29:
            if (r0 != r2) goto L31
            java.lang.String r1 = r13.substringTrimmed(r1, r2)
            r5 = 1
            goto L37
        L31:
            java.lang.String r1 = r13.substringTrimmed(r1, r0)
            int r0 = r0 + 1
        L37:
            if (r5 == 0) goto L42
            r14.updatePos(r0)
            r13 = 0
        L3d:
            org.apache.http.NameValuePair r13 = r12.createNameValuePair(r1, r13)
            return r13
        L42:
            r6 = r0
            r7 = 0
            r8 = 0
        L45:
            r9 = 34
            if (r6 >= r2) goto L6c
            char r10 = r13.charAt(r6)
            if (r10 != r9) goto L53
            if (r7 != 0) goto L53
            r8 = r8 ^ 1
        L53:
            if (r8 != 0) goto L5e
            if (r7 != 0) goto L5e
            boolean r11 = isOneOf(r10, r15)
            if (r11 == 0) goto L5e
            goto L6d
        L5e:
            if (r7 == 0) goto L62
        L60:
            r7 = 0
            goto L69
        L62:
            if (r8 == 0) goto L60
            r7 = 92
            if (r10 != r7) goto L60
            r7 = 1
        L69:
            int r6 = r6 + 1
            goto L45
        L6c:
            r4 = r5
        L6d:
            if (r0 >= r6) goto L7c
            char r15 = r13.charAt(r0)
            boolean r15 = org.apache.http.protocol.HTTP.isWhitespace(r15)
            if (r15 == 0) goto L7c
            int r0 = r0 + 1
            goto L6d
        L7c:
            r15 = r6
        L7d:
            if (r15 <= r0) goto L8e
            int r2 = r15 + (-1)
            char r2 = r13.charAt(r2)
            boolean r2 = org.apache.http.protocol.HTTP.isWhitespace(r2)
            if (r2 == 0) goto L8e
            int r15 = r15 + (-1)
            goto L7d
        L8e:
            int r2 = r15 - r0
            r3 = 2
            if (r2 < r3) goto La5
            char r2 = r13.charAt(r0)
            if (r2 != r9) goto La5
            int r2 = r15 + (-1)
            char r2 = r13.charAt(r2)
            if (r2 != r9) goto La5
            int r0 = r0 + 1
            int r15 = r15 + (-1)
        La5:
            java.lang.String r13 = r13.substring(r0, r15)
            if (r4 == 0) goto Lad
            int r6 = r6 + 1
        Lad:
            r14.updatePos(r6)
            goto L3d
        Lb1:
            java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
            java.lang.String r14 = "Parser cursor may not be null"
            r13.<init>(r14)
            throw r13
        Lb9:
            java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
            java.lang.String r14 = "Char array buffer may not be null"
            r13.<init>(r14)
            goto Lc2
        Lc1:
            throw r13
        Lc2:
            goto Lc1
        */
        throw new UnsupportedOperationException("Method not decompiled: org.apache.http.message.BasicHeaderValueParser.parseNameValuePair(org.apache.http.util.CharArrayBuffer, org.apache.http.message.ParserCursor, char[]):org.apache.http.NameValuePair");
    }

    @Override // org.apache.http.message.HeaderValueParser
    public NameValuePair[] parseParameters(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        if (charArrayBuffer == null) {
            throw new IllegalArgumentException("Char array buffer may not be null");
        }
        if (parserCursor == null) {
            throw new IllegalArgumentException("Parser cursor may not be null");
        }
        int pos = parserCursor.getPos();
        int upperBound = parserCursor.getUpperBound();
        while (pos < upperBound && HTTP.isWhitespace(charArrayBuffer.charAt(pos))) {
            pos++;
        }
        parserCursor.updatePos(pos);
        if (parserCursor.atEnd()) {
            return new NameValuePair[0];
        }
        ArrayList arrayList = new ArrayList();
        while (!parserCursor.atEnd()) {
            arrayList.add(parseNameValuePair(charArrayBuffer, parserCursor));
            if (charArrayBuffer.charAt(parserCursor.getPos() - 1) == ',') {
                break;
            }
        }
        return (NameValuePair[]) arrayList.toArray(new NameValuePair[arrayList.size()]);
    }
}
