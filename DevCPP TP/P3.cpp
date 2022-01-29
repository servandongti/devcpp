//1951799 
//PROGRAMA QUE CREA E IMPRIME UN ARREGLO UNIDIMENSIONAL

#include <stdio.h>
#include<conio.h>

main()
{
	int i, arreglo [7];
	
	for (i=0; i<7;i++)
	{
		printf("Dame el valor %d:\n",i+1);
		scanf("%d", &arreglo [i]);
	}
	printf("\n\n Tu arreglo quedo: \n\n");
	for(i=0; i<7;i++)
	{
		printf("%d| ", arreglo [i]);
	}
	getch();
}


