// Desafio 26 Invertir de Diego Quiros Artinano

/* Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n y devuelva el numero con sus digitos en el orden inverso.

Por ejemplo, si n = 2143, la funcion devuelve el numero entero 3412. */

#include <iostream>
#include <math.h>
using namespace std;

int invertir(int n) {
	int inv = 0;
	while(n != 0) {
		inv += n % 10;
		inv *= 10;
		n /= 10;
	}
	return inv/10;
}

int main(int argc, char *argv[]) {
	int number;
	
	cout << "Escriba el numero y resiva el equivalente del Reino del Reves ";
	cin >> number;
	
	cout << invertir(number) << endl;
	
	return 0;
}
