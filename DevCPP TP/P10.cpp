//Servando Negrete Idrogo 
// PROGRAMA QUE CREA, IMPRIME UN ARREGLO UNIDIMENSIONAL
//Y DETERMINA EL ELEMENTO MENOR DEL ARREGLO

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numeros [100],n,menor=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<".Digite un numero: ";
		cin>>numeros [i];
		
		if(numeros[i] <menor){
			menor = numeros [i];
		}
	}
	
	cout<<"\nEl elemento menor del arreglo es: "<<menor<<endl;

	
	getch();
	return 0;
}




