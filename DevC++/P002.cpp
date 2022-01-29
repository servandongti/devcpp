
#include<stdio.h>
#include<conio2.h>

float area=0;
float radio=0;

main(){
	textcolor(BLACK); textbackground(GREEN);
	clrscr();
	gotoxy(20,5); printf("Indique el radio");
	scanf("%f", &radio);
	area = 3.14*radio*radio;
	gotoxy(20,8);printf("El area es &f cm^2",area);
	gotoxy(20,15);
	printf("Oprimir cualquier tecla para terminar");
	getche();
}
