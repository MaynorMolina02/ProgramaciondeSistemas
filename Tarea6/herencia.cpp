#include<iostream>

using namespace std;
//calcular costos por Noche
class Hospedaje{
public:
      Hospedaje(){

      }
 
      
};

class Hoteles: public Hospedaje{
   public:

   private:
   //desayuno, almuerzo y cena
          int Habitaciones;
          int servicioComida;

};

class Apartamentos: public Hospedaje{

  private:
         //rentarse mau
         int tiempoRenta;
};

class AirBnb: public Hospedaje{
   public: 
          AirBnb()
   private:
        int numPersonas;
};



int main(){

    return 0;
}