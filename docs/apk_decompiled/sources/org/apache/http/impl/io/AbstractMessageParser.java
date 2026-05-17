package org.apache.http.impl.io;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.apache.http.Header;
import org.apache.http.HttpMessage;
import org.apache.http.ParseException;
import org.apache.http.ProtocolException;
import org.apache.http.io.HttpMessageParser;
import org.apache.http.io.SessionInputBuffer;
import org.apache.http.message.BasicLineParser;
import org.apache.http.message.LineParser;
import org.apache.http.params.CoreConnectionPNames;
import org.apache.http.params.HttpParams;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractMessageParser implements HttpMessageParser {
    private static final int HEADERS = 1;
    private static final int HEAD_LINE = 0;
    private final List headerLines;
    protected final LineParser lineParser;
    private final int maxHeaderCount;
    private final int maxLineLen;
    private HttpMessage message;
    private final SessionInputBuffer sessionBuffer;
    private int state;

    public AbstractMessageParser(SessionInputBuffer sessionInputBuffer, LineParser lineParser, HttpParams httpParams) {
        if (sessionInputBuffer == null) {
            throw new IllegalArgumentException("Session input buffer may not be null");
        }
        if (httpParams == null) {
            throw new IllegalArgumentException("HTTP parameters may not be null");
        }
        this.sessionBuffer = sessionInputBuffer;
        this.maxHeaderCount = httpParams.getIntParameter(CoreConnectionPNames.MAX_HEADER_COUNT, -1);
        this.maxLineLen = httpParams.getIntParameter(CoreConnectionPNames.MAX_LINE_LENGTH, -1);
        this.lineParser = lineParser == null ? BasicLineParser.DEFAULT : lineParser;
        this.headerLines = new ArrayList();
        this.state = 0;
    }

    public static Header[] parseHeaders(SessionInputBuffer sessionInputBuffer, int i, int i2, LineParser lineParser) {
        if (lineParser == null) {
            lineParser = BasicLineParser.DEFAULT;
        }
        return parseHeaders(sessionInputBuffer, i, i2, lineParser, new ArrayList());
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x0084, code lost:
    
        r8 = new org.apache.http.Header[r12.size()];
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x008e, code lost:
    
        if (r5 >= r12.size()) goto L71;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x0096, code lost:
    
        r8[r5] = r11.parseHeader((org.apache.http.util.CharArrayBuffer) r12.get(r5));
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x009c, code lost:
    
        r5 = r5 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x009f, code lost:
    
        r8 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x00a9, code lost:
    
        throw new org.apache.http.ProtocolException(r8.getMessage());
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x00aa, code lost:
    
        return r8;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static org.apache.http.Header[] parseHeaders(org.apache.http.io.SessionInputBuffer r8, int r9, int r10, org.apache.http.message.LineParser r11, java.util.List r12) throws org.apache.http.ProtocolException, java.io.IOException {
        /*
            if (r8 == 0) goto Lbb
            if (r11 == 0) goto Lb3
            if (r12 == 0) goto Lab
            r0 = 0
            r1 = r0
            r2 = r1
        L9:
            if (r1 != 0) goto L13
            org.apache.http.util.CharArrayBuffer r1 = new org.apache.http.util.CharArrayBuffer
            r3 = 64
            r1.<init>(r3)
            goto L16
        L13:
            r1.clear()
        L16:
            int r3 = r8.readLine(r1)
            r4 = -1
            r5 = 0
            if (r3 == r4) goto L84
            int r3 = r1.length()
            r4 = 1
            if (r3 >= r4) goto L26
            goto L84
        L26:
            char r3 = r1.charAt(r5)
            r6 = 9
            r7 = 32
            if (r3 == r7) goto L36
            char r3 = r1.charAt(r5)
            if (r3 != r6) goto L6e
        L36:
            if (r2 == 0) goto L6e
        L38:
            int r3 = r1.length()
            if (r5 >= r3) goto L4a
            char r3 = r1.charAt(r5)
            if (r3 == r7) goto L47
            if (r3 == r6) goto L47
            goto L4a
        L47:
            int r5 = r5 + 1
            goto L38
        L4a:
            if (r10 <= 0) goto L62
            int r3 = r2.length()
            int r3 = r3 + r4
            int r4 = r1.length()
            int r3 = r3 + r4
            int r3 = r3 - r5
            if (r3 > r10) goto L5a
            goto L62
        L5a:
            java.io.IOException r8 = new java.io.IOException
            java.lang.String r9 = "Maximum line length limit exceeded"
            r8.<init>(r9)
            throw r8
        L62:
            r2.append(r7)
            int r3 = r1.length()
            int r3 = r3 - r5
            r2.append(r1, r5, r3)
            goto L73
        L6e:
            r12.add(r1)
            r2 = r1
            r1 = r0
        L73:
            if (r9 <= 0) goto L9
            int r3 = r12.size()
            if (r3 >= r9) goto L7c
            goto L9
        L7c:
            java.io.IOException r8 = new java.io.IOException
            java.lang.String r9 = "Maximum header count exceeded"
            r8.<init>(r9)
            throw r8
        L84:
            int r8 = r12.size()
            org.apache.http.Header[] r8 = new org.apache.http.Header[r8]
        L8a:
            int r9 = r12.size()
            if (r5 >= r9) goto Laa
            java.lang.Object r9 = r12.get(r5)
            org.apache.http.util.CharArrayBuffer r9 = (org.apache.http.util.CharArrayBuffer) r9
            org.apache.http.Header r9 = r11.parseHeader(r9)     // Catch: org.apache.http.ParseException -> L9f
            r8[r5] = r9     // Catch: org.apache.http.ParseException -> L9f
            int r5 = r5 + 1
            goto L8a
        L9f:
            r8 = move-exception
            org.apache.http.ProtocolException r9 = new org.apache.http.ProtocolException
            java.lang.String r8 = r8.getMessage()
            r9.<init>(r8)
            throw r9
        Laa:
            return r8
        Lab:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "Header line list may not be null"
            r8.<init>(r9)
            throw r8
        Lb3:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "Line parser may not be null"
            r8.<init>(r9)
            throw r8
        Lbb:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "Session input buffer may not be null"
            r8.<init>(r9)
            goto Lc4
        Lc3:
            throw r8
        Lc4:
            goto Lc3
        */
        throw new UnsupportedOperationException("Method not decompiled: org.apache.http.impl.io.AbstractMessageParser.parseHeaders(org.apache.http.io.SessionInputBuffer, int, int, org.apache.http.message.LineParser, java.util.List):org.apache.http.Header[]");
    }

    @Override // org.apache.http.io.HttpMessageParser
    public HttpMessage parse() throws ProtocolException, IOException {
        int i = this.state;
        if (i == 0) {
            try {
                this.message = parseHead(this.sessionBuffer);
                this.state = 1;
            } catch (ParseException e2) {
                throw new ProtocolException(e2.getMessage(), e2);
            }
        } else if (i != 1) {
            throw new IllegalStateException("Inconsistent parser state");
        }
        this.message.setHeaders(parseHeaders(this.sessionBuffer, this.maxHeaderCount, this.maxLineLen, this.lineParser, this.headerLines));
        HttpMessage httpMessage = this.message;
        this.message = null;
        this.headerLines.clear();
        this.state = 0;
        return httpMessage;
    }

    protected abstract HttpMessage parseHead(SessionInputBuffer sessionInputBuffer);
}
