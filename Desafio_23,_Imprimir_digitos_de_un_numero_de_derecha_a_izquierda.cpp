//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Esriba un programa en C++ que lea del usuario un numero entero n y despliegue,
en lineas separadas y contiguas de la pantalla, cada uno de sus digitos, de
derecha a izquierda. */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	
	cout << "Cual es el numero? ";
	cin >> n;

	while (n != 0) {
		cout << n%10 << endl;
		n /= 10;
	}
	return 0;
}

