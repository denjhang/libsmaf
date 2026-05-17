package org.apache.http.impl.cookie;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.Reader;
import java.util.ArrayList;
import org.apache.http.annotation.Immutable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class PublicSuffixListParser {
    private static final int MAX_LINE_LEN = 256;
    private final PublicSuffixFilter filter;

    PublicSuffixListParser(PublicSuffixFilter publicSuffixFilter) {
        this.filter = publicSuffixFilter;
    }

    private boolean readLine(Reader reader, StringBuilder sb) throws IOException {
        char c2;
        sb.setLength(0);
        boolean z = false;
        do {
            int i = reader.read();
            if (i == -1 || (c2 = (char) i) == '\n') {
                return i != -1;
            }
            if (Character.isWhitespace(c2)) {
                z = true;
            }
            if (!z) {
                sb.append(c2);
            }
        } while (sb.length() <= MAX_LINE_LEN);
        throw new IOException("Line too long");
    }

    public void parse(Reader reader) throws IOException {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        BufferedReader bufferedReader = new BufferedReader(reader);
        StringBuilder sb = new StringBuilder(MAX_LINE_LEN);
        boolean line = true;
        while (line) {
            line = readLine(bufferedReader, sb);
            String string = sb.toString();
            if (string.length() != 0 && !string.startsWith("//")) {
                if (string.startsWith(".")) {
                    string = string.substring(1);
                }
                boolean zStartsWith = string.startsWith("!");
                if (zStartsWith) {
                    string = string.substring(1);
                }
                if (zStartsWith) {
                    arrayList2.add(string);
                } else {
                    arrayList.add(string);
                }
            }
        }
        this.filter.setPublicSuffixes(arrayList);
        this.filter.setExceptions(arrayList2);
    }
}
