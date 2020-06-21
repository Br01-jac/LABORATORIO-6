#include "iostream"
#include "conio.h"
using namespace std;

int main(void){
int num,buscar,repit=0;

cout<<"Cuantos elementos quiere que tenga su arreglo: ";
cin>>num;
cout<<endl;
int arreglo[num];
for(int i=0;i<num;i++)
{
int dato;
cout<<"ingrese el siguiente dato entero: "<<endl;
cin>>dato;
arreglo[i]=dato;
}
cout<<"Ingresar numero para buscar en el arreglo: "<<endl;
cin>>buscar;

for(int i=0;i<num;i++)
{
  if(buscar==arreglo[i])
  {
    repit++;
  }
}

cout<<"El Numero "<< buscar<< " se repite "<< repit<< " veces";



getch();
return 0;
}