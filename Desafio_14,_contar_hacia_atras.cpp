//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/* Crear un diagrama de flujo del algoritmo para leer un numero entero n y 
mostrar los numeros desde n hasta 0.

Luego, escribir un programa en el Lenguaje C++ que lea del usuario un numero
entero positivo n y despliegue (en lineas separadas y contiguas de la pantalla) 
los numeros enteros desde n hasta 0. */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int number;
	
	cout << "Desde cual numero entero quiere empezar? ";
	cin >> number;
	
	for (int i = number; i >= 0; i--){
		cout << i << endl;
	}
	
	
	return 0;
}

