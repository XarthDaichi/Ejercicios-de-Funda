//Pregunta 3 Quiz Diego Quiros Artinano

/*Un numero n se dice perfecto si es igual a la suma de sus divisores propios 
(divisores distintos de n).

Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n, y devuelva true, si el numero es perfecto o, false, si no.

Por ejemplo, 6 es perfecto: 6 = 1 + 2 + 3 */

#include <iostream>
using namespace std;

bool numeroPerfecto(int n) {
	int suma = 0;
	
	for(int i = 1; i <= n/2; i++) {
		if(n % i == 0) {
			suma += i;
		}
	}
	return suma == n;
}
	
int main(int argc, char *argv[]) {
	int number;
	
	cout << "Escriba el numero que quiere ver si es perfecto ";
	cin >> number;
	
	if(numeroPerfecto(number)) {
		cout << "Es Perfecto!!!" << endl;
	} else {
		cout << "No es perfecto!!!" << endl;
	}
	
	return 0;
}

