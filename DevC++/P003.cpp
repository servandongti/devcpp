
#include<stdio.h>
#include<conio2.h>

float s, masa, V1, V2 ;

main()
{
	textcolor(BLACK); textbackground(WHITE);
	clrscr(); 
	
	gotoxy(15,5); printf("Indique la masa ");
	
	scanf("%f" , &masa);
	
	gotoxy(15,7) ; printf("Indique la velocidad 1: ");
	
	scanf("%f", &V1);
	
	gotoxy(15,8) ; printf("Indique la velocidad 2: ");
	
	scanf("%f", &V2);
	
	s=.5*masa*V2*V2-.5*masa*V1*V1;
	
	gotoxy(15,12);printf("La energia cinetica es %f ", s) ;
	
	gotoxy (15,14);
	
	printf("Oprima cualquier tecla para finalizar") ;
	
	getche();
}
