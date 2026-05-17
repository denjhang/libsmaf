package org.apache.http.impl.entity;

import org.apache.http.HttpEntity;
import org.apache.http.HttpMessage;
import org.apache.http.entity.ContentLengthStrategy;
import org.apache.http.io.SessionInputBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class EntityDeserializer {
    private final ContentLengthStrategy lenStrategy;

    public EntityDeserializer(ContentLengthStrategy contentLengthStrategy) {
        if (contentLengthStrategy == null) {
            throw new IllegalArgumentException("Content length strategy may not be null");
        }
        this.lenStrategy = contentLengthStrategy;
    }

    public HttpEntity deserialize(SessionInputBuffer sessionInputBuffer, HttpMessage httpMessage) {
        if (sessionInputBuffer == null) {
            throw new IllegalArgumentException("Session input buffer may not be null");
        }
        if (httpMessage != null) {
            return doDeserialize(sessionInputBuffer, httpMessage);
        }
        throw new IllegalArgumentException("HTTP message may not be null");
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x004a  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0055  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected org.apache.http.entity.BasicHttpEntity doDeserialize(org.apache.http.io.SessionInputBuffer r9, org.apache.http.HttpMessage r10) {
        /*
            r8 = this;
            org.apache.http.entity.BasicHttpEntity r0 = new org.apache.http.entity.BasicHttpEntity
            r0.<init>()
            org.apache.http.entity.ContentLengthStrategy r1 = r8.lenStrategy
            long r1 = r1.determineLength(r10)
            r3 = -1
            r5 = -2
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 != 0) goto L23
            r1 = 1
            r0.setChunked(r1)
            r0.setContentLength(r3)
            org.apache.http.impl.io.ChunkedInputStream r1 = new org.apache.http.impl.io.ChunkedInputStream
            r1.<init>(r9)
        L1f:
            r0.setContent(r1)
            goto L42
        L23:
            r5 = 0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 != 0) goto L34
            r0.setChunked(r5)
            r0.setContentLength(r3)
            org.apache.http.impl.io.IdentityInputStream r1 = new org.apache.http.impl.io.IdentityInputStream
            r1.<init>(r9)
            goto L1f
        L34:
            r0.setChunked(r5)
            r0.setContentLength(r1)
            org.apache.http.impl.io.ContentLengthInputStream r3 = new org.apache.http.impl.io.ContentLengthInputStream
            r3.<init>(r9, r1)
            r0.setContent(r3)
        L42:
            java.lang.String r9 = "Content-Type"
            org.apache.http.Header r9 = r10.getFirstHeader(r9)
            if (r9 == 0) goto L4d
            r0.setContentType(r9)
        L4d:
            java.lang.String r9 = "Content-Encoding"
            org.apache.http.Header r9 = r10.getFirstHeader(r9)
            if (r9 == 0) goto L58
            r0.setContentEncoding(r9)
        L58:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: org.apache.http.impl.entity.EntityDeserializer.doDeserialize(org.apache.http.io.SessionInputBuffer, org.apache.http.HttpMessage):org.apache.http.entity.BasicHttpEntity");
    }
}
