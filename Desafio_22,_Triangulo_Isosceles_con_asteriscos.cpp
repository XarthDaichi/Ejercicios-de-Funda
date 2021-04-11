//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/* Escribir un programa en el Lenguage C++ que lea del usuario un numero entero
n y despliegue en la pantalla, con asteriscos, un triangulo isosceles de base n.
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int counter = 1;
	string filaentera = "";

	cout << "Cual es el numero entero impar de la base del triangulo isosceles? ";
	cin >> n;
	
	for (int i = n/2; i >= 0; i--) {
		for (int u = 1; u <= i; u++) {
			filaentera += "  ";
		}
		for (int b = 1; b <= counter; b++) {
			filaentera += " *";
		}
		for (int u = 1; u <= i; u++) {
			filaentera += "  ";			}
		cout << filaentera << endl;
		filaentera = "";
		counter += 2;
	}
	
	return 0;
}

