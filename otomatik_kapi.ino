#define BLYNK_PRINT Serial
#define guc 4         //Nodemcu üzerinde D2 pini
#define role 5        //Nodemcu üzerinde D1 pini
#define bildirim 12   //Nodemcu üzerinde D6 pini
#define internet 13   //Nodemcu üzerinde D7 pini

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>
SimpleTimer timer;

char auth[] = "bu kısıma token gelecek";                //Blynk App Tokeni

char ssid[] = "bu kısıma ağ adı gelecek";               //Ağ adı
char pass[] = "bu kısıma ağ parolası gelecek";         //Ağ Şifresi
bool result;

void setup()
{
  pinMode (guc, OUTPUT);  //Güç Ledi
  pinMode (role, OUTPUT);  //Röle
  pinMode (bildirim, OUTPUT); //Bildirim Ledi
  pinMode (internet, OUTPUT); //İnternet Ledi
  digitalWrite(guc,1);
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

BLYNK_WRITE(V1) {                     //Blynk uygulamasında V1 sanal butonu oluşturun
   if (param.asInt()==1){  
    digitalWrite(role, !digitalRead(role));  
    digitalWrite(bildirim, !digitalRead(bildirim));
    timer.setTimeout(100L, [](){
    digitalWrite(role, !digitalRead(role));  
    digitalWrite(bildirim, !digitalRead(bildirim));
    Blynk.virtualWrite(V1, LOW);
    });
  };
}


void loop()
{
  Blynk.run();
  result = Blynk.connected();
  if(result){
    digitalWrite(internet,1);
  }else{
    digitalWrite(internet,0);
  }
  timer.run();
}
