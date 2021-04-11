//Diego Quiros A, Andres Gonzalez y Sebastian Peñaranda

/*Escribir un programa en el Lenguaje C++ que despliegue (en lineas distintas y 
contiguas de la pantalla) las 26 letras mayusculas del alfabeto ingles. */

#include <iostream>
using namespace std;
/*Como el profe hizo un int x(n) en clase y devolvio un 'a' y le devolvio un
numero entonces asumi que el opuesto tambien era verdad, osea si perdia un char
y devolvia un numero me iba a dar un char.*/

//Despues lo logre traducir a sin funcion.

int main(int argc, char *argv[]) {
	char l;
	
	//Despues de prueba y erro encontre las letras mayusculas en valores enteros
	//son del 65-90
	for (int i = 65; i <= 90; i++) {
		l = i;
		cout << l << endl;
	}
	
	return 0;
}

