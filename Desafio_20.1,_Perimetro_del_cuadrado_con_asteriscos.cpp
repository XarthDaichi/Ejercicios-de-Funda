//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir un programa en el Lenguaje C++ que lea del usuario un numero entero n
y despliegue en la pantalla, con asteiscos, el perimetro de un cuadrado de 
tamano n. */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int lado;
	int bug;

	string astentero = "*";
	string astefilas = "*";
	
	cout << "Cual numero entero es el lado del cuadrado? ";
	cin >> lado;
	
	/*Esto es porque me estaba dando un bug que despues del numero 3 siempre le
	faltaba un espacio mas, osea el 4 le faltaba un espacio, el 5 dos espacios 
	y asi sucesivamente */
	bug = lado - 3;
	
	//Esto hace la primera y ultima fila
	for (int o = 1; o < lado; o++) {
		astentero += " *";
	}
	//Esto hace el resto de las filas
		for (int u = 1; u < (lado + bug); u++) {
			astefilas += " ";
		}
		astefilas += " *";
	
	for (int i = 1; i <= lado; i++){
		if (i == 1) {
			cout << astentero << endl;
		} else if (i != lado) {
			cout << astefilas << endl;
		} else {
			cout << astentero << endl;
		}
	}
	return 0;
}

