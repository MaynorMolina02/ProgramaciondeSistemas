#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<string.h>

using namespace std;

int longitudCadena(char *cadena){
    int t = 0;
    while(*cadena != '\0'){
     t++;
     *cadena++;
    }
     return t;
}

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

            char horaC[3];
          itoa(hora,horaC,10);

            char minutoC[3];
          itoa(minuto,minutoC,10);

        cout<<dia<<" de "<<m[mes-1]<<" de "<< anio <<", "<<hora<<":"<<minuto<<endl;
         char fecha[90];
 
         
         int j=0;
         int i=0;

         for(i=0; i<longitudCadena(diaC); i++){
            fecha[j] = diaC[i];
            j++;
         }
         fecha[j] =' ';
         fecha[j+1] = 'd';
         fecha[j+2] = 'e';
         fecha[j+3] = ' ';

         j+=4;
         for(i=0; i<longitudCadena(mesF); i++){
            fecha[j] = mesF[i];
            j++;
         }
            fecha[j] =' ';
         fecha[j+1] = 'd';
         fecha[j+2] = 'e';
         fecha[j+3] = ' ';

         j+=4;
          for(i=0; i<longitudCadena(anioC); i++){
            fecha[j] = anioC[i];
            j++;
         }

         fecha[j] = ',';
         fecha[j+1] = ' ';
         j+=2;
          for(i=0; i<longitudCadena(horaC); i++){
            fecha[j] = horaC[i];
            j++;
         }
          fecha[j] =':';
        j++;
          for(i=0; i<longitudCadena(minutoC); i++){
            fecha[j] = minutoC[i];
            j++;
         }

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



int main(){
  
 mostrarFechaHora(2016,11,15,7,50);
 char c[40] = "CadenaPrueba";
 cout<<"Tamano de cadena: "<<longitudCadena(c)<<endl;

    return 0;
}