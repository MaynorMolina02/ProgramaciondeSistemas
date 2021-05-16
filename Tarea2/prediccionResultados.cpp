#include <iostream>
#include <stdlib.h>     
#include <time.h>      

using namespace std;

int main(){
    srand (time(NULL));
 
    int partidosPendientes =0;
    int golesEquipo1, golesEquipo2;
    int puntosEquipo1=6;
    int puntosEquipo2=6;

    cout<<"Puntaje inicial de los equipos "<<endl;
    cout<<"Equipo 1 = "<<puntosEquipo1<<endl<<"Equipo 2 = "<<puntosEquipo2<<endl<<endl;
	cout<<"Ingrese número de partidos pendientes: ";
    cin>>partidosPendientes;
    
    for(int i=0; i<partidosPendientes; i++){
          golesEquipo1= rand() % 10;
          golesEquipo2= rand() % 10;
          cout<<endl<<i+1<<". Goles Partido => "<<"Equipo1="<<golesEquipo1<<" Equipo2="<<golesEquipo2<<endl;
          if(golesEquipo1 > golesEquipo2){
              puntosEquipo1 +=3;
              cout<<"Resultado: Ganó Equipo 1"<<endl;
          }
          else if (golesEquipo1 == golesEquipo2){
              puntosEquipo1 +=1;
              puntosEquipo2 +=1;
             cout<<"Resultado: Empate"<<endl;
          }
          else if (golesEquipo1 < golesEquipo2){
              puntosEquipo2 +=3;
             cout<<"Resultado: Ganó Equipo 2"<<endl;
          }
    }
     cout<<"\nPuntaje final "<<endl<<"Equipo 1 = "<<puntosEquipo1<<endl<<"Equipo 2 = "<<puntosEquipo2<<endl;
     
     
     while(puntosEquipo1==puntosEquipo2){
    	  golesEquipo1= rand() % 10;
          golesEquipo2= rand() % 10;
          cout<<endl<<"Goles Partido => "<<"Equipo1="<<golesEquipo1<<" Equipo2="<<golesEquipo2<<endl;
          if(golesEquipo1 > golesEquipo2){
              puntosEquipo1 +=3;
              cout<<"Resultado: Ganó Equipo 1"<<endl;
          }
          else if (golesEquipo1 == golesEquipo2){
              puntosEquipo1 +=1;
              puntosEquipo2 +=1;
             cout<<"Resultado: Empate"<<endl;
          }
          else if (golesEquipo1 < golesEquipo2){
              puntosEquipo2 +=3;
             cout<<"Resultado: Ganó Equipo 2"<<endl;
          }
           cout<<"\nPuntaje final "<<endl<<"Equipo 1 = "<<puntosEquipo1<<endl<<"Equipo 2 = "<<puntosEquipo2<<endl;
		}
	
	 
    if(puntosEquipo1 > puntosEquipo2){
        cout<<"EL CAMPEÓN ES EL EQUIPO 1"<<endl;
    }
    else  if(puntosEquipo2 > puntosEquipo1)
        cout<<"EL CAMPEÓN ES EL EQUIPO 2"<<endl;
    
    
    return 0;
}
