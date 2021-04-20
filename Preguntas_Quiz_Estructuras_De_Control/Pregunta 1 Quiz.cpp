//Pregunta 1 Quiz Diego Quiros Artinano

/*Escribir una funcion en el Lenguaje C++ que reciba como parametro un numero 
entero n, y devuelva la cantidad de divisores propios (distintos de n) que tiene.
*/

#include <iostream>
using namespace std;

int cantidadDivisoresPropios(int n) {
	int counter = 0;
	
	for(int i = 1; i <= n/2; i++){
		counter++;
	}
	return counter;
}

int main(int argc, char *argv[]) {
	int number;
	
	cout << "Escriba el numero que quiere saber la cantidad de divisores propios ";
	cin >> number;
	
	cout << cantidadDivisoresPropios(number);
	
	
	return 0;
}

