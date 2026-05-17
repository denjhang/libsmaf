package org.apache.http.impl.cookie;

import org.apache.http.annotation.Immutable;
import org.apache.http.cookie.MalformedCookieException;
import org.apache.http.cookie.SetCookie;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class BasicExpiresHandler extends AbstractCookieAttributeHandler {
    private final String[] datepatterns;

    public BasicExpiresHandler(String[] strArr) {
        if (strArr == null) {
            throw new IllegalArgumentException("Array of date patterns may not be null");
        }
        this.datepatterns = strArr;
    }

    @Override // org.apache.http.cookie.CookieAttributeHandler
    public void parse(SetCookie setCookie, String str) throws MalformedCookieException {
        if (setCookie == null) {
            throw new IllegalArgumentException("Cookie may not be null");
        }
        if (str == null) {
            throw new MalformedCookieException("Missing value for expires attribute");
        }
        try {
            setCookie.setExpiryDate(DateUtils.parseDate(str, this.datepatterns));
        } catch (DateParseException unused) {
            throw new MalformedCookieException("Unable to parse expires attribute: " + str);
        }
    }
}
