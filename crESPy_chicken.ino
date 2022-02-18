#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
ESP8266WebServer server(80);
const char* ssid = "SSID";
const char* password = "PASS";
//Signal-Pin des Relais: D1
//int relay_pin = 5;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("ESP Gestartet");
  WiFi.begin(ssid, password);
  Serial.print("Verbindung wird hergestellt ...");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.print("Verbunden! IP-Adresse: ");
  Serial.println(WiFi.localIP());
  server.onNotFound([](){
    server.send(404, "text/plain", "Link wurde nicht gefunden!");  
  });
  server.on("/", []() {
    server.send(200, "text/plain", "crESPy_chicken");
  });
  server.on("/relay_on", []() {
    server.send(200, "text/plain", "Klappe auf / Sonne an");
    relay_on();
  });
  server.on("/relay_off", []() {
    server.send(200, "text/plain", "Klappe zu / Sonne aus");
    relay_off();
  });
  server.on("/state", []() {
    server.send(200, "text/plain", String(!digitalRead(LED_BUILTIN)));
  });
  server.begin();
  Serial.println("Webserver gestartet.");
}
void loop() {
  server.handleClient();  
}
void relay_on(){
  digitalWrite(LED_BUILTIN, LOW);  
}
void relay_off(){
  digitalWrite(LED_BUILTIN, HIGH);    
}
