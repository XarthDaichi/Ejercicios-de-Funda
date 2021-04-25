//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/* Crear un diagrama de flujo del algoritmo para leer un numero entero n y 
mostrar los numeros pares entre 0 y n.

Luego, escribir un programa en el Lenguaje C++ que lea del usuario un numero 
entero n y despliegue (en lineas separadas y contiguas de la pantalla) los
numeros pares entre 0 y n. */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int number;
	
	cout << "Hasta cual numero entero quiere ver todos los pares? ";
	cin >> number;
	
	for (int i = 0; i <= number; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}
	
	return 0;
}

