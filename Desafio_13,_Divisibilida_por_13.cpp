//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Crear un diagrama de flujo del algoritmo para leer un numero entero n y 
mostrar los numeros entre 0 y n que son divisibles por 12.

Luego, escribir un programa en el Lenguaje C++ que lea del usuario un numero
entero n y despliegue (en lineas separadas y contiguas de la pantalla) 
los numeros entre 0 y n que sean divisibles por 13. */

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	
	int number;
	
	cout << "Hasta cual numero quiere evaluar? ";
	cin >> number;
	
	for (int i = 0; i <= number; i++) {
		if (i % 13 == 0) {
			cout << i << endl;
		}
	}
	
	return 0;
}

