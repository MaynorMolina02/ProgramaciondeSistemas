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
      else
          cout<<"Hora incorrecta";
  }
   else
   cout<<"Mes incorrecto";
}

int longitudCadena(char *cadena){
    int t = 0;
    while(*cadena != '\0'){
     t++;
     *cadena++;
    }
     return t;
}

int main(){
  
 mostrarFechaHora(2016,11,15,7,50);
 char c[40] = "CadenaPrueba";
 cout<<"Tamano de cadena: "<<longitudCadena(c)<<endl;

    return 0;
}