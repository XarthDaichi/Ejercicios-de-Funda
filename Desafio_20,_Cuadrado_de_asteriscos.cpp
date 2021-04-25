//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir un programa en el Lenguaje C++ que lea de usuario un numero entero n
y despliegue en la pantalla un cuadrado de asteriscos de tamano n (n asteriscos)
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	string ast = "*";
	int o = 1;
	
	cout << "De cuantos asteriscos de largo quiere que sea el cuadrado? ";
	cin >> n;
	
	while ( o < n) {
		ast += " *";
		o++;
	}
	for (int i = 1; i <= n; i++)
		cout << ast << endl;
	return 0;
}

