// C++ code
//
int num = 0;
int push1=2;
int push2=3;
int ledRojo=5;
int ledVerde=4;
void setup()
{
  pinMode(push1, INPUT);
  pinMode(push2, INPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Numero: ");
  Serial.println(num);
  if(digitalRead(push1)){
     num++;
     digitalWrite(ledVerde, HIGH);
     delay(100); 
     digitalWrite(ledVerde, LOW);
  }
  if(digitalRead(push2)){
     num--;
     digitalWrite(ledRojo, HIGH);
     delay(100); 
     digitalWrite(ledRojo, LOW);
  }
 
}