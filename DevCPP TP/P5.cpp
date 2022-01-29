/* Datos :
Servando Negrete Idrogo       
*/
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

struct datos{
	char nombres[25];
	char paterno[20];
	char materno[20];
	int edad;
	double telefono;
	char pais[15];
	char estado [20];
	char municipio[20];
	char colonia[20];
	char calle[20];
	int pin;
	int no_cuenta;
	float saldo_cuenta;
}dato[10];

int a,x,i,j,asiento[50][50],fila,butaca;

main(){
	int opcion,sino,salir,numero;
	int flag_one = 1;
	
	do{
		do{
			//MENU PRINCIPAL
			system("cls");
			printf("\n\t\t\t\t  * HOLA, BIENVENIDO *\n");
			printf("\t*-------------------------------------------------------------------*\n");
			printf("\t*\t1.-Registrarse \t\t\t\t\t\t    *\n");
			printf("\t*\t2.-Cuenta \t\t\t\t\t\t    *\n");
			printf("\t*\t3.-Enviar dinero \t\t\t\t\t    *\n");
			printf("\t*\t4.-Cajero automatico \t\t\t\t\t    *\n");
			printf("\t*\t5.-Comprar un boleto para el festival FIMEMUSIC \t    *\n");
			printf("\t*\t6.-Salir \t\t\t\t\t\t    *\n");
			printf("\t*-------------------------------------------------------------------*");
			printf("\n\t> Por favor, ingrese el numero de la operacion deseada: "); 
			scanf("%i", &opcion);
			if(opcion>=1 && opcion<=6){
				flag_one = 0;
			} else {
				printf("\n\n\t-------------------------------------------------------------");
				printf("\n\t  La opcion que se ha ingresado no se encuentra disponible.  \n");
				printf("\t  Intentelo nuevamente.  \n");
				printf("\t-------------------------------------------------------------\n\n");
				system("pause");
				flag_one = 1;
			}
		}while(flag_one==1);
		switch(opcion){ //inicio de switch
			// CAPTURA DE DATOS
			case 1: 
			{
				int i,salir;
				system("cls");
				fflush(stdin);
				for(i=0;i<10;i++){
					do{
						system("cls");
						printf("Nombre(s): ");
						scanf(" %[^\n]", dato[i].nombres);
						fflush(stdin);
						printf("Apellido paterno: ");
						scanf(" %[^\n]", dato[i].paterno);
						printf("Apellido materno: ");
						scanf(" %[^\n]", dato[i].materno);
						printf("Edad: ");
						scanf("%i", &dato[i].edad);
						printf("Telefono: ");
						scanf("%lf", &dato[i].telefono);
						fflush(stdin);
						printf("Pais: ");
						scanf(" %[^\n]", dato[i].pais);
						printf("Estado: ");
						scanf(" %[^\n]", dato[i].estado);
						printf("Municipio: ");
						scanf(" %[^\n]", dato[i].municipio);
						printf("Colonia: ");
						scanf(" %[^\n]", dato[i].colonia);
						printf("Calle y numero: ");
						scanf(" %[^\n]", dato[i].calle);
						printf("\nCapturo sus datos correctamente?  \n1.-SI  \n2.-NO \n");
						printf("Opcion... ");
						scanf("%i", &sino);
						
					}while(sino!=1); //fin de do while
								
				//pongan su matricula
				do{
				printf("\nEscoge 7 digitos para tu numero de cuenta: ");
				scanf("%i", &dato[i].no_cuenta);
				printf("Escoge 4 digitos para tu pin: ");
				scanf("%i", &dato[i].pin);
				printf("Dinero que tendra la cuenta: $");
				scanf("%f", &dato[i].saldo_cuenta);
				printf("\nSus datos fueron capturados correctamente? \n1.-SI \n2.-NO");
				scanf("%i",&salir);
			}while(salir!=1);
			if(salir==1){
				break;
			}//fin de if else
				}
		}//fin de case 1
			break; //break case 1
			
			// INFORMACION DE LA CUENTA
			case 2: 
			{
			int numero,i;
				system("cls");
				fflush(stdin);
				printf("Ingrese su numero de cuenta: ");
				scanf("%i", &numero);
				//buscando usuario
				for(i=0;i<10;i++){
				if(numero==dato[i].no_cuenta){
					printf("\nNombre: %s %s %s \n", dato[i].nombres, dato[i].paterno, dato[i].materno);
					printf("Domilicio: %s, %s, %s, %s, %s. \n", dato[i].pais,dato[i].estado,dato[i].municipio,dato[i].colonia,dato[i].calle);
					printf("Telefono: %.0lf \n", dato[i].telefono);
					printf("Dienero $%.2f \n", dato[i].saldo_cuenta);
					printf("No.cuenta: %i \n", dato[i].no_cuenta);
					system("pause");
					break;
				}else{
				printf("ERROR. El numero de cuenta es incorrecto\n");
				system("pause");
				continue;
				} //fin de if else
			} //fin de for
			} //fin case 2
			break; //break case 2
			
			// DEPOSITAR DINERO A OTRA CUENTA
			case 3: 
			{
				int numero,pin, i, cuenta_externa,continuar;
				float dinero_enviado;
				system("cls");
				fflush(stdin);
				printf("Ingrese su numero de cuenta: ");
				scanf("%i", &numero);
				for(i=0;i<10;i++){
				if(numero==dato[i].no_cuenta){
					printf("Ingrese la cantidad de dinero que desea enviar: $");
					scanf("%f", &dinero_enviado);
					printf("Ingrese la cuenta a la que enviara el dinero (7 digitos): ");
					scanf("%i", &cuenta_externa);
					printf("Ingrese su PIN (4 digitos): ");
					scanf("%i",&pin);
					if(pin==dato[i].pin){
						printf("Usted acaba de depositar $%.2f a la cuenta %i \n", dinero_enviado,cuenta_externa);
						dato[i].saldo_cuenta=dato[i].saldo_cuenta-dinero_enviado;
						system("pause");
						break;
					}else{
						printf("ERROR. El PIN es incorrecto\n");	
						system("pause");
						break;
					}
				}else{
					printf("ERROR. El numero de cuenta es incorrecto\n");
					system("pause");
					break;
				}
			} //fin de for
		}//fin de case 2
			break; //break case 3
					
			
			
			
			// Cajero automatico
				case 4: system("cls");
				{
					int contra,opc,numero,i;
					float extra,retiro;
			do{
				system("cls");
	printf("\tBienvenido a su Cajero Virtual\n");
	printf("\n1. Ingresar dinero en cuenta\n2. Retirar dinero de la cuenta\n3. Salir\n");
	printf("Opcion... ");
	scanf("%d",&opc); 
		switch(opc){
		case 1:
			//Ingresar dinero
			system("cls");
			printf("\nIngrese su numero de cuenta: ");
			scanf("%i", &numero);
			for(i=0;i<10;i++){
				printf("PIN: ");
			scanf("%i", &contra);
			if((numero==dato[i].no_cuenta) && (contra==dato[i].pin)){
			printf("\nDigite la cantidad de dinero a ingresar: $");
			scanf("%f",&extra);
			dato[i].saldo_cuenta += extra;
			printf("Dinero actual en cuenta: %.2f\n",dato[i].saldo_cuenta);
			system("PAUSE");
			break;
		}//fin de if 
		else{
			printf("ERROR. La cuenta no existe. \n");
			system("pause");
			break;
		} //fin de if else
		}//fin de for
			break;
			
			//retirar dinero
		case 2:
			system("cls");
			printf("\nIngrese su numero de cuenta: ");
			scanf("%i", &numero);
			printf("PIN: ");
			scanf("%i", &contra);
			for(i=0;i<10;i++){
			if((numero==dato[i].no_cuenta) && (contra==dato[i].pin)){
			printf("\nDigite la cantidad de dinero que va a retirar: $");
			scanf("%f",&retiro);
			
			if(retiro > dato[i].saldo_cuenta){
				printf("\nNo tiene esa cantidad de dinero\n");
				system("pause");
				break;
			}
			else{
				dato[i].saldo_cuenta -= retiro;
				printf("\nDinero actual en cuenta: %.2f\n",dato[i].saldo_cuenta);
				system("pause");
				break;
			} //fin de segundo if else
		} else{
			printf("ERROR. La cuenta no existe o PIN incorrecto. \n");
			system("pause");
			break;
		}//fin de primer if else
	}//fin de for
				break;		
		case 3:
			system("cls");
			printf("\nQUE TENGA UN BUEN DIA, HASTA LUEGO!!\n");
			system("pause");
			break;
		
		default:
			printf("\nElija una opcion disponible porfavor\n");	
			system("PAUSE");
			system("CLS");
		}
	}while(opc != 3);
		} //fin case 4
			break; //break case 4
			
		
		
			//COMPRAR BOLETO PARA CONCIERTO
						case 5: system("cls");
						
						char asiento[4][25];
						int x,i,j, butaca;
						char a, fila;
						/* se declaran las fnciones a se llamadas\
						 * esto podria realizarce en crearlas directamente al comienco
						 * pero la idea es que primero se trabaje con el programa main
						 * y no todas las funciones primero, es una idea de orden y nada 
						 * declarado formalmete.
						 * */
						void iniciar(void);
						void reserva(void);
						void cancelar (void);
						void mostrar (void);
							int op1;
							iniciar ();
							for(;;){
								mostrar();
							printf("seleccione una opcion\n");
							printf("1- Reservar asiento\n");
							printf("2- Cancelar\n");
							printf("3- Mostrar asientos\n");
							printf("4- Salir\n");
							scanf("%d",&op1);
							switch (op1){
								case 1:
									reserva();
									dato[0].saldo_cuenta += -90;
									break;
								case 2:
									cancelar();
									break;
								case 3:
									mostrar();
									break;
								case 4:
									exit(1);
									break;
								default:break;
							}
						}
												
						break; //fin case 5
			
			
			
			case 6: //Opcion para salir
				do{
				system("cls");
				printf("\n *Seguro que deseas salir? \n");
				printf("   >Presione [1] SI, [2] NO ... ");
				scanf("%i", &salir);
					switch(salir){
						case 1:
							printf("\n\n\tHasta luego, que tenga buen dia!!!");
						break;
						case 2:
							system("cls");
						break;
						default:
							system("cls");
						break;
					}
				}while(salir!=1 && salir!=2);
			break;//fin del case 6
			
			default:
				system("cls");	
				printf("\n La opcion que ha ingresado no se encuentra disponible. (Error 001)\n");
				printf(" Por favor, intentelo nuevamente.\n\n");
				system("pause");
			break;
			
		} //fin de switch
	}while(salir!=1);
	
	getch();
	return 0;
}


