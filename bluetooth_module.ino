int pin1=5;
int pin2=6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(pin1,OUTPUT);
   pinMode(pin2,OUTPUT);

}
     char data;
     
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    data=Serial.read();
 
    if (data=='a'){
      digitalWrite(pin1,HIGH);
    }
    if (data=='1'){
      digitalWrite(pin1,LOW);
    }
    if (data=='b'){
      digitalWrite(pin2,HIGH);
    }
    if (data=='2'){
      digitalWrite(pin2,LOW);
    }
  }

}
