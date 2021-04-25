//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/* Escriba en C++ la funcion formacionesPorristas(int n) que reciba como 
parametro un numero entero n y devuelva la cantidad de formaciones distintas que
puede hacer un equipo n porristas. */

#include <iostream>
using namespace std;

int formacionesPorristas(int n) {
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

	cout << "Cual es el numero de porristas? ";
	cin >> numero;

	cout << "Se pueden hacer " << formacionesPorristas(numero) << " formaciones diferentes." << endl;


	return 0;
}

