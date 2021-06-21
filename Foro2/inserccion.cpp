#include<iostream>
using namespace std;
#define MAX 50
struct ordenamiento
{int elem ;
};

void leerarray(int,struct ordenamiento []);
void insercion (int,struct ordenamiento []);
void muestra (int,struct ordenamiento []);

int main(){
    int n;
struct ordenamiento orden[MAX];
cout<<"Ingrese dimension del arreglo:";
cin>>n;
leerarray(n,orden);
insercion (n,orden);
cout<<endl<<"El arreglo ordenado es:"<<endl;
muestra(n,orden);
cout<<endl;
return 0;
}


void leerarray(int n,struct ordenamiento a[])
{ for(int i=0;i<n;i++)
{
cout<<"Ingrese elemento "<<i<<":";
cin>>a[i].elem;
}
}
void insercion (int n,struct ordenamiento a[])
{
int i,j;
struct ordenamiento temp;
for(i=1;i<n;i++)
{ temp=a[i];
for(j=i-1;j>=0 && temp.elem<a[j].elem ;j--)
a[j+1]=a[j];
a[j+1]=temp;
}
}
void muestra (int n,struct ordenamiento a[])
{
for(int i=0;i<n;i++)
cout<<" "<<a[i].elem;
}