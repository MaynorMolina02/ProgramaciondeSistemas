// C++ code
//
int num = 0;
int incrementar=2;
int decrementar=3;
int ledRojo=5;
int ledVerde=4;
void setup()
{
  pinMode(incrementar, INPUT);
  pinMode(decrementar, INPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Numero: ");
  Serial.println(num);
  if(digitalRead(incrementar)){
     num++;
     digitalWrite(ledVerde, HIGH);
     delay(100); 
     digitalWrite(ledVerde, LOW);
  }
  if(digitalRead(decrementar)){
     num--;
     digitalWrite(ledRojo, HIGH);
     delay(100); 
     digitalWrite(ledRojo, LOW);
  }
 
}