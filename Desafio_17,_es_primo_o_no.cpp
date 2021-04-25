//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Crear un diagrama de flujo del algoritmo para leer un numero entero n y 
determinar si es un numero primo.

Luego, escribir una funcion en el Lenguaje C++ que reciba como parametro un
numero entero y devuelva true si el numero es primo o false si no. */

#include <iostream>
using namespace std;

bool primo(int n) {
	
	bool value;
	int divi = 0;
	int i = 2;
	
	if (n <= 1) {
		value = false; 
	} else if (n == 2) {
		value = true;
	} else if (n == 3) {
		value = true;
	} else {
		while (i <= (n/2) && divi == 0) {
			if (n % i ==0) {
				value = false;
				divi += 1;
				i++;
			} else {
				value = true;
				i++;
			}
		}
	}
	
	return value;
}

int main(int argc, char *argv[]) {
	
	int number;
	
	cout << "Cual es el numero entero que quiere evaluar? ";
	cin >> number;
	
	if (primo(number) == true) {
		cout << number << " es primo." << endl;
	} else {
		cout << number << " no es primo." << endl;
	}
	
	return 0;
}

