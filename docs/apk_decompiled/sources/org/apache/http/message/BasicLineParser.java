package org.apache.http.message;

import org.apache.http.Header;
import org.apache.http.HttpVersion;
import org.apache.http.ParseException;
import org.apache.http.ProtocolVersion;
import org.apache.http.RequestLine;
import org.apache.http.StatusLine;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.CharArrayBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class BasicLineParser implements LineParser {
    public static final BasicLineParser DEFAULT = new BasicLineParser();
    protected final ProtocolVersion protocol;

    public BasicLineParser() {
        this(null);
    }

    public BasicLineParser(ProtocolVersion protocolVersion) {
        this.protocol = protocolVersion == null ? HttpVersion.HTTP_1_1 : protocolVersion;
    }

    public static final Header parseHeader(String str, LineParser lineParser) {
        if (str == null) {
            throw new IllegalArgumentException("Value to parse may not be null");
        }
        if (lineParser == null) {
            lineParser = DEFAULT;
        }
        CharArrayBuffer charArrayBuffer = new CharArrayBuffer(str.length());
        charArrayBuffer.append(str);
        return lineParser.parseHeader(charArrayBuffer);
    }

    public static final ProtocolVersion parseProtocolVersion(String str, LineParser lineParser) {
        if (str == null) {
            throw new IllegalArgumentException("Value to parse may not be null.");
        }
        if (lineParser == null) {
            lineParser = DEFAULT;
        }
        CharArrayBuffer charArrayBuffer = new CharArrayBuffer(str.length());
        charArrayBuffer.append(str);
        return lineParser.parseProtocolVersion(charArrayBuffer, new ParserCursor(0, str.length()));
    }

    public static final RequestLine parseRequestLine(String str, LineParser lineParser) {
        if (str == null) {
            throw new IllegalArgumentException("Value to parse may not be null.");
        }
        if (lineParser == null) {
            lineParser = DEFAULT;
        }
        CharArrayBuffer charArrayBuffer = new CharArrayBuffer(str.length());
        charArrayBuffer.append(str);
        return lineParser.parseRequestLine(charArrayBuffer, new ParserCursor(0, str.length()));
    }

    public static final StatusLine parseStatusLine(String str, LineParser lineParser) {
        if (str == null) {
            throw new IllegalArgumentException("Value to parse may not be null.");
        }
        if (lineParser == null) {
            lineParser = DEFAULT;
        }
        CharArrayBuffer charArrayBuffer = new CharArrayBuffer(str.length());
        charArrayBuffer.append(str);
        return lineParser.parseStatusLine(charArrayBuffer, new ParserCursor(0, str.length()));
    }

    protected ProtocolVersion createProtocolVersion(int i, int i2) {
        return this.protocol.forVersion(i, i2);
    }

    protected RequestLine createRequestLine(String str, String str2, ProtocolVersion protocolVersion) {
        return new BasicRequestLine(str, str2, protocolVersion);
    }

    protected StatusLine createStatusLine(ProtocolVersion protocolVersion, int i, String str) {
        return new BasicStatusLine(protocolVersion, i, str);
    }

    @Override // org.apache.http.message.LineParser
    public boolean hasProtocolVersion(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        if (charArrayBuffer == null) {
            throw new IllegalArgumentException("Char array buffer may not be null");
        }
        if (parserCursor == null) {
            throw new IllegalArgumentException("Parser cursor may not be null");
        }
        int pos = parserCursor.getPos();
        String protocol = this.protocol.getProtocol();
        int length = protocol.length();
        if (charArrayBuffer.length() < length + 4) {
            return false;
        }
        if (pos < 0) {
            pos = (charArrayBuffer.length() - 4) - length;
        } else if (pos == 0) {
            while (pos < charArrayBuffer.length() && HTTP.isWhitespace(charArrayBuffer.charAt(pos))) {
                pos++;
            }
        }
        int i = pos + length;
        if (i + 4 > charArrayBuffer.length()) {
            return false;
        }
        boolean z = true;
        for (int i2 = 0; z && i2 < length; i2++) {
            z = charArrayBuffer.charAt(pos + i2) == protocol.charAt(i2);
        }
        return z ? charArrayBuffer.charAt(i) == '/' : z;
    }

    @Override // org.apache.http.message.LineParser
    public Header parseHeader(CharArrayBuffer charArrayBuffer) {
        return new BufferedHeader(charArrayBuffer);
    }

    @Override // org.apache.http.message.LineParser
    public ProtocolVersion parseProtocolVersion(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        if (charArrayBuffer == null) {
            throw new IllegalArgumentException("Char array buffer may not be null");
        }
        if (parserCursor == null) {
            throw new IllegalArgumentException("Parser cursor may not be null");
        }
        String protocol = this.protocol.getProtocol();
        int length = protocol.length();
        int pos = parserCursor.getPos();
        int upperBound = parserCursor.getUpperBound();
        skipWhitespace(charArrayBuffer, parserCursor);
        int pos2 = parserCursor.getPos();
        int i = pos2 + length;
        if (i + 4 > upperBound) {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("Not a valid protocol version: ");
            stringBuffer.append(charArrayBuffer.substring(pos, upperBound));
            throw new ParseException(stringBuffer.toString());
        }
        boolean z = true;
        for (int i2 = 0; z && i2 < length; i2++) {
            z = charArrayBuffer.charAt(pos2 + i2) == protocol.charAt(i2);
        }
        if (z) {
            z = charArrayBuffer.charAt(i) == '/';
        }
        if (!z) {
            StringBuffer stringBuffer2 = new StringBuffer();
            stringBuffer2.append("Not a valid protocol version: ");
            stringBuffer2.append(charArrayBuffer.substring(pos, upperBound));
            throw new ParseException(stringBuffer2.toString());
        }
        int i3 = pos2 + length + 1;
        int iIndexOf = charArrayBuffer.indexOf(46, i3, upperBound);
        if (iIndexOf == -1) {
            StringBuffer stringBuffer3 = new StringBuffer();
            stringBuffer3.append("Invalid protocol version number: ");
            stringBuffer3.append(charArrayBuffer.substring(pos, upperBound));
            throw new ParseException(stringBuffer3.toString());
        }
        try {
            int i4 = Integer.parseInt(charArrayBuffer.substringTrimmed(i3, iIndexOf));
            int i5 = iIndexOf + 1;
            int iIndexOf2 = charArrayBuffer.indexOf(32, i5, upperBound);
            if (iIndexOf2 == -1) {
                iIndexOf2 = upperBound;
            }
            try {
                int i6 = Integer.parseInt(charArrayBuffer.substringTrimmed(i5, iIndexOf2));
                parserCursor.updatePos(iIndexOf2);
                return createProtocolVersion(i4, i6);
            } catch (NumberFormatException unused) {
                StringBuffer stringBuffer4 = new StringBuffer();
                stringBuffer4.append("Invalid protocol minor version number: ");
                stringBuffer4.append(charArrayBuffer.substring(pos, upperBound));
                throw new ParseException(stringBuffer4.toString());
            }
        } catch (NumberFormatException unused2) {
            StringBuffer stringBuffer5 = new StringBuffer();
            stringBuffer5.append("Invalid protocol major version number: ");
            stringBuffer5.append(charArrayBuffer.substring(pos, upperBound));
            throw new ParseException(stringBuffer5.toString());
        }
    }

    @Override // org.apache.http.message.LineParser
    public RequestLine parseRequestLine(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        if (charArrayBuffer == null) {
            throw new IllegalArgumentException("Char array buffer may not be null");
        }
        if (parserCursor == null) {
            throw new IllegalArgumentException("Parser cursor may not be null");
        }
        int pos = parserCursor.getPos();
        int upperBound = parserCursor.getUpperBound();
        try {
            skipWhitespace(charArrayBuffer, parserCursor);
            int pos2 = parserCursor.getPos();
            int iIndexOf = charArrayBuffer.indexOf(32, pos2, upperBound);
            if (iIndexOf < 0) {
                StringBuffer stringBuffer = new StringBuffer();
                stringBuffer.append("Invalid request line: ");
                stringBuffer.append(charArrayBuffer.substring(pos, upperBound));
                throw new ParseException(stringBuffer.toString());
            }
            String strSubstringTrimmed = charArrayBuffer.substringTrimmed(pos2, iIndexOf);
            parserCursor.updatePos(iIndexOf);
            skipWhitespace(charArrayBuffer, parserCursor);
            int pos3 = parserCursor.getPos();
            int iIndexOf2 = charArrayBuffer.indexOf(32, pos3, upperBound);
            if (iIndexOf2 < 0) {
                StringBuffer stringBuffer2 = new StringBuffer();
                stringBuffer2.append("Invalid request line: ");
                stringBuffer2.append(charArrayBuffer.substring(pos, upperBound));
                throw new ParseException(stringBuffer2.toString());
            }
            String strSubstringTrimmed2 = charArrayBuffer.substringTrimmed(pos3, iIndexOf2);
            parserCursor.updatePos(iIndexOf2);
            ProtocolVersion protocolVersion = parseProtocolVersion(charArrayBuffer, parserCursor);
            skipWhitespace(charArrayBuffer, parserCursor);
            if (parserCursor.atEnd()) {
                return createRequestLine(strSubstringTrimmed, strSubstringTrimmed2, protocolVersion);
            }
            StringBuffer stringBuffer3 = new StringBuffer();
            stringBuffer3.append("Invalid request line: ");
            stringBuffer3.append(charArrayBuffer.substring(pos, upperBound));
            throw new ParseException(stringBuffer3.toString());
        } catch (IndexOutOfBoundsException unused) {
            StringBuffer stringBuffer4 = new StringBuffer();
            stringBuffer4.append("Invalid request line: ");
            stringBuffer4.append(charArrayBuffer.substring(pos, upperBound));
            throw new ParseException(stringBuffer4.toString());
        }
    }

    @Override // org.apache.http.message.LineParser
    public StatusLine parseStatusLine(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        if (charArrayBuffer == null) {
            throw new IllegalArgumentException("Char array buffer may not be null");
        }
        if (parserCursor == null) {
            throw new IllegalArgumentException("Parser cursor may not be null");
        }
        int pos = parserCursor.getPos();
        int upperBound = parserCursor.getUpperBound();
        try {
            ProtocolVersion protocolVersion = parseProtocolVersion(charArrayBuffer, parserCursor);
            skipWhitespace(charArrayBuffer, parserCursor);
            int pos2 = parserCursor.getPos();
            int iIndexOf = charArrayBuffer.indexOf(32, pos2, upperBound);
            if (iIndexOf < 0) {
                iIndexOf = upperBound;
            }
            String strSubstringTrimmed = charArrayBuffer.substringTrimmed(pos2, iIndexOf);
            for (int i = 0; i < strSubstringTrimmed.length(); i++) {
                if (!Character.isDigit(strSubstringTrimmed.charAt(i))) {
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append("Status line contains invalid status code: ");
                    stringBuffer.append(charArrayBuffer.substring(pos, upperBound));
                    throw new ParseException(stringBuffer.toString());
                }
            }
            try {
                return createStatusLine(protocolVersion, Integer.parseInt(strSubstringTrimmed), iIndexOf < upperBound ? charArrayBuffer.substringTrimmed(iIndexOf, upperBound) : "");
            } catch (NumberFormatException unused) {
                StringBuffer stringBuffer2 = new StringBuffer();
                stringBuffer2.append("Status line contains invalid status code: ");
                stringBuffer2.append(charArrayBuffer.substring(pos, upperBound));
                throw new ParseException(stringBuffer2.toString());
            }
        } catch (IndexOutOfBoundsException unused2) {
            StringBuffer stringBuffer3 = new StringBuffer();
            stringBuffer3.append("Invalid status line: ");
            stringBuffer3.append(charArrayBuffer.substring(pos, upperBound));
            throw new ParseException(stringBuffer3.toString());
        }
    }

    protected void skipWhitespace(CharArrayBuffer charArrayBuffer, ParserCursor parserCursor) {
        int pos = parserCursor.getPos();
        int upperBound = parserCursor.getUpperBound();
        while (pos < upperBound && HTTP.isWhitespace(charArrayBuffer.charAt(pos))) {
            pos++;
        }
        parserCursor.updatePos(pos);
    }
}
