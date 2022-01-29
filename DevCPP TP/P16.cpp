#include<stdio.h>

main() {
	
	float cal1 = 0, cal2 = 0, cal3 = 0, prom, ef, tf, total, promP, efP, tfP;
	
	printf("Atencion, ingrese las calificaciones en un rango de 0 - 100\n");
	
	printf("Ingrese la calificacion de sus tres calificaciones parciales: \n");
	scanf("%f %f %f", &cal1, &cal2, &cal3);
	
	prom = (cal1 + cal2 + cal3) / 3.0;
	promP = (prom/ 100.0) * 55.0;
	
	printf("\nIngrese la calificacion de examen final: \n");
	scanf("%f", &ef);
	
	efP = (ef / 100.0) * 30.0;
	
	printf("\nIngrese la calificacion del trabajo final: \n");
	scanf("%f", &tf);
	
	tfP = (tf / 100.0) * 15.0;
	
	total = promP +  efP + tfP ;
	
	printf("\nTu promedio final es: %.1f", total);
		
}
