#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>


const int R1  = 5;            // Output Relay 1 GPI0 05 (D1)
const int R2  = 4;            // Output Relay 2 GPI0 04 (D2)
const int R3  = 0;            // Output Relay 1 GPI0 00 (D3)


Servo servo;

char auth[] = "dvMQZS-B5xUDFIz890cdIJ1cCTmfkmM4";
char ssid[] = "ROGUE";
char pass[] = "themselves";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  servo.attach(15); // NodeMCU D8 pin
  pinMode(R1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(R3,OUTPUT);
  
 }
  
void loop()
{
  
  Blynk.run();
  
}
BLYNK_WRITE(V1)
{
   servo.write(param.asInt());
}

BLYNK_WRITE(V2)
{
  servo.write(0);
}
BLYNK_WRITE(V3)
{
  servo.write(90);
}
