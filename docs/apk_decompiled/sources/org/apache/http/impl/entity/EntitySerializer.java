package org.apache.http.impl.entity;

import java.io.OutputStream;
import org.apache.http.HttpEntity;
import org.apache.http.HttpMessage;
import org.apache.http.entity.ContentLengthStrategy;
import org.apache.http.impl.io.ChunkedOutputStream;
import org.apache.http.impl.io.ContentLengthOutputStream;
import org.apache.http.impl.io.IdentityOutputStream;
import org.apache.http.io.SessionOutputBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class EntitySerializer {
    private final ContentLengthStrategy lenStrategy;

    public EntitySerializer(ContentLengthStrategy contentLengthStrategy) {
        if (contentLengthStrategy == null) {
            throw new IllegalArgumentException("Content length strategy may not be null");
        }
        this.lenStrategy = contentLengthStrategy;
    }

    protected OutputStream doSerialize(SessionOutputBuffer sessionOutputBuffer, HttpMessage httpMessage) {
        long jDetermineLength = this.lenStrategy.determineLength(httpMessage);
        return jDetermineLength == -2 ? new ChunkedOutputStream(sessionOutputBuffer) : jDetermineLength == -1 ? new IdentityOutputStream(sessionOutputBuffer) : new ContentLengthOutputStream(sessionOutputBuffer, jDetermineLength);
    }

    public void serialize(SessionOutputBuffer sessionOutputBuffer, HttpMessage httpMessage, HttpEntity httpEntity) {
        if (sessionOutputBuffer == null) {
            throw new IllegalArgumentException("Session output buffer may not be null");
        }
        if (httpMessage == null) {
            throw new IllegalArgumentException("HTTP message may not be null");
        }
        if (httpEntity == null) {
            throw new IllegalArgumentException("HTTP entity may not be null");
        }
        OutputStream outputStreamDoSerialize = doSerialize(sessionOutputBuffer, httpMessage);
        httpEntity.writeTo(outputStreamDoSerialize);
        outputStreamDoSerialize.close();
    }
}
