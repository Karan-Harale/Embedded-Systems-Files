
#include <ESP8266WiFi.h>

const char* ssid = "WIFI_ESP8266_Karan";
const char* password = "12345678";
WiFiServer server(80);

void setup() 
{
delay(1000);
WiFi.softAP(ssid, password);   
server.begin();
delay(2000);
pinMode(BUILTIN_LED, OUTPUT);
delay(100);
digitalWrite(BUILTIN_LED, HIGH);
}


void loop()
 {
  // Check if a client has connected
  WiFiClient client = server.available();
  if (!client) 
{
    return;
  }

while(!client.available())
 {
    delay(1);
  }
  
  String req = client.readStringUntil('\r');
  client.flush();

if (req.indexOf("/LED_1/off") != -1)
digitalWrite(BUILTIN_LED, HIGH);

  else if (req.indexOf("LED_1/on") != -1)
    digitalWrite(BUILTIN_LED, LOW);
  else if (req.indexOf("/") != -1);
  else 
 {
    client.stop();
    return;
  }

client.flush();


HTML += "<h3>Blue LED is now ";

HTML += (digitalRead(BUILTIN_LED))?"OFF":"ON</h3>"; //Low = LED ON and High = LED OFF

HTML += "<h3>Blue LED <button onclick=\"window.location.href='/LED_1/on'\">LED ON</button>&nbsp;<button onclick=\"window.location.href='/LED_1/off'\">LED OFF</button></h3></html>";

client.print(HTML);
delay(10);
}
