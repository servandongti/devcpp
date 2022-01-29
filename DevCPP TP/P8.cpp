//Servando Negrete Idrogo 
//PROGRAMA QUE CREA E IMPRIME UN ARREGLO BIDIMENSIONAL 
//Y SUMA LOS ELEMENTOS DE LA DIAGONAL SECUNDARIA

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int matriz[2][2]={{8,4},{0,1}};
	int acum=0,fila,columna;
	//imprimir matriz
	for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
	
		cout<<"\t"<<matriz[i][j];
		acum+=matriz[i][j];
	}
	cout<<"\n";
   }
   //mostrando la suma de elementos de la matriz
   cout<<"La suma de los elementos de la matriz es  : "<<acum<<endl;
   cout<<"Ingrese la fila que desea mostrar por pantalla  : ";cin>>fila;
   for(int j=0;j<2;j++){
   	cout<<"\t"<<matriz[fila][j];
   }
   cout<<"\n";
   cout<<"Ahora digite la columna que desea mostrar : ";cin>>columna;
   for(int i=0;i<2;i++){
  	cout<<matriz[i][columna]<<endl;
   }
   cout<<"Diagonal Principal"<<endl;
   for(int i=0;i<2;i++){
   	cout<<"\t"<<matriz[i][i];
   }
   cout<<"\n";
   cout<<"Diagonal Secundaria"<<endl;
   //mostrar la diagonal secundaria
   for(int i=0;i<2;i++){
   	for(int j=0;j<2;j++){
   		if(i!=j){
   			cout<<"\t"<<matriz[i][j];
   		}
   	}
   }
getch();
return 0;
}







