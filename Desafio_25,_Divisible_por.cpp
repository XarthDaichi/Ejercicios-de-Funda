//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir una funcion en el Lenguaje C++ que reciba como parametros dos numeros
enteros, n y d, y devuelva true su n es divisible por d, o false si no.*/

#include <iostream>
using namespace std;

bool divisiblePor(int n, int d) {
	if (n % d == 0) {
		return true;
	}
	return false;
}
/*el bool se puede hacer:
bool divisiblePor(int n, int d) {
	return n%d == 0
}
me va a devolver si es true o false
*/

int main(int argc, char *argv[]) {
	int numero;
	int divisor;

	cout << "Cual es el numero? ";
	cin >> numero;

	cout << "Cual es el divisor? ";
	cin >> divisor;

	if (divisiblePor(numero, divisor)) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}

	return 0;
}

