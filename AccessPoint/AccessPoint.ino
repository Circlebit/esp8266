#include <ESP8266WiFi.h>

const char *ssid = "ITM";

void setup() {
  Serial.begin(115200);
  WiFi.softAP(ssid);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  }
  
void loop() {
  
  }
