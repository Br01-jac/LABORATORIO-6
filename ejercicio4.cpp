#include "iostream"
#include "conio.h"
using namespace std;

int arreglos();
int resultado();
int sumaarreglos();
 
int arreglos(){
    int n,x=1,aux,y=1;
    int a[100], b[100],suma =0,c[100];
    cout<<"SUMA DE ELEMENTOS DE ARREGLOS."<<endl<<endl;
 cout<<"cuentos elementos quiere que tengan sus arreglos: ";
 cin>>n;
 cout<<"digite los "<<n<< " elementos del primer arreglo: "<<endl;
 
for(int i=0;i<n;i++){
    
    cout<<"ingrese el elemento "<<x<<" : ";
cin>>a[i];
x++;
}
cout<<"digite los "<<n<< " elementos del segundo arreglo: "<<endl;
for(int i=0;i<n;i++){
  
    cout<<"ingrese el elemento "<<y<<" : ";
cin>>b[i];
y++;

}
cout<<"los elementos del tercer arreglo son: "<<endl;
for(int i=0;i<n;i++){

c[i]= a[i]+ b[i];
cout<<c[i]<<endl;

}



}
int sumaarreglos(){

arreglos();
}

 int main(void){
     cout<<"FUNCION PARA CALCULAR SUMA DE LOS PRIMEROS DOS ARREGLOS YA DEFINIDOS."<<endl<<endl;
sumaarreglos();


     getch();
     return 0;
 }