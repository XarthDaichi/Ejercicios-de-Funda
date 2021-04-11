//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/* Escribir un programa en el Lenguaje C++ que lea del usuario un numero entero
n y despliegue en la pantalla, con asteriscos, el perimetro de un triangulo 
rectangulo de catetos de tamano n. */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	string astentero = "*";
	string astlado = "* *";
	string space = " ";

	cout << "Cual es el numero entero de asteriscos que quiere que sea el cateto? ";
	cin >> n;

	cout << astentero << endl;
	for (int i = 2; i < n; i++) {
		cout << astlado << endl;
		astlado.insert(1,2,' ');
	}
	for (int o = 1; o < n; o++) {
		astentero += " *";
	}
	cout << astentero << endl;
	return 0;
}

