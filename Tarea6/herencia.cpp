#include<iostream>

using namespace std;
//calcular costos por Noche
class Hospedaje{
public:
      Hospedaje(int _costo){
            costoHospdaje = _costo;
      }
      int obtenerCosto(){
           return costoHospdaje;
      }

 private:
      int costoHospdaje;
};

class Hoteles: public Hospedaje{
   public:
          Hoteles(int _costo,string _habitaciones,string _comida): Hospedaje(_costo){
           numHabitaciones = _habitaciones;
           servicioComida = _comida;
          }

       int calcularCostos(){
              int costos = 0;
              costos = obtenerCosto() * numHabitaciones;
              if(servicioComida == "Almuerzo"){
                costos +=100;
              }else  if(servicioComida == "Desayuno"){
                costos +=50;
              }else  if(servicioComida == "Cena"){
                costos +=80;
              }
              return costos;
       }

   private:
   //desayuno, almuerzo y cena
          int numHabitaciones;
          string servicioComida;

};

class Apartamentos: public Hospedaje{
  public:
         Apartamentos(int _costo, int _tiempoRenta):Hospedaje(_costo){
             tiempoRenta = _tiempoRenta;
         }
  private:
         //rentarse mau
         int tiempoRenta;
};

class AirBnb: public Hospedaje{
   public: 
          AirBnb(int _costo, int _personas):Hospedaje(_costo){
           numPersonas = _personas;
          }

   private:
        int numPersonas;
};



int main(){
    Hoteles hotel(100,2."Almuerz0");

    return 0;
}_