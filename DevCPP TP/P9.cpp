// Servando Negrete Idrogo 
// PROGRAMA QUE CREA, IMPRIME UN ARREGLO UNIDIMENSIONAL
//Y DETERMINA EL ELEMENTO MAYOR DEL ARREGLO

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numeros [100],n,mayor=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<".Digite un numero: ";
		cin>>numeros [i];
		
		if(numeros[i] >mayor){
			mayor = numeros [i];
		}
	}
	
	cout<<"\nEl elemento mayor del arreglo es: "<<mayor<<endl;

	
	getch();
	return 0;
}


