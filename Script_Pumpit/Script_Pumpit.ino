
unsigned long myDelay = 259200000; //time in ms - 2 days
unsigned long myStop = 240000; //time in ms - 2 min
unsigned long waitUntil = 0;
unsigned long myWait = 3600000;
unsigned long blinky = 0;

int led_g= 13;
int led_r= 12;
int relay= 9;


void setup()
{
  pinMode(led_g, OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(relay, OUTPUT);
  digitalWrite(led_r, HIGH);
}

void loop()
{ 
 if ((long)(millis() - waitUntil) >= 0)
 {

  digitalWrite(led_g, HIGH);
  delay(1000);
  digitalWrite(led_g, LOW);
  delay(1000);
  digitalWrite(led_g, HIGH);
  delay(1000);
  digitalWrite(led_g, LOW);
  delay(1000);
  digitalWrite(led_g, HIGH);
  
  digitalWrite(relay, HIGH);//first cycle
  delay(myStop);
  digitalWrite(relay, LOW);
  delay(30000);
  digitalWrite(relay, HIGH);//second cycle
  delay(myStop);
  
  digitalWrite(relay, LOW);
  digitalWrite(led_g, LOW);
  delay(1000);
  digitalWrite(led_g, HIGH);
  delay(1000);
  digitalWrite(led_g, LOW);
  digitalWrite(led_r, LOW);
  

  waitUntil += myDelay;//adding time until next cycle
 }
 
 if ((long)(millis() - blinky) >= 0)
 {
   digitalWrite(led_r, HIGH);
   delay(1000);
   digitalWrite(led_r, LOW);
   delay(1000);
   digitalWrite(led_r, HIGH);
   
   blinky += myWait;
 }
}
  
  
 
 
  
