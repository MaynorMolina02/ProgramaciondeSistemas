#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    double aleatorio=0;
    srand (time(NULL));
 
    int partidosPendientes =0;
    int golesEquipo1, golesEquipo2;
    int i = 0;
    int puntosEquipo1=6;
    int puntosEquipo2=6;

    cout<<"Ingrese numero de partidos pendientes: ";
    cin>>partidosPendientes;
    // partidosPendientes = 3;
    cout<<"Puntaje inicial de los equipos "<<endl;
    cout<<"Equipo 1 = "<<puntosEquipo1<<endl<<"Equipo 2 = "<<puntosEquipo2<<endl;
    while(i<partidosPendientes){
          golesEquipo1= rand() % 10;
          golesEquipo2= rand() % 10;
          cout<<endl<<"Goles Partido => ";
          cout<<"Equipo1="<<golesEquipo1<<" Equipo2="<<golesEquipo2<<endl;
          if(golesEquipo1 > golesEquipo2){
              puntosEquipo1 +=3;
              cout<<"Resultado: Gano Equipo 1"<<endl;
          }
          else if (golesEquipo1 == golesEquipo2){
              puntosEquipo1 +=1;
              puntosEquipo2 +=1;
             cout<<"Resultado: Empate"<<endl;
          }
          else if (golesEquipo1 < golesEquipo2){
              puntosEquipo2 +=3;
             cout<<"Resultado: Gano Equipo 2"<<endl;
          }
         
        i++;
    }
     cout<<"\nPuntaje final "<<endl<<"Equipo 1 = "<<puntosEquipo1<<endl<<"Equipo 2 = "<<puntosEquipo2<<endl;
    if(puntosEquipo1 > puntosEquipo2){
        cout<<"EL CAMPEON ES EL EQUIPO 1"<<endl;
    }
    else
        cout<<"EL CAMPEON ES EL EQUIPO 2"<<endl;
    
    
    return 0;
}