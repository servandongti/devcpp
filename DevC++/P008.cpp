
#include<stdio.h>
#include<conio2.h>

float Ab, h,V ;

main()
{
	textcolor(BLACK); textbackground(GREEN);
	
	clrscr(); 
	
	gotoxy(15,5); printf("Indique el area de la base de la piramide: ");
	
	scanf("%f" , &Ab);
	
	gotoxy(15,6) ; printf("Indique la altura: ");
	
	scanf("%f", &h);
	
	V= (Ab * h)/ 3;
	
	gotoxy(15,10);printf("El volumen de la piramide es de %f cm^3 ", V) ;
	
	gotoxy (15,11);
	
	printf("Oprima cualquier tecla para finalizar") ;
	
	getche();
}
