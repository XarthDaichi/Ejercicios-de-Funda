//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir un programa en el Lenguaje C++ que lea del usuario un numero entero
n y despliegue en la pantalla un triangulo rectangulo de asteriscos con catetos
de tamano n (n asteriscos). */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	string ast = "*";
	
	cout << "Cual es el numero entero de asteriscos que quiere que sea el cateto? ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		cout << ast << endl;
		ast += " *";
	}
	
	return 0;
}

