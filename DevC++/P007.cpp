
#include<stdio.h>
#include<conio2.h>

float V,r,h ;

main()
{
	textcolor(BLACK); textbackground(GREEN);
	
	clrscr();
	 
	gotoxy(15,5); printf("Indique el radio: ");
	
	scanf("%f" , &r);
	
	gotoxy(15,6) ; printf("Indique la altura: ");
	
	scanf("%f", &h);
	
	V=3.1416*r*r*h;
	
	gotoxy(15,10);printf("El volumen del cilindro es de %f cm^3 ", V) ;
	
	gotoxy (15,11);
	
	printf("Oprima cualquier tecla para finalizar") ;
	
	getche();
}  
