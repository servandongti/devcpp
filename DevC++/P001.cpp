
#include<stdio.h>
#include<conio2.h>

float v, distancia, tiempo ;

main()
{
	textcolor(WHITE); textbackground(BLUE);
	clrscr(); 
	gotoxy(20,5); printf("Indique la distancia ");
	scanf("%f" , &distancia);
	gotoxy(20,8) ; printf("Indique el tiempo ");
	scanf("%f", &tiempo);
	v=distancia/tiempo;
	gotoxy(20,15);printf("La velocidad es %f m/s", v) ;
	gotoxy (20,23);
	printf("Oprime cualquier tecla para terminar") ;
	getche();
}
