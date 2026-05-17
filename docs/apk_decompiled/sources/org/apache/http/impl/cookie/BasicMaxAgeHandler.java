package org.apache.http.impl.cookie;

import java.util.Date;
import org.apache.http.annotation.Immutable;
import org.apache.http.cookie.MalformedCookieException;
import org.apache.http.cookie.SetCookie;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class BasicMaxAgeHandler extends AbstractCookieAttributeHandler {
    @Override // org.apache.http.cookie.CookieAttributeHandler
    public void parse(SetCookie setCookie, String str) throws MalformedCookieException {
        if (setCookie == null) {
            throw new IllegalArgumentException("Cookie may not be null");
        }
        if (str == null) {
            throw new MalformedCookieException("Missing value for max-age attribute");
        }
        try {
            int i = Integer.parseInt(str);
            if (i >= 0) {
                setCookie.setExpiryDate(new Date(System.currentTimeMillis() + (((long) i) * 1000)));
                return;
            }
            throw new MalformedCookieException("Negative max-age attribute: " + str);
        } catch (NumberFormatException unused) {
            throw new MalformedCookieException("Invalid max-age attribute: " + str);
        }
    }
}
