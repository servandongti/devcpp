
#include<stdio.h>
#include<conio2.h>

float A,Dmayor,Dmenor ;

main()
{
	textcolor(BLACK); textbackground(GREEN);
	
	clrscr(); 
	
	gotoxy(15,5); printf("Indique el valor de la Diagonal Mayor: ");
	
	scanf("%f" , &Dmayor);
	
	gotoxy(15,6) ; printf("Indique el valor de la Diagonal Menor: ");
	
	scanf("%f", &Dmenor);
	
	A=(Dmayor*Dmenor)/2;
	
	gotoxy(15,10);printf("El area del rombo es de %f cm^2", A) ;
	
	gotoxy (15,11);
	
	printf("Oprima cualquier tecla para finalizar") ;
	
	getche();
}
