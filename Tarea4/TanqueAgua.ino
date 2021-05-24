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

class PULSADOR{
  public:
  PULSADOR(byte puerto){
    pin = puerto;
    pinMode(pin, INPUT);
  }
  
  bool leer(){
    return digitalRead(pin);
  }
  
  private:
         byte pin;
};

class BUZZER{
  public:
  BUZZER(byte puerto){
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

//LED VERDE tanque lleno
//LED Roja tanque vacio
//LED amarilla ingresando agua
//LED azul consumiendo agua 
LED luzVerde(10);
LED luzRoja(8);
LED luzAmarilla(12);
LED luzAzul(11);

PULSADOR ingresar(6);
PULSADOR consumir(7);
BUZZER buz1(13);
int min = 0;
int max = 180;

Servo serv;

void setup()
{
   serv.attach(A5);
  serv.write(0);
  Serial.begin(9600);
}

void loop()
{
 int valor = serv.read();

  Serial.print("Nivel de agua:");
  Serial.println(valor);
  if(ingresar.leer()){
    if(valor<max){
      luzAmarilla.onOff(1);
      delay(100);
      luzAmarilla.onOff(0);
      luzRoja.onOff(0);
      luzAzul.onOff(0);
      luzVerde.onOff(0);
      //Ingresando agua
      serv.write(valor+20);
  }else{
     Serial.println("TANQUE LLENO");
      luzAmarilla.onOff(0);
      luzRoja.onOff(0);
      luzAzul.onOff(0);
      luzVerde.onOff(1);
     buz1.onOff(1);
     delay(1000);
     buz1.onOff(0);
   }
  }else{
  if(consumir.leer()){
      if(valor>min){
        luzAmarilla.onOff(0);
        luzRoja.onOff(0);
        luzAzul.onOff(1);
        delay(100);
        luzAzul.onOff(0);
        luzVerde.onOff(0);
        //Consumiendo agua
        serv.write(valor-20);
    }else{
      Serial.println("TANQUE VACIO");
       luzAmarilla.onOff(0);
        luzRoja.onOff(1);
        luzAzul.onOff(0);
        luzVerde.onOff(0);
       buz1.onOff(1);
       delay(1000);
       buz1.onOff(0);
    }
}
  
 }   
}
