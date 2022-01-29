
#include<stdio.h>
#include<conio2.h>

float F, masa, a ;

main()
{
	textcolor(BLACK); textbackground(GREEN);
	
	clrscr(); 
	
	gotoxy(15,5); printf("Indique la masa: ");
	
	scanf("%f" , &masa);
	
	gotoxy(15,6) ; printf("Indique la aceleracion: ");
	
	scanf("%f", &a);
	
	F=masa*a;
	
	gotoxy(15,10);printf("La fuerza es de %f N ", F) ;
	
	gotoxy (15,11);
	
	printf("Oprima cualquier tecla para finalizar") ;
	
	getche();
}
