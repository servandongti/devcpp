//Servando Negrete Idrogo 
//programa que determina la situacion de un alumno
//estructura selectiva if anidado
//librerias
#include<stdio.h>
#include<windows.h>//system("cls").-clear screen
main()
{//inicio
	//variables
	int prom;
	int opcion;
	int contador;
	int e,mb,b,reg,rep;
	e=0;
	mb=0;
	b=0;
	reg=0;
	rep=0;
	contador=0;
	do //hacer mientras se cumple la condicion
	{
		system("cls");
		contador++; //incrementar en uno, cada vez que regrese al do while
		printf("Ingresa el promedio del alumno...:");
		scanf("%i",&prom);
		if(prom==100)
		{
			printf("Excelente \n");
			e++;
		}
		else
		{
			if(prom>=91 && prom<=99)
			{
				printf("Muy bien \n");
				mb++;
			}
			else
			{
				if(prom>=81 && prom<=90)
				{
					printf("Bien \n");
					b++;
				}
				else
				{
					if(prom>=70 && prom<=80)
					{
						printf("Regular \n");
						reg++;
					}
					else
					{
						printf("Reprobado \n");
						rep++;
					}
				}
			}
		}
		printf("Deseas continuar 1.- si 2.- no \n");
	    scanf("%i",&opcion);
	}/*hasta aqui se repite el ciclo*/
	while(opcion==1);
	printf("El total de analizados es %i \n",contador);
}//fin

