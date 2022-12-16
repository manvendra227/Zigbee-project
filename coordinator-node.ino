#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "5QzRRt-bS46dOu88IXTPMEcnJdDa_TJu";
char ssid[] = "pandat";
char pass[] = "12345678";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  pinMode (D5,INPUT);
  pinMode (D6,INPUT);
  
}
int flag1=0;
int flag2=0;
//EXTRA
int flag3=0;
void loop()
{
  Blynk.run();
  int L1=digitalRead(D5);
  int L2=digitalRead(D6);
  //EXTRA
  int L3=digitalRead(D7);
  if(L1==1 && flag1==1){
        Serial.println(0);
        flag1=0;
   }
  if(L1==0 && flag1==0){
        Serial.println(1);
        flag1=1;
   }
  if(L2==1 && flag2==1){
        Serial.println(2);
        flag2=0;
   }
  if(L2==0 && flag2==0){
        Serial.println(3);
        flag2=1;  
   }

//EXTRA
  if(L3==1 && flag3==1){
        Serial.println(4);
        flag3=0;
   }
  if(L3==0 && flag3==0){
        Serial.println(5);
        flag3=1;  
   }
}
