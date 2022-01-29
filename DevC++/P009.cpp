
#include<stdio.h>
#include<conio2.h>

float Vf,Vi,t,a ;

main()
{
	textcolor(BLACK); textbackground(GREEN);
	
	clrscr(); 
	
	gotoxy(15,5); printf("Indique la velocidad final: ");
	
	scanf("%f" , &Vf);
	
	gotoxy(15,6) ; printf("Indique la velocidad inicial: ");
	
	scanf("%f", &Vi);
	
	gotoxy(15,7) ; printf("Indique el tiempo: ");
	
	scanf("%f", &t);
	
	a=Vf-Vi/t;
	
	gotoxy(15,10);printf("La aceleracion es de %f m/s ", a) ;
	
	gotoxy (15,11);
	
	printf("Oprima cualquier tecla para finalizar") ;
	
	getche();
}
