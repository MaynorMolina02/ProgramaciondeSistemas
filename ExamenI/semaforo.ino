class LED{
  public:
  LED(byte puerto){
    pin = puerto;
    pinMode(pin, OUTPUT);
  }
  
  void onOff(bool accion){
    if(accion){
      digitalWrite(pin,HIGH);
    }
    else{
      digitalWrite(pin,LOW);
    }
  }
  
  private:
         byte pin;
};

class SENSOR{
  public:
    SENSOR(byte puerto, byte puerto2){
    trig = puerto;
    entrada = puerto2;
     pinMode(trig, OUTPUT);
    pinMode(entrada, INPUT);
  }
   
  int encender(){
    digitalWrite(trig, LOW);
  	delayMicroseconds(2);
  	digitalWrite(trig, HIGH);
  	delayMicroseconds(10);
    digitalWrite(trig, LOW);
  }
  int DistanciaCm(){
        distancia =  0.01723 * pulseIn (entrada,HIGH); //pasando a cm
		return distancia;
  }
    
  
  private:
         byte trig;
         byte entrada;
         int distancia;
};


LED luzVerde(2);
LED luzAmarilla(7);
LED luzRoja(9);
SENSOR proximidad(13,12);
int dist = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  proximidad.encender();
   
  //100% del alcance 335cm
  //90%  301.5cm
  //80%  0 - 268cm
  
 Serial.println(dist);
dist = proximidad.DistanciaCm();
  if(dist > 301.4){
  luzRoja.onOff(1);
    luzVerde.onOff(0);
    //delay(3000);
  }else{
    luzVerde.onOff(1);
    luzRoja.onOff(0);
  }
}