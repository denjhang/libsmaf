package org.apache.http.message;

import java.io.Serializable;
import org.apache.http.FormattedHeader;
import org.apache.http.HeaderElement;
import org.apache.http.ParseException;
import org.apache.http.util.CharArrayBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class BufferedHeader implements FormattedHeader, Cloneable, Serializable {
    private static final long serialVersionUID = -2768352615787625448L;
    private final CharArrayBuffer buffer;
    private final String name;
    private final int valuePos;

    public BufferedHeader(CharArrayBuffer charArrayBuffer) {
        if (charArrayBuffer == null) {
            throw new IllegalArgumentException("Char array buffer may not be null");
        }
        int iIndexOf = charArrayBuffer.indexOf(58);
        if (iIndexOf == -1) {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("Invalid header: ");
            stringBuffer.append(charArrayBuffer.toString());
            throw new ParseException(stringBuffer.toString());
        }
        String strSubstringTrimmed = charArrayBuffer.substringTrimmed(0, iIndexOf);
        if (strSubstringTrimmed.length() != 0) {
            this.buffer = charArrayBuffer;
            this.name = strSubstringTrimmed;
            this.valuePos = iIndexOf + 1;
        } else {
            StringBuffer stringBuffer2 = new StringBuffer();
            stringBuffer2.append("Invalid header: ");
            stringBuffer2.append(charArrayBuffer.toString());
            throw new ParseException(stringBuffer2.toString());
        }
    }

    public Object clone() {
        return super.clone();
    }

    @Override // org.apache.http.FormattedHeader
    public CharArrayBuffer getBuffer() {
        return this.buffer;
    }

    @Override // org.apache.http.Header
    public HeaderElement[] getElements() {
        ParserCursor parserCursor = new ParserCursor(0, this.buffer.length());
        parserCursor.updatePos(this.valuePos);
        return BasicHeaderValueParser.DEFAULT.parseElements(this.buffer, parserCursor);
    }

    @Override // org.apache.http.Header
    public String getName() {
        return this.name;
    }

    @Override // org.apache.http.Header
    public String getValue() {
        CharArrayBuffer charArrayBuffer = this.buffer;
        return charArrayBuffer.substringTrimmed(this.valuePos, charArrayBuffer.length());
    }

    @Override // org.apache.http.FormattedHeader
    public int getValuePos() {
        return this.valuePos;
    }

    public String toString() {
        return this.buffer.toString();
    }
}