void iniciar(void){//se inicializa la matriz en '0'
	x=0;
	for(i=0;i<4;i++){
		for (j=0;j<25;j++){
			asiento [i][j]='0';
		}
	}	
}
void reserva(void){//se cargan las reservas
	//mostrar();
	do{
		printf("Solo letras mayuscuals A o B o C 0 D\n");
		printf("Ingrese la Letra de la fila: \n");
		scanf("%c",&fila);
		//fila=getchar();
	while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	} while(fila < 'A' || fila > 'D' );
	
	do{
		printf("Solo numeros de 1 a 25 \n");
		printf("Ingrese numero asiento: \n");
		scanf("%d",&butaca);
	while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	}while(butaca < 1 || butaca > 25) ;
	if(fila =='A')
		x=0;
	if(fila =='B')
		x=1;
	if(fila =='C')
		x=2;
	if(fila =='D')
		x=3;
		system("clear");
	if(asiento[x][butaca-1]=='X'){ // si el asiento esta ocupado nos avisa y pide ingresar otra vez la reserva
		printf("El asiento %c%d Ya esta reservado\n vuelva a ingresar su reserva\n",fila,butaca);
		reserva();
	}else{
		printf("Usted eligio la fila %c numero %d\n", fila, butaca);
		asiento [x][butaca-1]= 'X'; //carga el valor X en la reserva
		//printf("\t");
	}
	//mostrar();
}
void cancelar (void){//igual que enreserva pero cambia el valos X po 0 en el lugar espscifico de la matriz
	do{
		printf("Solo letras mayuscuals A o B o C 0 D\n");
		printf("Ingrese la Letra de la fila :");
		scanf("%c",&fila);
	while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	} while(fila < 'A' || fila > 'D' );
	
	do{
		printf("Solo numeros de 1 a 25\n");
		printf("Ingrese numero asiento :");
		scanf("%d",&butaca);
	while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero	
	}while(butaca < 1 || butaca > 25) ;
	if(fila =='A')
		x=0;
	if(fila =='B')
		x=1;
	if(fila =='C')
		x=2;
	if(fila =='D')
		x=3;
		system("clear");
	if(asiento[x][butaca-1]!='X'){
		printf("El asiento %c%d NO esta reservado\n vuealva a ingresar su asiento\n",fila,butaca);
		//cancelar();
	}else{
		printf("Usted elimino el asiento de la fila %c numero %d\n", fila, butaca);
		asiento [x][butaca-1]= '0';
		//printf("\t");
	}
	//mostrar();
}

void mostrar (void){// muestra los valores de la matriz 0 vacio X ocupado
	a='A';
	printf("\t");
	for (j=1;j<26;j++){
			printf("%d ",j);
		}
		printf("\n");
    for(i=0;i<4;i++){
		printf("%c\t", a);
		a= a+1;
		for (j=0;j<25;j++){
			if (j<10)
				printf("%c ",asiento[i][j]);
			else
				printf(" %c ",asiento[i][j]);
		}
	printf("\n");
	}
	
}
