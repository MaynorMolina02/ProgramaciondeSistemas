#include <iostream>
using namespace std;
void mostrarArreglo(const int[], int); 
int busquedaBinaria(const int[], int, int); 

int main()
{
  int valor =0,indice=0;
  const int tamano = 10;
  //Arreglo ordenado
  int arreglo[tamano] = {13,16,32,41,67,78,80,95,100,115};

  cout << "Elementos del arreglo: " << endl;
  mostrarArreglo(arreglo,tamano);
  cout << "Indique el valor a buscar: ";
  cin >> valor;
  indice = busquedaBinaria(arreglo,tamano,valor);
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
int busquedaBinaria(const int arreglo[], int tamano, int valor)
{
  int Iarriba = tamano-1;
  int Iabajo = 0;
  int Icentro;
  while (Iabajo <= Iarriba)
    {
      Icentro = (Iarriba + Iabajo)/2;
      if (arreglo[Icentro] == valor)
 return Icentro;
      else
 if (valor < arreglo[Icentro])
   Iarriba=Icentro-1;
 else
   Iabajo=Icentro+1;
    }
  return -1;
}

