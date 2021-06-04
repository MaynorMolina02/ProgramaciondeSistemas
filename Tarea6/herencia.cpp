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
          Hoteles(int _costo,int _habitaciones, int _dias,int _comida): Hospedaje(_costo){
           numHabitaciones = _habitaciones;
           servicioComida = _comida;
           dias = _dias;
          }

       int calcularCostos(){
              int costos = 0;
              costos = obtenerCosto() * numHabitaciones * dias;
              if(servicioComida == 1){
                costos +=50 * dias;
              }else  if(servicioComida == 2){
                costos +=100 * dias;
              }else  if(servicioComida == 3){
                costos +=80 * dias;
              }
              else  if(servicioComida == 4){
                costos +=230 * dias;
              }
              return costos;
       }

   private:
          int numHabitaciones;
          int dias;
          int servicioComida;

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
    int op = 0;

    while(op!=4){
    cout<<"Menu "<<endl;
    cout<<"1. Hotel"<<endl;
    cout<<"2. Aopartamentos"<<endl;
    cout<<"3. AirBnb"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Elija el lugar donde quiere hospedarse: ";
    cin>>op;

    if(op==1){
	
           int hab, dias;
           int comida;
           cout<<"Ingrese el numero de habitaciones: ";
           cin>> hab;
           cout<<"Ingrese los dias: ";
           cin>> dias;
           cout<<"Ingrese el servicio de commida (1.Desayuno,2.Almuerzo,3.Cena,4.Todos): ";
           cin>> comida;
           int costoHotel = 100;
           Hoteles hotel(costoHotel,hab,dias,comida);
           cout<<"Costo de reservar en hotel: "<<hotel.calcularCostos()<<endl;
          }else
          if(op==2){
		  
             int meses;
             cout<<"Ingrese los meses: ";
             cin>> meses;
             int costoApartamento = 2500;
             Apartamentos apart(costoApartamento,meses);
             cout<<"Costo de reservar en apartamento: "<<apart.calcularCostos()<<endl;
           }else
           if(op==3){
             int personas;
             cout<<"Ingrese el numero de personas: ";
             cin>>personas;
             int costoHab= 1000;
              AirBnb air(costoHab,personas);
              cout<<"Costo de reservar en AirBnb por persona: "<<air.calcularCostos()<<endl;
           }
        cout<<endl;
}
    return 0;

}
