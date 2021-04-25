//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/* Esribir un programa en el Lenguaje C++ que lea del usuario dos numeros
enteros, n y m, y despliegue en la pantalla con asteriscos, el perimetro de un 
rectangulo de tamano n*m */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int ancho;
	int largo;
	int bug;

	string astentero = "*";
	string astefilas = "*";
	
	cout << "Cual numero entero es el ancho del rectangulo? ";
	cin >> ancho;

	cout << "Cual numero entero es el largo del rectangulo? ";
	cin >> largo;
	
	/*Esto es porque me estaba dando un bug que despues del numero 3 siempre le
	faltaba un espacio mas, osea el 4 le faltaba un espacio, el 5 dos espacios 
	y asi sucesivamente */
	bug = largo - 3;
	
	//Esto hace la primera y ultima fila
	for (int o = 1; o < largo; o++) {
		astentero += " *";
	}
	//Esto hace el resto de las filas
		for (int u = 1; u < (largo + bug); u++) {
			astefilas += " ";
		}
		astefilas += " *";
	
	for (int i = 1; i <= ancho; i++){
		if (i == 1) {
			cout << astentero << endl;
		} else if (i != ancho) {
			cout << astefilas << endl;
		} else {
			cout << astentero << endl;
		}
	}
	return 0;
}
