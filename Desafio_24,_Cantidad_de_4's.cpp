//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n, y devuelva la cantidad de digitos 4 que contenga. */

#include <iostream>
using namespace std;

int cantidadDeCuatros(int n) {
	int counter = 0;

	while (n!=0) {
		if(n%10 == 4) {
			counter += 1;
		}
		n /= 10;
	}
	return counter;
}

int main(int argc, char *argv[]) {
	int numero;

	cout << "Cual es el numero? ";
	cin >> numero;

	cout << "La cantidad de 4's en el numero es " << cantidadDeCuatros(numero) << endl;


	return 0;
}

