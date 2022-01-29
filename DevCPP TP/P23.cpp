//Servando Negrete Idrogo 
//PROGRAMA QUE CREA E IMPRIME UN ARREGLO BIDIMENSIONAL
//Y SUMA LOS ELEMENTOS DE LA TRIANGULAR INFERIOR
/*
    Inferior        Superior
    1  2  3         8  0  0
    0  5  6         5  6  0
    0  0  6         2  3  6
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int llenar(int m[][100],int &cf);
int comprobar (int m[][100],int cf);
int imprimir (int m[][100],int cf);

int main(){
	int m[100][100],cf;
	
	llenar (m,cf);
	comprobar(m,cf);
	imprimir(m,cf);
	
	system("PAUSE");
	return 0;
}

int llenar(int m[][100],int &cf){
	int i,j;
	
	do{
		cout<<"Ingrese cantidad de filas:  ";
		cin>>cf;
	}while(cf>100);
	
	for(i=0;i<cf;i++){
		for(j=0;j<cf;j++){
			cout<<"Ingrese numero para ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}


 int comprobar(int m[][100],int cf){
 	int superior =0,inferior=0;
	 int i=1;
	 //Inferior:
	 while(i<cf){
	 	int j=0;
	 	do{
	 		if(m[i][j]==0){
	 			j++;
	 		}
	 		else{
	 			inferior=1;
	 			break;
	 		}
	 	}while((j<i)&&(inferior=0));
	 	i++;
	 }
	 
	 //Superior	
	 int f=0,c=1;
	 while(f<cf){
	 	do{
	 		if(m[f][c]==0){
	 			c++;
	 		}
	 		else{
	 			superior=1;
	 			break;
	 		}
	 	}while((c<f)&&(superior=0));
	 	f++;
	 }
	 
	 if(inferior==0){
	 	cout<<"Triangular inferior";
	 }
	  if(superior==0){
	 	cout<<"Triangular superior";
	 }
	 if ((inferior==1)&&(superior==1)){
	 	cout<<"Ni inferior ni superior!";
	 }
	 cout<<endl;
}


int imprimir (int m[][100],int cf){
	int i,j;
	for(i=0;i<cf;i++){
		cout<<endl;
		for(j=0;j<cf;j++){
			
		}
	}
}





