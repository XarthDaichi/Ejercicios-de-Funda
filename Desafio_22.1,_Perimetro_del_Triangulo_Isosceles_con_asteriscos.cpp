//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/* Escribir un programa en el Lenguaje C++ que lea del usuario un numero entero
n y despliegue en la pantalla, con asteriscos, el perimetro de un triangulo 
isosceles de base n. */

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int incounter = 1;
	int outcounter = 0;
	string filaentera = "";

	cout << "Cual es el numero entero impar de la base del triangulo isosceles? ";
	cin >> n;
	
	for (int i = n/2; i >= 0; i--) {
		for (int u = 1; u <= i; u++) {
			filaentera += "  ";
		}
		filaentera += " *";
		if(i != 0) {
			if (i < n/2 && n!= 3) {
				for (int b = 1; b <= incounter; b++) {
					filaentera += "  ";
				}
				incounter += 2;
				filaentera += " *";
			} else if (n >= 3) {
				for (int c = 1; c <= outcounter; c++) {
					filaentera += " *";
				}
			}
		} else {
			for (int d = 1; d <= outcounter; d++){
				filaentera += " *";
			}
		}
		for (int u = 1; u <= i; u++) {
			filaentera += "  ";			}
		cout << filaentera << endl;
		filaentera = "";
		outcounter += 2;
	}
	
	return 0;
}

