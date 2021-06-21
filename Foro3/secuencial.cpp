#include <iostream>
using namespace std;
void mostrarArreglo(const int[], int); 
int busquedaSecuencial(const int[], int, int); 

int main()
{
  int valor =0,indice=0;
  const int tamano = 10;
 
  int arreglo[tamano] = {13,16,80,32,95,100,115,41,67,78};

  cout << "Elementos del arreglo: " << endl;
  mostrarArreglo(arreglo,tamano);
  cout << "Indique el valor a buscar: ";
  cin >> valor;
  indice = busquedaSecuencial(arreglo,tamano,valor);
  if(indice!=-1)
  cout<< "Su valor se encuentra en la posicion "<<indice<<" del arreglo" << endl;
  else
   cout<< "No se encontro el valor en el arreglo" << endl;
   
  return 0;
}

void mostrarArreglo(const int arreglo[], int tamano)
{
  for (int i = 0 ; i < tamano ; i++)
    cout  << i << " => " << arreglo[i] << endl;
}

int busquedaSecuencial(const int arreglo[], int tamano, int valor)
{
 for(int i =0; i<tamano; i++){
     if(arreglo[i] == valor)
       return i;
 }
 return -1;
}
