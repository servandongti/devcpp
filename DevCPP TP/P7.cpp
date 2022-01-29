#include <iostream>

using namespace std;

int main ()
{
	int op = 0;
	int n1 = 0;
	int n2 = 0;
	int operacion = 0;
	cout << "##MENU DE OPCIONES##" << end1;
	cout << "1.Sumar\n";
	cout << "2.Restar\n";
	cout << "3.Multiplicar\n";
	cout << "4.Dividir\n";
	cin >> op;
	cout << "Digite el primer numero a operar\n"; 
	cin >> n1;
	cout << "Digite el segundo numero a operar\n";
	cin >> n2;
	
	switch(op){
	case 1:
		operacion = n1 + n2;
		break;
	case 2:
		operacion = n1 - n2;
		break;
	case 3:
		operacion = n1 * n2;
		break;
	case 4:
		operacion = n1 / n2;
		break;
	default:
	cout << "Dato Interesante\n" ;
	break;			
	}
	cout << "El resultado es: "<< operacion
	
	return 0;	
}
















	
       

    
	      
			      
