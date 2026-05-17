package org.apache.http.message;

import java.util.NoSuchElementException;
import org.apache.http.HeaderIterator;
import org.apache.http.ParseException;
import org.apache.http.TokenIterator;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class BasicTokenIterator implements TokenIterator {
    public static final String HTTP_SEPARATORS = " ,;=()<>@:\\\"/[]?{}\t";
    protected String currentHeader;
    protected String currentToken;
    protected final HeaderIterator headerIt;
    protected int searchPos;

    public BasicTokenIterator(HeaderIterator headerIterator) {
        if (headerIterator == null) {
            throw new IllegalArgumentException("Header iterator must not be null.");
        }
        this.headerIt = headerIterator;
        this.searchPos = findNext(-1);
    }

    protected String createToken(String str, int i, int i2) {
        return str.substring(i, i2);
    }

    protected int findNext(int i) {
        int iFindTokenSeparator;
        String strCreateToken;
        int iFindTokenEnd = -1;
        if (i >= 0) {
            iFindTokenSeparator = findTokenSeparator(i);
        } else {
            if (!this.headerIt.hasNext()) {
                return -1;
            }
            this.currentHeader = this.headerIt.nextHeader().getValue();
            iFindTokenSeparator = 0;
        }
        int iFindTokenStart = findTokenStart(iFindTokenSeparator);
        if (iFindTokenStart < 0) {
            strCreateToken = null;
        } else {
            iFindTokenEnd = findTokenEnd(iFindTokenStart);
            strCreateToken = createToken(this.currentHeader, iFindTokenStart, iFindTokenEnd);
        }
        this.currentToken = strCreateToken;
        return iFindTokenEnd;
    }

    protected int findTokenEnd(int i) {
        if (i < 0) {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("Token start position must not be negative: ");
            stringBuffer.append(i);
            throw new IllegalArgumentException(stringBuffer.toString());
        }
        int length = this.currentHeader.length();
        do {
            i++;
            if (i >= length) {
                break;
            }
        } while (isTokenChar(this.currentHeader.charAt(i)));
        return i;
    }

    protected int findTokenSeparator(int i) {
        if (i < 0) {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("Search position must not be negative: ");
            stringBuffer.append(i);
            throw new IllegalArgumentException(stringBuffer.toString());
        }
        boolean z = false;
        int length = this.currentHeader.length();
        while (!z && i < length) {
            char cCharAt = this.currentHeader.charAt(i);
            if (isTokenSeparator(cCharAt)) {
                z = true;
            } else {
                if (!isWhitespace(cCharAt)) {
                    if (isTokenChar(cCharAt)) {
                        StringBuffer stringBuffer2 = new StringBuffer();
                        stringBuffer2.append("Tokens without separator (pos ");
                        stringBuffer2.append(i);
                        stringBuffer2.append("): ");
                        stringBuffer2.append(this.currentHeader);
                        throw new ParseException(stringBuffer2.toString());
                    }
                    StringBuffer stringBuffer3 = new StringBuffer();
                    stringBuffer3.append("Invalid character after token (pos ");
                    stringBuffer3.append(i);
                    stringBuffer3.append("): ");
                    stringBuffer3.append(this.currentHeader);
                    throw new ParseException(stringBuffer3.toString());
                }
                i++;
            }
        }
        return i;
    }

    protected int findTokenStart(int i) {
        if (i < 0) {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("Search position must not be negative: ");
            stringBuffer.append(i);
            throw new IllegalArgumentException(stringBuffer.toString());
        }
        int i2 = i;
        boolean z = false;
        while (!z) {
            String str = this.currentHeader;
            if (str == null) {
                break;
            }
            int length = str.length();
            while (!z && i2 < length) {
                char cCharAt = this.currentHeader.charAt(i2);
                if (isTokenSeparator(cCharAt) || isWhitespace(cCharAt)) {
                    i2++;
                } else {
                    if (!isTokenChar(this.currentHeader.charAt(i2))) {
                        StringBuffer stringBuffer2 = new StringBuffer();
                        stringBuffer2.append("Invalid character before token (pos ");
                        stringBuffer2.append(i2);
                        stringBuffer2.append("): ");
                        stringBuffer2.append(this.currentHeader);
                        throw new ParseException(stringBuffer2.toString());
                    }
                    z = true;
                }
            }
            if (!z) {
                if (this.headerIt.hasNext()) {
                    this.currentHeader = this.headerIt.nextHeader().getValue();
                    i2 = 0;
                } else {
                    this.currentHeader = null;
                }
            }
        }
        if (z) {
            return i2;
        }
        return -1;
    }

    @Override // org.apache.http.TokenIterator, java.util.Iterator
    public boolean hasNext() {
        return this.currentToken != null;
    }

    protected boolean isHttpSeparator(char c2) {
        return HTTP_SEPARATORS.indexOf(c2) >= 0;
    }

    protected boolean isTokenChar(char c2) {
        if (Character.isLetterOrDigit(c2)) {
            return true;
        }
        return (Character.isISOControl(c2) || isHttpSeparator(c2)) ? false : true;
    }

    protected boolean isTokenSeparator(char c2) {
        return c2 == ',';
    }

    protected boolean isWhitespace(char c2) {
        return c2 == '\t' || Character.isSpaceChar(c2);
    }

    @Override // java.util.Iterator
    public final Object next() {
        return nextToken();
    }

    @Override // org.apache.http.TokenIterator
    public String nextToken() {
        String str = this.currentToken;
        if (str == null) {
            throw new NoSuchElementException("Iteration already finished.");
        }
        this.searchPos = findNext(this.searchPos);
        return str;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Removing tokens is not supported.");
    }
}
