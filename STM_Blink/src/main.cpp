#include <Arduino.h>

int a = 10;
int b = 20;
const char* SSID = "LSPL20";
const char* password = "LspL@#20";

void wificonnect(){
  WiFi.begin(SSID,password);
  Serial.printf("IP: %d",  )

}
void setup(){
  Serial.begin(115200);
  Serial.print("hey Starting STM\n");
  Serial.printf("a = %d", a);
  Serial.printf("b:%d",b);
  Serial.printf("c = %d ",a +b);

}

void loop(){

}