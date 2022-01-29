//Servando Negrete Idrogo 
//programa que calcula salario de un empleado
//librerias
#include<stdio.h>
#include<string.h>
#include<windows.h>
main()
{//inicio
	//variables
	char nombre[50];
	int horas,dep;
	float sueldo;
	int repetir;//do while
	int contador=0;
	do {//inicio del do while
	    system("cls");//limpiar pantalla
	    contador++;//incrementa en uno
	printf("DEPARTAMENTOS \n");
	printf("--------------- \n");
	printf("1.- Sistemas  $35.80 \n");
	printf("2.- Produccion $40.85 \n");
	printf("3.- Contabilidad $20.15 \n");
	printf("Elige el departamento...... \n");
	scanf("%i", &dep);
	if(dep>=1 && dep <=3)
	{
		printf("Ingresa el nombre....:");
		scanf("%s",&nombre);
		//"%[^\n]".- almacena una cadena de caracteres con espacios
		printf("Ingresar las horas trabajadas....:");
		scanf("%i",&horas);
		switch(dep)
		{//inicio del switch
			case 1:sueldo=horas*35.80;break;//break.-corta al switch
			case 2:sueldo=horas*40.85;break;
			case 3:sueldo=horas*20.15;break;
		}//fin del switch
		printf("El empleado %s \n",nombre);
		printf("Horas trabajadas %i \n",horas);
		printf("Sueldo a pagar %.2f \n",sueldo);
	}
	else
	{
		printf("No existe el departamento \n");
	}
	printf("Deseas continuar 1.- si 2.-no \n");
	scanf("%i",&repetir);
	}
	while(repetir==1);
	printf("Eltotal de empleados es %i \n",contador);
}//fin

