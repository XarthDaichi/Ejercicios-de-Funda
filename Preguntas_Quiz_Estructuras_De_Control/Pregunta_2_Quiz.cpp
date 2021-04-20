/*Quiz Pregunta 2 Diego Quirós Artiñano

Escribir una función en el Lenguaje C++ que reciba como parametro un numero 
entero n, y devuelva la suma de sus diisores propios (divisores distintos de n).

En el main:
	Solicitar y leer del usuario el valor del parametro o los parametros de la 
	funcion.

	Invocar o llamar la funcion con el o los valores ingrasados para los 
	parametros.

	Mostrar en la pantalla el resultado o valor que devuelve la funcion. */

#include <iostream>
using namespace std;

int sumaDivisoresPropios(int n) {
	int suma = 0;
	
	for(int i = 1; i <= n/2; i++) {
		if(n % i == 0) {
			suma += i;
		}
	}
	
	return suma;
}

int main(int argc, char *argv[]) {
	int number;
	
	cout << "Escriba el numero entero que quiere conocer la suma de sus divisores ";
	cin >> number;
	
	cout << sumaDivisoresPropios(number) << endl;
	
	
	return 0;
}

