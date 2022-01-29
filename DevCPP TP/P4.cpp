//Cajero Automatico con saldo inicial de 1000 dolares 
//Servando Negrete Idrogo 

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(){
	int saldo_inicial= 1000,opc;
	float extra,saldo = 0,retiro;
	
	do{
	printf("\tBienvenido a su Cajero Virtual\n");
	printf("\n1. Ingresar dinero en cuenta\n2. Retirar dinero de la cuenta\n3. Salir\n");
	printf("Opcion:");
	scanf("%d",&opc); 
		switch(opc){
		case 1:
			printf("\nDigite la cantidad de dinero a ingresar: ");
			scanf("%f",&extra);
			saldo = saldo_inicial + extra;
			printf("Dinero en cuenta: %f\n",saldo);
			system("PAUSE");
			system("CLS");
			break;
			
		case 2:
			printf("\nDigite al cantidad de dinero que va a retirar: ");
			scanf("%f",&retiro);
			
			if(retiro > saldo_inicial){
				printf("No tiene esa cantidad de dinero\n");
			}
			else{
				saldo = saldo_inicial-retiro;
				printf("Dinero en cuenta: %f\n",saldo);
			}
			system("PAUSE");
			system("CLS");
				break;		
		case 3:
			printf("\nGRACIAS HASTA LUEGO!!");
			break;
		
		default:
			printf("\nElija una opcion disponible porfavor\n");	
			system("PAUSE");
			system("CLS");
		}
	}while(opc != 3);
	getch();
}


