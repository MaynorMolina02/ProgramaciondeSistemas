#include<iostream>
#include<cstring>

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
   if(dia<=31 && dia>=1){
    if(hora<=23 && hora>=0){
      if( minuto<=59 && minuto>=0){
         string mesC =  m[mes-1];
         char mesF[11];
          char diaC[3];
          char anioC[5];
          char horaC[3];
          char minutoC[3];

          strcpy(mesF,mesC.c_str());
          itoa(dia,diaC,10);
          itoa(anio,anioC,10);
          itoa(hora,horaC,10);
          itoa(minuto,minutoC,10);

         char *me;
         char *d;
         char *a;
         char *h;
         char *min;
         me = mesF; 
         d = diaC;
         a = anioC;
         h = horaC;
         min = minutoC;

         char fecha[35];
 
         int j=0;
         int i=0;

          while(*d != '\0'){
            fecha[j] = *d++;
            j++;
         }
        
         fecha[j] =' ';
         fecha[j+1] = 'd';
         fecha[j+2] = 'e';
         fecha[j+3] = ' ';

         j+=4;
     
         while(*me != '\0'){
            fecha[j] = *me++;
            j++;
         } 

         fecha[j] =' ';
         fecha[j+1] = 'd';
         fecha[j+2] = 'e';
         fecha[j+3] = ' ';

         j+=4;
         while(*a != '\0'){
            fecha[j] = *a++;
            j++;
         }

         fecha[j] = ',';
         fecha[j+1] = ' ';
         j+=2;
         while(*h != '\0'){
            fecha[j] = *h++;
            j++;
         }
          fecha[j] =':';
          j++;

          while(*min != '\0'){
            fecha[j] = *min++;
            j++;
         }

         cout<<"La fecha y hora es: "<<fecha<<endl;
       }
        else
        cout<<"Minutos incorrectos"<<endl;
      }
      else
          cout<<"Hora incorrecta"<<endl;
     }
   else
   cout<<"Dia incorrecto"<<endl;
  }
   else
   cout<<"Mes incorrecto"<<endl;
}



int main(){

 mostrarFechaHora(2016,9,24,23,30);

 char c[40] = "Cadena de prueba";
 cout<<"El tamano de la cadena '"<<c<<"' es: "<<longitudCadena(c)<<endl;

return 0;
}