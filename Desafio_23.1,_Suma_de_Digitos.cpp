//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir una funcion en el Lenguaje C++ que reciba como parametros un numero 
entero n y devuelva el valor de la suma de sus digitos.
Por ejemplo, si n es 2464, la suma de sus digitos es 16.
*/

#include <iostream>
using namespace std;

int sumaDeDigitos(int n) {
	
	int suma = 0;
	
	while (n != 0) {
		suma += n%10;
		n /= 10;
	}
	
	return suma;
}

int main(int argc, char *argv[]) {
	int numero;

	cout << "Cual es el numero? ";
	cin >> numero;

	cout << "La suma de los digitos son: " << sumaDeDigitos(numero) << endl;
	return 0;
}

