package org.apache.http.util;

import java.io.Serializable;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class CharArrayBuffer implements Serializable {
    private static final long serialVersionUID = -6208952725094867135L;
    private char[] buffer;
    private int len;

    public CharArrayBuffer(int i) {
        if (i < 0) {
            throw new IllegalArgumentException("Buffer capacity may not be negative");
        }
        this.buffer = new char[i];
    }

    private void expand(int i) {
        char[] cArr = new char[Math.max(this.buffer.length << 1, i)];
        System.arraycopy(this.buffer, 0, cArr, 0, this.len);
        this.buffer = cArr;
    }

    public void append(char c2) {
        int i = this.len + 1;
        if (i > this.buffer.length) {
            expand(i);
        }
        this.buffer[this.len] = c2;
        this.len = i;
    }

    public void append(Object obj) {
        append(String.valueOf(obj));
    }

    public void append(String str) {
        if (str == null) {
            str = "null";
        }
        int length = str.length();
        int i = this.len + length;
        if (i > this.buffer.length) {
            expand(i);
        }
        str.getChars(0, length, this.buffer, this.len);
        this.len = i;
    }

    public void append(ByteArrayBuffer byteArrayBuffer, int i, int i2) {
        if (byteArrayBuffer == null) {
            return;
        }
        append(byteArrayBuffer.buffer(), i, i2);
    }

    public void append(CharArrayBuffer charArrayBuffer) {
        if (charArrayBuffer == null) {
            return;
        }
        append(charArrayBuffer.buffer, 0, charArrayBuffer.len);
    }

    public void append(CharArrayBuffer charArrayBuffer, int i, int i2) {
        if (charArrayBuffer == null) {
            return;
        }
        append(charArrayBuffer.buffer, i, i2);
    }

    public void append(byte[] bArr, int i, int i2) {
        int i3;
        if (bArr == null) {
            return;
        }
        if (i < 0 || i > bArr.length || i2 < 0 || (i3 = i + i2) < 0 || i3 > bArr.length) {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("off: ");
            stringBuffer.append(i);
            stringBuffer.append(" len: ");
            stringBuffer.append(i2);
            stringBuffer.append(" b.length: ");
            stringBuffer.append(bArr.length);
            throw new IndexOutOfBoundsException(stringBuffer.toString());
        }
        if (i2 == 0) {
            return;
        }
        int i4 = this.len;
        int i5 = i2 + i4;
        if (i5 > this.buffer.length) {
            expand(i5);
        }
        while (i4 < i5) {
            this.buffer[i4] = (char) (bArr[i] & 255);
            i++;
            i4++;
        }
        this.len = i5;
    }

    public void append(char[] cArr, int i, int i2) {
        int i3;
        if (cArr == null) {
            return;
        }
        if (i < 0 || i > cArr.length || i2 < 0 || (i3 = i + i2) < 0 || i3 > cArr.length) {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("off: ");
            stringBuffer.append(i);
            stringBuffer.append(" len: ");
            stringBuffer.append(i2);
            stringBuffer.append(" b.length: ");
            stringBuffer.append(cArr.length);
            throw new IndexOutOfBoundsException(stringBuffer.toString());
        }
        if (i2 == 0) {
            return;
        }
        int i4 = this.len + i2;
        if (i4 > this.buffer.length) {
            expand(i4);
        }
        System.arraycopy(cArr, i, this.buffer, this.len, i2);
        this.len = i4;
    }

    public char[] buffer() {
        return this.buffer;
    }

    public int capacity() {
        return this.buffer.length;
    }

    public char charAt(int i) {
        return this.buffer[i];
    }

    public void clear() {
        this.len = 0;
    }

    public void ensureCapacity(int i) {
        if (i <= 0) {
            return;
        }
        int length = this.buffer.length;
        int i2 = this.len;
        if (i > length - i2) {
            expand(i2 + i);
        }
    }

    public int indexOf(int i) {
        return indexOf(i, 0, this.len);
    }

    public int indexOf(int i, int i2, int i3) {
        if (i2 < 0) {
            i2 = 0;
        }
        int i4 = this.len;
        if (i3 > i4) {
            i3 = i4;
        }
        if (i2 > i3) {
            return -1;
        }
        while (i2 < i3) {
            if (this.buffer[i2] == i) {
                return i2;
            }
            i2++;
        }
        return -1;
    }

    public boolean isEmpty() {
        return this.len == 0;
    }

    public boolean isFull() {
        return this.len == this.buffer.length;
    }

    public int length() {
        return this.len;
    }

    public void setLength(int i) {
        if (i >= 0 && i <= this.buffer.length) {
            this.len = i;
            return;
        }
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("len: ");
        stringBuffer.append(i);
        stringBuffer.append(" < 0 or > buffer len: ");
        stringBuffer.append(this.buffer.length);
        throw new IndexOutOfBoundsException(stringBuffer.toString());
    }

    public String substring(int i, int i2) {
        return new String(this.buffer, i, i2 - i);
    }

    public String substringTrimmed(int i, int i2) {
        if (i < 0) {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("Negative beginIndex: ");
            stringBuffer.append(i);
            throw new IndexOutOfBoundsException(stringBuffer.toString());
        }
        if (i2 > this.len) {
            StringBuffer stringBuffer2 = new StringBuffer();
            stringBuffer2.append("endIndex: ");
            stringBuffer2.append(i2);
            stringBuffer2.append(" > length: ");
            stringBuffer2.append(this.len);
            throw new IndexOutOfBoundsException(stringBuffer2.toString());
        }
        if (i > i2) {
            StringBuffer stringBuffer3 = new StringBuffer();
            stringBuffer3.append("beginIndex: ");
            stringBuffer3.append(i);
            stringBuffer3.append(" > endIndex: ");
            stringBuffer3.append(i2);
            throw new IndexOutOfBoundsException(stringBuffer3.toString());
        }
        while (i < i2 && HTTP.isWhitespace(this.buffer[i])) {
            i++;
        }
        while (i2 > i && HTTP.isWhitespace(this.buffer[i2 - 1])) {
            i2--;
        }
        return new String(this.buffer, i, i2 - i);
    }

    public char[] toCharArray() {
        int i = this.len;
        char[] cArr = new char[i];
        if (i > 0) {
            System.arraycopy(this.buffer, 0, cArr, 0, i);
        }
        return cArr;
    }

    public String toString() {
        return new String(this.buffer, 0, this.len);
    }
}
