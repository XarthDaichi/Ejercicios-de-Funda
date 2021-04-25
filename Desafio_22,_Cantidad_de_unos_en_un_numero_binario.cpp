//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero y devuelva la cantidad de unos que tiene su expresion en binario. */

#include <iostream>
using namespace std;
int onesBin(int n) {
	int counter = 0;
	
	while(n > 1) {
		if (n % 2 == 1) {
			counter += 1;
		}
		n /= 2;
	}
	if (n == 1) {
		counter += 1;
	}
	
	return counter;
}

int main(int argc, char *argv[]) {
	int number;
	
	cout << "Cual es el numero que queres evaluar? ";
	cin >> number;
	
	cout << "La cantidad de unos es " << onesBin(number) << endl;
	
	
	return 0;
}

