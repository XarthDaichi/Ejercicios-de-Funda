//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Esribir una funcion en el Lenguaje C++ que reciba como parametro un numero
entero y devuelva el ultimo digito (mas hacia la derecha) del numero.

Ejemplo:
Si la funcion recibe el numero 24(3), devuelve el numero 3. */

#include <iostream>
using namespace std;

int lastDigit(int n){
	
	n = n % 10;
	
	return n;
}

int main(int argc, char *argv[]) {
	int number;
	
	cout << "Cual es el numero entero que quiere evaluar para encontar el ultimo digito? ";
	cin >> number;
	
	system("CLS");
	
	cout << lastDigit(number) << endl;
	
	
	return 0;
}

