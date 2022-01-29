
#include<conio2.h>

float f, masa, h1, h2, g ;

main()
{
	textcolor(BLACK); textbackground(GREEN);
	
	clrscr(); 
	
	gotoxy(15,5); printf("Indique la masa: ");
	
	scanf("%f" , &masa);
	
	gotoxy(15,6) ; printf("Indique la altura 1: ");
	
	scanf("%f", &h1);
	
	gotoxy(15,7) ; printf("Indique la altura 2: ");
	
	scanf("%f", &h2);
	
	gotoxy(15,8) ; printf("Indique la gravead: ");
	
	scanf("%f", &g);
	
	f=masa*g*h2-masa*g*h1;
	
	gotoxy(15,10);printf("La variacion de energia potencial es de %f ", f) ;
	
	gotoxy (15,11);
	
	printf("Oprima cualquier tecla para finalizar") ;
	
	getche();
}
