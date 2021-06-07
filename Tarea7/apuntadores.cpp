#include<iostream>
#include<cstdlib>
using namespace std;

void mostrarFechaHora (int anio, int mes, int dia, int hora, int minuto){
  string m[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio",
                  "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
  if(mes<=12 && hora<=23 && hora>=0 && minuto<=59 && minuto>=0){
   cout<<dia<<" de "<<m[mes-1]<<" de "<< anio <<", "<<hora<<":"<<minuto<<endl;}
   else
   cout<<"Fecha incorrecta";
}

int main(){
    char buffer[33];
   int num = 5;
   itoa(num,buffer,10);
 mostrarFechaHora(2016,13,15,13,30);


    return 0;
}