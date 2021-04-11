//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir un programa en el Lenguaje C++ que lea del usuario un numero entero
n y despliegue (en lineas distintas y contiguas de la pantalla) los primeros n
numeros primos. */

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
			if (n % i == 0) {
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
	int i = 1;
	int counter = 1;
	
	cout << "Cual es el numero que quieres evaluar? ";
	cin >> number;
	
	system("CLS");
	cout << "Los primeros " << number << " primos son." <<endl;
	
	
	while(counter <= number) {
		if (primo(i) == true) {
			cout << i << endl;
			counter += 1;
			i += 1;
		} else {
			i += 1;
		}
	}
	
	return 0;
}

