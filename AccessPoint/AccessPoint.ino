// Based on Indraos' sample code on
// https://github.com/Indraos/Indraos.github.io/blob/master/_posts/2018-10-15-arduino-iot.markdown

#include <ESP8266WiFi.h>

const char *ssid = "MyNodeMcu"; // set SSID

void setup() {
  Serial.begin(115200); // open Serial connection
  WiFi.softAP(ssid); // set up AP
  IPAddress myIP = WiFi.softAPIP(); // get IP
  Serial.print("AP IP address: ");
  Serial.println(myIP); // print IP to Serial
}
  
void loop() {
  
}
