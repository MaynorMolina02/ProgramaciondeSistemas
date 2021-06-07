#include<iostream>
#include<cstdlib>
using namespace std;

void mostrarFechaHora (int anio, int mes, int dia, int hora, int minuto){
  string m[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio",
                  "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
  if(mes<=12 && mes>=1){
    if(hora<=23 && hora>=0){
      if( minuto<=59 && minuto>=0){
         cout<<dia<<" de "<<m[mes-1]<<" de "<< anio <<", "<<hora<<":"<<minuto<<endl;
       }
        else
        cout<<"Minutos incorrectos";
      }
  }
   else
   cout<<"Mes incorrecto";
}

int main(){
  
 mostrarFechaHora(2016,13,15,13,30);


    return 0;
}