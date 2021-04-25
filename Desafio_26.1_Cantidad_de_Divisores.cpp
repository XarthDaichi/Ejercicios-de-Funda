//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero
entero n, y devuelva la cantidad de divisores que tiene. */

#include <iostream>
using namespace std;

int cantidadDeDivisores(int n) {
	int counter = 1;
	for (int i = 1; i <= n/2; i++) {
		if (n%i == 0) {
			counter += 1;
		}
	}

	return counter;
}

int main(int argc, char *argv[]) {
	int numero;

	cout << "Cual es el numero? ";
	cin >> numero;

	cout << "El numero tiene " << cantidadDeDivisores(numero) << " divisores." << endl;


	return 0;
}

