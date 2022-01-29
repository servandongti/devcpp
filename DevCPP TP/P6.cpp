//programa que determina la situacion de un alumno
//matricula, nombre y hora de clase
//librerias
#include<iostream>
using namespace std;

int main(){
	float prom;
	cout<<"Ingresa el promedio del alumno....:";
	cin>>prom;
	if (prom == 100){
		cout<< endl<<"Tu calificacion es perfecta!"<<endl;
	}
	
	else if (prom >= 90 && prom <100){
		cout<< endl<<"Tu calificacion es excelente!"<<endl;
	}
	else if (prom >= 80 && prom <90){
	cout<< endl<<"Tu calificacion es buena!"<<endl;
	}
	else if (prom >= 70 && prom <80){
	cout<< endl<<"Tu calificacion es regular!"<<endl;
	}
	else {
		cout<<endl<<"Estas reprobado"<<endl;
	}
	return 0;
	}
  
