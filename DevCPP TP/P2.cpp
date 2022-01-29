//1951799 
//PROGRAMA QUE CREA E IMPRIME UN ARREGLO BIDIMENSIONAL 
//Y SUMA LOS ELEMENTOS DEL ARREGLO

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int a[11][10],i,j,sum;
	
	for(j=0;j<10;j++){
		sum=0;
		for(i=0;i<10;i++){
			a[i][j]= (i*10)+1+j;
			sum += a[i][j];
		}
		a[10][j]=sum;
	}
	
	for(i=0;i<11;i++){
		for(j=0;j<10;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	system("PAUSE");
	return 0;
}



