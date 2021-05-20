int num = 0;
int btnIncrementar=2;
int btnDecrementar=3;
int ledRojo=5;
int ledVerde=4;
void setup()
{
  pinMode(btnIncrementar, INPUT);
  pinMode(btnDecrementar, INPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  Serial.print("Numero: ");
  Serial.println(num);
  if(digitalRead(btnIncrementar)){
     num++;
     digitalWrite(ledVerde, HIGH);
     delay(100); 
     digitalWrite(ledVerde, LOW);
  }
  if(digitalRead(btnDecrementar)){
     num--;
     digitalWrite(ledRojo, HIGH);
     delay(100); 
     digitalWrite(ledRojo, LOW);
  }
}