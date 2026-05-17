package jp.co.ymm.android.ringtone.net.a;

import android.util.Xml;
import e.J;
import e.x;
import java.io.IOException;
import java.io.InputStream;
import java.io.StringReader;
import org.apache.http.cookie.ClientCookie;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class i extends jp.co.ymm.android.ringtone.net.a.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public a f3670a = new a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public b f3671b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3672a = null;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f3673b = null;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public String f3674c = null;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public String f3675d = null;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        public String f3676e = null;
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3677a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f3678b;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public J a() {
        x.a aVar = new x.a();
        aVar.a("servicecode", "ymmringtone");
        aVar.a("userkey", this.f3670a.f3672a);
        aVar.a("contentcode", this.f3670a.f3674c);
        String str = this.f3670a.f3675d;
        if (str == null) {
            str = "";
        }
        aVar.a(ClientCookie.VERSION_ATTR, str);
        aVar.a("aid", this.f3670a.f3673b);
        aVar.a("encryptkey", this.f3670a.f3676e);
        return aVar.a();
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public String a(String str) {
        return null;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean a(InputStream inputStream, jp.co.ymm.android.ringtone.net.f fVar, long j) {
        return false;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean b(String str) {
        this.f3671b = new b();
        XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
        boolean z = false;
        try {
            xmlPullParserNewPullParser.setInput(new StringReader(str));
            for (int eventType = xmlPullParserNewPullParser.getEventType(); eventType != 1; eventType = xmlPullParserNewPullParser.next()) {
                if (eventType == 2) {
                    String name = xmlPullParserNewPullParser.getName();
                    if (name.equalsIgnoreCase("acDrm")) {
                        this.f3671b.f3677a = xmlPullParserNewPullParser.getAttributeValue(null, "status");
                    } else if (name.equalsIgnoreCase("acDrmContents")) {
                        this.f3671b.f3678b = xmlPullParserNewPullParser.nextText();
                    }
                } else if (eventType != 3) {
                    continue;
                } else if (xmlPullParserNewPullParser.getName().equalsIgnoreCase("acDrm")) {
                    z = true;
                }
            }
        } catch (IOException | XmlPullParserException e2) {
            jp.co.ymm.android.ringtone.util.g.b("parseXmlResponse ", e2);
        }
        return z;
    }
}
