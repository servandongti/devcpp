
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int cara;

main()
{
	textcolor(15); textbackground(3); clrscr();
	srand(time(NULL)); //inicializa la semilla
	for(i=1 ; i<=5 ; i++)
	{
		//computadora
		cara=rand()%2;
		if(cara==0)
		{
			printf("Tirada #%d--> Aguila ",i);
		}
		else
		{
			printf("Tirada #%d--> Sol ",i);
		}
		Sleep(1000);
	}
}
