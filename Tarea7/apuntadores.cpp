#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<string.h>

using namespace std;

void mostrarFechaHora (int anio, int mes, int dia, int hora, int minuto){
  string m[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio",
                  "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
  if(mes<=12 && mes>=1){
    if(hora<=23 && hora>=0){
      if( minuto<=59 && minuto>=0){
         string mesC =  m[mes-1];
         char mesF[11];
         strcpy(mesF,mesC.c_str());

          char diaC[3];
          itoa(dia,diaC,10);

          char anioC[5];
          itoa(anio,anioC,10);

        cout<<dia<<" de "<<m[mes-1]<<" de "<< anio <<", "<<hora<<":"<<minuto<<endl;
         char fecha[300];
         fecha[0] = diaC[0];
         fecha[1] = diaC[1];
         fecha[2] = 'd';
        fecha[3] = 'e';
         fecha[4] = mesF[0];
         fecha[5] =  mesF[1];


         cout<<fecha<<endl;
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