#include<iostream>

using namespace std;

int main(){
     double peso,altura,bmi;
     cout<<"CALCULADORA DE INDICE CORPORAL \n"<<endl;
     cout<<"Ingrese el peso en kg: ";
     cin>>peso;
     cout<<"Ingrese la altura en metros: ";
     cin>>altura;
     
     bmi = peso/(altura*altura);
     cout<<"Su indice de masa corporal es: "<<bmi<<endl;
     if(bmi<18.5){
         cout<<"Bajo Peso"<<endl;
     }
     else if(bmi<25){
         cout<<"Normal"<<endl;
     }
     else if(bmi<30){
         cout<<"Sobrepeso"<<endl;
     }
    else{
         cout<<"Obeso"<<endl;
     }



    return 0;
}