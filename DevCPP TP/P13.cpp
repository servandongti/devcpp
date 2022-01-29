//Directivos del Preprocesador y Variables

#include<stdio.h> //libreria

#define PI 3.1416 //Macro

int y = 5; //Variable Local 

int main (){
	int x =10; // Variable Local
	
	float suma = 0;
	
	suma = PI + x;
	
	printf("La suma es: %.3f",suma);
	
	return 0;
}
