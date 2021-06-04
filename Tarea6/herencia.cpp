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
          Hoteles(int _costo,int _habitaciones, int _dias,string _comida): Hospedaje(_costo){
           numHabitaciones = _habitaciones;
           servicioComida = _comida;
           dias = _dias;
          }

       int calcularCostos(){
              int costos = 0;
              costos = obtenerCosto() * numHabitaciones * dias;
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
          int numHabitaciones;
          int dias;
          string servicioComida;

};

class Apartamentos: public Hospedaje{
  public:
         Apartamentos(int _costo, int _mesesRenta):Hospedaje(_costo){
             mesesRenta = _mesesRenta;
         }


       int calcularCostos(){
              return obtenerCosto() * mesesRenta;
       }

  private:
         int mesesRenta;
};

class AirBnb: public Hospedaje{
   public: 
          AirBnb(int _costo, int _personas):Hospedaje(_costo){
           numPersonas = _personas;
          }

          int calcularCostos(){
              return obtenerCosto() / numPersonas;
       }

   private:
        int numPersonas;
};



int main(){

    Hoteles hotel(100,2,3,"Almuerzo");
    cout<<"Costo de reservar en hotel: "<<hotel.calcularCostos()<<endl;

    Apartamentos apart(2500,2);
    cout<<"Costo de reservar en apartamento: "<<apart.calcularCostos()<<endl;

    AirBnb air(1000,4);
    cout<<"Costo de reservar en AirBnb por persona: "<<air.calcularCostos()<<endl;


    return 0;

}
